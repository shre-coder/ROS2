// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from turtlesim:msg/Pose.idl
// generated code does not contain a copyright notice
#ifndef TURTLESIM__MSG__DETAIL__POSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TURTLESIM__MSG__DETAIL__POSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "turtlesim/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtlesim/msg/detail/pose__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
bool cdr_serialize_turtlesim__msg__Pose(
  const turtlesim__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
bool cdr_deserialize_turtlesim__msg__Pose(
  eprosima::fastcdr::Cdr &,
  turtlesim__msg__Pose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
bool cdr_serialize_key_turtlesim__msg__Pose(
  const turtlesim__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t get_serialized_size_key_turtlesim__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
size_t max_serialized_size_key_turtlesim__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, msg, Pose)();

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM__MSG__DETAIL__POSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
