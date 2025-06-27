// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from openni2_camera:srv/GetSerial.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "openni2_camera/srv/get_serial.hpp"


#ifndef OPENNI2_CAMERA__SRV__DETAIL__GET_SERIAL__TRAITS_HPP_
#define OPENNI2_CAMERA__SRV__DETAIL__GET_SERIAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "openni2_camera/srv/detail/get_serial__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace openni2_camera
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSerial_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetSerial_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetSerial_Request & msg, bool use_flow_style = false)
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

}  // namespace openni2_camera

namespace rosidl_generator_traits
{

[[deprecated("use openni2_camera::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const openni2_camera::srv::GetSerial_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  openni2_camera::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use openni2_camera::srv::to_yaml() instead")]]
inline std::string to_yaml(const openni2_camera::srv::GetSerial_Request & msg)
{
  return openni2_camera::srv::to_yaml(msg);
}

template<>
inline const char * data_type<openni2_camera::srv::GetSerial_Request>()
{
  return "openni2_camera::srv::GetSerial_Request";
}

template<>
inline const char * name<openni2_camera::srv::GetSerial_Request>()
{
  return "openni2_camera/srv/GetSerial_Request";
}

template<>
struct has_fixed_size<openni2_camera::srv::GetSerial_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<openni2_camera::srv::GetSerial_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<openni2_camera::srv::GetSerial_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace openni2_camera
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSerial_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: serial
  {
    out << "serial: ";
    rosidl_generator_traits::value_to_yaml(msg.serial, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetSerial_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: serial
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial: ";
    rosidl_generator_traits::value_to_yaml(msg.serial, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetSerial_Response & msg, bool use_flow_style = false)
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

}  // namespace openni2_camera

namespace rosidl_generator_traits
{

[[deprecated("use openni2_camera::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const openni2_camera::srv::GetSerial_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  openni2_camera::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use openni2_camera::srv::to_yaml() instead")]]
inline std::string to_yaml(const openni2_camera::srv::GetSerial_Response & msg)
{
  return openni2_camera::srv::to_yaml(msg);
}

template<>
inline const char * data_type<openni2_camera::srv::GetSerial_Response>()
{
  return "openni2_camera::srv::GetSerial_Response";
}

template<>
inline const char * name<openni2_camera::srv::GetSerial_Response>()
{
  return "openni2_camera/srv/GetSerial_Response";
}

template<>
struct has_fixed_size<openni2_camera::srv::GetSerial_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<openni2_camera::srv::GetSerial_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<openni2_camera::srv::GetSerial_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace openni2_camera
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSerial_Event & msg,
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
  const GetSerial_Event & msg,
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

inline std::string to_yaml(const GetSerial_Event & msg, bool use_flow_style = false)
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

}  // namespace openni2_camera

namespace rosidl_generator_traits
{

[[deprecated("use openni2_camera::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const openni2_camera::srv::GetSerial_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  openni2_camera::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use openni2_camera::srv::to_yaml() instead")]]
inline std::string to_yaml(const openni2_camera::srv::GetSerial_Event & msg)
{
  return openni2_camera::srv::to_yaml(msg);
}

template<>
inline const char * data_type<openni2_camera::srv::GetSerial_Event>()
{
  return "openni2_camera::srv::GetSerial_Event";
}

template<>
inline const char * name<openni2_camera::srv::GetSerial_Event>()
{
  return "openni2_camera/srv/GetSerial_Event";
}

template<>
struct has_fixed_size<openni2_camera::srv::GetSerial_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<openni2_camera::srv::GetSerial_Event>
  : std::integral_constant<bool, has_bounded_size<openni2_camera::srv::GetSerial_Request>::value && has_bounded_size<openni2_camera::srv::GetSerial_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<openni2_camera::srv::GetSerial_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<openni2_camera::srv::GetSerial>()
{
  return "openni2_camera::srv::GetSerial";
}

template<>
inline const char * name<openni2_camera::srv::GetSerial>()
{
  return "openni2_camera/srv/GetSerial";
}

template<>
struct has_fixed_size<openni2_camera::srv::GetSerial>
  : std::integral_constant<
    bool,
    has_fixed_size<openni2_camera::srv::GetSerial_Request>::value &&
    has_fixed_size<openni2_camera::srv::GetSerial_Response>::value
  >
{
};

template<>
struct has_bounded_size<openni2_camera::srv::GetSerial>
  : std::integral_constant<
    bool,
    has_bounded_size<openni2_camera::srv::GetSerial_Request>::value &&
    has_bounded_size<openni2_camera::srv::GetSerial_Response>::value
  >
{
};

template<>
struct is_service<openni2_camera::srv::GetSerial>
  : std::true_type
{
};

template<>
struct is_service_request<openni2_camera::srv::GetSerial_Request>
  : std::true_type
{
};

template<>
struct is_service_response<openni2_camera::srv::GetSerial_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OPENNI2_CAMERA__SRV__DETAIL__GET_SERIAL__TRAITS_HPP_
