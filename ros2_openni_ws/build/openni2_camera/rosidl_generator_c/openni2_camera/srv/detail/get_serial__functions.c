// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from openni2_camera:srv/GetSerial.idl
// generated code does not contain a copyright notice
#include "openni2_camera/srv/detail/get_serial__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
openni2_camera__srv__GetSerial_Request__init(openni2_camera__srv__GetSerial_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
openni2_camera__srv__GetSerial_Request__fini(openni2_camera__srv__GetSerial_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
openni2_camera__srv__GetSerial_Request__are_equal(const openni2_camera__srv__GetSerial_Request * lhs, const openni2_camera__srv__GetSerial_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
openni2_camera__srv__GetSerial_Request__copy(
  const openni2_camera__srv__GetSerial_Request * input,
  openni2_camera__srv__GetSerial_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

openni2_camera__srv__GetSerial_Request *
openni2_camera__srv__GetSerial_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openni2_camera__srv__GetSerial_Request * msg = (openni2_camera__srv__GetSerial_Request *)allocator.allocate(sizeof(openni2_camera__srv__GetSerial_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(openni2_camera__srv__GetSerial_Request));
  bool success = openni2_camera__srv__GetSerial_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
openni2_camera__srv__GetSerial_Request__destroy(openni2_camera__srv__GetSerial_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    openni2_camera__srv__GetSerial_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
openni2_camera__srv__GetSerial_Request__Sequence__init(openni2_camera__srv__GetSerial_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openni2_camera__srv__GetSerial_Request * data = NULL;

  if (size) {
    data = (openni2_camera__srv__GetSerial_Request *)allocator.zero_allocate(size, sizeof(openni2_camera__srv__GetSerial_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = openni2_camera__srv__GetSerial_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        openni2_camera__srv__GetSerial_Request__fini(&data[i - 1]);
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
openni2_camera__srv__GetSerial_Request__Sequence__fini(openni2_camera__srv__GetSerial_Request__Sequence * array)
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
      openni2_camera__srv__GetSerial_Request__fini(&array->data[i]);
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

openni2_camera__srv__GetSerial_Request__Sequence *
openni2_camera__srv__GetSerial_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openni2_camera__srv__GetSerial_Request__Sequence * array = (openni2_camera__srv__GetSerial_Request__Sequence *)allocator.allocate(sizeof(openni2_camera__srv__GetSerial_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = openni2_camera__srv__GetSerial_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
openni2_camera__srv__GetSerial_Request__Sequence__destroy(openni2_camera__srv__GetSerial_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    openni2_camera__srv__GetSerial_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
openni2_camera__srv__GetSerial_Request__Sequence__are_equal(const openni2_camera__srv__GetSerial_Request__Sequence * lhs, const openni2_camera__srv__GetSerial_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!openni2_camera__srv__GetSerial_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
openni2_camera__srv__GetSerial_Request__Sequence__copy(
  const openni2_camera__srv__GetSerial_Request__Sequence * input,
  openni2_camera__srv__GetSerial_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(openni2_camera__srv__GetSerial_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    openni2_camera__srv__GetSerial_Request * data =
      (openni2_camera__srv__GetSerial_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!openni2_camera__srv__GetSerial_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          openni2_camera__srv__GetSerial_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!openni2_camera__srv__GetSerial_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `serial`
#include "rosidl_runtime_c/string_functions.h"

bool
openni2_camera__srv__GetSerial_Response__init(openni2_camera__srv__GetSerial_Response * msg)
{
  if (!msg) {
    return false;
  }
  // serial
  if (!rosidl_runtime_c__String__init(&msg->serial)) {
    openni2_camera__srv__GetSerial_Response__fini(msg);
    return false;
  }
  return true;
}

void
openni2_camera__srv__GetSerial_Response__fini(openni2_camera__srv__GetSerial_Response * msg)
{
  if (!msg) {
    return;
  }
  // serial
  rosidl_runtime_c__String__fini(&msg->serial);
}

bool
openni2_camera__srv__GetSerial_Response__are_equal(const openni2_camera__srv__GetSerial_Response * lhs, const openni2_camera__srv__GetSerial_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // serial
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->serial), &(rhs->serial)))
  {
    return false;
  }
  return true;
}

bool
openni2_camera__srv__GetSerial_Response__copy(
  const openni2_camera__srv__GetSerial_Response * input,
  openni2_camera__srv__GetSerial_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // serial
  if (!rosidl_runtime_c__String__copy(
      &(input->serial), &(output->serial)))
  {
    return false;
  }
  return true;
}

openni2_camera__srv__GetSerial_Response *
openni2_camera__srv__GetSerial_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openni2_camera__srv__GetSerial_Response * msg = (openni2_camera__srv__GetSerial_Response *)allocator.allocate(sizeof(openni2_camera__srv__GetSerial_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(openni2_camera__srv__GetSerial_Response));
  bool success = openni2_camera__srv__GetSerial_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
openni2_camera__srv__GetSerial_Response__destroy(openni2_camera__srv__GetSerial_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    openni2_camera__srv__GetSerial_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
openni2_camera__srv__GetSerial_Response__Sequence__init(openni2_camera__srv__GetSerial_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openni2_camera__srv__GetSerial_Response * data = NULL;

  if (size) {
    data = (openni2_camera__srv__GetSerial_Response *)allocator.zero_allocate(size, sizeof(openni2_camera__srv__GetSerial_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = openni2_camera__srv__GetSerial_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        openni2_camera__srv__GetSerial_Response__fini(&data[i - 1]);
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
openni2_camera__srv__GetSerial_Response__Sequence__fini(openni2_camera__srv__GetSerial_Response__Sequence * array)
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
      openni2_camera__srv__GetSerial_Response__fini(&array->data[i]);
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

openni2_camera__srv__GetSerial_Response__Sequence *
openni2_camera__srv__GetSerial_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openni2_camera__srv__GetSerial_Response__Sequence * array = (openni2_camera__srv__GetSerial_Response__Sequence *)allocator.allocate(sizeof(openni2_camera__srv__GetSerial_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = openni2_camera__srv__GetSerial_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
openni2_camera__srv__GetSerial_Response__Sequence__destroy(openni2_camera__srv__GetSerial_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    openni2_camera__srv__GetSerial_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
openni2_camera__srv__GetSerial_Response__Sequence__are_equal(const openni2_camera__srv__GetSerial_Response__Sequence * lhs, const openni2_camera__srv__GetSerial_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!openni2_camera__srv__GetSerial_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
openni2_camera__srv__GetSerial_Response__Sequence__copy(
  const openni2_camera__srv__GetSerial_Response__Sequence * input,
  openni2_camera__srv__GetSerial_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(openni2_camera__srv__GetSerial_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    openni2_camera__srv__GetSerial_Response * data =
      (openni2_camera__srv__GetSerial_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!openni2_camera__srv__GetSerial_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          openni2_camera__srv__GetSerial_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!openni2_camera__srv__GetSerial_Response__copy(
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
// #include "openni2_camera/srv/detail/get_serial__functions.h"

bool
openni2_camera__srv__GetSerial_Event__init(openni2_camera__srv__GetSerial_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    openni2_camera__srv__GetSerial_Event__fini(msg);
    return false;
  }
  // request
  if (!openni2_camera__srv__GetSerial_Request__Sequence__init(&msg->request, 0)) {
    openni2_camera__srv__GetSerial_Event__fini(msg);
    return false;
  }
  // response
  if (!openni2_camera__srv__GetSerial_Response__Sequence__init(&msg->response, 0)) {
    openni2_camera__srv__GetSerial_Event__fini(msg);
    return false;
  }
  return true;
}

void
openni2_camera__srv__GetSerial_Event__fini(openni2_camera__srv__GetSerial_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  openni2_camera__srv__GetSerial_Request__Sequence__fini(&msg->request);
  // response
  openni2_camera__srv__GetSerial_Response__Sequence__fini(&msg->response);
}

bool
openni2_camera__srv__GetSerial_Event__are_equal(const openni2_camera__srv__GetSerial_Event * lhs, const openni2_camera__srv__GetSerial_Event * rhs)
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
  if (!openni2_camera__srv__GetSerial_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!openni2_camera__srv__GetSerial_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
openni2_camera__srv__GetSerial_Event__copy(
  const openni2_camera__srv__GetSerial_Event * input,
  openni2_camera__srv__GetSerial_Event * output)
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
  if (!openni2_camera__srv__GetSerial_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!openni2_camera__srv__GetSerial_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

openni2_camera__srv__GetSerial_Event *
openni2_camera__srv__GetSerial_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openni2_camera__srv__GetSerial_Event * msg = (openni2_camera__srv__GetSerial_Event *)allocator.allocate(sizeof(openni2_camera__srv__GetSerial_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(openni2_camera__srv__GetSerial_Event));
  bool success = openni2_camera__srv__GetSerial_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
openni2_camera__srv__GetSerial_Event__destroy(openni2_camera__srv__GetSerial_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    openni2_camera__srv__GetSerial_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
openni2_camera__srv__GetSerial_Event__Sequence__init(openni2_camera__srv__GetSerial_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openni2_camera__srv__GetSerial_Event * data = NULL;

  if (size) {
    data = (openni2_camera__srv__GetSerial_Event *)allocator.zero_allocate(size, sizeof(openni2_camera__srv__GetSerial_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = openni2_camera__srv__GetSerial_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        openni2_camera__srv__GetSerial_Event__fini(&data[i - 1]);
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
openni2_camera__srv__GetSerial_Event__Sequence__fini(openni2_camera__srv__GetSerial_Event__Sequence * array)
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
      openni2_camera__srv__GetSerial_Event__fini(&array->data[i]);
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

openni2_camera__srv__GetSerial_Event__Sequence *
openni2_camera__srv__GetSerial_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openni2_camera__srv__GetSerial_Event__Sequence * array = (openni2_camera__srv__GetSerial_Event__Sequence *)allocator.allocate(sizeof(openni2_camera__srv__GetSerial_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = openni2_camera__srv__GetSerial_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
openni2_camera__srv__GetSerial_Event__Sequence__destroy(openni2_camera__srv__GetSerial_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    openni2_camera__srv__GetSerial_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
openni2_camera__srv__GetSerial_Event__Sequence__are_equal(const openni2_camera__srv__GetSerial_Event__Sequence * lhs, const openni2_camera__srv__GetSerial_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!openni2_camera__srv__GetSerial_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
openni2_camera__srv__GetSerial_Event__Sequence__copy(
  const openni2_camera__srv__GetSerial_Event__Sequence * input,
  openni2_camera__srv__GetSerial_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(openni2_camera__srv__GetSerial_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    openni2_camera__srv__GetSerial_Event * data =
      (openni2_camera__srv__GetSerial_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!openni2_camera__srv__GetSerial_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          openni2_camera__srv__GetSerial_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!openni2_camera__srv__GetSerial_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
