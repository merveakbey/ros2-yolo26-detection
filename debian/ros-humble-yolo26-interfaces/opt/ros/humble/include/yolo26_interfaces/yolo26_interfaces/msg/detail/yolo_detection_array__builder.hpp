// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolo26_interfaces:msg/YoloDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION_ARRAY__BUILDER_HPP_
#define YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolo26_interfaces/msg/detail/yolo_detection_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolo26_interfaces
{

namespace msg
{

namespace builder
{

class Init_YoloDetectionArray_detections
{
public:
  explicit Init_YoloDetectionArray_detections(::yolo26_interfaces::msg::YoloDetectionArray & msg)
  : msg_(msg)
  {}
  ::yolo26_interfaces::msg::YoloDetectionArray detections(::yolo26_interfaces::msg::YoloDetectionArray::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolo26_interfaces::msg::YoloDetectionArray msg_;
};

class Init_YoloDetectionArray_image_height
{
public:
  explicit Init_YoloDetectionArray_image_height(::yolo26_interfaces::msg::YoloDetectionArray & msg)
  : msg_(msg)
  {}
  Init_YoloDetectionArray_detections image_height(::yolo26_interfaces::msg::YoloDetectionArray::_image_height_type arg)
  {
    msg_.image_height = std::move(arg);
    return Init_YoloDetectionArray_detections(msg_);
  }

private:
  ::yolo26_interfaces::msg::YoloDetectionArray msg_;
};

class Init_YoloDetectionArray_image_width
{
public:
  explicit Init_YoloDetectionArray_image_width(::yolo26_interfaces::msg::YoloDetectionArray & msg)
  : msg_(msg)
  {}
  Init_YoloDetectionArray_image_height image_width(::yolo26_interfaces::msg::YoloDetectionArray::_image_width_type arg)
  {
    msg_.image_width = std::move(arg);
    return Init_YoloDetectionArray_image_height(msg_);
  }

private:
  ::yolo26_interfaces::msg::YoloDetectionArray msg_;
};

class Init_YoloDetectionArray_header
{
public:
  Init_YoloDetectionArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YoloDetectionArray_image_width header(::yolo26_interfaces::msg::YoloDetectionArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_YoloDetectionArray_image_width(msg_);
  }

private:
  ::yolo26_interfaces::msg::YoloDetectionArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolo26_interfaces::msg::YoloDetectionArray>()
{
  return yolo26_interfaces::msg::builder::Init_YoloDetectionArray_header();
}

}  // namespace yolo26_interfaces

#endif  // YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION_ARRAY__BUILDER_HPP_
