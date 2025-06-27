// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robovision_interfaces:msg/ObjectCentroids.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robovision_interfaces/msg/object_centroids.h"


#ifndef ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROIDS__STRUCT_H_
#define ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROIDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'centroids'
#include "robovision_interfaces/msg/detail/object_centroid__struct.h"

/// Struct defined in msg/ObjectCentroids in the package robovision_interfaces.
/**
  * Note that if the message is defined in the same package,
  * the package name does not appear in the service or message definition.
  * If the message is defined elsewhere, we have to specify it, e.g.
  * robovision_interfaces/msg/ObjectCentroid[] centroids
 */
typedef struct robovision_interfaces__msg__ObjectCentroids
{
  robovision_interfaces__msg__ObjectCentroid__Sequence centroids;
} robovision_interfaces__msg__ObjectCentroids;

// Struct for a sequence of robovision_interfaces__msg__ObjectCentroids.
typedef struct robovision_interfaces__msg__ObjectCentroids__Sequence
{
  robovision_interfaces__msg__ObjectCentroids * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robovision_interfaces__msg__ObjectCentroids__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROIDS__STRUCT_H_
