// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robovision_interfaces:msg/ObjectCentroids.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robovision_interfaces/msg/object_centroids.hpp"


#ifndef ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROIDS__TRAITS_HPP_
#define ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROIDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robovision_interfaces/msg/detail/object_centroids__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'centroids'
#include "robovision_interfaces/msg/detail/object_centroid__traits.hpp"

namespace robovision_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectCentroids & msg,
  std::ostream & out)
{
  out << "{";
  // member: centroids
  {
    if (msg.centroids.size() == 0) {
      out << "centroids: []";
    } else {
      out << "centroids: [";
      size_t pending_items = msg.centroids.size();
      for (auto item : msg.centroids) {
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
  const ObjectCentroids & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: centroids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.centroids.size() == 0) {
      out << "centroids: []\n";
    } else {
      out << "centroids:\n";
      for (auto item : msg.centroids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectCentroids & msg, bool use_flow_style = false)
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
  const robovision_interfaces::msg::ObjectCentroids & msg,
  std::ostream & out, size_t indentation = 0)
{
  robovision_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robovision_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robovision_interfaces::msg::ObjectCentroids & msg)
{
  return robovision_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robovision_interfaces::msg::ObjectCentroids>()
{
  return "robovision_interfaces::msg::ObjectCentroids";
}

template<>
inline const char * name<robovision_interfaces::msg::ObjectCentroids>()
{
  return "robovision_interfaces/msg/ObjectCentroids";
}

template<>
struct has_fixed_size<robovision_interfaces::msg::ObjectCentroids>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robovision_interfaces::msg::ObjectCentroids>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robovision_interfaces::msg::ObjectCentroids>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOVISION_INTERFACES__MSG__DETAIL__OBJECT_CENTROIDS__TRAITS_HPP_
