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

typedef struct CFStructAbc CFStructAbc;

typedef struct CFUnionGhi CFUnionGhi;

typedef struct {
  int32_t x;
  float y;
} CFStructDef;

typedef union {
  int32_t x;
  float y;
} CFUnionJkl;

typedef CFStructAbc CFTypeAlias;

#define CFConstantExpression (intptr_t)(CFTypeAlias*)10

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

extern const int32_t StaticAbc;

void root(const CFStructAbc *a,
          CFStructDef b,
          CFUnionGhi c,
          CFUnionJkl d,
          CFEnumeration e,
          CFTypeAlias f);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
