// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yolo26_interfaces:msg/YoloDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION_ARRAY__TRAITS_HPP_
#define YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yolo26_interfaces/msg/detail/yolo_detection_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detections'
#include "yolo26_interfaces/msg/detail/yolo_detection__traits.hpp"

namespace yolo26_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const YoloDetectionArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: image_width
  {
    out << "image_width: ";
    rosidl_generator_traits::value_to_yaml(msg.image_width, out);
    out << ", ";
  }

  // member: image_height
  {
    out << "image_height: ";
    rosidl_generator_traits::value_to_yaml(msg.image_height, out);
    out << ", ";
  }

  // member: detections
  {
    if (msg.detections.size() == 0) {
      out << "detections: []";
    } else {
      out << "detections: [";
      size_t pending_items = msg.detections.size();
      for (auto item : msg.detections) {
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
  const YoloDetectionArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: image_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_width: ";
    rosidl_generator_traits::value_to_yaml(msg.image_width, out);
    out << "\n";
  }

  // member: image_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_height: ";
    rosidl_generator_traits::value_to_yaml(msg.image_height, out);
    out << "\n";
  }

  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections.size() == 0) {
      out << "detections: []\n";
    } else {
      out << "detections:\n";
      for (auto item : msg.detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const YoloDetectionArray & msg, bool use_flow_style = false)
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

}  // namespace yolo26_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use yolo26_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yolo26_interfaces::msg::YoloDetectionArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  yolo26_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yolo26_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const yolo26_interfaces::msg::YoloDetectionArray & msg)
{
  return yolo26_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yolo26_interfaces::msg::YoloDetectionArray>()
{
  return "yolo26_interfaces::msg::YoloDetectionArray";
}

template<>
inline const char * name<yolo26_interfaces::msg::YoloDetectionArray>()
{
  return "yolo26_interfaces/msg/YoloDetectionArray";
}

template<>
struct has_fixed_size<yolo26_interfaces::msg::YoloDetectionArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yolo26_interfaces::msg::YoloDetectionArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yolo26_interfaces::msg::YoloDetectionArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION_ARRAY__TRAITS_HPP_
