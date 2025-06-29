// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robovision_interfaces:srv/GetPointCenter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robovision_interfaces/srv/get_point_center.hpp"


#ifndef ROBOVISION_INTERFACES__SRV__DETAIL__GET_POINT_CENTER__STRUCT_HPP_
#define ROBOVISION_INTERFACES__SRV__DETAIL__GET_POINT_CENTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robovision_interfaces__srv__GetPointCenter_Request __attribute__((deprecated))
#else
# define DEPRECATED__robovision_interfaces__srv__GetPointCenter_Request __declspec(deprecated)
#endif

namespace robovision_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPointCenter_Request_
{
  using Type = GetPointCenter_Request_<ContainerAllocator>;

  explicit GetPointCenter_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
    }
  }

  explicit GetPointCenter_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
    }
  }

  // field types and members
  using _x_type =
    int64_t;
  _x_type x;
  using _y_type =
    int64_t;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const int64_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int64_t & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robovision_interfaces__srv__GetPointCenter_Request
    std::shared_ptr<robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robovision_interfaces__srv__GetPointCenter_Request
    std::shared_ptr<robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPointCenter_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPointCenter_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPointCenter_Request_

// alias to use template instance with default allocator
using GetPointCenter_Request =
  robovision_interfaces::srv::GetPointCenter_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robovision_interfaces


// Include directives for member types
// Member 'point'
#include "robovision_interfaces/msg/detail/object_centroid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robovision_interfaces__srv__GetPointCenter_Response __attribute__((deprecated))
#else
# define DEPRECATED__robovision_interfaces__srv__GetPointCenter_Response __declspec(deprecated)
#endif

namespace robovision_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPointCenter_Response_
{
  using Type = GetPointCenter_Response_<ContainerAllocator>;

  explicit GetPointCenter_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    (void)_init;
  }

  explicit GetPointCenter_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _point_type =
    robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator>;
  _point_type point;

  // setters for named parameter idiom
  Type & set__point(
    const robovision_interfaces::msg::ObjectCentroid_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robovision_interfaces__srv__GetPointCenter_Response
    std::shared_ptr<robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robovision_interfaces__srv__GetPointCenter_Response
    std::shared_ptr<robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPointCenter_Response_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPointCenter_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPointCenter_Response_

// alias to use template instance with default allocator
using GetPointCenter_Response =
  robovision_interfaces::srv::GetPointCenter_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robovision_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robovision_interfaces__srv__GetPointCenter_Event __attribute__((deprecated))
#else
# define DEPRECATED__robovision_interfaces__srv__GetPointCenter_Event __declspec(deprecated)
#endif

namespace robovision_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPointCenter_Event_
{
  using Type = GetPointCenter_Event_<ContainerAllocator>;

  explicit GetPointCenter_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetPointCenter_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robovision_interfaces::srv::GetPointCenter_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robovision_interfaces::srv::GetPointCenter_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robovision_interfaces::srv::GetPointCenter_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const robovision_interfaces::srv::GetPointCenter_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robovision_interfaces::srv::GetPointCenter_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robovision_interfaces::srv::GetPointCenter_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robovision_interfaces::srv::GetPointCenter_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robovision_interfaces::srv::GetPointCenter_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robovision_interfaces::srv::GetPointCenter_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robovision_interfaces::srv::GetPointCenter_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robovision_interfaces::srv::GetPointCenter_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robovision_interfaces::srv::GetPointCenter_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robovision_interfaces__srv__GetPointCenter_Event
    std::shared_ptr<robovision_interfaces::srv::GetPointCenter_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robovision_interfaces__srv__GetPointCenter_Event
    std::shared_ptr<robovision_interfaces::srv::GetPointCenter_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPointCenter_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPointCenter_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPointCenter_Event_

// alias to use template instance with default allocator
using GetPointCenter_Event =
  robovision_interfaces::srv::GetPointCenter_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robovision_interfaces

namespace robovision_interfaces
{

namespace srv
{

struct GetPointCenter
{
  using Request = robovision_interfaces::srv::GetPointCenter_Request;
  using Response = robovision_interfaces::srv::GetPointCenter_Response;
  using Event = robovision_interfaces::srv::GetPointCenter_Event;
};

}  // namespace srv

}  // namespace robovision_interfaces

#endif  // ROBOVISION_INTERFACES__SRV__DETAIL__GET_POINT_CENTER__STRUCT_HPP_
