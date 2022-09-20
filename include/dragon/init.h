#pragma once 

#ifdef _cplusplus
extern "C" {
#endif

#include <dragon/dg_backend.h>

DGAPI DG_BOOL dgInit();
DGAPI void dgTerminate();

#ifdef _cplueplus
}
#endif