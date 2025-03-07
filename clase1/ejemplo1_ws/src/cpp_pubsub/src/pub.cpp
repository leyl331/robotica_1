// # C - PUBLICADOR SI

#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"  // crear nodos
#include "std_msgs/msg/string.hpp" // String


using namespace std::chrono_literals; // sufijos de tiempo
// std::chrono::milliseconds()


class Pub: public rclcpp::Node // clase Pub que hereda un NODO
{
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_; //puntero a OBJETO PUBLISHER
    rclcpp::TimerBase::SharedPtr timer_; // puntero TIMMER


public:
    Pub(): Node("pub_c") // name NODE
  {
    pub_ = this->create_publisher<std_msgs::msg::String>("topic1", 10); 

    //callback
    timer_ = this->create_wall_timer(500ms, std::bind(&Pub::timer_callback, this));
  }


private:
  void timer_callback()
  {
    auto msg = std::make_unique<std_msgs::msg::String>(); // crear msg STRING
    msg->data = "Hello ooo  " ;
    RCLCPP_INFO(this->get_logger(), "Publicando msg: '%s'", msg->data.c_str()); // compatible mostrar msg
    // std::cout<<"hola \n";
    pub_->publish(std::move(msg)); // msg PUBLIC
  }

};


int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Pub>()); //CLASS
  rclcpp::shutdown();
  return 0; //se ejecuto correctamente "0"
}