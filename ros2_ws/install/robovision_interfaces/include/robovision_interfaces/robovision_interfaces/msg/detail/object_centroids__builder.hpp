// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robovision_interfaces:msg/ObjectCentroids.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robovision_interfaces/msg/object_centroids.hpp"


#ifndef ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROIDS__BUILDER_HPP_
#define ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROIDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robovision_interfaces/msg/detail/object_centroids__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robovision_interfaces
{

namespace msg
{

namespace builder
{

class Init_ObjectCentroids_centroids
{
public:
  Init_ObjectCentroids_centroids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robovision_interfaces::msg::ObjectCentroids centroids(::robovision_interfaces::msg::ObjectCentroids::_centroids_type arg)
  {
    msg_.centroids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robovision_interfaces::msg::ObjectCentroids msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robovision_interfaces::msg::ObjectCentroids>()
{
  return robovision_interfaces::msg::builder::Init_ObjectCentroids_centroids();
}

}  // namespace robovision_interfaces

#endif  // ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROIDS__BUILDER_HPP_
