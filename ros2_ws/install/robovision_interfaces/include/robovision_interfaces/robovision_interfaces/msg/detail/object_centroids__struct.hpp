// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robovision_interfaces:msg/ObjectCentroids.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robovision_interfaces/msg/object_centroids.hpp"


#ifndef ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROIDS__STRUCT_HPP_
#define ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROIDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'centroids'
#include "robovision_interfaces/msg/detail/object_centroid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robovision_interfaces__msg__ObjectCentroids __attribute__((deprecated))
#else
# define DEPRECATED__robovision_interfaces__msg__ObjectCentroids __declspec(deprecated)
#endif

namespace robovision_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectCentroids_
{
  using Type = ObjectCentroids_<ContainerAllocator>;

  explicit ObjectCentroids_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ObjectCentroids_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _centroids_type =
    std::vector<robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator>>>;
  _centroids_type centroids;

  // setters for named parameter idiom
  Type & set__centroids(
    const std::vector<robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator>>> & _arg)
  {
    this->centroids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robovision_interfaces::msg::ObjectCentroids_<ContainerAllocator> *;
  using ConstRawPtr =
    const robovision_interfaces::msg::ObjectCentroids_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robovision_interfaces::msg::ObjectCentroids_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robovision_interfaces::msg::ObjectCentroids_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robovision_interfaces::msg::ObjectCentroids_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robovision_interfaces::msg::ObjectCentroids_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robovision_interfaces::msg::ObjectCentroids_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robovision_interfaces::msg::ObjectCentroids_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robovision_interfaces::msg::ObjectCentroids_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robovision_interfaces::msg::ObjectCentroids_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robovision_interfaces__msg__ObjectCentroids
    std::shared_ptr<robovision_interfaces::msg::ObjectCentroids_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robovision_interfaces__msg__ObjectCentroids
    std::shared_ptr<robovision_interfaces::msg::ObjectCentroids_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectCentroids_ & other) const
  {
    if (this->centroids != other.centroids) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectCentroids_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectCentroids_

// alias to use template instance with default allocator
using ObjectCentroids =
  robovision_interfaces::msg::ObjectCentroids_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robovision_interfaces

#endif  // ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROIDS__STRUCT_HPP_
