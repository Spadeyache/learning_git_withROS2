// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robovision_interfaces:srv/GetPointCenter.idl
// generated code does not contain a copyright notice
#include "robovision_interfaces/srv/detail/get_point_center__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
robovision_interfaces__srv__GetPointCenter_Request__init(robovision_interfaces__srv__GetPointCenter_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
robovision_interfaces__srv__GetPointCenter_Request__fini(robovision_interfaces__srv__GetPointCenter_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
robovision_interfaces__srv__GetPointCenter_Request__are_equal(const robovision_interfaces__srv__GetPointCenter_Request * lhs, const robovision_interfaces__srv__GetPointCenter_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
robovision_interfaces__srv__GetPointCenter_Request__copy(
  const robovision_interfaces__srv__GetPointCenter_Request * input,
  robovision_interfaces__srv__GetPointCenter_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

robovision_interfaces__srv__GetPointCenter_Request *
robovision_interfaces__srv__GetPointCenter_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robovision_interfaces__srv__GetPointCenter_Request * msg = (robovision_interfaces__srv__GetPointCenter_Request *)allocator.allocate(sizeof(robovision_interfaces__srv__GetPointCenter_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robovision_interfaces__srv__GetPointCenter_Request));
  bool success = robovision_interfaces__srv__GetPointCenter_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robovision_interfaces__srv__GetPointCenter_Request__destroy(robovision_interfaces__srv__GetPointCenter_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robovision_interfaces__srv__GetPointCenter_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robovision_interfaces__srv__GetPointCenter_Request__Sequence__init(robovision_interfaces__srv__GetPointCenter_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robovision_interfaces__srv__GetPointCenter_Request * data = NULL;

  if (size) {
    data = (robovision_interfaces__srv__GetPointCenter_Request *)allocator.zero_allocate(size, sizeof(robovision_interfaces__srv__GetPointCenter_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robovision_interfaces__srv__GetPointCenter_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robovision_interfaces__srv__GetPointCenter_Request__fini(&data[i - 1]);
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
robovision_interfaces__srv__GetPointCenter_Request__Sequence__fini(robovision_interfaces__srv__GetPointCenter_Request__Sequence * array)
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
      robovision_interfaces__srv__GetPointCenter_Request__fini(&array->data[i]);
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

robovision_interfaces__srv__GetPointCenter_Request__Sequence *
robovision_interfaces__srv__GetPointCenter_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robovision_interfaces__srv__GetPointCenter_Request__Sequence * array = (robovision_interfaces__srv__GetPointCenter_Request__Sequence *)allocator.allocate(sizeof(robovision_interfaces__srv__GetPointCenter_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robovision_interfaces__srv__GetPointCenter_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robovision_interfaces__srv__GetPointCenter_Request__Sequence__destroy(robovision_interfaces__srv__GetPointCenter_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robovision_interfaces__srv__GetPointCenter_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robovision_interfaces__srv__GetPointCenter_Request__Sequence__are_equal(const robovision_interfaces__srv__GetPointCenter_Request__Sequence * lhs, const robovision_interfaces__srv__GetPointCenter_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robovision_interfaces__srv__GetPointCenter_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robovision_interfaces__srv__GetPointCenter_Request__Sequence__copy(
  const robovision_interfaces__srv__GetPointCenter_Request__Sequence * input,
  robovision_interfaces__srv__GetPointCenter_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robovision_interfaces__srv__GetPointCenter_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robovision_interfaces__srv__GetPointCenter_Request * data =
      (robovision_interfaces__srv__GetPointCenter_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robovision_interfaces__srv__GetPointCenter_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robovision_interfaces__srv__GetPointCenter_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robovision_interfaces__srv__GetPointCenter_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `point`
#include "robovision_interfaces/msg/detail/object_centroid__functions.h"

bool
robovision_interfaces__srv__GetPointCenter_Response__init(robovision_interfaces__srv__GetPointCenter_Response * msg)
{
  if (!msg) {
    return false;
  }
  // point
  if (!robovision_interfaces__msg__ObjectCentroid__init(&msg->point)) {
    robovision_interfaces__srv__GetPointCenter_Response__fini(msg);
    return false;
  }
  return true;
}

void
robovision_interfaces__srv__GetPointCenter_Response__fini(robovision_interfaces__srv__GetPointCenter_Response * msg)
{
  if (!msg) {
    return;
  }
  // point
  robovision_interfaces__msg__ObjectCentroid__fini(&msg->point);
}

bool
robovision_interfaces__srv__GetPointCenter_Response__are_equal(const robovision_interfaces__srv__GetPointCenter_Response * lhs, const robovision_interfaces__srv__GetPointCenter_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // point
  if (!robovision_interfaces__msg__ObjectCentroid__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  return true;
}

bool
robovision_interfaces__srv__GetPointCenter_Response__copy(
  const robovision_interfaces__srv__GetPointCenter_Response * input,
  robovision_interfaces__srv__GetPointCenter_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // point
  if (!robovision_interfaces__msg__ObjectCentroid__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  return true;
}

robovision_interfaces__srv__GetPointCenter_Response *
robovision_interfaces__srv__GetPointCenter_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robovision_interfaces__srv__GetPointCenter_Response * msg = (robovision_interfaces__srv__GetPointCenter_Response *)allocator.allocate(sizeof(robovision_interfaces__srv__GetPointCenter_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robovision_interfaces__srv__GetPointCenter_Response));
  bool success = robovision_interfaces__srv__GetPointCenter_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robovision_interfaces__srv__GetPointCenter_Response__destroy(robovision_interfaces__srv__GetPointCenter_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robovision_interfaces__srv__GetPointCenter_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robovision_interfaces__srv__GetPointCenter_Response__Sequence__init(robovision_interfaces__srv__GetPointCenter_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robovision_interfaces__srv__GetPointCenter_Response * data = NULL;

  if (size) {
    data = (robovision_interfaces__srv__GetPointCenter_Response *)allocator.zero_allocate(size, sizeof(robovision_interfaces__srv__GetPointCenter_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robovision_interfaces__srv__GetPointCenter_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robovision_interfaces__srv__GetPointCenter_Response__fini(&data[i - 1]);
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
robovision_interfaces__srv__GetPointCenter_Response__Sequence__fini(robovision_interfaces__srv__GetPointCenter_Response__Sequence * array)
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
      robovision_interfaces__srv__GetPointCenter_Response__fini(&array->data[i]);
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

robovision_interfaces__srv__GetPointCenter_Response__Sequence *
robovision_interfaces__srv__GetPointCenter_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robovision_interfaces__srv__GetPointCenter_Response__Sequence * array = (robovision_interfaces__srv__GetPointCenter_Response__Sequence *)allocator.allocate(sizeof(robovision_interfaces__srv__GetPointCenter_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robovision_interfaces__srv__GetPointCenter_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robovision_interfaces__srv__GetPointCenter_Response__Sequence__destroy(robovision_interfaces__srv__GetPointCenter_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robovision_interfaces__srv__GetPointCenter_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robovision_interfaces__srv__GetPointCenter_Response__Sequence__are_equal(const robovision_interfaces__srv__GetPointCenter_Response__Sequence * lhs, const robovision_interfaces__srv__GetPointCenter_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robovision_interfaces__srv__GetPointCenter_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robovision_interfaces__srv__GetPointCenter_Response__Sequence__copy(
  const robovision_interfaces__srv__GetPointCenter_Response__Sequence * input,
  robovision_interfaces__srv__GetPointCenter_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robovision_interfaces__srv__GetPointCenter_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robovision_interfaces__srv__GetPointCenter_Response * data =
      (robovision_interfaces__srv__GetPointCenter_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robovision_interfaces__srv__GetPointCenter_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robovision_interfaces__srv__GetPointCenter_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robovision_interfaces__srv__GetPointCenter_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "robovision_interfaces/srv/detail/get_point_center__functions.h"

bool
robovision_interfaces__srv__GetPointCenter_Event__init(robovision_interfaces__srv__GetPointCenter_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    robovision_interfaces__srv__GetPointCenter_Event__fini(msg);
    return false;
  }
  // request
  if (!robovision_interfaces__srv__GetPointCenter_Request__Sequence__init(&msg->request, 0)) {
    robovision_interfaces__srv__GetPointCenter_Event__fini(msg);
    return false;
  }
  // response
  if (!robovision_interfaces__srv__GetPointCenter_Response__Sequence__init(&msg->response, 0)) {
    robovision_interfaces__srv__GetPointCenter_Event__fini(msg);
    return false;
  }
  return true;
}

void
robovision_interfaces__srv__GetPointCenter_Event__fini(robovision_interfaces__srv__GetPointCenter_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  robovision_interfaces__srv__GetPointCenter_Request__Sequence__fini(&msg->request);
  // response
  robovision_interfaces__srv__GetPointCenter_Response__Sequence__fini(&msg->response);
}

bool
robovision_interfaces__srv__GetPointCenter_Event__are_equal(const robovision_interfaces__srv__GetPointCenter_Event * lhs, const robovision_interfaces__srv__GetPointCenter_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!robovision_interfaces__srv__GetPointCenter_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!robovision_interfaces__srv__GetPointCenter_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
robovision_interfaces__srv__GetPointCenter_Event__copy(
  const robovision_interfaces__srv__GetPointCenter_Event * input,
  robovision_interfaces__srv__GetPointCenter_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!robovision_interfaces__srv__GetPointCenter_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!robovision_interfaces__srv__GetPointCenter_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

robovision_interfaces__srv__GetPointCenter_Event *
robovision_interfaces__srv__GetPointCenter_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robovision_interfaces__srv__GetPointCenter_Event * msg = (robovision_interfaces__srv__GetPointCenter_Event *)allocator.allocate(sizeof(robovision_interfaces__srv__GetPointCenter_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robovision_interfaces__srv__GetPointCenter_Event));
  bool success = robovision_interfaces__srv__GetPointCenter_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robovision_interfaces__srv__GetPointCenter_Event__destroy(robovision_interfaces__srv__GetPointCenter_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robovision_interfaces__srv__GetPointCenter_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robovision_interfaces__srv__GetPointCenter_Event__Sequence__init(robovision_interfaces__srv__GetPointCenter_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robovision_interfaces__srv__GetPointCenter_Event * data = NULL;

  if (size) {
    data = (robovision_interfaces__srv__GetPointCenter_Event *)allocator.zero_allocate(size, sizeof(robovision_interfaces__srv__GetPointCenter_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robovision_interfaces__srv__GetPointCenter_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robovision_interfaces__srv__GetPointCenter_Event__fini(&data[i - 1]);
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
robovision_interfaces__srv__GetPointCenter_Event__Sequence__fini(robovision_interfaces__srv__GetPointCenter_Event__Sequence * array)
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
      robovision_interfaces__srv__GetPointCenter_Event__fini(&array->data[i]);
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

robovision_interfaces__srv__GetPointCenter_Event__Sequence *
robovision_interfaces__srv__GetPointCenter_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robovision_interfaces__srv__GetPointCenter_Event__Sequence * array = (robovision_interfaces__srv__GetPointCenter_Event__Sequence *)allocator.allocate(sizeof(robovision_interfaces__srv__GetPointCenter_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robovision_interfaces__srv__GetPointCenter_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robovision_interfaces__srv__GetPointCenter_Event__Sequence__destroy(robovision_interfaces__srv__GetPointCenter_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robovision_interfaces__srv__GetPointCenter_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robovision_interfaces__srv__GetPointCenter_Event__Sequence__are_equal(const robovision_interfaces__srv__GetPointCenter_Event__Sequence * lhs, const robovision_interfaces__srv__GetPointCenter_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robovision_interfaces__srv__GetPointCenter_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robovision_interfaces__srv__GetPointCenter_Event__Sequence__copy(
  const robovision_interfaces__srv__GetPointCenter_Event__Sequence * input,
  robovision_interfaces__srv__GetPointCenter_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robovision_interfaces__srv__GetPointCenter_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robovision_interfaces__srv__GetPointCenter_Event * data =
      (robovision_interfaces__srv__GetPointCenter_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robovision_interfaces__srv__GetPointCenter_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robovision_interfaces__srv__GetPointCenter_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robovision_interfaces__srv__GetPointCenter_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
