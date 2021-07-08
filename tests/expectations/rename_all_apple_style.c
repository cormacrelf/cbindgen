#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define CFConstantAbc 10

enum CFEnumeration {
  CFEnumerationOptionA = 0,
  CFEnumerationOptionB = 1,
};
typedef uint8_t CFEnumeration;

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

extern const int32_t StaticAbc;

void root(const CFStructAbc *a,
          CFStructDef b,
          CFUnionGhi c,
          CFUnionJkl d,
          CFEnumeration e,
          CFTypeAlias f);
