from libc.stdint cimport int8_t, int16_t, int32_t, int64_t, intptr_t
from libc.stdint cimport uint8_t, uint16_t, uint32_t, uint64_t, uintptr_t
cdef extern from *:
  ctypedef bint bool
  ctypedef struct va_list

cdef extern from *:

  const int32_t CFConstantAbc # = 10

  cdef enum:
    CFEnumerationOptionA # = 0,
    CFEnumerationOptionB # = 1,
  ctypedef uint8_t CFEnumeration;

  ctypedef struct CFStructAbc:
    pass

  ctypedef struct CFUnionGhi:
    pass

  ctypedef struct CFStructDef:
    int32_t x;
    float y;

  ctypedef union CFUnionJkl:
    int32_t x;
    float y;

  ctypedef CFStructAbc CFTypeAlias;

  const intptr_t CFConstantExpression # = <intptr_t><CFTypeAlias*>10

  extern const int32_t StaticAbc;

  void root(const CFStructAbc *a,
            CFStructDef b,
            CFUnionGhi c,
            CFUnionJkl d,
            CFEnumeration e,
            CFTypeAlias f);
