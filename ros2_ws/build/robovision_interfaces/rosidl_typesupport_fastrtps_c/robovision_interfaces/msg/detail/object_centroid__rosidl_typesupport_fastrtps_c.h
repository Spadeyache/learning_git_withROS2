// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from robovision_interfaces:msg/ObjectCentroid.idl
// generated code does not contain a copyright notice
#ifndef ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robovision_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robovision_interfaces/msg/detail/object_centroid__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robovision_interfaces
bool cdr_serialize_robovision_interfaces__msg__ObjectCentroid(
  const robovision_interfaces__msg__ObjectCentroid * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robovision_interfaces
bool cdr_deserialize_robovision_interfaces__msg__ObjectCentroid(
  eprosima::fastcdr::Cdr &,
  robovision_interfaces__msg__ObjectCentroid * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robovision_interfaces
size_t get_serialized_size_robovision_interfaces__msg__ObjectCentroid(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robovision_interfaces
size_t max_serialized_size_robovision_interfaces__msg__ObjectCentroid(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robovision_interfaces
bool cdr_serialize_key_robovision_interfaces__msg__ObjectCentroid(
  const robovision_interfaces__msg__ObjectCentroid * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robovision_interfaces
size_t get_serialized_size_key_robovision_interfaces__msg__ObjectCentroid(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robovision_interfaces
size_t max_serialized_size_key_robovision_interfaces__msg__ObjectCentroid(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robovision_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robovision_interfaces, msg, ObjectCentroid)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
