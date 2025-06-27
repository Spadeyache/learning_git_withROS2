// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robovision_interfaces:msg/ObjectCentroids.idl
// generated code does not contain a copyright notice
#include "robovision_interfaces/msg/detail/object_centroids__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `centroids`
#include "robovision_interfaces/msg/detail/object_centroid__functions.h"

bool
robovision_interfaces__msg__ObjectCentroids__init(robovision_interfaces__msg__ObjectCentroids * msg)
{
  if (!msg) {
    return false;
  }
  // centroids
  if (!robovision_interfaces__msg__ObjectCentroid__Sequence__init(&msg->centroids, 0)) {
    robovision_interfaces__msg__ObjectCentroids__fini(msg);
    return false;
  }
  return true;
}

void
robovision_interfaces__msg__ObjectCentroids__fini(robovision_interfaces__msg__ObjectCentroids * msg)
{
  if (!msg) {
    return;
  }
  // centroids
  robovision_interfaces__msg__ObjectCentroid__Sequence__fini(&msg->centroids);
}

bool
robovision_interfaces__msg__ObjectCentroids__are_equal(const robovision_interfaces__msg__ObjectCentroids * lhs, const robovision_interfaces__msg__ObjectCentroids * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // centroids
  if (!robovision_interfaces__msg__ObjectCentroid__Sequence__are_equal(
      &(lhs->centroids), &(rhs->centroids)))
  {
    return false;
  }
  return true;
}

bool
robovision_interfaces__msg__ObjectCentroids__copy(
  const robovision_interfaces__msg__ObjectCentroids * input,
  robovision_interfaces__msg__ObjectCentroids * output)
{
  if (!input || !output) {
    return false;
  }
  // centroids
  if (!robovision_interfaces__msg__ObjectCentroid__Sequence__copy(
      &(input->centroids), &(output->centroids)))
  {
    return false;
  }
  return true;
}

robovision_interfaces__msg__ObjectCentroids *
robovision_interfaces__msg__ObjectCentroids__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robovision_interfaces__msg__ObjectCentroids * msg = (robovision_interfaces__msg__ObjectCentroids *)allocator.allocate(sizeof(robovision_interfaces__msg__ObjectCentroids), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robovision_interfaces__msg__ObjectCentroids));
  bool success = robovision_interfaces__msg__ObjectCentroids__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robovision_interfaces__msg__ObjectCentroids__destroy(robovision_interfaces__msg__ObjectCentroids * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robovision_interfaces__msg__ObjectCentroids__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robovision_interfaces__msg__ObjectCentroids__Sequence__init(robovision_interfaces__msg__ObjectCentroids__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robovision_interfaces__msg__ObjectCentroids * data = NULL;

  if (size) {
    data = (robovision_interfaces__msg__ObjectCentroids *)allocator.zero_allocate(size, sizeof(robovision_interfaces__msg__ObjectCentroids), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robovision_interfaces__msg__ObjectCentroids__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robovision_interfaces__msg__ObjectCentroids__fini(&data[i - 1]);
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
robovision_interfaces__msg__ObjectCentroids__Sequence__fini(robovision_interfaces__msg__ObjectCentroids__Sequence * array)
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
      robovision_interfaces__msg__ObjectCentroids__fini(&array->data[i]);
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

robovision_interfaces__msg__ObjectCentroids__Sequence *
robovision_interfaces__msg__ObjectCentroids__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robovision_interfaces__msg__ObjectCentroids__Sequence * array = (robovision_interfaces__msg__ObjectCentroids__Sequence *)allocator.allocate(sizeof(robovision_interfaces__msg__ObjectCentroids__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robovision_interfaces__msg__ObjectCentroids__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robovision_interfaces__msg__ObjectCentroids__Sequence__destroy(robovision_interfaces__msg__ObjectCentroids__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robovision_interfaces__msg__ObjectCentroids__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robovision_interfaces__msg__ObjectCentroids__Sequence__are_equal(const robovision_interfaces__msg__ObjectCentroids__Sequence * lhs, const robovision_interfaces__msg__ObjectCentroids__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robovision_interfaces__msg__ObjectCentroids__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robovision_interfaces__msg__ObjectCentroids__Sequence__copy(
  const robovision_interfaces__msg__ObjectCentroids__Sequence * input,
  robovision_interfaces__msg__ObjectCentroids__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robovision_interfaces__msg__ObjectCentroids);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robovision_interfaces__msg__ObjectCentroids * data =
      (robovision_interfaces__msg__ObjectCentroids *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robovision_interfaces__msg__ObjectCentroids__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robovision_interfaces__msg__ObjectCentroids__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robovision_interfaces__msg__ObjectCentroids__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
