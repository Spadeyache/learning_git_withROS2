// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robovision_interfaces:msg/ObjectCentroids.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robovision_interfaces/msg/detail/object_centroids__functions.h"
#include "robovision_interfaces/msg/detail/object_centroids__struct.hpp"
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

void ObjectCentroids_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robovision_interfaces::msg::ObjectCentroids(_init);
}

void ObjectCentroids_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robovision_interfaces::msg::ObjectCentroids *>(message_memory);
  typed_message->~ObjectCentroids();
}

size_t size_function__ObjectCentroids__centroids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robovision_interfaces::msg::ObjectCentroid> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObjectCentroids__centroids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robovision_interfaces::msg::ObjectCentroid> *>(untyped_member);
  return &member[index];
}

void * get_function__ObjectCentroids__centroids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robovision_interfaces::msg::ObjectCentroid> *>(untyped_member);
  return &member[index];
}

void fetch_function__ObjectCentroids__centroids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robovision_interfaces::msg::ObjectCentroid *>(
    get_const_function__ObjectCentroids__centroids(untyped_member, index));
  auto & value = *reinterpret_cast<robovision_interfaces::msg::ObjectCentroid *>(untyped_value);
  value = item;
}

void assign_function__ObjectCentroids__centroids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robovision_interfaces::msg::ObjectCentroid *>(
    get_function__ObjectCentroids__centroids(untyped_member, index));
  const auto & value = *reinterpret_cast<const robovision_interfaces::msg::ObjectCentroid *>(untyped_value);
  item = value;
}

void resize_function__ObjectCentroids__centroids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robovision_interfaces::msg::ObjectCentroid> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectCentroids_message_member_array[1] = {
  {
    "centroids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robovision_interfaces::msg::ObjectCentroid>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robovision_interfaces::msg::ObjectCentroids, centroids),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObjectCentroids__centroids,  // size() function pointer
    get_const_function__ObjectCentroids__centroids,  // get_const(index) function pointer
    get_function__ObjectCentroids__centroids,  // get(index) function pointer
    fetch_function__ObjectCentroids__centroids,  // fetch(index, &value) function pointer
    assign_function__ObjectCentroids__centroids,  // assign(index, value) function pointer
    resize_function__ObjectCentroids__centroids  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectCentroids_message_members = {
  "robovision_interfaces::msg",  // message namespace
  "ObjectCentroids",  // message name
  1,  // number of fields
  sizeof(robovision_interfaces::msg::ObjectCentroids),
  false,  // has_any_key_member_
  ObjectCentroids_message_member_array,  // message members
  ObjectCentroids_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectCentroids_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObjectCentroids_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectCentroids_message_members,
  get_message_typesupport_handle_function,
  &robovision_interfaces__msg__ObjectCentroids__get_type_hash,
  &robovision_interfaces__msg__ObjectCentroids__get_type_description,
  &robovision_interfaces__msg__ObjectCentroids__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robovision_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robovision_interfaces::msg::ObjectCentroids>()
{
  return &::robovision_interfaces::msg::rosidl_typesupport_introspection_cpp::ObjectCentroids_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robovision_interfaces, msg, ObjectCentroids)() {
  return &::robovision_interfaces::msg::rosidl_typesupport_introspection_cpp::ObjectCentroids_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
