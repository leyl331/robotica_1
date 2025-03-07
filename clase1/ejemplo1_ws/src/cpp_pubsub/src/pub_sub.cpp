#include <chrono> //manage times , example 50ms
#include <functional> //std::bind
#include <memory> // use shared
#include <string> 

#include "rclcpp/rclcpp.hpp" // create node
#include "std_msgs/msg/string.hpp" // manage msg



using namespace std::chrono_literals; // replace -> std::chrono::milliseconds(500)
using std::placeholders::_1; // recive argumento - suscriptor


// define CLASS that HEREDA NODE
class MinimalPubSub : public rclcpp::Node
{
    rclcpp::TimerBase::SharedPtr timer_;                                   // timmer
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;        // pub 
    size_t count_;                                                         // cont 
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscriber;     // sub

public:
    MinimalPubSub() : Node("PubSub_c"), count_(0) //name NODE
    {
        // publisher
        publisher_ = this->create_publisher<std_msgs::msg::String>("topic2", 10);
        timer_ = this->create_wall_timer(500ms, std::bind(&MinimalPubSub::timer_callback, this));

        // subscriber
        subscriber = this->create_subscription<std_msgs::msg::String>("topic1", 10, std::bind(&MinimalPubSub::topic_callback, this, _1));
    }

private:

// publisher
    void timer_callback() 
    {
        auto message = std_msgs::msg::String();
        message.data = "pubsub Node c " + std::to_string(count_++);
        RCLCPP_INFO(this->get_logger(), "Publishing : '%s'", message.data.c_str());
        publisher_->publish(message);
    }
    
// suscriber
    void topic_callback(const std_msgs::msg::String &msg) const 
    {
        RCLCPP_INFO(this->get_logger(), "heard : '%s'", msg.data.c_str());
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MinimalPubSub>());
    rclcpp::shutdown();
    return 0;
}