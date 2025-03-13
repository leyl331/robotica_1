// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface:srv/Service.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__SRV__DETAIL__SERVICE__TRAITS_HPP_
#define INTERFACE__SRV__DETAIL__SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface/srv/detail/service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Service_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a1
  {
    out << "a1: ";
    rosidl_generator_traits::value_to_yaml(msg.a1, out);
    out << ", ";
  }

  // member: a2
  {
    out << "a2: ";
    rosidl_generator_traits::value_to_yaml(msg.a2, out);
    out << ", ";
  }

  // member: a3
  {
    out << "a3: ";
    rosidl_generator_traits::value_to_yaml(msg.a3, out);
    out << ", ";
  }

  // member: a4
  {
    out << "a4: ";
    rosidl_generator_traits::value_to_yaml(msg.a4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Service_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a1: ";
    rosidl_generator_traits::value_to_yaml(msg.a1, out);
    out << "\n";
  }

  // member: a2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a2: ";
    rosidl_generator_traits::value_to_yaml(msg.a2, out);
    out << "\n";
  }

  // member: a3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a3: ";
    rosidl_generator_traits::value_to_yaml(msg.a3, out);
    out << "\n";
  }

  // member: a4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a4: ";
    rosidl_generator_traits::value_to_yaml(msg.a4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Service_Request & msg, bool use_flow_style = false)
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

}  // namespace interface

namespace rosidl_generator_traits
{

[[deprecated("use interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface::srv::Service_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface::srv::Service_Request & msg)
{
  return interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface::srv::Service_Request>()
{
  return "interface::srv::Service_Request";
}

template<>
inline const char * name<interface::srv::Service_Request>()
{
  return "interface/srv/Service_Request";
}

template<>
struct has_fixed_size<interface::srv::Service_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface::srv::Service_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface::srv::Service_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Service_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: ya
  {
    out << "ya: ";
    rosidl_generator_traits::value_to_yaml(msg.ya, out);
    out << ", ";
  }

  // member: pi
  {
    out << "pi: ";
    rosidl_generator_traits::value_to_yaml(msg.pi, out);
    out << ", ";
  }

  // member: ro
  {
    out << "ro: ";
    rosidl_generator_traits::value_to_yaml(msg.ro, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Service_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: ya
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ya: ";
    rosidl_generator_traits::value_to_yaml(msg.ya, out);
    out << "\n";
  }

  // member: pi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pi: ";
    rosidl_generator_traits::value_to_yaml(msg.pi, out);
    out << "\n";
  }

  // member: ro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ro: ";
    rosidl_generator_traits::value_to_yaml(msg.ro, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Service_Response & msg, bool use_flow_style = false)
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

}  // namespace interface

namespace rosidl_generator_traits
{

[[deprecated("use interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface::srv::Service_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface::srv::Service_Response & msg)
{
  return interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface::srv::Service_Response>()
{
  return "interface::srv::Service_Response";
}

template<>
inline const char * name<interface::srv::Service_Response>()
{
  return "interface/srv/Service_Response";
}

template<>
struct has_fixed_size<interface::srv::Service_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface::srv::Service_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface::srv::Service_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface::srv::Service>()
{
  return "interface::srv::Service";
}

template<>
inline const char * name<interface::srv::Service>()
{
  return "interface/srv/Service";
}

template<>
struct has_fixed_size<interface::srv::Service>
  : std::integral_constant<
    bool,
    has_fixed_size<interface::srv::Service_Request>::value &&
    has_fixed_size<interface::srv::Service_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface::srv::Service>
  : std::integral_constant<
    bool,
    has_bounded_size<interface::srv::Service_Request>::value &&
    has_bounded_size<interface::srv::Service_Response>::value
  >
{
};

template<>
struct is_service<interface::srv::Service>
  : std::true_type
{
};

template<>
struct is_service_request<interface::srv::Service_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface::srv::Service_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE__SRV__DETAIL__SERVICE__TRAITS_HPP_
