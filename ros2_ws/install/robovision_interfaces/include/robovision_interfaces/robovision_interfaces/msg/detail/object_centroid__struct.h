// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robovision_interfaces:msg/ObjectCentroid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robovision_interfaces/msg/object_centroid.h"


#ifndef ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__STRUCT_H_
#define ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'centroid'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ObjectCentroid in the package robovision_interfaces.
typedef struct robovision_interfaces__msg__ObjectCentroid
{
  double x;
  double y;
  double z;
  rosidl_runtime_c__double__Sequence centroid;
} robovision_interfaces__msg__ObjectCentroid;

// Struct for a sequence of robovision_interfaces__msg__ObjectCentroid.
typedef struct robovision_interfaces__msg__ObjectCentroid__Sequence
{
  robovision_interfaces__msg__ObjectCentroid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robovision_interfaces__msg__ObjectCentroid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__STRUCT_H_
