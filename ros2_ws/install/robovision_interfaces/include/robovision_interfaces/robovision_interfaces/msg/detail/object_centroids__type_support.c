// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robovision_interfaces:msg/ObjectCentroids.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robovision_interfaces/msg/detail/object_centroids__rosidl_typesupport_introspection_c.h"
#include "robovision_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robovision_interfaces/msg/detail/object_centroids__functions.h"
#include "robovision_interfaces/msg/detail/object_centroids__struct.h"


// Include directives for member types
// Member `centroids`
#include "robovision_interfaces/msg/object_centroid.h"
// Member `centroids`
#include "robovision_interfaces/msg/detail/object_centroid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__ObjectCentroids_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robovision_interfaces__msg__ObjectCentroids__init(message_memory);
}

void robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__ObjectCentroids_fini_function(void * message_memory)
{
  robovision_interfaces__msg__ObjectCentroids__fini(message_memory);
}

size_t robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__size_function__ObjectCentroids__centroids(
  const void * untyped_member)
{
  const robovision_interfaces__msg__ObjectCentroid__Sequence * member =
    (const robovision_interfaces__msg__ObjectCentroid__Sequence *)(untyped_member);
  return member->size;
}

const void * robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__get_const_function__ObjectCentroids__centroids(
  const void * untyped_member, size_t index)
{
  const robovision_interfaces__msg__ObjectCentroid__Sequence * member =
    (const robovision_interfaces__msg__ObjectCentroid__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__get_function__ObjectCentroids__centroids(
  void * untyped_member, size_t index)
{
  robovision_interfaces__msg__ObjectCentroid__Sequence * member =
    (robovision_interfaces__msg__ObjectCentroid__Sequence *)(untyped_member);
  return &member->data[index];
}

void robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__fetch_function__ObjectCentroids__centroids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robovision_interfaces__msg__ObjectCentroid * item =
    ((const robovision_interfaces__msg__ObjectCentroid *)
    robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__get_const_function__ObjectCentroids__centroids(untyped_member, index));
  robovision_interfaces__msg__ObjectCentroid * value =
    (robovision_interfaces__msg__ObjectCentroid *)(untyped_value);
  *value = *item;
}

void robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__assign_function__ObjectCentroids__centroids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robovision_interfaces__msg__ObjectCentroid * item =
    ((robovision_interfaces__msg__ObjectCentroid *)
    robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__get_function__ObjectCentroids__centroids(untyped_member, index));
  const robovision_interfaces__msg__ObjectCentroid * value =
    (const robovision_interfaces__msg__ObjectCentroid *)(untyped_value);
  *item = *value;
}

bool robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__resize_function__ObjectCentroids__centroids(
  void * untyped_member, size_t size)
{
  robovision_interfaces__msg__ObjectCentroid__Sequence * member =
    (robovision_interfaces__msg__ObjectCentroid__Sequence *)(untyped_member);
  robovision_interfaces__msg__ObjectCentroid__Sequence__fini(member);
  return robovision_interfaces__msg__ObjectCentroid__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__ObjectCentroids_message_member_array[1] = {
  {
    "centroids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robovision_interfaces__msg__ObjectCentroids, centroids),  // bytes offset in struct
    NULL,  // default value
    robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__size_function__ObjectCentroids__centroids,  // size() function pointer
    robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__get_const_function__ObjectCentroids__centroids,  // get_const(index) function pointer
    robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__get_function__ObjectCentroids__centroids,  // get(index) function pointer
    robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__fetch_function__ObjectCentroids__centroids,  // fetch(index, &value) function pointer
    robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__assign_function__ObjectCentroids__centroids,  // assign(index, value) function pointer
    robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__resize_function__ObjectCentroids__centroids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__ObjectCentroids_message_members = {
  "robovision_interfaces__msg",  // message namespace
  "ObjectCentroids",  // message name
  1,  // number of fields
  sizeof(robovision_interfaces__msg__ObjectCentroids),
  false,  // has_any_key_member_
  robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__ObjectCentroids_message_member_array,  // message members
  robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__ObjectCentroids_init_function,  // function to initialize message memory (memory has to be allocated)
  robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__ObjectCentroids_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__ObjectCentroids_message_type_support_handle = {
  0,
  &robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__ObjectCentroids_message_members,
  get_message_typesupport_handle_function,
  &robovision_interfaces__msg__ObjectCentroids__get_type_hash,
  &robovision_interfaces__msg__ObjectCentroids__get_type_description,
  &robovision_interfaces__msg__ObjectCentroids__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robovision_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, msg, ObjectCentroids)() {
  robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__ObjectCentroids_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, msg, ObjectCentroid)();
  if (!robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__ObjectCentroids_message_type_support_handle.typesupport_identifier) {
    robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__ObjectCentroids_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robovision_interfaces__msg__ObjectCentroids__rosidl_typesupport_introspection_c__ObjectCentroids_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
