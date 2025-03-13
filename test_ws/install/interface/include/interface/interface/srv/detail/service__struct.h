// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface:srv/Service.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__SRV__DETAIL__SERVICE__STRUCT_H_
#define INTERFACE__SRV__DETAIL__SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Service in the package interface.
typedef struct interface__srv__Service_Request
{
  double a1;
  double a2;
  double a3;
  double a4;
} interface__srv__Service_Request;

// Struct for a sequence of interface__srv__Service_Request.
typedef struct interface__srv__Service_Request__Sequence
{
  interface__srv__Service_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface__srv__Service_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Service in the package interface.
typedef struct interface__srv__Service_Response
{
  double x;
  double y;
  double z;
  double ya;
  double pi;
  double ro;
} interface__srv__Service_Response;

// Struct for a sequence of interface__srv__Service_Response.
typedef struct interface__srv__Service_Response__Sequence
{
  interface__srv__Service_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface__srv__Service_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE__SRV__DETAIL__SERVICE__STRUCT_H_
