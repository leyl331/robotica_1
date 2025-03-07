// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ucb_interface:srv/Addtwonumbers.idl
// generated code does not contain a copyright notice
#include "ucb_interface/srv/detail/addtwonumbers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
ucb_interface__srv__Addtwonumbers_Request__init(ucb_interface__srv__Addtwonumbers_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
ucb_interface__srv__Addtwonumbers_Request__fini(ucb_interface__srv__Addtwonumbers_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
ucb_interface__srv__Addtwonumbers_Request__are_equal(const ucb_interface__srv__Addtwonumbers_Request * lhs, const ucb_interface__srv__Addtwonumbers_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
ucb_interface__srv__Addtwonumbers_Request__copy(
  const ucb_interface__srv__Addtwonumbers_Request * input,
  ucb_interface__srv__Addtwonumbers_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

ucb_interface__srv__Addtwonumbers_Request *
ucb_interface__srv__Addtwonumbers_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interface__srv__Addtwonumbers_Request * msg = (ucb_interface__srv__Addtwonumbers_Request *)allocator.allocate(sizeof(ucb_interface__srv__Addtwonumbers_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ucb_interface__srv__Addtwonumbers_Request));
  bool success = ucb_interface__srv__Addtwonumbers_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ucb_interface__srv__Addtwonumbers_Request__destroy(ucb_interface__srv__Addtwonumbers_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ucb_interface__srv__Addtwonumbers_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ucb_interface__srv__Addtwonumbers_Request__Sequence__init(ucb_interface__srv__Addtwonumbers_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interface__srv__Addtwonumbers_Request * data = NULL;

  if (size) {
    data = (ucb_interface__srv__Addtwonumbers_Request *)allocator.zero_allocate(size, sizeof(ucb_interface__srv__Addtwonumbers_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ucb_interface__srv__Addtwonumbers_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ucb_interface__srv__Addtwonumbers_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ucb_interface__srv__Addtwonumbers_Request__Sequence__fini(ucb_interface__srv__Addtwonumbers_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ucb_interface__srv__Addtwonumbers_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ucb_interface__srv__Addtwonumbers_Request__Sequence *
ucb_interface__srv__Addtwonumbers_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interface__srv__Addtwonumbers_Request__Sequence * array = (ucb_interface__srv__Addtwonumbers_Request__Sequence *)allocator.allocate(sizeof(ucb_interface__srv__Addtwonumbers_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ucb_interface__srv__Addtwonumbers_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ucb_interface__srv__Addtwonumbers_Request__Sequence__destroy(ucb_interface__srv__Addtwonumbers_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ucb_interface__srv__Addtwonumbers_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ucb_interface__srv__Addtwonumbers_Request__Sequence__are_equal(const ucb_interface__srv__Addtwonumbers_Request__Sequence * lhs, const ucb_interface__srv__Addtwonumbers_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ucb_interface__srv__Addtwonumbers_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ucb_interface__srv__Addtwonumbers_Request__Sequence__copy(
  const ucb_interface__srv__Addtwonumbers_Request__Sequence * input,
  ucb_interface__srv__Addtwonumbers_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ucb_interface__srv__Addtwonumbers_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ucb_interface__srv__Addtwonumbers_Request * data =
      (ucb_interface__srv__Addtwonumbers_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ucb_interface__srv__Addtwonumbers_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ucb_interface__srv__Addtwonumbers_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ucb_interface__srv__Addtwonumbers_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ucb_interface__srv__Addtwonumbers_Response__init(ucb_interface__srv__Addtwonumbers_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
ucb_interface__srv__Addtwonumbers_Response__fini(ucb_interface__srv__Addtwonumbers_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
ucb_interface__srv__Addtwonumbers_Response__are_equal(const ucb_interface__srv__Addtwonumbers_Response * lhs, const ucb_interface__srv__Addtwonumbers_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
ucb_interface__srv__Addtwonumbers_Response__copy(
  const ucb_interface__srv__Addtwonumbers_Response * input,
  ucb_interface__srv__Addtwonumbers_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

ucb_interface__srv__Addtwonumbers_Response *
ucb_interface__srv__Addtwonumbers_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interface__srv__Addtwonumbers_Response * msg = (ucb_interface__srv__Addtwonumbers_Response *)allocator.allocate(sizeof(ucb_interface__srv__Addtwonumbers_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ucb_interface__srv__Addtwonumbers_Response));
  bool success = ucb_interface__srv__Addtwonumbers_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ucb_interface__srv__Addtwonumbers_Response__destroy(ucb_interface__srv__Addtwonumbers_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ucb_interface__srv__Addtwonumbers_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ucb_interface__srv__Addtwonumbers_Response__Sequence__init(ucb_interface__srv__Addtwonumbers_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interface__srv__Addtwonumbers_Response * data = NULL;

  if (size) {
    data = (ucb_interface__srv__Addtwonumbers_Response *)allocator.zero_allocate(size, sizeof(ucb_interface__srv__Addtwonumbers_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ucb_interface__srv__Addtwonumbers_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ucb_interface__srv__Addtwonumbers_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ucb_interface__srv__Addtwonumbers_Response__Sequence__fini(ucb_interface__srv__Addtwonumbers_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ucb_interface__srv__Addtwonumbers_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ucb_interface__srv__Addtwonumbers_Response__Sequence *
ucb_interface__srv__Addtwonumbers_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ucb_interface__srv__Addtwonumbers_Response__Sequence * array = (ucb_interface__srv__Addtwonumbers_Response__Sequence *)allocator.allocate(sizeof(ucb_interface__srv__Addtwonumbers_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ucb_interface__srv__Addtwonumbers_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ucb_interface__srv__Addtwonumbers_Response__Sequence__destroy(ucb_interface__srv__Addtwonumbers_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ucb_interface__srv__Addtwonumbers_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ucb_interface__srv__Addtwonumbers_Response__Sequence__are_equal(const ucb_interface__srv__Addtwonumbers_Response__Sequence * lhs, const ucb_interface__srv__Addtwonumbers_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ucb_interface__srv__Addtwonumbers_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ucb_interface__srv__Addtwonumbers_Response__Sequence__copy(
  const ucb_interface__srv__Addtwonumbers_Response__Sequence * input,
  ucb_interface__srv__Addtwonumbers_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ucb_interface__srv__Addtwonumbers_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ucb_interface__srv__Addtwonumbers_Response * data =
      (ucb_interface__srv__Addtwonumbers_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ucb_interface__srv__Addtwonumbers_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ucb_interface__srv__Addtwonumbers_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ucb_interface__srv__Addtwonumbers_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
