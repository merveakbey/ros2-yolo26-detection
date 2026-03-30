// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolo26_interfaces:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION__STRUCT_H_
#define YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/YoloDetection in the package yolo26_interfaces.
typedef struct yolo26_interfaces__msg__YoloDetection
{
  int32_t class_id;
  rosidl_runtime_c__String class_name;
  float confidence;
  float xmin;
  float ymin;
  float xmax;
  float ymax;
  int32_t track_id;
} yolo26_interfaces__msg__YoloDetection;

// Struct for a sequence of yolo26_interfaces__msg__YoloDetection.
typedef struct yolo26_interfaces__msg__YoloDetection__Sequence
{
  yolo26_interfaces__msg__YoloDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolo26_interfaces__msg__YoloDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLO26_INTERFACES__MSG__DETAIL__YOLO_DETECTION__STRUCT_H_
