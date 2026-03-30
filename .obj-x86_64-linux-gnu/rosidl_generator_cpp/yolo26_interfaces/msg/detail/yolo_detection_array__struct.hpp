// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yolo26_interfaces:msg/YoloDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION_ARRAY__STRUCT_HPP_
#define YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'detections'
#include "yolo26_interfaces/msg/detail/yolo_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yolo26_interfaces__msg__YoloDetectionArray __attribute__((deprecated))
#else
# define DEPRECATED__yolo26_interfaces__msg__YoloDetectionArray __declspec(deprecated)
#endif

namespace yolo26_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YoloDetectionArray_
{
  using Type = YoloDetectionArray_<ContainerAllocator>;

  explicit YoloDetectionArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_width = 0ul;
      this->image_height = 0ul;
    }
  }

  explicit YoloDetectionArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_width = 0ul;
      this->image_height = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _image_width_type =
    uint32_t;
  _image_width_type image_width;
  using _image_height_type =
    uint32_t;
  _image_height_type image_height;
  using _detections_type =
    std::vector<yolo26_interfaces::msg::YoloDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<yolo26_interfaces::msg::YoloDetection_<ContainerAllocator>>>;
  _detections_type detections;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__image_width(
    const uint32_t & _arg)
  {
    this->image_width = _arg;
    return *this;
  }
  Type & set__image_height(
    const uint32_t & _arg)
  {
    this->image_height = _arg;
    return *this;
  }
  Type & set__detections(
    const std::vector<yolo26_interfaces::msg::YoloDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<yolo26_interfaces::msg::YoloDetection_<ContainerAllocator>>> & _arg)
  {
    this->detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yolo26_interfaces::msg::YoloDetectionArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const yolo26_interfaces::msg::YoloDetectionArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yolo26_interfaces::msg::YoloDetectionArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yolo26_interfaces::msg::YoloDetectionArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yolo26_interfaces::msg::YoloDetectionArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yolo26_interfaces::msg::YoloDetectionArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yolo26_interfaces::msg::YoloDetectionArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yolo26_interfaces::msg::YoloDetectionArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yolo26_interfaces::msg::YoloDetectionArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yolo26_interfaces::msg::YoloDetectionArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yolo26_interfaces__msg__YoloDetectionArray
    std::shared_ptr<yolo26_interfaces::msg::YoloDetectionArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yolo26_interfaces__msg__YoloDetectionArray
    std::shared_ptr<yolo26_interfaces::msg::YoloDetectionArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YoloDetectionArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->image_width != other.image_width) {
      return false;
    }
    if (this->image_height != other.image_height) {
      return false;
    }
    if (this->detections != other.detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const YoloDetectionArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YoloDetectionArray_

// alias to use template instance with default allocator
using YoloDetectionArray =
  yolo26_interfaces::msg::YoloDetectionArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yolo26_interfaces

#endif  // YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION_ARRAY__STRUCT_HPP_
