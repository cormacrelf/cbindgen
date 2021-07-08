#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define CFConstantAbc 10

enum CFEnumeration
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  CFEnumerationOptionA = 0,
  CFEnumerationOptionB = 1,
};
#ifndef __cplusplus
typedef uint8_t CFEnumeration;
#endif // __cplusplus

struct CFStructAbc;

struct CFUnionGhi;

struct CFStructDef {
  int32_t x;
  float y;
};

union CFUnionJkl {
  int32_t x;
  float y;
};

typedef struct CFStructAbc CFTypeAlias;

#define CFConstantExpression (intptr_t)(CFTypeAlias*)10

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

extern const int32_t StaticAbc;

void root(const struct CFStructAbc *a,
          struct CFStructDef b,
          struct CFUnionGhi c,
          union CFUnionJkl d,
          CFEnumeration e,
          CFTypeAlias f);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
