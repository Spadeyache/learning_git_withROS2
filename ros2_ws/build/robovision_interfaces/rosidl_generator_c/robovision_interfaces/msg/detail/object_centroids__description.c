// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robovision_interfaces:msg/ObjectCentroids.idl
// generated code does not contain a copyright notice

#include "robovision_interfaces/msg/detail/object_centroids__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robovision_interfaces
const rosidl_type_hash_t *
robovision_interfaces__msg__ObjectCentroids__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x31, 0xee, 0x41, 0x52, 0xdf, 0x67, 0xc3, 0x5d,
      0xfd, 0x5b, 0xc6, 0x2c, 0x65, 0x45, 0x3a, 0x2e,
      0x4a, 0x80, 0x68, 0x25, 0x27, 0x0b, 0xa2, 0x15,
      0x1b, 0xef, 0xc6, 0x4c, 0xc6, 0x38, 0xf4, 0xcf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "robovision_interfaces/msg/detail/object_centroid__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t robovision_interfaces__msg__ObjectCentroid__EXPECTED_HASH = {1, {
    0x75, 0xd6, 0x17, 0x3f, 0x18, 0x03, 0xc6, 0x7e,
    0xd3, 0x25, 0xca, 0xe8, 0x93, 0xff, 0xc8, 0xcb,
    0xf1, 0xdb, 0x55, 0x35, 0xef, 0x8b, 0x2f, 0xde,
    0x0d, 0x38, 0x4f, 0xea, 0xd2, 0xdc, 0x32, 0x60,
  }};
#endif

static char robovision_interfaces__msg__ObjectCentroids__TYPE_NAME[] = "robovision_interfaces/msg/ObjectCentroids";
static char robovision_interfaces__msg__ObjectCentroid__TYPE_NAME[] = "robovision_interfaces/msg/ObjectCentroid";

// Define type names, field names, and default values
static char robovision_interfaces__msg__ObjectCentroids__FIELD_NAME__centroids[] = "centroids";

static rosidl_runtime_c__type_description__Field robovision_interfaces__msg__ObjectCentroids__FIELDS[] = {
  {
    {robovision_interfaces__msg__ObjectCentroids__FIELD_NAME__centroids, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {robovision_interfaces__msg__ObjectCentroid__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robovision_interfaces__msg__ObjectCentroids__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {robovision_interfaces__msg__ObjectCentroid__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robovision_interfaces__msg__ObjectCentroids__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robovision_interfaces__msg__ObjectCentroids__TYPE_NAME, 41, 41},
      {robovision_interfaces__msg__ObjectCentroids__FIELDS, 1, 1},
    },
    {robovision_interfaces__msg__ObjectCentroids__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&robovision_interfaces__msg__ObjectCentroid__EXPECTED_HASH, robovision_interfaces__msg__ObjectCentroid__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = robovision_interfaces__msg__ObjectCentroid__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Note that if the message is defined in the same package,\n"
  "#the package name does not appear in the service or message definition.\n"
  "#If the message is defined elsewhere, we have to specify it, e.g.\n"
  "#robovision_interfaces/msg/ObjectCentroid[] centroids\n"
  "\n"
  "ObjectCentroid[] centroids";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robovision_interfaces__msg__ObjectCentroids__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robovision_interfaces__msg__ObjectCentroids__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 278, 278},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robovision_interfaces__msg__ObjectCentroids__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robovision_interfaces__msg__ObjectCentroids__get_individual_type_description_source(NULL),
    sources[1] = *robovision_interfaces__msg__ObjectCentroid__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
