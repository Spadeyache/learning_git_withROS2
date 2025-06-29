// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robovision_interfaces:msg/ObjectCentroids.idl
// generated code does not contain a copyright notice
#include "robovision_interfaces/msg/detail/object_centroids__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robovision_interfaces/msg/detail/object_centroids__functions.h"
#include "robovision_interfaces/msg/detail/object_centroids__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace robovision_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const robovision_interfaces::msg::ObjectCentroid &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  robovision_interfaces::msg::ObjectCentroid &);
size_t get_serialized_size(
  const robovision_interfaces::msg::ObjectCentroid &,
  size_t current_alignment);
size_t
max_serialized_size_ObjectCentroid(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const robovision_interfaces::msg::ObjectCentroid &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const robovision_interfaces::msg::ObjectCentroid &,
  size_t current_alignment);
size_t
max_serialized_size_key_ObjectCentroid(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace robovision_interfaces


namespace robovision_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robovision_interfaces
cdr_serialize(
  const robovision_interfaces::msg::ObjectCentroids & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: centroids
  {
    size_t size = ros_message.centroids.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      robovision_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.centroids[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robovision_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robovision_interfaces::msg::ObjectCentroids & ros_message)
{
  // Member: centroids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.centroids.resize(size);
    for (size_t i = 0; i < size; i++) {
      robovision_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.centroids[i]);
    }
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robovision_interfaces
get_serialized_size(
  const robovision_interfaces::msg::ObjectCentroids & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: centroids
  {
    size_t array_size = ros_message.centroids.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        robovision_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.centroids[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robovision_interfaces
max_serialized_size_ObjectCentroids(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: centroids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        robovision_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_ObjectCentroid(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robovision_interfaces::msg::ObjectCentroids;
    is_plain =
      (
      offsetof(DataType, centroids) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robovision_interfaces
cdr_serialize_key(
  const robovision_interfaces::msg::ObjectCentroids & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: centroids
  {
    size_t size = ros_message.centroids.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      robovision_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.centroids[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robovision_interfaces
get_serialized_size_key(
  const robovision_interfaces::msg::ObjectCentroids & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: centroids
  {
    size_t array_size = ros_message.centroids.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        robovision_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.centroids[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robovision_interfaces
max_serialized_size_key_ObjectCentroids(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: centroids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        robovision_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_ObjectCentroid(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robovision_interfaces::msg::ObjectCentroids;
    is_plain =
      (
      offsetof(DataType, centroids) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _ObjectCentroids__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robovision_interfaces::msg::ObjectCentroids *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObjectCentroids__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robovision_interfaces::msg::ObjectCentroids *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObjectCentroids__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robovision_interfaces::msg::ObjectCentroids *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObjectCentroids__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ObjectCentroids(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ObjectCentroids__callbacks = {
  "robovision_interfaces::msg",
  "ObjectCentroids",
  _ObjectCentroids__cdr_serialize,
  _ObjectCentroids__cdr_deserialize,
  _ObjectCentroids__get_serialized_size,
  _ObjectCentroids__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ObjectCentroids__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObjectCentroids__callbacks,
  get_message_typesupport_handle_function,
  &robovision_interfaces__msg__ObjectCentroids__get_type_hash,
  &robovision_interfaces__msg__ObjectCentroids__get_type_description,
  &robovision_interfaces__msg__ObjectCentroids__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robovision_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robovision_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robovision_interfaces::msg::ObjectCentroids>()
{
  return &robovision_interfaces::msg::typesupport_fastrtps_cpp::_ObjectCentroids__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robovision_interfaces, msg, ObjectCentroids)() {
  return &robovision_interfaces::msg::typesupport_fastrtps_cpp::_ObjectCentroids__handle;
}

#ifdef __cplusplus
}
#endif
