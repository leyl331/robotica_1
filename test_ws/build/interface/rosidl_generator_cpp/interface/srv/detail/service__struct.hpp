// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface:srv/Service.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__SRV__DETAIL__SERVICE__STRUCT_HPP_
#define INTERFACE__SRV__DETAIL__SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface__srv__Service_Request __attribute__((deprecated))
#else
# define DEPRECATED__interface__srv__Service_Request __declspec(deprecated)
#endif

namespace interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Service_Request_
{
  using Type = Service_Request_<ContainerAllocator>;

  explicit Service_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a1 = 0.0;
      this->a2 = 0.0;
      this->a3 = 0.0;
      this->a4 = 0.0;
    }
  }

  explicit Service_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a1 = 0.0;
      this->a2 = 0.0;
      this->a3 = 0.0;
      this->a4 = 0.0;
    }
  }

  // field types and members
  using _a1_type =
    double;
  _a1_type a1;
  using _a2_type =
    double;
  _a2_type a2;
  using _a3_type =
    double;
  _a3_type a3;
  using _a4_type =
    double;
  _a4_type a4;

  // setters for named parameter idiom
  Type & set__a1(
    const double & _arg)
  {
    this->a1 = _arg;
    return *this;
  }
  Type & set__a2(
    const double & _arg)
  {
    this->a2 = _arg;
    return *this;
  }
  Type & set__a3(
    const double & _arg)
  {
    this->a3 = _arg;
    return *this;
  }
  Type & set__a4(
    const double & _arg)
  {
    this->a4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface::srv::Service_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface::srv::Service_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface::srv::Service_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface::srv::Service_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface::srv::Service_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface::srv::Service_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface::srv::Service_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface::srv::Service_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface::srv::Service_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface::srv::Service_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface__srv__Service_Request
    std::shared_ptr<interface::srv::Service_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface__srv__Service_Request
    std::shared_ptr<interface::srv::Service_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Service_Request_ & other) const
  {
    if (this->a1 != other.a1) {
      return false;
    }
    if (this->a2 != other.a2) {
      return false;
    }
    if (this->a3 != other.a3) {
      return false;
    }
    if (this->a4 != other.a4) {
      return false;
    }
    return true;
  }
  bool operator!=(const Service_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Service_Request_

// alias to use template instance with default allocator
using Service_Request =
  interface::srv::Service_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface


#ifndef _WIN32
# define DEPRECATED__interface__srv__Service_Response __attribute__((deprecated))
#else
# define DEPRECATED__interface__srv__Service_Response __declspec(deprecated)
#endif

namespace interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Service_Response_
{
  using Type = Service_Response_<ContainerAllocator>;

  explicit Service_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->ya = 0.0;
      this->pi = 0.0;
      this->ro = 0.0;
    }
  }

  explicit Service_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->ya = 0.0;
      this->pi = 0.0;
      this->ro = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _ya_type =
    double;
  _ya_type ya;
  using _pi_type =
    double;
  _pi_type pi;
  using _ro_type =
    double;
  _ro_type ro;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__ya(
    const double & _arg)
  {
    this->ya = _arg;
    return *this;
  }
  Type & set__pi(
    const double & _arg)
  {
    this->pi = _arg;
    return *this;
  }
  Type & set__ro(
    const double & _arg)
  {
    this->ro = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface::srv::Service_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface::srv::Service_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface::srv::Service_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface::srv::Service_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface::srv::Service_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface::srv::Service_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface::srv::Service_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface::srv::Service_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface::srv::Service_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface::srv::Service_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface__srv__Service_Response
    std::shared_ptr<interface::srv::Service_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface__srv__Service_Response
    std::shared_ptr<interface::srv::Service_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Service_Response_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->ya != other.ya) {
      return false;
    }
    if (this->pi != other.pi) {
      return false;
    }
    if (this->ro != other.ro) {
      return false;
    }
    return true;
  }
  bool operator!=(const Service_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Service_Response_

// alias to use template instance with default allocator
using Service_Response =
  interface::srv::Service_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface

namespace interface
{

namespace srv
{

struct Service
{
  using Request = interface::srv::Service_Request;
  using Response = interface::srv::Service_Response;
};

}  // namespace srv

}  // namespace interface

#endif  // INTERFACE__SRV__DETAIL__SERVICE__STRUCT_HPP_
