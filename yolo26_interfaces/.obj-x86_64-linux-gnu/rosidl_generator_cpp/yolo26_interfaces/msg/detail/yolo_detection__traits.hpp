// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yolo26_interfaces:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION__TRAITS_HPP_
#define YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yolo26_interfaces/msg/detail/yolo_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yolo26_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const YoloDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: class_id
  {
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
    out << ", ";
  }

  // member: class_name
  {
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: xmin
  {
    out << "xmin: ";
    rosidl_generator_traits::value_to_yaml(msg.xmin, out);
    out << ", ";
  }

  // member: ymin
  {
    out << "ymin: ";
    rosidl_generator_traits::value_to_yaml(msg.ymin, out);
    out << ", ";
  }

  // member: xmax
  {
    out << "xmax: ";
    rosidl_generator_traits::value_to_yaml(msg.xmax, out);
    out << ", ";
  }

  // member: ymax
  {
    out << "ymax: ";
    rosidl_generator_traits::value_to_yaml(msg.ymax, out);
    out << ", ";
  }

  // member: track_id
  {
    out << "track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const YoloDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: class_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
    out << "\n";
  }

  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: xmin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xmin: ";
    rosidl_generator_traits::value_to_yaml(msg.xmin, out);
    out << "\n";
  }

  // member: ymin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ymin: ";
    rosidl_generator_traits::value_to_yaml(msg.ymin, out);
    out << "\n";
  }

  // member: xmax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xmax: ";
    rosidl_generator_traits::value_to_yaml(msg.xmax, out);
    out << "\n";
  }

  // member: ymax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ymax: ";
    rosidl_generator_traits::value_to_yaml(msg.ymax, out);
    out << "\n";
  }

  // member: track_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const YoloDetection & msg, bool use_flow_style = false)
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
  const yolo26_interfaces::msg::YoloDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  yolo26_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yolo26_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const yolo26_interfaces::msg::YoloDetection & msg)
{
  return yolo26_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yolo26_interfaces::msg::YoloDetection>()
{
  return "yolo26_interfaces::msg::YoloDetection";
}

template<>
inline const char * name<yolo26_interfaces::msg::YoloDetection>()
{
  return "yolo26_interfaces/msg/YoloDetection";
}

template<>
struct has_fixed_size<yolo26_interfaces::msg::YoloDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yolo26_interfaces::msg::YoloDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yolo26_interfaces::msg::YoloDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION__TRAITS_HPP_
