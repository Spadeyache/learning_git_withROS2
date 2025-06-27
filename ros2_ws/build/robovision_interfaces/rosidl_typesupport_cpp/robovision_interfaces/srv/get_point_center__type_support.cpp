// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from robovision_interfaces:srv/GetPointCenter.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robovision_interfaces/srv/detail/get_point_center__functions.h"
#include "robovision_interfaces/srv/detail/get_point_center__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robovision_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetPointCenter_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPointCenter_Request_type_support_ids_t;

static const _GetPointCenter_Request_type_support_ids_t _GetPointCenter_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPointCenter_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPointCenter_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPointCenter_Request_type_support_symbol_names_t _GetPointCenter_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robovision_interfaces, srv, GetPointCenter_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robovision_interfaces, srv, GetPointCenter_Request)),
  }
};

typedef struct _GetPointCenter_Request_type_support_data_t
{
  void * data[2];
} _GetPointCenter_Request_type_support_data_t;

static _GetPointCenter_Request_type_support_data_t _GetPointCenter_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPointCenter_Request_message_typesupport_map = {
  2,
  "robovision_interfaces",
  &_GetPointCenter_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetPointCenter_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetPointCenter_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPointCenter_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPointCenter_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robovision_interfaces__srv__GetPointCenter_Request__get_type_hash,
  &robovision_interfaces__srv__GetPointCenter_Request__get_type_description,
  &robovision_interfaces__srv__GetPointCenter_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace robovision_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robovision_interfaces::srv::GetPointCenter_Request>()
{
  return &::robovision_interfaces::srv::rosidl_typesupport_cpp::GetPointCenter_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robovision_interfaces, srv, GetPointCenter_Request)() {
  return get_message_type_support_handle<robovision_interfaces::srv::GetPointCenter_Request>();
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
// #include "robovision_interfaces/srv/detail/get_point_center__functions.h"
// already included above
// #include "robovision_interfaces/srv/detail/get_point_center__struct.hpp"
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

namespace robovision_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetPointCenter_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPointCenter_Response_type_support_ids_t;

static const _GetPointCenter_Response_type_support_ids_t _GetPointCenter_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPointCenter_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPointCenter_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPointCenter_Response_type_support_symbol_names_t _GetPointCenter_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robovision_interfaces, srv, GetPointCenter_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robovision_interfaces, srv, GetPointCenter_Response)),
  }
};

typedef struct _GetPointCenter_Response_type_support_data_t
{
  void * data[2];
} _GetPointCenter_Response_type_support_data_t;

static _GetPointCenter_Response_type_support_data_t _GetPointCenter_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPointCenter_Response_message_typesupport_map = {
  2,
  "robovision_interfaces",
  &_GetPointCenter_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetPointCenter_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetPointCenter_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPointCenter_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPointCenter_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robovision_interfaces__srv__GetPointCenter_Response__get_type_hash,
  &robovision_interfaces__srv__GetPointCenter_Response__get_type_description,
  &robovision_interfaces__srv__GetPointCenter_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace robovision_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robovision_interfaces::srv::GetPointCenter_Response>()
{
  return &::robovision_interfaces::srv::rosidl_typesupport_cpp::GetPointCenter_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robovision_interfaces, srv, GetPointCenter_Response)() {
  return get_message_type_support_handle<robovision_interfaces::srv::GetPointCenter_Response>();
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
// #include "robovision_interfaces/srv/detail/get_point_center__functions.h"
// already included above
// #include "robovision_interfaces/srv/detail/get_point_center__struct.hpp"
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

namespace robovision_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetPointCenter_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPointCenter_Event_type_support_ids_t;

static const _GetPointCenter_Event_type_support_ids_t _GetPointCenter_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPointCenter_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPointCenter_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPointCenter_Event_type_support_symbol_names_t _GetPointCenter_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robovision_interfaces, srv, GetPointCenter_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robovision_interfaces, srv, GetPointCenter_Event)),
  }
};

typedef struct _GetPointCenter_Event_type_support_data_t
{
  void * data[2];
} _GetPointCenter_Event_type_support_data_t;

static _GetPointCenter_Event_type_support_data_t _GetPointCenter_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPointCenter_Event_message_typesupport_map = {
  2,
  "robovision_interfaces",
  &_GetPointCenter_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetPointCenter_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetPointCenter_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPointCenter_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPointCenter_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robovision_interfaces__srv__GetPointCenter_Event__get_type_hash,
  &robovision_interfaces__srv__GetPointCenter_Event__get_type_description,
  &robovision_interfaces__srv__GetPointCenter_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace robovision_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robovision_interfaces::srv::GetPointCenter_Event>()
{
  return &::robovision_interfaces::srv::rosidl_typesupport_cpp::GetPointCenter_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robovision_interfaces, srv, GetPointCenter_Event)() {
  return get_message_type_support_handle<robovision_interfaces::srv::GetPointCenter_Event>();
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
// #include "robovision_interfaces/srv/detail/get_point_center__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robovision_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetPointCenter_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPointCenter_type_support_ids_t;

static const _GetPointCenter_type_support_ids_t _GetPointCenter_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPointCenter_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPointCenter_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPointCenter_type_support_symbol_names_t _GetPointCenter_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robovision_interfaces, srv, GetPointCenter)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robovision_interfaces, srv, GetPointCenter)),
  }
};

typedef struct _GetPointCenter_type_support_data_t
{
  void * data[2];
} _GetPointCenter_type_support_data_t;

static _GetPointCenter_type_support_data_t _GetPointCenter_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPointCenter_service_typesupport_map = {
  2,
  "robovision_interfaces",
  &_GetPointCenter_service_typesupport_ids.typesupport_identifier[0],
  &_GetPointCenter_service_typesupport_symbol_names.symbol_name[0],
  &_GetPointCenter_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetPointCenter_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPointCenter_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robovision_interfaces::srv::GetPointCenter_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robovision_interfaces::srv::GetPointCenter_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robovision_interfaces::srv::GetPointCenter_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<robovision_interfaces::srv::GetPointCenter>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<robovision_interfaces::srv::GetPointCenter>,
  &robovision_interfaces__srv__GetPointCenter__get_type_hash,
  &robovision_interfaces__srv__GetPointCenter__get_type_description,
  &robovision_interfaces__srv__GetPointCenter__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace robovision_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robovision_interfaces::srv::GetPointCenter>()
{
  return &::robovision_interfaces::srv::rosidl_typesupport_cpp::GetPointCenter_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, robovision_interfaces, srv, GetPointCenter)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<robovision_interfaces::srv::GetPointCenter>();
}

#ifdef __cplusplus
}
#endif
