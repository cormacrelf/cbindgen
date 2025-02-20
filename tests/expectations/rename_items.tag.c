#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define capi_constant_abc 10

enum capi_enumeration {
  capi_enumeration_x = 0,
  capi_enumeration_y = 1,
};
typedef uint8_t capi_enumeration;

struct capi_struct_abc;

struct capi_union_ghi;

struct capi_struct_def {
  int32_t x;
  float y;
};

union capi_union_jkl {
  int32_t x;
  float y;
};

typedef struct capi_struct_abc capi_type_alias;

#define capi_constant_expression (intptr_t)(capi_type_alias*)10

extern const int32_t StaticAbc;

void root(const struct capi_struct_abc *a,
          struct capi_struct_def b,
          struct capi_union_ghi c,
          union capi_union_jkl d,
          capi_enumeration e,
          capi_type_alias f);
