// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ucb_interface:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__MSG__DETAIL__NUM__BUILDER_HPP_
#define UCB_INTERFACE__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ucb_interface/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ucb_interface
{

namespace msg
{

namespace builder
{

class Init_Num_two
{
public:
  explicit Init_Num_two(::ucb_interface::msg::Num & msg)
  : msg_(msg)
  {}
  ::ucb_interface::msg::Num two(::ucb_interface::msg::Num::_two_type arg)
  {
    msg_.two = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ucb_interface::msg::Num msg_;
};

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Num_two num(::ucb_interface::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return Init_Num_two(msg_);
  }

private:
  ::ucb_interface::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ucb_interface::msg::Num>()
{
  return ucb_interface::msg::builder::Init_Num_num();
}

}  // namespace ucb_interface

#endif  // UCB_INTERFACE__MSG__DETAIL__NUM__BUILDER_HPP_
