// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robovision_interfaces:msg/ObjectCentroid.idl
// generated code does not contain a copyright notice

#include "robovision_interfaces/msg/detail/object_centroid__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
const rosidl_type_hash_t *
robovision_interfaces__msg__ObjectCentroid__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0xd6, 0x17, 0x3f, 0x18, 0x03, 0xc6, 0x7e,
      0xd3, 0x25, 0xca, 0xe8, 0x93, 0xff, 0xc8, 0xcb,
      0xf1, 0xdb, 0x55, 0x35, 0xef, 0x8b, 0x2f, 0xde,
      0x0d, 0x38, 0x4f, 0xea, 0xd2, 0xdc, 0x32, 0x60,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robovision_interfaces__msg__ObjectCentroid__TYPE_NAME[] = "robovision_interfaces/msg/ObjectCentroid";

// Define type names, field names, and default values
static char robovision_interfaces__msg__ObjectCentroid__FIELD_NAME__x[] = "x";
static char robovision_interfaces__msg__ObjectCentroid__FIELD_NAME__y[] = "y";
static char robovision_interfaces__msg__ObjectCentroid__FIELD_NAME__z[] = "z";
static char robovision_interfaces__msg__ObjectCentroid__FIELD_NAME__centroid[] = "centroid";

static rosidl_runtime_c__type_description__Field robovision_interfaces__msg__ObjectCentroid__FIELDS[] = {
  {
    {robovision_interfaces__msg__ObjectCentroid__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robovision_interfaces__msg__ObjectCentroid__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robovision_interfaces__msg__ObjectCentroid__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robovision_interfaces__msg__ObjectCentroid__FIELD_NAME__centroid, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robovision_interfaces__msg__ObjectCentroid__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robovision_interfaces__msg__ObjectCentroid__TYPE_NAME, 40, 40},
      {robovision_interfaces__msg__ObjectCentroid__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64   x\n"
  "float64   y\n"
  "float64   z\n"
  "float64[] centroid";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robovision_interfaces__msg__ObjectCentroid__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robovision_interfaces__msg__ObjectCentroid__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 55, 55},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robovision_interfaces__msg__ObjectCentroid__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robovision_interfaces__msg__ObjectCentroid__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
