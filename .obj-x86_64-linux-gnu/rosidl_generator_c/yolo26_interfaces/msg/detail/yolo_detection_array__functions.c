// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yolo26_interfaces:msg/YoloDetectionArray.idl
// generated code does not contain a copyright notice
#include "yolo26_interfaces/msg/detail/yolo_detection_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `detections`
#include "yolo26_interfaces/msg/detail/yolo_detection__functions.h"

bool
yolo26_interfaces__msg__YoloDetectionArray__init(yolo26_interfaces__msg__YoloDetectionArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    yolo26_interfaces__msg__YoloDetectionArray__fini(msg);
    return false;
  }
  // image_width
  // image_height
  // detections
  if (!yolo26_interfaces__msg__YoloDetection__Sequence__init(&msg->detections, 0)) {
    yolo26_interfaces__msg__YoloDetectionArray__fini(msg);
    return false;
  }
  return true;
}

void
yolo26_interfaces__msg__YoloDetectionArray__fini(yolo26_interfaces__msg__YoloDetectionArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // image_width
  // image_height
  // detections
  yolo26_interfaces__msg__YoloDetection__Sequence__fini(&msg->detections);
}

bool
yolo26_interfaces__msg__YoloDetectionArray__are_equal(const yolo26_interfaces__msg__YoloDetectionArray * lhs, const yolo26_interfaces__msg__YoloDetectionArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // image_width
  if (lhs->image_width != rhs->image_width) {
    return false;
  }
  // image_height
  if (lhs->image_height != rhs->image_height) {
    return false;
  }
  // detections
  if (!yolo26_interfaces__msg__YoloDetection__Sequence__are_equal(
      &(lhs->detections), &(rhs->detections)))
  {
    return false;
  }
  return true;
}

bool
yolo26_interfaces__msg__YoloDetectionArray__copy(
  const yolo26_interfaces__msg__YoloDetectionArray * input,
  yolo26_interfaces__msg__YoloDetectionArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // image_width
  output->image_width = input->image_width;
  // image_height
  output->image_height = input->image_height;
  // detections
  if (!yolo26_interfaces__msg__YoloDetection__Sequence__copy(
      &(input->detections), &(output->detections)))
  {
    return false;
  }
  return true;
}

yolo26_interfaces__msg__YoloDetectionArray *
yolo26_interfaces__msg__YoloDetectionArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo26_interfaces__msg__YoloDetectionArray * msg = (yolo26_interfaces__msg__YoloDetectionArray *)allocator.allocate(sizeof(yolo26_interfaces__msg__YoloDetectionArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolo26_interfaces__msg__YoloDetectionArray));
  bool success = yolo26_interfaces__msg__YoloDetectionArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolo26_interfaces__msg__YoloDetectionArray__destroy(yolo26_interfaces__msg__YoloDetectionArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolo26_interfaces__msg__YoloDetectionArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolo26_interfaces__msg__YoloDetectionArray__Sequence__init(yolo26_interfaces__msg__YoloDetectionArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo26_interfaces__msg__YoloDetectionArray * data = NULL;

  if (size) {
    data = (yolo26_interfaces__msg__YoloDetectionArray *)allocator.zero_allocate(size, sizeof(yolo26_interfaces__msg__YoloDetectionArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolo26_interfaces__msg__YoloDetectionArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolo26_interfaces__msg__YoloDetectionArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
yolo26_interfaces__msg__YoloDetectionArray__Sequence__fini(yolo26_interfaces__msg__YoloDetectionArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      yolo26_interfaces__msg__YoloDetectionArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

yolo26_interfaces__msg__YoloDetectionArray__Sequence *
yolo26_interfaces__msg__YoloDetectionArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo26_interfaces__msg__YoloDetectionArray__Sequence * array = (yolo26_interfaces__msg__YoloDetectionArray__Sequence *)allocator.allocate(sizeof(yolo26_interfaces__msg__YoloDetectionArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolo26_interfaces__msg__YoloDetectionArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolo26_interfaces__msg__YoloDetectionArray__Sequence__destroy(yolo26_interfaces__msg__YoloDetectionArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolo26_interfaces__msg__YoloDetectionArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolo26_interfaces__msg__YoloDetectionArray__Sequence__are_equal(const yolo26_interfaces__msg__YoloDetectionArray__Sequence * lhs, const yolo26_interfaces__msg__YoloDetectionArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolo26_interfaces__msg__YoloDetectionArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolo26_interfaces__msg__YoloDetectionArray__Sequence__copy(
  const yolo26_interfaces__msg__YoloDetectionArray__Sequence * input,
  yolo26_interfaces__msg__YoloDetectionArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolo26_interfaces__msg__YoloDetectionArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yolo26_interfaces__msg__YoloDetectionArray * data =
      (yolo26_interfaces__msg__YoloDetectionArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolo26_interfaces__msg__YoloDetectionArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yolo26_interfaces__msg__YoloDetectionArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yolo26_interfaces__msg__YoloDetectionArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
