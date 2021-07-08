#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <ostream>
#include <new>

static const int32_t CFConstantAbc = 10;

enum class CFEnumeration : uint8_t {
  CFEnumerationOptionA = 0,
  CFEnumerationOptionB = 1,
};

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

using CFTypeAlias = CFStructAbc;

static const intptr_t CFConstantExpression = (intptr_t)(CFTypeAlias*)10;

extern "C" {

extern const int32_t StaticAbc;

void root(const CFStructAbc *a,
          CFStructDef b,
          CFUnionGhi c,
          CFUnionJkl d,
          CFEnumeration e,
          CFTypeAlias f);

} // extern "C"
