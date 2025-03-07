// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ucb_interface:srv/Addtwonumbers.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__SRV__DETAIL__ADDTWONUMBERS__BUILDER_HPP_
#define UCB_INTERFACE__SRV__DETAIL__ADDTWONUMBERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ucb_interface/srv/detail/addtwonumbers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ucb_interface
{

namespace srv
{

namespace builder
{

class Init_Addtwonumbers_Request_b
{
public:
  explicit Init_Addtwonumbers_Request_b(::ucb_interface::srv::Addtwonumbers_Request & msg)
  : msg_(msg)
  {}
  ::ucb_interface::srv::Addtwonumbers_Request b(::ucb_interface::srv::Addtwonumbers_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ucb_interface::srv::Addtwonumbers_Request msg_;
};

class Init_Addtwonumbers_Request_a
{
public:
  Init_Addtwonumbers_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Addtwonumbers_Request_b a(::ucb_interface::srv::Addtwonumbers_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Addtwonumbers_Request_b(msg_);
  }

private:
  ::ucb_interface::srv::Addtwonumbers_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ucb_interface::srv::Addtwonumbers_Request>()
{
  return ucb_interface::srv::builder::Init_Addtwonumbers_Request_a();
}

}  // namespace ucb_interface


namespace ucb_interface
{

namespace srv
{

namespace builder
{

class Init_Addtwonumbers_Response_sum
{
public:
  Init_Addtwonumbers_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ucb_interface::srv::Addtwonumbers_Response sum(::ucb_interface::srv::Addtwonumbers_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ucb_interface::srv::Addtwonumbers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ucb_interface::srv::Addtwonumbers_Response>()
{
  return ucb_interface::srv::builder::Init_Addtwonumbers_Response_sum();
}

}  // namespace ucb_interface

#endif  // UCB_INTERFACE__SRV__DETAIL__ADDTWONUMBERS__BUILDER_HPP_
