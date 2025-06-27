// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robovision_interfaces:srv/GetPointCenter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robovision_interfaces/srv/get_point_center.hpp"


#ifndef ROBOVISION_INTERFACES__SRV__DETAIL__GET_POINT_CENTER__TRAITS_HPP_
#define ROBOVISION_INTERFACES__SRV__DETAIL__GET_POINT_CENTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robovision_interfaces/srv/detail/get_point_center__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robovision_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPointCenter_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPointCenter_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPointCenter_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robovision_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robovision_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robovision_interfaces::srv::GetPointCenter_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robovision_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robovision_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robovision_interfaces::srv::GetPointCenter_Request & msg)
{
  return robovision_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robovision_interfaces::srv::GetPointCenter_Request>()
{
  return "robovision_interfaces::srv::GetPointCenter_Request";
}

template<>
inline const char * name<robovision_interfaces::srv::GetPointCenter_Request>()
{
  return "robovision_interfaces/srv/GetPointCenter_Request";
}

template<>
struct has_fixed_size<robovision_interfaces::srv::GetPointCenter_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robovision_interfaces::srv::GetPointCenter_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robovision_interfaces::srv::GetPointCenter_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'point'
#include "robovision_interfaces/msg/detail/object_centroid__traits.hpp"

namespace robovision_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPointCenter_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPointCenter_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPointCenter_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robovision_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robovision_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robovision_interfaces::srv::GetPointCenter_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robovision_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robovision_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robovision_interfaces::srv::GetPointCenter_Response & msg)
{
  return robovision_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robovision_interfaces::srv::GetPointCenter_Response>()
{
  return "robovision_interfaces::srv::GetPointCenter_Response";
}

template<>
inline const char * name<robovision_interfaces::srv::GetPointCenter_Response>()
{
  return "robovision_interfaces/srv/GetPointCenter_Response";
}

template<>
struct has_fixed_size<robovision_interfaces::srv::GetPointCenter_Response>
  : std::integral_constant<bool, has_fixed_size<robovision_interfaces::msg::ObjectCentroid>::value> {};

template<>
struct has_bounded_size<robovision_interfaces::srv::GetPointCenter_Response>
  : std::integral_constant<bool, has_bounded_size<robovision_interfaces::msg::ObjectCentroid>::value> {};

template<>
struct is_message<robovision_interfaces::srv::GetPointCenter_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace robovision_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPointCenter_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPointCenter_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPointCenter_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robovision_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robovision_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robovision_interfaces::srv::GetPointCenter_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  robovision_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robovision_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robovision_interfaces::srv::GetPointCenter_Event & msg)
{
  return robovision_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robovision_interfaces::srv::GetPointCenter_Event>()
{
  return "robovision_interfaces::srv::GetPointCenter_Event";
}

template<>
inline const char * name<robovision_interfaces::srv::GetPointCenter_Event>()
{
  return "robovision_interfaces/srv/GetPointCenter_Event";
}

template<>
struct has_fixed_size<robovision_interfaces::srv::GetPointCenter_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robovision_interfaces::srv::GetPointCenter_Event>
  : std::integral_constant<bool, has_bounded_size<robovision_interfaces::srv::GetPointCenter_Request>::value && has_bounded_size<robovision_interfaces::srv::GetPointCenter_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<robovision_interfaces::srv::GetPointCenter_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robovision_interfaces::srv::GetPointCenter>()
{
  return "robovision_interfaces::srv::GetPointCenter";
}

template<>
inline const char * name<robovision_interfaces::srv::GetPointCenter>()
{
  return "robovision_interfaces/srv/GetPointCenter";
}

template<>
struct has_fixed_size<robovision_interfaces::srv::GetPointCenter>
  : std::integral_constant<
    bool,
    has_fixed_size<robovision_interfaces::srv::GetPointCenter_Request>::value &&
    has_fixed_size<robovision_interfaces::srv::GetPointCenter_Response>::value
  >
{
};

template<>
struct has_bounded_size<robovision_interfaces::srv::GetPointCenter>
  : std::integral_constant<
    bool,
    has_bounded_size<robovision_interfaces::srv::GetPointCenter_Request>::value &&
    has_bounded_size<robovision_interfaces::srv::GetPointCenter_Response>::value
  >
{
};

template<>
struct is_service<robovision_interfaces::srv::GetPointCenter>
  : std::true_type
{
};

template<>
struct is_service_request<robovision_interfaces::srv::GetPointCenter_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robovision_interfaces::srv::GetPointCenter_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOVISION_INTERFACES__SRV__DETAIL__GET_POINT_CENTER__TRAITS_HPP_
