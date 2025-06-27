// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robovision_interfaces:srv/GetPointCenter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robovision_interfaces/srv/get_point_center.hpp"


#ifndef ROBOVISION_INTERFACES__SRV__DETAIL__GET_POINT_CENTER__BUILDER_HPP_
#define ROBOVISION_INTERFACES__SRV__DETAIL__GET_POINT_CENTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robovision_interfaces/srv/detail/get_point_center__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robovision_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPointCenter_Request_y
{
public:
  explicit Init_GetPointCenter_Request_y(::robovision_interfaces::srv::GetPointCenter_Request & msg)
  : msg_(msg)
  {}
  ::robovision_interfaces::srv::GetPointCenter_Request y(::robovision_interfaces::srv::GetPointCenter_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robovision_interfaces::srv::GetPointCenter_Request msg_;
};

class Init_GetPointCenter_Request_x
{
public:
  Init_GetPointCenter_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPointCenter_Request_y x(::robovision_interfaces::srv::GetPointCenter_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GetPointCenter_Request_y(msg_);
  }

private:
  ::robovision_interfaces::srv::GetPointCenter_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robovision_interfaces::srv::GetPointCenter_Request>()
{
  return robovision_interfaces::srv::builder::Init_GetPointCenter_Request_x();
}

}  // namespace robovision_interfaces


namespace robovision_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPointCenter_Response_point
{
public:
  Init_GetPointCenter_Response_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robovision_interfaces::srv::GetPointCenter_Response point(::robovision_interfaces::srv::GetPointCenter_Response::_point_type arg)
  {
    msg_.point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robovision_interfaces::srv::GetPointCenter_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robovision_interfaces::srv::GetPointCenter_Response>()
{
  return robovision_interfaces::srv::builder::Init_GetPointCenter_Response_point();
}

}  // namespace robovision_interfaces


namespace robovision_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPointCenter_Event_response
{
public:
  explicit Init_GetPointCenter_Event_response(::robovision_interfaces::srv::GetPointCenter_Event & msg)
  : msg_(msg)
  {}
  ::robovision_interfaces::srv::GetPointCenter_Event response(::robovision_interfaces::srv::GetPointCenter_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robovision_interfaces::srv::GetPointCenter_Event msg_;
};

class Init_GetPointCenter_Event_request
{
public:
  explicit Init_GetPointCenter_Event_request(::robovision_interfaces::srv::GetPointCenter_Event & msg)
  : msg_(msg)
  {}
  Init_GetPointCenter_Event_response request(::robovision_interfaces::srv::GetPointCenter_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetPointCenter_Event_response(msg_);
  }

private:
  ::robovision_interfaces::srv::GetPointCenter_Event msg_;
};

class Init_GetPointCenter_Event_info
{
public:
  Init_GetPointCenter_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPointCenter_Event_request info(::robovision_interfaces::srv::GetPointCenter_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetPointCenter_Event_request(msg_);
  }

private:
  ::robovision_interfaces::srv::GetPointCenter_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robovision_interfaces::srv::GetPointCenter_Event>()
{
  return robovision_interfaces::srv::builder::Init_GetPointCenter_Event_info();
}

}  // namespace robovision_interfaces

#endif  // ROBOVISION_INTERFACES__SRV__DETAIL__GET_POINT_CENTER__BUILDER_HPP_
