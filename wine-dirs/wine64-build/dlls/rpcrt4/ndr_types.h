/*** Autogenerated by WIDL 8.0-rc1 from ../wine-source/dlls/rpcrt4/ndr_types.idl - Do not edit ***/

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

#ifndef __ndr_types_h__
#define __ndr_types_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __dummy_FWD_DEFINED__
#define __dummy_FWD_DEFINED__
typedef interface dummy dummy;
#ifdef __cplusplus
interface dummy;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * dummy interface
 */
#ifndef __dummy_INTERFACE_DEFINED__
#define __dummy_INTERFACE_DEFINED__

DEFINE_GUID(IID_dummy, 0xbfc61495, 0x76bb, 0x4855, 0x8c,0x2f, 0x37,0x64,0xfd,0x42,0x52,0x3a);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("bfc61495-76bb-4855-8c2f-3764fd42523a")
dummy : public IUnknown
{
    virtual void STDMETHODCALLTYPE dummy(
        BSTR a,
        IUnknown *b,
        IDispatch *c,
        VARIANT d,
        LPSAFEARRAY e,
        BSTR *last) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(dummy, 0xbfc61495, 0x76bb, 0x4855, 0x8c,0x2f, 0x37,0x64,0xfd,0x42,0x52,0x3a)
#endif
#else
typedef struct dummyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        dummy *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        dummy *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        dummy *This);

    /*** dummy methods ***/
    void (STDMETHODCALLTYPE *dummy)(
        dummy *This,
        BSTR a,
        IUnknown *b,
        IDispatch *c,
        VARIANT d,
        LPSAFEARRAY e,
        BSTR *last);

    END_INTERFACE
} dummyVtbl;

interface dummy {
    CONST_VTBL dummyVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define dummy_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define dummy_AddRef(This) (This)->lpVtbl->AddRef(This)
#define dummy_Release(This) (This)->lpVtbl->Release(This)
/*** dummy methods ***/
#define dummy_dummy(This,a,b,c,d,e,last) (This)->lpVtbl->dummy(This,a,b,c,d,e,last)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT dummy_QueryInterface(dummy* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG dummy_AddRef(dummy* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG dummy_Release(dummy* This) {
    return This->lpVtbl->Release(This);
}
/*** dummy methods ***/
static __WIDL_INLINE void dummy_dummy(dummy* This,BSTR a,IUnknown *b,IDispatch *c,VARIANT d,LPSAFEARRAY e,BSTR *last) {
    This->lpVtbl->dummy(This,a,b,c,d,e,last);
}
#endif
#endif

#endif


#endif  /* __dummy_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);
ULONG           __RPC_USER VARIANT_UserSize     (ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal  (ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void            __RPC_USER VARIANT_UserFree     (ULONG *, VARIANT *);
ULONG           __RPC_USER LPSAFEARRAY_UserSize     (ULONG *, ULONG, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal  (ULONG *, unsigned char *, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(ULONG *, unsigned char *, LPSAFEARRAY *);
void            __RPC_USER LPSAFEARRAY_UserFree     (ULONG *, LPSAFEARRAY *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __ndr_types_h__ */