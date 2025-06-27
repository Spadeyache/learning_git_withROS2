// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robovision_interfaces:msg/ObjectCentroid.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robovision_interfaces/msg/detail/object_centroid__rosidl_typesupport_introspection_c.h"
#include "robovision_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robovision_interfaces/msg/detail/object_centroid__functions.h"
#include "robovision_interfaces/msg/detail/object_centroid__struct.h"


// Include directives for member types
// Member `centroid`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__ObjectCentroid_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robovision_interfaces__msg__ObjectCentroid__init(message_memory);
}

void robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__ObjectCentroid_fini_function(void * message_memory)
{
  robovision_interfaces__msg__ObjectCentroid__fini(message_memory);
}

size_t robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__size_function__ObjectCentroid__centroid(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__get_const_function__ObjectCentroid__centroid(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__get_function__ObjectCentroid__centroid(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__fetch_function__ObjectCentroid__centroid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__get_const_function__ObjectCentroid__centroid(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__assign_function__ObjectCentroid__centroid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__get_function__ObjectCentroid__centroid(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__resize_function__ObjectCentroid__centroid(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__ObjectCentroid_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robovision_interfaces__msg__ObjectCentroid, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robovision_interfaces__msg__ObjectCentroid, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robovision_interfaces__msg__ObjectCentroid, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "centroid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robovision_interfaces__msg__ObjectCentroid, centroid),  // bytes offset in struct
    NULL,  // default value
    robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__size_function__ObjectCentroid__centroid,  // size() function pointer
    robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__get_const_function__ObjectCentroid__centroid,  // get_const(index) function pointer
    robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__get_function__ObjectCentroid__centroid,  // get(index) function pointer
    robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__fetch_function__ObjectCentroid__centroid,  // fetch(index, &value) function pointer
    robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__assign_function__ObjectCentroid__centroid,  // assign(index, value) function pointer
    robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__resize_function__ObjectCentroid__centroid  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__ObjectCentroid_message_members = {
  "robovision_interfaces__msg",  // message namespace
  "ObjectCentroid",  // message name
  4,  // number of fields
  sizeof(robovision_interfaces__msg__ObjectCentroid),
  false,  // has_any_key_member_
  robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__ObjectCentroid_message_member_array,  // message members
  robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__ObjectCentroid_init_function,  // function to initialize message memory (memory has to be allocated)
  robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__ObjectCentroid_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__ObjectCentroid_message_type_support_handle = {
  0,
  &robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__ObjectCentroid_message_members,
  get_message_typesupport_handle_function,
  &robovision_interfaces__msg__ObjectCentroid__get_type_hash,
  &robovision_interfaces__msg__ObjectCentroid__get_type_description,
  &robovision_interfaces__msg__ObjectCentroid__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robovision_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, msg, ObjectCentroid)() {
  if (!robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__ObjectCentroid_message_type_support_handle.typesupport_identifier) {
    robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__ObjectCentroid_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robovision_interfaces__msg__ObjectCentroid__rosidl_typesupport_introspection_c__ObjectCentroid_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
