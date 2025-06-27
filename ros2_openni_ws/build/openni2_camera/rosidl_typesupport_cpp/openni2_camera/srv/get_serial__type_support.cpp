// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from openni2_camera:srv/GetSerial.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "openni2_camera/srv/detail/get_serial__functions.h"
#include "openni2_camera/srv/detail/get_serial__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace openni2_camera
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetSerial_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetSerial_Request_type_support_ids_t;

static const _GetSerial_Request_type_support_ids_t _GetSerial_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetSerial_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetSerial_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetSerial_Request_type_support_symbol_names_t _GetSerial_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, openni2_camera, srv, GetSerial_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, openni2_camera, srv, GetSerial_Request)),
  }
};

typedef struct _GetSerial_Request_type_support_data_t
{
  void * data[2];
} _GetSerial_Request_type_support_data_t;

static _GetSerial_Request_type_support_data_t _GetSerial_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetSerial_Request_message_typesupport_map = {
  2,
  "openni2_camera",
  &_GetSerial_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetSerial_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetSerial_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetSerial_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetSerial_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &openni2_camera__srv__GetSerial_Request__get_type_hash,
  &openni2_camera__srv__GetSerial_Request__get_type_description,
  &openni2_camera__srv__GetSerial_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace openni2_camera

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<openni2_camera::srv::GetSerial_Request>()
{
  return &::openni2_camera::srv::rosidl_typesupport_cpp::GetSerial_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, openni2_camera, srv, GetSerial_Request)() {
  return get_message_type_support_handle<openni2_camera::srv::GetSerial_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "openni2_camera/srv/detail/get_serial__functions.h"
// already included above
// #include "openni2_camera/srv/detail/get_serial__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace openni2_camera
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetSerial_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetSerial_Response_type_support_ids_t;

static const _GetSerial_Response_type_support_ids_t _GetSerial_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetSerial_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetSerial_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetSerial_Response_type_support_symbol_names_t _GetSerial_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, openni2_camera, srv, GetSerial_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, openni2_camera, srv, GetSerial_Response)),
  }
};

typedef struct _GetSerial_Response_type_support_data_t
{
  void * data[2];
} _GetSerial_Response_type_support_data_t;

static _GetSerial_Response_type_support_data_t _GetSerial_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetSerial_Response_message_typesupport_map = {
  2,
  "openni2_camera",
  &_GetSerial_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetSerial_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetSerial_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetSerial_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetSerial_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &openni2_camera__srv__GetSerial_Response__get_type_hash,
  &openni2_camera__srv__GetSerial_Response__get_type_description,
  &openni2_camera__srv__GetSerial_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace openni2_camera

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<openni2_camera::srv::GetSerial_Response>()
{
  return &::openni2_camera::srv::rosidl_typesupport_cpp::GetSerial_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, openni2_camera, srv, GetSerial_Response)() {
  return get_message_type_support_handle<openni2_camera::srv::GetSerial_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "openni2_camera/srv/detail/get_serial__functions.h"
// already included above
// #include "openni2_camera/srv/detail/get_serial__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace openni2_camera
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetSerial_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetSerial_Event_type_support_ids_t;

static const _GetSerial_Event_type_support_ids_t _GetSerial_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetSerial_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetSerial_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetSerial_Event_type_support_symbol_names_t _GetSerial_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, openni2_camera, srv, GetSerial_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, openni2_camera, srv, GetSerial_Event)),
  }
};

typedef struct _GetSerial_Event_type_support_data_t
{
  void * data[2];
} _GetSerial_Event_type_support_data_t;

static _GetSerial_Event_type_support_data_t _GetSerial_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetSerial_Event_message_typesupport_map = {
  2,
  "openni2_camera",
  &_GetSerial_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetSerial_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetSerial_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetSerial_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetSerial_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &openni2_camera__srv__GetSerial_Event__get_type_hash,
  &openni2_camera__srv__GetSerial_Event__get_type_description,
  &openni2_camera__srv__GetSerial_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace openni2_camera

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<openni2_camera::srv::GetSerial_Event>()
{
  return &::openni2_camera::srv::rosidl_typesupport_cpp::GetSerial_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, openni2_camera, srv, GetSerial_Event)() {
  return get_message_type_support_handle<openni2_camera::srv::GetSerial_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "openni2_camera/srv/detail/get_serial__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace openni2_camera
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetSerial_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetSerial_type_support_ids_t;

static const _GetSerial_type_support_ids_t _GetSerial_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetSerial_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetSerial_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetSerial_type_support_symbol_names_t _GetSerial_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, openni2_camera, srv, GetSerial)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, openni2_camera, srv, GetSerial)),
  }
};

typedef struct _GetSerial_type_support_data_t
{
  void * data[2];
} _GetSerial_type_support_data_t;

static _GetSerial_type_support_data_t _GetSerial_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetSerial_service_typesupport_map = {
  2,
  "openni2_camera",
  &_GetSerial_service_typesupport_ids.typesupport_identifier[0],
  &_GetSerial_service_typesupport_symbol_names.symbol_name[0],
  &_GetSerial_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetSerial_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetSerial_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<openni2_camera::srv::GetSerial_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<openni2_camera::srv::GetSerial_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<openni2_camera::srv::GetSerial_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<openni2_camera::srv::GetSerial>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<openni2_camera::srv::GetSerial>,
  &openni2_camera__srv__GetSerial__get_type_hash,
  &openni2_camera__srv__GetSerial__get_type_description,
  &openni2_camera__srv__GetSerial__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace openni2_camera

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<openni2_camera::srv::GetSerial>()
{
  return &::openni2_camera::srv::rosidl_typesupport_cpp::GetSerial_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, openni2_camera, srv, GetSerial)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<openni2_camera::srv::GetSerial>();
}

#ifdef __cplusplus
}
#endif
