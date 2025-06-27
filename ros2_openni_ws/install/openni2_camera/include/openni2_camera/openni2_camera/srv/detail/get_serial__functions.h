// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from openni2_camera:srv/GetSerial.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "openni2_camera/srv/get_serial.h"


#ifndef OPENNI2_CAMERA__SRV__DETAIL__GET_SERIAL__FUNCTIONS_H_
#define OPENNI2_CAMERA__SRV__DETAIL__GET_SERIAL__FUNCTIONS_H_

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
#include "openni2_camera/msg/rosidl_generator_c__visibility_control.h"

#include "openni2_camera/srv/detail/get_serial__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_type_hash_t *
openni2_camera__srv__GetSerial__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_runtime_c__type_description__TypeDescription *
openni2_camera__srv__GetSerial__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_runtime_c__type_description__TypeSource *
openni2_camera__srv__GetSerial__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_runtime_c__type_description__TypeSource__Sequence *
openni2_camera__srv__GetSerial__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/GetSerial message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * openni2_camera__srv__GetSerial_Request
 * )) before or use
 * openni2_camera__srv__GetSerial_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Request__init(openni2_camera__srv__GetSerial_Request * msg);

/// Finalize srv/GetSerial message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
void
openni2_camera__srv__GetSerial_Request__fini(openni2_camera__srv__GetSerial_Request * msg);

/// Create srv/GetSerial message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * openni2_camera__srv__GetSerial_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
openni2_camera__srv__GetSerial_Request *
openni2_camera__srv__GetSerial_Request__create(void);

/// Destroy srv/GetSerial message.
/**
 * It calls
 * openni2_camera__srv__GetSerial_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
void
openni2_camera__srv__GetSerial_Request__destroy(openni2_camera__srv__GetSerial_Request * msg);

/// Check for srv/GetSerial message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Request__are_equal(const openni2_camera__srv__GetSerial_Request * lhs, const openni2_camera__srv__GetSerial_Request * rhs);

/// Copy a srv/GetSerial message.
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
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Request__copy(
  const openni2_camera__srv__GetSerial_Request * input,
  openni2_camera__srv__GetSerial_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_type_hash_t *
openni2_camera__srv__GetSerial_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_runtime_c__type_description__TypeDescription *
openni2_camera__srv__GetSerial_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_runtime_c__type_description__TypeSource *
openni2_camera__srv__GetSerial_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_runtime_c__type_description__TypeSource__Sequence *
openni2_camera__srv__GetSerial_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetSerial messages.
/**
 * It allocates the memory for the number of elements and calls
 * openni2_camera__srv__GetSerial_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Request__Sequence__init(openni2_camera__srv__GetSerial_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetSerial messages.
/**
 * It calls
 * openni2_camera__srv__GetSerial_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
void
openni2_camera__srv__GetSerial_Request__Sequence__fini(openni2_camera__srv__GetSerial_Request__Sequence * array);

/// Create array of srv/GetSerial messages.
/**
 * It allocates the memory for the array and calls
 * openni2_camera__srv__GetSerial_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
openni2_camera__srv__GetSerial_Request__Sequence *
openni2_camera__srv__GetSerial_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetSerial messages.
/**
 * It calls
 * openni2_camera__srv__GetSerial_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
void
openni2_camera__srv__GetSerial_Request__Sequence__destroy(openni2_camera__srv__GetSerial_Request__Sequence * array);

/// Check for srv/GetSerial message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Request__Sequence__are_equal(const openni2_camera__srv__GetSerial_Request__Sequence * lhs, const openni2_camera__srv__GetSerial_Request__Sequence * rhs);

/// Copy an array of srv/GetSerial messages.
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
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Request__Sequence__copy(
  const openni2_camera__srv__GetSerial_Request__Sequence * input,
  openni2_camera__srv__GetSerial_Request__Sequence * output);

/// Initialize srv/GetSerial message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * openni2_camera__srv__GetSerial_Response
 * )) before or use
 * openni2_camera__srv__GetSerial_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Response__init(openni2_camera__srv__GetSerial_Response * msg);

/// Finalize srv/GetSerial message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
void
openni2_camera__srv__GetSerial_Response__fini(openni2_camera__srv__GetSerial_Response * msg);

/// Create srv/GetSerial message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * openni2_camera__srv__GetSerial_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
openni2_camera__srv__GetSerial_Response *
openni2_camera__srv__GetSerial_Response__create(void);

/// Destroy srv/GetSerial message.
/**
 * It calls
 * openni2_camera__srv__GetSerial_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
void
openni2_camera__srv__GetSerial_Response__destroy(openni2_camera__srv__GetSerial_Response * msg);

/// Check for srv/GetSerial message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Response__are_equal(const openni2_camera__srv__GetSerial_Response * lhs, const openni2_camera__srv__GetSerial_Response * rhs);

/// Copy a srv/GetSerial message.
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
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Response__copy(
  const openni2_camera__srv__GetSerial_Response * input,
  openni2_camera__srv__GetSerial_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_type_hash_t *
openni2_camera__srv__GetSerial_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_runtime_c__type_description__TypeDescription *
openni2_camera__srv__GetSerial_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_runtime_c__type_description__TypeSource *
openni2_camera__srv__GetSerial_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_runtime_c__type_description__TypeSource__Sequence *
openni2_camera__srv__GetSerial_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetSerial messages.
/**
 * It allocates the memory for the number of elements and calls
 * openni2_camera__srv__GetSerial_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Response__Sequence__init(openni2_camera__srv__GetSerial_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetSerial messages.
/**
 * It calls
 * openni2_camera__srv__GetSerial_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
void
openni2_camera__srv__GetSerial_Response__Sequence__fini(openni2_camera__srv__GetSerial_Response__Sequence * array);

/// Create array of srv/GetSerial messages.
/**
 * It allocates the memory for the array and calls
 * openni2_camera__srv__GetSerial_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
openni2_camera__srv__GetSerial_Response__Sequence *
openni2_camera__srv__GetSerial_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetSerial messages.
/**
 * It calls
 * openni2_camera__srv__GetSerial_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
void
openni2_camera__srv__GetSerial_Response__Sequence__destroy(openni2_camera__srv__GetSerial_Response__Sequence * array);

/// Check for srv/GetSerial message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Response__Sequence__are_equal(const openni2_camera__srv__GetSerial_Response__Sequence * lhs, const openni2_camera__srv__GetSerial_Response__Sequence * rhs);

/// Copy an array of srv/GetSerial messages.
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
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Response__Sequence__copy(
  const openni2_camera__srv__GetSerial_Response__Sequence * input,
  openni2_camera__srv__GetSerial_Response__Sequence * output);

/// Initialize srv/GetSerial message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * openni2_camera__srv__GetSerial_Event
 * )) before or use
 * openni2_camera__srv__GetSerial_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Event__init(openni2_camera__srv__GetSerial_Event * msg);

/// Finalize srv/GetSerial message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
void
openni2_camera__srv__GetSerial_Event__fini(openni2_camera__srv__GetSerial_Event * msg);

/// Create srv/GetSerial message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * openni2_camera__srv__GetSerial_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
openni2_camera__srv__GetSerial_Event *
openni2_camera__srv__GetSerial_Event__create(void);

/// Destroy srv/GetSerial message.
/**
 * It calls
 * openni2_camera__srv__GetSerial_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
void
openni2_camera__srv__GetSerial_Event__destroy(openni2_camera__srv__GetSerial_Event * msg);

/// Check for srv/GetSerial message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Event__are_equal(const openni2_camera__srv__GetSerial_Event * lhs, const openni2_camera__srv__GetSerial_Event * rhs);

/// Copy a srv/GetSerial message.
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
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Event__copy(
  const openni2_camera__srv__GetSerial_Event * input,
  openni2_camera__srv__GetSerial_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_type_hash_t *
openni2_camera__srv__GetSerial_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_runtime_c__type_description__TypeDescription *
openni2_camera__srv__GetSerial_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_runtime_c__type_description__TypeSource *
openni2_camera__srv__GetSerial_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
const rosidl_runtime_c__type_description__TypeSource__Sequence *
openni2_camera__srv__GetSerial_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetSerial messages.
/**
 * It allocates the memory for the number of elements and calls
 * openni2_camera__srv__GetSerial_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Event__Sequence__init(openni2_camera__srv__GetSerial_Event__Sequence * array, size_t size);

/// Finalize array of srv/GetSerial messages.
/**
 * It calls
 * openni2_camera__srv__GetSerial_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
void
openni2_camera__srv__GetSerial_Event__Sequence__fini(openni2_camera__srv__GetSerial_Event__Sequence * array);

/// Create array of srv/GetSerial messages.
/**
 * It allocates the memory for the array and calls
 * openni2_camera__srv__GetSerial_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
openni2_camera__srv__GetSerial_Event__Sequence *
openni2_camera__srv__GetSerial_Event__Sequence__create(size_t size);

/// Destroy array of srv/GetSerial messages.
/**
 * It calls
 * openni2_camera__srv__GetSerial_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
void
openni2_camera__srv__GetSerial_Event__Sequence__destroy(openni2_camera__srv__GetSerial_Event__Sequence * array);

/// Check for srv/GetSerial message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Event__Sequence__are_equal(const openni2_camera__srv__GetSerial_Event__Sequence * lhs, const openni2_camera__srv__GetSerial_Event__Sequence * rhs);

/// Copy an array of srv/GetSerial messages.
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
ROSIDL_GENERATOR_C_PUBLIC_openni2_camera
bool
openni2_camera__srv__GetSerial_Event__Sequence__copy(
  const openni2_camera__srv__GetSerial_Event__Sequence * input,
  openni2_camera__srv__GetSerial_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // OPENNI2_CAMERA__SRV__DETAIL__GET_SERIAL__FUNCTIONS_H_
