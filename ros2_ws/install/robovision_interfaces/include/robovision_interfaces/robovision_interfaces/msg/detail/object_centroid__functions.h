// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robovision_interfaces:msg/ObjectCentroid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robovision_interfaces/msg/object_centroid.h"


#ifndef ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__FUNCTIONS_H_
#define ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "robovision_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robovision_interfaces/msg/detail/object_centroid__struct.h"

/// Initialize msg/ObjectCentroid message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robovision_interfaces__msg__ObjectCentroid
 * )) before or use
 * robovision_interfaces__msg__ObjectCentroid__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
bool
robovision_interfaces__msg__ObjectCentroid__init(robovision_interfaces__msg__ObjectCentroid * msg);

/// Finalize msg/ObjectCentroid message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
void
robovision_interfaces__msg__ObjectCentroid__fini(robovision_interfaces__msg__ObjectCentroid * msg);

/// Create msg/ObjectCentroid message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robovision_interfaces__msg__ObjectCentroid__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
robovision_interfaces__msg__ObjectCentroid *
robovision_interfaces__msg__ObjectCentroid__create(void);

/// Destroy msg/ObjectCentroid message.
/**
 * It calls
 * robovision_interfaces__msg__ObjectCentroid__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
void
robovision_interfaces__msg__ObjectCentroid__destroy(robovision_interfaces__msg__ObjectCentroid * msg);

/// Check for msg/ObjectCentroid message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
bool
robovision_interfaces__msg__ObjectCentroid__are_equal(const robovision_interfaces__msg__ObjectCentroid * lhs, const robovision_interfaces__msg__ObjectCentroid * rhs);

/// Copy a msg/ObjectCentroid message.
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
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
bool
robovision_interfaces__msg__ObjectCentroid__copy(
  const robovision_interfaces__msg__ObjectCentroid * input,
  robovision_interfaces__msg__ObjectCentroid * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
const rosidl_type_hash_t *
robovision_interfaces__msg__ObjectCentroid__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
robovision_interfaces__msg__ObjectCentroid__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
const rosidl_runtime_c__type_description__TypeSource *
robovision_interfaces__msg__ObjectCentroid__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
robovision_interfaces__msg__ObjectCentroid__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ObjectCentroid messages.
/**
 * It allocates the memory for the number of elements and calls
 * robovision_interfaces__msg__ObjectCentroid__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
bool
robovision_interfaces__msg__ObjectCentroid__Sequence__init(robovision_interfaces__msg__ObjectCentroid__Sequence * array, size_t size);

/// Finalize array of msg/ObjectCentroid messages.
/**
 * It calls
 * robovision_interfaces__msg__ObjectCentroid__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
void
robovision_interfaces__msg__ObjectCentroid__Sequence__fini(robovision_interfaces__msg__ObjectCentroid__Sequence * array);

/// Create array of msg/ObjectCentroid messages.
/**
 * It allocates the memory for the array and calls
 * robovision_interfaces__msg__ObjectCentroid__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
robovision_interfaces__msg__ObjectCentroid__Sequence *
robovision_interfaces__msg__ObjectCentroid__Sequence__create(size_t size);

/// Destroy array of msg/ObjectCentroid messages.
/**
 * It calls
 * robovision_interfaces__msg__ObjectCentroid__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
void
robovision_interfaces__msg__ObjectCentroid__Sequence__destroy(robovision_interfaces__msg__ObjectCentroid__Sequence * array);

/// Check for msg/ObjectCentroid message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
bool
robovision_interfaces__msg__ObjectCentroid__Sequence__are_equal(const robovision_interfaces__msg__ObjectCentroid__Sequence * lhs, const robovision_interfaces__msg__ObjectCentroid__Sequence * rhs);

/// Copy an array of msg/ObjectCentroid messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
bool
robovision_interfaces__msg__ObjectCentroid__Sequence__copy(
  const robovision_interfaces__msg__ObjectCentroid__Sequence * input,
  robovision_interfaces__msg__ObjectCentroid__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__FUNCTIONS_H_
