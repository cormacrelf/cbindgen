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

extern const int32_t StaticAbc;

void root(const struct CFStructAbc *a,
          struct CFStructDef b,
          struct CFUnionGhi c,
          union CFUnionJkl d,
          CFEnumeration e,
          CFTypeAlias f);
