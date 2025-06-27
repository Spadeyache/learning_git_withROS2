// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robovision_interfaces:msg/ObjectCentroid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robovision_interfaces/msg/object_centroid.hpp"


#ifndef ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__STRUCT_HPP_
#define ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robovision_interfaces__msg__ObjectCentroid __attribute__((deprecated))
#else
# define DEPRECATED__robovision_interfaces__msg__ObjectCentroid __declspec(deprecated)
#endif

namespace robovision_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectCentroid_
{
  using Type = ObjectCentroid_<ContainerAllocator>;

  explicit ObjectCentroid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  explicit ObjectCentroid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _centroid_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _centroid_type centroid;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__centroid(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->centroid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator> *;
  using ConstRawPtr =
    const robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robovision_interfaces__msg__ObjectCentroid
    std::shared_ptr<robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robovision_interfaces__msg__ObjectCentroid
    std::shared_ptr<robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectCentroid_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->centroid != other.centroid) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectCentroid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectCentroid_

// alias to use template instance with default allocator
using ObjectCentroid =
  robovision_interfaces::msg::ObjectCentroid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robovision_interfaces

#endif  // ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__STRUCT_HPP_
