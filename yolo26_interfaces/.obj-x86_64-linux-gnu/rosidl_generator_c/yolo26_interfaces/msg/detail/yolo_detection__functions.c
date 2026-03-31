// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yolo26_interfaces:msg/YoloDetection.idl
// generated code does not contain a copyright notice
#include "yolo26_interfaces/msg/detail/yolo_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"

bool
yolo26_interfaces__msg__YoloDetection__init(yolo26_interfaces__msg__YoloDetection * msg)
{
  if (!msg) {
    return false;
  }
  // class_id
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    yolo26_interfaces__msg__YoloDetection__fini(msg);
    return false;
  }
  // confidence
  // xmin
  // ymin
  // xmax
  // ymax
  // track_id
  return true;
}

void
yolo26_interfaces__msg__YoloDetection__fini(yolo26_interfaces__msg__YoloDetection * msg)
{
  if (!msg) {
    return;
  }
  // class_id
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
  // confidence
  // xmin
  // ymin
  // xmax
  // ymax
  // track_id
}

bool
yolo26_interfaces__msg__YoloDetection__are_equal(const yolo26_interfaces__msg__YoloDetection * lhs, const yolo26_interfaces__msg__YoloDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // class_id
  if (lhs->class_id != rhs->class_id) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // xmin
  if (lhs->xmin != rhs->xmin) {
    return false;
  }
  // ymin
  if (lhs->ymin != rhs->ymin) {
    return false;
  }
  // xmax
  if (lhs->xmax != rhs->xmax) {
    return false;
  }
  // ymax
  if (lhs->ymax != rhs->ymax) {
    return false;
  }
  // track_id
  if (lhs->track_id != rhs->track_id) {
    return false;
  }
  return true;
}

bool
yolo26_interfaces__msg__YoloDetection__copy(
  const yolo26_interfaces__msg__YoloDetection * input,
  yolo26_interfaces__msg__YoloDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // class_id
  output->class_id = input->class_id;
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // xmin
  output->xmin = input->xmin;
  // ymin
  output->ymin = input->ymin;
  // xmax
  output->xmax = input->xmax;
  // ymax
  output->ymax = input->ymax;
  // track_id
  output->track_id = input->track_id;
  return true;
}

yolo26_interfaces__msg__YoloDetection *
yolo26_interfaces__msg__YoloDetection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo26_interfaces__msg__YoloDetection * msg = (yolo26_interfaces__msg__YoloDetection *)allocator.allocate(sizeof(yolo26_interfaces__msg__YoloDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolo26_interfaces__msg__YoloDetection));
  bool success = yolo26_interfaces__msg__YoloDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolo26_interfaces__msg__YoloDetection__destroy(yolo26_interfaces__msg__YoloDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolo26_interfaces__msg__YoloDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolo26_interfaces__msg__YoloDetection__Sequence__init(yolo26_interfaces__msg__YoloDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo26_interfaces__msg__YoloDetection * data = NULL;

  if (size) {
    data = (yolo26_interfaces__msg__YoloDetection *)allocator.zero_allocate(size, sizeof(yolo26_interfaces__msg__YoloDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolo26_interfaces__msg__YoloDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolo26_interfaces__msg__YoloDetection__fini(&data[i - 1]);
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
yolo26_interfaces__msg__YoloDetection__Sequence__fini(yolo26_interfaces__msg__YoloDetection__Sequence * array)
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
      yolo26_interfaces__msg__YoloDetection__fini(&array->data[i]);
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

yolo26_interfaces__msg__YoloDetection__Sequence *
yolo26_interfaces__msg__YoloDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo26_interfaces__msg__YoloDetection__Sequence * array = (yolo26_interfaces__msg__YoloDetection__Sequence *)allocator.allocate(sizeof(yolo26_interfaces__msg__YoloDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolo26_interfaces__msg__YoloDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolo26_interfaces__msg__YoloDetection__Sequence__destroy(yolo26_interfaces__msg__YoloDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolo26_interfaces__msg__YoloDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolo26_interfaces__msg__YoloDetection__Sequence__are_equal(const yolo26_interfaces__msg__YoloDetection__Sequence * lhs, const yolo26_interfaces__msg__YoloDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolo26_interfaces__msg__YoloDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolo26_interfaces__msg__YoloDetection__Sequence__copy(
  const yolo26_interfaces__msg__YoloDetection__Sequence * input,
  yolo26_interfaces__msg__YoloDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolo26_interfaces__msg__YoloDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yolo26_interfaces__msg__YoloDetection * data =
      (yolo26_interfaces__msg__YoloDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolo26_interfaces__msg__YoloDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yolo26_interfaces__msg__YoloDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yolo26_interfaces__msg__YoloDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
