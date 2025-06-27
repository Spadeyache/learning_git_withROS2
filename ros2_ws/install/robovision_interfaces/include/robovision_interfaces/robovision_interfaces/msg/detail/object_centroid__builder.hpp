// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robovision_interfaces:msg/ObjectCentroid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robovision_interfaces/msg/object_centroid.hpp"


#ifndef ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__BUILDER_HPP_
#define ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robovision_interfaces/msg/detail/object_centroid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robovision_interfaces
{

namespace msg
{

namespace builder
{

class Init_ObjectCentroid_centroid
{
public:
  explicit Init_ObjectCentroid_centroid(::robovision_interfaces::msg::ObjectCentroid & msg)
  : msg_(msg)
  {}
  ::robovision_interfaces::msg::ObjectCentroid centroid(::robovision_interfaces::msg::ObjectCentroid::_centroid_type arg)
  {
    msg_.centroid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robovision_interfaces::msg::ObjectCentroid msg_;
};

class Init_ObjectCentroid_z
{
public:
  explicit Init_ObjectCentroid_z(::robovision_interfaces::msg::ObjectCentroid & msg)
  : msg_(msg)
  {}
  Init_ObjectCentroid_centroid z(::robovision_interfaces::msg::ObjectCentroid::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_ObjectCentroid_centroid(msg_);
  }

private:
  ::robovision_interfaces::msg::ObjectCentroid msg_;
};

class Init_ObjectCentroid_y
{
public:
  explicit Init_ObjectCentroid_y(::robovision_interfaces::msg::ObjectCentroid & msg)
  : msg_(msg)
  {}
  Init_ObjectCentroid_z y(::robovision_interfaces::msg::ObjectCentroid::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ObjectCentroid_z(msg_);
  }

private:
  ::robovision_interfaces::msg::ObjectCentroid msg_;
};

class Init_ObjectCentroid_x
{
public:
  Init_ObjectCentroid_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectCentroid_y x(::robovision_interfaces::msg::ObjectCentroid::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ObjectCentroid_y(msg_);
  }

private:
  ::robovision_interfaces::msg::ObjectCentroid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robovision_interfaces::msg::ObjectCentroid>()
{
  return robovision_interfaces::msg::builder::Init_ObjectCentroid_x();
}

}  // namespace robovision_interfaces

#endif  // ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__BUILDER_HPP_
