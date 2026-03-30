// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolo26_interfaces:msg/YoloDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION_ARRAY__STRUCT_H_
#define YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'detections'
#include "yolo26_interfaces/msg/detail/yolo_detection__struct.h"

/// Struct defined in msg/YoloDetectionArray in the package yolo26_interfaces.
typedef struct yolo26_interfaces__msg__YoloDetectionArray
{
  std_msgs__msg__Header header;
  uint32_t image_width;
  uint32_t image_height;
  yolo26_interfaces__msg__YoloDetection__Sequence detections;
} yolo26_interfaces__msg__YoloDetectionArray;

// Struct for a sequence of yolo26_interfaces__msg__YoloDetectionArray.
typedef struct yolo26_interfaces__msg__YoloDetectionArray__Sequence
{
  yolo26_interfaces__msg__YoloDetectionArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolo26_interfaces__msg__YoloDetectionArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION_ARRAY__STRUCT_H_
