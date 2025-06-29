// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robovision_interfaces:msg/ObjectCentroid.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robovision_interfaces/msg/detail/object_centroid__functions.h"
#include "robovision_interfaces/msg/detail/object_centroid__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robovision_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ObjectCentroid_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robovision_interfaces::msg::ObjectCentroid(_init);
}

void ObjectCentroid_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robovision_interfaces::msg::ObjectCentroid *>(message_memory);
  typed_message->~ObjectCentroid();
}

size_t size_function__ObjectCentroid__centroid(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObjectCentroid__centroid(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ObjectCentroid__centroid(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ObjectCentroid__centroid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ObjectCentroid__centroid(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ObjectCentroid__centroid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ObjectCentroid__centroid(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ObjectCentroid__centroid(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectCentroid_message_member_array[4] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robovision_interfaces::msg::ObjectCentroid, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robovision_interfaces::msg::ObjectCentroid, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robovision_interfaces::msg::ObjectCentroid, z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "centroid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robovision_interfaces::msg::ObjectCentroid, centroid),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObjectCentroid__centroid,  // size() function pointer
    get_const_function__ObjectCentroid__centroid,  // get_const(index) function pointer
    get_function__ObjectCentroid__centroid,  // get(index) function pointer
    fetch_function__ObjectCentroid__centroid,  // fetch(index, &value) function pointer
    assign_function__ObjectCentroid__centroid,  // assign(index, value) function pointer
    resize_function__ObjectCentroid__centroid  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectCentroid_message_members = {
  "robovision_interfaces::msg",  // message namespace
  "ObjectCentroid",  // message name
  4,  // number of fields
  sizeof(robovision_interfaces::msg::ObjectCentroid),
  false,  // has_any_key_member_
  ObjectCentroid_message_member_array,  // message members
  ObjectCentroid_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectCentroid_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObjectCentroid_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectCentroid_message_members,
  get_message_typesupport_handle_function,
  &robovision_interfaces__msg__ObjectCentroid__get_type_hash,
  &robovision_interfaces__msg__ObjectCentroid__get_type_description,
  &robovision_interfaces__msg__ObjectCentroid__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robovision_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robovision_interfaces::msg::ObjectCentroid>()
{
  return &::robovision_interfaces::msg::rosidl_typesupport_introspection_cpp::ObjectCentroid_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robovision_interfaces, msg, ObjectCentroid)() {
  return &::robovision_interfaces::msg::rosidl_typesupport_introspection_cpp::ObjectCentroid_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
