// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolo26_interfaces:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION__BUILDER_HPP_
#define YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolo26_interfaces/msg/detail/yolo_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolo26_interfaces
{

namespace msg
{

namespace builder
{

class Init_YoloDetection_track_id
{
public:
  explicit Init_YoloDetection_track_id(::yolo26_interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  ::yolo26_interfaces::msg::YoloDetection track_id(::yolo26_interfaces::msg::YoloDetection::_track_id_type arg)
  {
    msg_.track_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolo26_interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_ymax
{
public:
  explicit Init_YoloDetection_ymax(::yolo26_interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_track_id ymax(::yolo26_interfaces::msg::YoloDetection::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return Init_YoloDetection_track_id(msg_);
  }

private:
  ::yolo26_interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_xmax
{
public:
  explicit Init_YoloDetection_xmax(::yolo26_interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_ymax xmax(::yolo26_interfaces::msg::YoloDetection::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_YoloDetection_ymax(msg_);
  }

private:
  ::yolo26_interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_ymin
{
public:
  explicit Init_YoloDetection_ymin(::yolo26_interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_xmax ymin(::yolo26_interfaces::msg::YoloDetection::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_YoloDetection_xmax(msg_);
  }

private:
  ::yolo26_interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_xmin
{
public:
  explicit Init_YoloDetection_xmin(::yolo26_interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_ymin xmin(::yolo26_interfaces::msg::YoloDetection::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_YoloDetection_ymin(msg_);
  }

private:
  ::yolo26_interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_confidence
{
public:
  explicit Init_YoloDetection_confidence(::yolo26_interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_xmin confidence(::yolo26_interfaces::msg::YoloDetection::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_YoloDetection_xmin(msg_);
  }

private:
  ::yolo26_interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_class_name
{
public:
  explicit Init_YoloDetection_class_name(::yolo26_interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_confidence class_name(::yolo26_interfaces::msg::YoloDetection::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_YoloDetection_confidence(msg_);
  }

private:
  ::yolo26_interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_class_id
{
public:
  Init_YoloDetection_class_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YoloDetection_class_name class_id(::yolo26_interfaces::msg::YoloDetection::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_YoloDetection_class_name(msg_);
  }

private:
  ::yolo26_interfaces::msg::YoloDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolo26_interfaces::msg::YoloDetection>()
{
  return yolo26_interfaces::msg::builder::Init_YoloDetection_class_id();
}

}  // namespace yolo26_interfaces

#endif  // YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION__BUILDER_HPP_
