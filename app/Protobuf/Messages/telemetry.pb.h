/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.3 at Wed Mar 27 13:47:19 2019. */

#ifndef PB_TELEMETRY_PB_H_INCLUDED
#define PB_TELEMETRY_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _BasicTelemetry {
    float speed;
    float heading;
    pb_callback_t longitude;
    pb_callback_t latitude;
/* @@protoc_insertion_point(struct:BasicTelemetry) */
} BasicTelemetry;

typedef struct _DebugStatus {
    int32_t debugStatus;
/* @@protoc_insertion_point(struct:DebugStatus) */
} DebugStatus;

typedef struct _ExpandedTelemetry {
    int32_t tmp;
/* @@protoc_insertion_point(struct:ExpandedTelemetry) */
} ExpandedTelemetry;

/* Default values for struct fields */

/* Initializer values for message structs */
#define BasicTelemetry_init_default              {0, 0, {{NULL}, NULL}, {{NULL}, NULL}}
#define ExpandedTelemetry_init_default           {0}
#define DebugStatus_init_default                 {0}
#define BasicTelemetry_init_zero                 {0, 0, {{NULL}, NULL}, {{NULL}, NULL}}
#define ExpandedTelemetry_init_zero              {0}
#define DebugStatus_init_zero                    {0}

/* Field tags (for use in manual encoding/decoding) */
#define BasicTelemetry_speed_tag                 1
#define BasicTelemetry_heading_tag               2
#define BasicTelemetry_longitude_tag             3
#define BasicTelemetry_latitude_tag              4
#define DebugStatus_debugStatus_tag              1
#define ExpandedTelemetry_tmp_tag                1

/* Struct field encoding specification for nanopb */
extern const pb_field_t BasicTelemetry_fields[5];
extern const pb_field_t ExpandedTelemetry_fields[2];
extern const pb_field_t DebugStatus_fields[2];

/* Maximum encoded size of messages (where known) */
/* BasicTelemetry_size depends on runtime parameters */
#define ExpandedTelemetry_size                   11
#define DebugStatus_size                         11

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define TELEMETRY_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif