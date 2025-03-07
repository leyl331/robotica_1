// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ucb_interface:srv/Addtwonumbers.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__SRV__DETAIL__ADDTWONUMBERS__STRUCT_H_
#define UCB_INTERFACE__SRV__DETAIL__ADDTWONUMBERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Addtwonumbers in the package ucb_interface.
typedef struct ucb_interface__srv__Addtwonumbers_Request
{
  int64_t a;
  int64_t b;
} ucb_interface__srv__Addtwonumbers_Request;

// Struct for a sequence of ucb_interface__srv__Addtwonumbers_Request.
typedef struct ucb_interface__srv__Addtwonumbers_Request__Sequence
{
  ucb_interface__srv__Addtwonumbers_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ucb_interface__srv__Addtwonumbers_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Addtwonumbers in the package ucb_interface.
typedef struct ucb_interface__srv__Addtwonumbers_Response
{
  int64_t sum;
} ucb_interface__srv__Addtwonumbers_Response;

// Struct for a sequence of ucb_interface__srv__Addtwonumbers_Response.
typedef struct ucb_interface__srv__Addtwonumbers_Response__Sequence
{
  ucb_interface__srv__Addtwonumbers_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ucb_interface__srv__Addtwonumbers_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UCB_INTERFACE__SRV__DETAIL__ADDTWONUMBERS__STRUCT_H_
