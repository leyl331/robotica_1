// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface:srv/Service.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__SRV__DETAIL__SERVICE__BUILDER_HPP_
#define INTERFACE__SRV__DETAIL__SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface/srv/detail/service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface
{

namespace srv
{

namespace builder
{

class Init_Service_Request_a4
{
public:
  explicit Init_Service_Request_a4(::interface::srv::Service_Request & msg)
  : msg_(msg)
  {}
  ::interface::srv::Service_Request a4(::interface::srv::Service_Request::_a4_type arg)
  {
    msg_.a4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::srv::Service_Request msg_;
};

class Init_Service_Request_a3
{
public:
  explicit Init_Service_Request_a3(::interface::srv::Service_Request & msg)
  : msg_(msg)
  {}
  Init_Service_Request_a4 a3(::interface::srv::Service_Request::_a3_type arg)
  {
    msg_.a3 = std::move(arg);
    return Init_Service_Request_a4(msg_);
  }

private:
  ::interface::srv::Service_Request msg_;
};

class Init_Service_Request_a2
{
public:
  explicit Init_Service_Request_a2(::interface::srv::Service_Request & msg)
  : msg_(msg)
  {}
  Init_Service_Request_a3 a2(::interface::srv::Service_Request::_a2_type arg)
  {
    msg_.a2 = std::move(arg);
    return Init_Service_Request_a3(msg_);
  }

private:
  ::interface::srv::Service_Request msg_;
};

class Init_Service_Request_a1
{
public:
  Init_Service_Request_a1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Service_Request_a2 a1(::interface::srv::Service_Request::_a1_type arg)
  {
    msg_.a1 = std::move(arg);
    return Init_Service_Request_a2(msg_);
  }

private:
  ::interface::srv::Service_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::srv::Service_Request>()
{
  return interface::srv::builder::Init_Service_Request_a1();
}

}  // namespace interface


namespace interface
{

namespace srv
{

namespace builder
{

class Init_Service_Response_ro
{
public:
  explicit Init_Service_Response_ro(::interface::srv::Service_Response & msg)
  : msg_(msg)
  {}
  ::interface::srv::Service_Response ro(::interface::srv::Service_Response::_ro_type arg)
  {
    msg_.ro = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::srv::Service_Response msg_;
};

class Init_Service_Response_pi
{
public:
  explicit Init_Service_Response_pi(::interface::srv::Service_Response & msg)
  : msg_(msg)
  {}
  Init_Service_Response_ro pi(::interface::srv::Service_Response::_pi_type arg)
  {
    msg_.pi = std::move(arg);
    return Init_Service_Response_ro(msg_);
  }

private:
  ::interface::srv::Service_Response msg_;
};

class Init_Service_Response_ya
{
public:
  explicit Init_Service_Response_ya(::interface::srv::Service_Response & msg)
  : msg_(msg)
  {}
  Init_Service_Response_pi ya(::interface::srv::Service_Response::_ya_type arg)
  {
    msg_.ya = std::move(arg);
    return Init_Service_Response_pi(msg_);
  }

private:
  ::interface::srv::Service_Response msg_;
};

class Init_Service_Response_z
{
public:
  explicit Init_Service_Response_z(::interface::srv::Service_Response & msg)
  : msg_(msg)
  {}
  Init_Service_Response_ya z(::interface::srv::Service_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Service_Response_ya(msg_);
  }

private:
  ::interface::srv::Service_Response msg_;
};

class Init_Service_Response_y
{
public:
  explicit Init_Service_Response_y(::interface::srv::Service_Response & msg)
  : msg_(msg)
  {}
  Init_Service_Response_z y(::interface::srv::Service_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Service_Response_z(msg_);
  }

private:
  ::interface::srv::Service_Response msg_;
};

class Init_Service_Response_x
{
public:
  Init_Service_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Service_Response_y x(::interface::srv::Service_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Service_Response_y(msg_);
  }

private:
  ::interface::srv::Service_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::srv::Service_Response>()
{
  return interface::srv::builder::Init_Service_Response_x();
}

}  // namespace interface

#endif  // INTERFACE__SRV__DETAIL__SERVICE__BUILDER_HPP_
