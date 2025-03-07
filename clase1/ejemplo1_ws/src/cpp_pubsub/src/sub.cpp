#include <memory> // std::shared_ptr

#include "rclcpp/rclcpp.hpp" // ros library
#include "std_msgs/msg/string.hpp" // TYPE MENSAJE


using std::placeholders::_1; // espacio para un argumento


// clase que hereda el NODO
class MinimalSubscriber : public rclcpp::Node 
{
  // construir
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;

public:
  MinimalSubscriber() : Node("sub_c")
  {
    //se suscribe y va a TOPIC CALLBACK
    subscription_ = this->create_subscription<std_msgs::msg::String>(
        "topic2", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1)); //recibir argumentos
  }

private:

  void topic_callback(const std_msgs::msg::String &msg) const
  {
    RCLCPP_INFO(this->get_logger(), "Me llego : '%s'", msg.data.c_str()); // imprimirlo
  }

};


int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalSubscriber>()); //NAME CLASS
  rclcpp::shutdown();
  return 0;
}