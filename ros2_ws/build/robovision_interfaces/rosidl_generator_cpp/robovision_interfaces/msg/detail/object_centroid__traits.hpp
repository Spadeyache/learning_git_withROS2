// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robovision_interfaces:msg/ObjectCentroid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robovision_interfaces/msg/object_centroid.hpp"


#ifndef ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__TRAITS_HPP_
#define ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robovision_interfaces/msg/detail/object_centroid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robovision_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectCentroid & msg,
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
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: centroid
  {
    if (msg.centroid.size() == 0) {
      out << "centroid: []";
    } else {
      out << "centroid: [";
      size_t pending_items = msg.centroid.size();
      for (auto item : msg.centroid) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const ObjectCentroid & msg,
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

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: centroid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.centroid.size() == 0) {
      out << "centroid: []\n";
    } else {
      out << "centroid:\n";
      for (auto item : msg.centroid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectCentroid & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robovision_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robovision_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robovision_interfaces::msg::ObjectCentroid & msg,
  std::ostream & out, size_t indentation = 0)
{
  robovision_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robovision_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robovision_interfaces::msg::ObjectCentroid & msg)
{
  return robovision_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robovision_interfaces::msg::ObjectCentroid>()
{
  return "robovision_interfaces::msg::ObjectCentroid";
}

template<>
inline const char * name<robovision_interfaces::msg::ObjectCentroid>()
{
  return "robovision_interfaces/msg/ObjectCentroid";
}

template<>
struct has_fixed_size<robovision_interfaces::msg::ObjectCentroid>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robovision_interfaces::msg::ObjectCentroid>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robovision_interfaces::msg::ObjectCentroid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROID__TRAITS_HPP_
