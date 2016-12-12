/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: github.com/TheThingsNetwork/ttn/api/api.proto */

#ifndef PROTOBUF_C_github_2ecom_2fTheThingsNetwork_2fttn_2fapi_2fapi_2eproto__INCLUDED
#define PROTOBUF_C_github_2ecom_2fTheThingsNetwork_2fttn_2fapi_2fapi_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Api__Percentiles Api__Percentiles;
typedef struct _Api__Rates Api__Rates;
typedef struct _Api__SystemStats Api__SystemStats;
typedef struct _Api__SystemStats__Loadstats Api__SystemStats__Loadstats;
typedef struct _Api__SystemStats__CPUStats Api__SystemStats__CPUStats;
typedef struct _Api__SystemStats__MemoryStats Api__SystemStats__MemoryStats;
typedef struct _Api__ComponentStats Api__ComponentStats;
typedef struct _Api__ComponentStats__CPUStats Api__ComponentStats__CPUStats;
typedef struct _Api__ComponentStats__MemoryStats Api__ComponentStats__MemoryStats;


/* --- enums --- */


/* --- messages --- */

struct  _Api__Percentiles
{
  ProtobufCMessage base;
  protobuf_c_boolean has_percentile1;
  float percentile1;
  protobuf_c_boolean has_percentile5;
  float percentile5;
  protobuf_c_boolean has_percentile10;
  float percentile10;
  protobuf_c_boolean has_percentile25;
  float percentile25;
  protobuf_c_boolean has_percentile50;
  float percentile50;
  protobuf_c_boolean has_percentile75;
  float percentile75;
  protobuf_c_boolean has_percentile90;
  float percentile90;
  protobuf_c_boolean has_percentile95;
  float percentile95;
  protobuf_c_boolean has_percentile99;
  float percentile99;
};
#define API__PERCENTILES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&api__percentiles__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


struct  _Api__Rates
{
  ProtobufCMessage base;
  protobuf_c_boolean has_rate1;
  float rate1;
  protobuf_c_boolean has_rate5;
  float rate5;
  protobuf_c_boolean has_rate15;
  float rate15;
};
#define API__RATES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&api__rates__descriptor) \
    , 0,0, 0,0, 0,0 }


struct  _Api__SystemStats__Loadstats
{
  ProtobufCMessage base;
  protobuf_c_boolean has_load1;
  float load1;
  protobuf_c_boolean has_load5;
  float load5;
  protobuf_c_boolean has_load15;
  float load15;
};
#define API__SYSTEM_STATS__LOADSTATS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&api__system_stats__loadstats__descriptor) \
    , 0,0, 0,0, 0,0 }


struct  _Api__SystemStats__CPUStats
{
  ProtobufCMessage base;
  protobuf_c_boolean has_user;
  float user;
  protobuf_c_boolean has_system;
  float system;
  protobuf_c_boolean has_idle;
  float idle;
};
#define API__SYSTEM_STATS__CPUSTATS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&api__system_stats__cpustats__descriptor) \
    , 0,0, 0,0, 0,0 }


struct  _Api__SystemStats__MemoryStats
{
  ProtobufCMessage base;
  protobuf_c_boolean has_total;
  uint64_t total;
  protobuf_c_boolean has_available;
  uint64_t available;
  protobuf_c_boolean has_used;
  uint64_t used;
};
#define API__SYSTEM_STATS__MEMORY_STATS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&api__system_stats__memory_stats__descriptor) \
    , 0,0, 0,0, 0,0 }


struct  _Api__SystemStats
{
  ProtobufCMessage base;
  Api__SystemStats__Loadstats *load;
  Api__SystemStats__CPUStats *cpu;
  Api__SystemStats__MemoryStats *memory;
};
#define API__SYSTEM_STATS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&api__system_stats__descriptor) \
    , NULL, NULL, NULL }


struct  _Api__ComponentStats__CPUStats
{
  ProtobufCMessage base;
  protobuf_c_boolean has_user;
  float user;
  protobuf_c_boolean has_system;
  float system;
  protobuf_c_boolean has_idle;
  float idle;
};
#define API__COMPONENT_STATS__CPUSTATS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&api__component_stats__cpustats__descriptor) \
    , 0,0, 0,0, 0,0 }


struct  _Api__ComponentStats__MemoryStats
{
  ProtobufCMessage base;
  protobuf_c_boolean has_memory;
  uint64_t memory;
  protobuf_c_boolean has_swap;
  uint64_t swap;
};
#define API__COMPONENT_STATS__MEMORY_STATS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&api__component_stats__memory_stats__descriptor) \
    , 0,0, 0,0 }


struct  _Api__ComponentStats
{
  ProtobufCMessage base;
  protobuf_c_boolean has_uptime;
  uint64_t uptime;
  Api__ComponentStats__CPUStats *cpu;
  Api__ComponentStats__MemoryStats *memory;
  protobuf_c_boolean has_goroutines;
  uint64_t goroutines;
  protobuf_c_boolean has_gc_cpu_fraction;
  float gc_cpu_fraction;
};
#define API__COMPONENT_STATS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&api__component_stats__descriptor) \
    , 0,0, NULL, NULL, 0,0, 0,0 }


/* Api__Percentiles methods */
void   api__percentiles__init
                     (Api__Percentiles         *message);
size_t api__percentiles__get_packed_size
                     (const Api__Percentiles   *message);
size_t api__percentiles__pack
                     (const Api__Percentiles   *message,
                      uint8_t             *out);
size_t api__percentiles__pack_to_buffer
                     (const Api__Percentiles   *message,
                      ProtobufCBuffer     *buffer);
Api__Percentiles *
       api__percentiles__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   api__percentiles__free_unpacked
                     (Api__Percentiles *message,
                      ProtobufCAllocator *allocator);
/* Api__Rates methods */
void   api__rates__init
                     (Api__Rates         *message);
size_t api__rates__get_packed_size
                     (const Api__Rates   *message);
size_t api__rates__pack
                     (const Api__Rates   *message,
                      uint8_t             *out);
size_t api__rates__pack_to_buffer
                     (const Api__Rates   *message,
                      ProtobufCBuffer     *buffer);
Api__Rates *
       api__rates__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   api__rates__free_unpacked
                     (Api__Rates *message,
                      ProtobufCAllocator *allocator);
/* Api__SystemStats__Loadstats methods */
void   api__system_stats__loadstats__init
                     (Api__SystemStats__Loadstats         *message);
/* Api__SystemStats__CPUStats methods */
void   api__system_stats__cpustats__init
                     (Api__SystemStats__CPUStats         *message);
/* Api__SystemStats__MemoryStats methods */
void   api__system_stats__memory_stats__init
                     (Api__SystemStats__MemoryStats         *message);
/* Api__SystemStats methods */
void   api__system_stats__init
                     (Api__SystemStats         *message);
size_t api__system_stats__get_packed_size
                     (const Api__SystemStats   *message);
size_t api__system_stats__pack
                     (const Api__SystemStats   *message,
                      uint8_t             *out);
size_t api__system_stats__pack_to_buffer
                     (const Api__SystemStats   *message,
                      ProtobufCBuffer     *buffer);
Api__SystemStats *
       api__system_stats__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   api__system_stats__free_unpacked
                     (Api__SystemStats *message,
                      ProtobufCAllocator *allocator);
/* Api__ComponentStats__CPUStats methods */
void   api__component_stats__cpustats__init
                     (Api__ComponentStats__CPUStats         *message);
/* Api__ComponentStats__MemoryStats methods */
void   api__component_stats__memory_stats__init
                     (Api__ComponentStats__MemoryStats         *message);
/* Api__ComponentStats methods */
void   api__component_stats__init
                     (Api__ComponentStats         *message);
size_t api__component_stats__get_packed_size
                     (const Api__ComponentStats   *message);
size_t api__component_stats__pack
                     (const Api__ComponentStats   *message,
                      uint8_t             *out);
size_t api__component_stats__pack_to_buffer
                     (const Api__ComponentStats   *message,
                      ProtobufCBuffer     *buffer);
Api__ComponentStats *
       api__component_stats__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   api__component_stats__free_unpacked
                     (Api__ComponentStats *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Api__Percentiles_Closure)
                 (const Api__Percentiles *message,
                  void *closure_data);
typedef void (*Api__Rates_Closure)
                 (const Api__Rates *message,
                  void *closure_data);
typedef void (*Api__SystemStats__Loadstats_Closure)
                 (const Api__SystemStats__Loadstats *message,
                  void *closure_data);
typedef void (*Api__SystemStats__CPUStats_Closure)
                 (const Api__SystemStats__CPUStats *message,
                  void *closure_data);
typedef void (*Api__SystemStats__MemoryStats_Closure)
                 (const Api__SystemStats__MemoryStats *message,
                  void *closure_data);
typedef void (*Api__SystemStats_Closure)
                 (const Api__SystemStats *message,
                  void *closure_data);
typedef void (*Api__ComponentStats__CPUStats_Closure)
                 (const Api__ComponentStats__CPUStats *message,
                  void *closure_data);
typedef void (*Api__ComponentStats__MemoryStats_Closure)
                 (const Api__ComponentStats__MemoryStats *message,
                  void *closure_data);
typedef void (*Api__ComponentStats_Closure)
                 (const Api__ComponentStats *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor api__percentiles__descriptor;
extern const ProtobufCMessageDescriptor api__rates__descriptor;
extern const ProtobufCMessageDescriptor api__system_stats__descriptor;
extern const ProtobufCMessageDescriptor api__system_stats__loadstats__descriptor;
extern const ProtobufCMessageDescriptor api__system_stats__cpustats__descriptor;
extern const ProtobufCMessageDescriptor api__system_stats__memory_stats__descriptor;
extern const ProtobufCMessageDescriptor api__component_stats__descriptor;
extern const ProtobufCMessageDescriptor api__component_stats__cpustats__descriptor;
extern const ProtobufCMessageDescriptor api__component_stats__memory_stats__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_github_2ecom_2fTheThingsNetwork_2fttn_2fapi_2fapi_2eproto__INCLUDED */
