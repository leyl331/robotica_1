// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ucb_interface:srv/Addtwonumbers.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__SRV__DETAIL__ADDTWONUMBERS__TRAITS_HPP_
#define UCB_INTERFACE__SRV__DETAIL__ADDTWONUMBERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ucb_interface/srv/detail/addtwonumbers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ucb_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Addtwonumbers_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Addtwonumbers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Addtwonumbers_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ucb_interface

namespace rosidl_generator_traits
{

[[deprecated("use ucb_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ucb_interface::srv::Addtwonumbers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ucb_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ucb_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ucb_interface::srv::Addtwonumbers_Request & msg)
{
  return ucb_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ucb_interface::srv::Addtwonumbers_Request>()
{
  return "ucb_interface::srv::Addtwonumbers_Request";
}

template<>
inline const char * name<ucb_interface::srv::Addtwonumbers_Request>()
{
  return "ucb_interface/srv/Addtwonumbers_Request";
}

template<>
struct has_fixed_size<ucb_interface::srv::Addtwonumbers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ucb_interface::srv::Addtwonumbers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ucb_interface::srv::Addtwonumbers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ucb_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Addtwonumbers_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Addtwonumbers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Addtwonumbers_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ucb_interface

namespace rosidl_generator_traits
{

[[deprecated("use ucb_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ucb_interface::srv::Addtwonumbers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ucb_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ucb_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ucb_interface::srv::Addtwonumbers_Response & msg)
{
  return ucb_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ucb_interface::srv::Addtwonumbers_Response>()
{
  return "ucb_interface::srv::Addtwonumbers_Response";
}

template<>
inline const char * name<ucb_interface::srv::Addtwonumbers_Response>()
{
  return "ucb_interface/srv/Addtwonumbers_Response";
}

template<>
struct has_fixed_size<ucb_interface::srv::Addtwonumbers_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ucb_interface::srv::Addtwonumbers_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ucb_interface::srv::Addtwonumbers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ucb_interface::srv::Addtwonumbers>()
{
  return "ucb_interface::srv::Addtwonumbers";
}

template<>
inline const char * name<ucb_interface::srv::Addtwonumbers>()
{
  return "ucb_interface/srv/Addtwonumbers";
}

template<>
struct has_fixed_size<ucb_interface::srv::Addtwonumbers>
  : std::integral_constant<
    bool,
    has_fixed_size<ucb_interface::srv::Addtwonumbers_Request>::value &&
    has_fixed_size<ucb_interface::srv::Addtwonumbers_Response>::value
  >
{
};

template<>
struct has_bounded_size<ucb_interface::srv::Addtwonumbers>
  : std::integral_constant<
    bool,
    has_bounded_size<ucb_interface::srv::Addtwonumbers_Request>::value &&
    has_bounded_size<ucb_interface::srv::Addtwonumbers_Response>::value
  >
{
};

template<>
struct is_service<ucb_interface::srv::Addtwonumbers>
  : std::true_type
{
};

template<>
struct is_service_request<ucb_interface::srv::Addtwonumbers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ucb_interface::srv::Addtwonumbers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UCB_INTERFACE__SRV__DETAIL__ADDTWONUMBERS__TRAITS_HPP_
