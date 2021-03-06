
// Hook to use local types definitions
#include "pod_local_types.h"

#ifndef POD_SIZE_T_DEFINED
#define POD_SIZE_T_DEFINED

// Get just one type definition
#define __need_size_t
#include <stddef.h>

#endif // POD_SIZE_T_DEFINED


#ifndef POD_ERRNO_T_DEFINED
#define POD_ERRNO_T_DEFINED

typedef int                 errno_t;

#endif // POD_ERRNO_T_DEFINED




#ifndef POD_SHORT_TYPES_DEFINED
#define POD_SHORT_TYPES_DEFINED


typedef unsigned char       uint8_t;
typedef signed char         int8_t;

typedef unsigned int        uint32_t;
typedef signed int          int32_t;

//typedef unsigned int      size_t;

typedef unsigned int        physaddr_t;

#endif // POD_SHORT_TYPES_DEFINED

