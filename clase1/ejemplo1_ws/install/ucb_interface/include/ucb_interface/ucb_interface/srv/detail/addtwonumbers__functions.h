// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ucb_interface:srv/Addtwonumbers.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__SRV__DETAIL__ADDTWONUMBERS__FUNCTIONS_H_
#define UCB_INTERFACE__SRV__DETAIL__ADDTWONUMBERS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ucb_interface/msg/rosidl_generator_c__visibility_control.h"

#include "ucb_interface/srv/detail/addtwonumbers__struct.h"

/// Initialize srv/Addtwonumbers message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ucb_interface__srv__Addtwonumbers_Request
 * )) before or use
 * ucb_interface__srv__Addtwonumbers_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
bool
ucb_interface__srv__Addtwonumbers_Request__init(ucb_interface__srv__Addtwonumbers_Request * msg);

/// Finalize srv/Addtwonumbers message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
void
ucb_interface__srv__Addtwonumbers_Request__fini(ucb_interface__srv__Addtwonumbers_Request * msg);

/// Create srv/Addtwonumbers message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ucb_interface__srv__Addtwonumbers_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
ucb_interface__srv__Addtwonumbers_Request *
ucb_interface__srv__Addtwonumbers_Request__create();

/// Destroy srv/Addtwonumbers message.
/**
 * It calls
 * ucb_interface__srv__Addtwonumbers_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
void
ucb_interface__srv__Addtwonumbers_Request__destroy(ucb_interface__srv__Addtwonumbers_Request * msg);

/// Check for srv/Addtwonumbers message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
bool
ucb_interface__srv__Addtwonumbers_Request__are_equal(const ucb_interface__srv__Addtwonumbers_Request * lhs, const ucb_interface__srv__Addtwonumbers_Request * rhs);

/// Copy a srv/Addtwonumbers message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
bool
ucb_interface__srv__Addtwonumbers_Request__copy(
  const ucb_interface__srv__Addtwonumbers_Request * input,
  ucb_interface__srv__Addtwonumbers_Request * output);

/// Initialize array of srv/Addtwonumbers messages.
/**
 * It allocates the memory for the number of elements and calls
 * ucb_interface__srv__Addtwonumbers_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
bool
ucb_interface__srv__Addtwonumbers_Request__Sequence__init(ucb_interface__srv__Addtwonumbers_Request__Sequence * array, size_t size);

/// Finalize array of srv/Addtwonumbers messages.
/**
 * It calls
 * ucb_interface__srv__Addtwonumbers_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
void
ucb_interface__srv__Addtwonumbers_Request__Sequence__fini(ucb_interface__srv__Addtwonumbers_Request__Sequence * array);

/// Create array of srv/Addtwonumbers messages.
/**
 * It allocates the memory for the array and calls
 * ucb_interface__srv__Addtwonumbers_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
ucb_interface__srv__Addtwonumbers_Request__Sequence *
ucb_interface__srv__Addtwonumbers_Request__Sequence__create(size_t size);

/// Destroy array of srv/Addtwonumbers messages.
/**
 * It calls
 * ucb_interface__srv__Addtwonumbers_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
void
ucb_interface__srv__Addtwonumbers_Request__Sequence__destroy(ucb_interface__srv__Addtwonumbers_Request__Sequence * array);

/// Check for srv/Addtwonumbers message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
bool
ucb_interface__srv__Addtwonumbers_Request__Sequence__are_equal(const ucb_interface__srv__Addtwonumbers_Request__Sequence * lhs, const ucb_interface__srv__Addtwonumbers_Request__Sequence * rhs);

/// Copy an array of srv/Addtwonumbers messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
bool
ucb_interface__srv__Addtwonumbers_Request__Sequence__copy(
  const ucb_interface__srv__Addtwonumbers_Request__Sequence * input,
  ucb_interface__srv__Addtwonumbers_Request__Sequence * output);

/// Initialize srv/Addtwonumbers message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ucb_interface__srv__Addtwonumbers_Response
 * )) before or use
 * ucb_interface__srv__Addtwonumbers_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
bool
ucb_interface__srv__Addtwonumbers_Response__init(ucb_interface__srv__Addtwonumbers_Response * msg);

/// Finalize srv/Addtwonumbers message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
void
ucb_interface__srv__Addtwonumbers_Response__fini(ucb_interface__srv__Addtwonumbers_Response * msg);

/// Create srv/Addtwonumbers message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ucb_interface__srv__Addtwonumbers_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
ucb_interface__srv__Addtwonumbers_Response *
ucb_interface__srv__Addtwonumbers_Response__create();

/// Destroy srv/Addtwonumbers message.
/**
 * It calls
 * ucb_interface__srv__Addtwonumbers_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
void
ucb_interface__srv__Addtwonumbers_Response__destroy(ucb_interface__srv__Addtwonumbers_Response * msg);

/// Check for srv/Addtwonumbers message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
bool
ucb_interface__srv__Addtwonumbers_Response__are_equal(const ucb_interface__srv__Addtwonumbers_Response * lhs, const ucb_interface__srv__Addtwonumbers_Response * rhs);

/// Copy a srv/Addtwonumbers message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
bool
ucb_interface__srv__Addtwonumbers_Response__copy(
  const ucb_interface__srv__Addtwonumbers_Response * input,
  ucb_interface__srv__Addtwonumbers_Response * output);

/// Initialize array of srv/Addtwonumbers messages.
/**
 * It allocates the memory for the number of elements and calls
 * ucb_interface__srv__Addtwonumbers_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
bool
ucb_interface__srv__Addtwonumbers_Response__Sequence__init(ucb_interface__srv__Addtwonumbers_Response__Sequence * array, size_t size);

/// Finalize array of srv/Addtwonumbers messages.
/**
 * It calls
 * ucb_interface__srv__Addtwonumbers_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
void
ucb_interface__srv__Addtwonumbers_Response__Sequence__fini(ucb_interface__srv__Addtwonumbers_Response__Sequence * array);

/// Create array of srv/Addtwonumbers messages.
/**
 * It allocates the memory for the array and calls
 * ucb_interface__srv__Addtwonumbers_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
ucb_interface__srv__Addtwonumbers_Response__Sequence *
ucb_interface__srv__Addtwonumbers_Response__Sequence__create(size_t size);

/// Destroy array of srv/Addtwonumbers messages.
/**
 * It calls
 * ucb_interface__srv__Addtwonumbers_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
void
ucb_interface__srv__Addtwonumbers_Response__Sequence__destroy(ucb_interface__srv__Addtwonumbers_Response__Sequence * array);

/// Check for srv/Addtwonumbers message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
bool
ucb_interface__srv__Addtwonumbers_Response__Sequence__are_equal(const ucb_interface__srv__Addtwonumbers_Response__Sequence * lhs, const ucb_interface__srv__Addtwonumbers_Response__Sequence * rhs);

/// Copy an array of srv/Addtwonumbers messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ucb_interface
bool
ucb_interface__srv__Addtwonumbers_Response__Sequence__copy(
  const ucb_interface__srv__Addtwonumbers_Response__Sequence * input,
  ucb_interface__srv__Addtwonumbers_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UCB_INTERFACE__SRV__DETAIL__ADDTWONUMBERS__FUNCTIONS_H_
