/*** Autogenerated by WIDL 8.0-rc1 from ../wine-source/include/windows.foundation.numerics.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __windows_foundation_numerics_h__
#define __windows_foundation_numerics_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

/* Headers for imported files */

#include <inspectable.h>
#include <asyncinfo.h>
#include <eventtoken.h>
#include <windowscontracts.h>
#include <windows.foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __cplusplus
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
#else /* __cplusplus */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                typedef struct Vector3 Vector3;
            }
        }
    }
}
#endif /* __cplusplus */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                struct Vector3 {
                    FLOAT X;
                    FLOAT Y;
                    FLOAT Z;
                };
            }
        }
    }
}
extern "C" {
#else
struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 {
    FLOAT X;
    FLOAT Y;
    FLOAT Z;
};
#ifdef WIDL_using_Windows_Foundation_Numerics
#define Vector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3
#endif /* WIDL_using_Windows_Foundation_Numerics */
#endif

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_foundation_numerics_h__ */