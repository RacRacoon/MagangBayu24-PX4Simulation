// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/RegisterExtComponentRequest.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/register_ext_component_request__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/register_ext_component_request__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::RegisterExtComponentRequest & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: request_id
  cdr << ros_message.request_id;
  // Member: name
  {
    cdr << ros_message.name;
  }
  // Member: px4_ros2_api_version
  cdr << ros_message.px4_ros2_api_version;
  // Member: register_arming_check
  cdr << (ros_message.register_arming_check ? true : false);
  // Member: register_mode
  cdr << (ros_message.register_mode ? true : false);
  // Member: register_mode_executor
  cdr << (ros_message.register_mode_executor ? true : false);
  // Member: enable_replace_internal_mode
  cdr << (ros_message.enable_replace_internal_mode ? true : false);
  // Member: replace_internal_mode
  cdr << ros_message.replace_internal_mode;
  // Member: activate_mode_immediately
  cdr << (ros_message.activate_mode_immediately ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::RegisterExtComponentRequest & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: request_id
  cdr >> ros_message.request_id;

  // Member: name
  {
    cdr >> ros_message.name;
  }

  // Member: px4_ros2_api_version
  cdr >> ros_message.px4_ros2_api_version;

  // Member: register_arming_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.register_arming_check = tmp ? true : false;
  }

  // Member: register_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.register_mode = tmp ? true : false;
  }

  // Member: register_mode_executor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.register_mode_executor = tmp ? true : false;
  }

  // Member: enable_replace_internal_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enable_replace_internal_mode = tmp ? true : false;
  }

  // Member: replace_internal_mode
  cdr >> ros_message.replace_internal_mode;

  // Member: activate_mode_immediately
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.activate_mode_immediately = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::RegisterExtComponentRequest & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: request_id
  {
    size_t item_size = sizeof(ros_message.request_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: name
  {
    size_t array_size = 25;
    size_t item_size = sizeof(ros_message.name[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: px4_ros2_api_version
  {
    size_t item_size = sizeof(ros_message.px4_ros2_api_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: register_arming_check
  {
    size_t item_size = sizeof(ros_message.register_arming_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: register_mode
  {
    size_t item_size = sizeof(ros_message.register_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: register_mode_executor
  {
    size_t item_size = sizeof(ros_message.register_mode_executor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enable_replace_internal_mode
  {
    size_t item_size = sizeof(ros_message.enable_replace_internal_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: replace_internal_mode
  {
    size_t item_size = sizeof(ros_message.replace_internal_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: activate_mode_immediately
  {
    size_t item_size = sizeof(ros_message.activate_mode_immediately);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_RegisterExtComponentRequest(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: request_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: name
  {
    size_t array_size = 25;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: px4_ros2_api_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: register_arming_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: register_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: register_mode_executor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enable_replace_internal_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: replace_internal_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: activate_mode_immediately
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RegisterExtComponentRequest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::RegisterExtComponentRequest *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegisterExtComponentRequest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::RegisterExtComponentRequest *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegisterExtComponentRequest__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::RegisterExtComponentRequest *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegisterExtComponentRequest__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RegisterExtComponentRequest(full_bounded, 0);
}

static message_type_support_callbacks_t _RegisterExtComponentRequest__callbacks = {
  "px4_msgs::msg",
  "RegisterExtComponentRequest",
  _RegisterExtComponentRequest__cdr_serialize,
  _RegisterExtComponentRequest__cdr_deserialize,
  _RegisterExtComponentRequest__get_serialized_size,
  _RegisterExtComponentRequest__max_serialized_size
};

static rosidl_message_type_support_t _RegisterExtComponentRequest__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegisterExtComponentRequest__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::RegisterExtComponentRequest>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_RegisterExtComponentRequest__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, RegisterExtComponentRequest)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_RegisterExtComponentRequest__handle;
}

#ifdef __cplusplus
}
#endif
