/*** Autogenerated by WIDL 8.0-rc1 from ../wine-source/dlls/taskschd/schrpc.idl - Do not edit ***/

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

#ifndef __schrpc_h__
#define __schrpc_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#define SCHEDSVC_TRANSPORT {'n','c','a','l','r','p','c',0}
#define SCH_FLAG_STATE 0x10000000
/*****************************************************************************
 * ITaskSchedulerService interface (v1.0)
 */
#ifndef __ITaskSchedulerService_INTERFACE_DEFINED__
#define __ITaskSchedulerService_INTERFACE_DEFINED__

extern handle_t schrpc_handle;
extern RPC_IF_HANDLE ITaskSchedulerService_v1_0_c_ifspec;
extern RPC_IF_HANDLE ITaskSchedulerService_v1_0_s_ifspec;
typedef struct _TASK_USER_CRED {
    const WCHAR *user;
    const WCHAR *password;
    DWORD flags;
} TASK_USER_CRED;
typedef struct _TASK_XML_ERROR_INFO {
    DWORD line;
    DWORD column;
    WCHAR *node;
    WCHAR *value;
} TASK_XML_ERROR_INFO;
typedef WCHAR **TASK_NAMES;
HRESULT __cdecl SchRpcHighestVersion(
    DWORD *version);

HRESULT __cdecl SchRpcRegisterTask(
    const WCHAR *path,
    const WCHAR *xml,
    DWORD flags,
    const WCHAR *sddl,
    DWORD task_logon_type,
    DWORD n_creds,
    const TASK_USER_CRED *creds,
    WCHAR **actual_path,
    TASK_XML_ERROR_INFO **xml_error_info);

HRESULT __cdecl SchRpcRetrieveTask(
    const WCHAR *path,
    const WCHAR *languages,
    ULONG *n_languages,
    WCHAR **xml);

HRESULT __cdecl SchRpcCreateFolder(
    const WCHAR *path,
    const WCHAR *sddl,
    DWORD flags);

HRESULT __cdecl SchRpcSetSecurity(
    const WCHAR *path,
    const WCHAR *sddl,
    DWORD flags);

HRESULT __cdecl SchRpcGetSecurity(
    const WCHAR *path,
    DWORD flags,
    WCHAR **sddl);

HRESULT __cdecl SchRpcEnumFolders(
    const WCHAR *path,
    DWORD flags,
    DWORD *start_index,
    DWORD n_requested,
    DWORD *n_names,
    TASK_NAMES *names);

HRESULT __cdecl SchRpcEnumTasks(
    const WCHAR *path,
    DWORD flags,
    DWORD *start_index,
    DWORD n_requested,
    DWORD *n_names,
    TASK_NAMES *names);

HRESULT __cdecl SchRpcEnumInstances(
    const WCHAR *path,
    DWORD flags,
    DWORD *n_guids,
    GUID **guids);

HRESULT __cdecl SchRpcGetInstanceInfo(
    GUID guid,
    WCHAR **path,
    DWORD *task_state,
    WCHAR **action,
    WCHAR **info,
    DWORD *n_instances,
    GUID **instances,
    DWORD *pid);

HRESULT __cdecl SchRpcStopInstance(
    GUID guid,
    DWORD flags);

HRESULT __cdecl SchRpcStop(
    const WCHAR *path,
    DWORD flags);

HRESULT __cdecl SchRpcRun(
    const WCHAR *path,
    DWORD n_args,
    const WCHAR **args,
    DWORD flags,
    DWORD session_id,
    const WCHAR *user,
    GUID *guid);

HRESULT __cdecl SchRpcDelete(
    const WCHAR *path,
    DWORD flags);

HRESULT __cdecl SchRpcRename(
    const WCHAR *path,
    const WCHAR *name,
    DWORD flags);

HRESULT __cdecl SchRpcScheduledRuntimes(
    const WCHAR *path,
    SYSTEMTIME *start,
    SYSTEMTIME *end,
    DWORD flags,
    DWORD n_requested,
    DWORD *n_runtimes,
    SYSTEMTIME **runtimes);

HRESULT __cdecl SchRpcGetLastRunInfo(
    const WCHAR *path,
    SYSTEMTIME *last_runtime,
    DWORD *last_return_code);

HRESULT __cdecl SchRpcGetTaskInfo(
    const WCHAR *path,
    DWORD flags,
    DWORD *enabled,
    DWORD *task_state);

HRESULT __cdecl SchRpcGetNumberOfMissedRuns(
    const WCHAR *path,
    DWORD *runs);

HRESULT __cdecl SchRpcEnableTask(
    const WCHAR *path,
    DWORD enabled);


#endif  /* __ITaskSchedulerService_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __schrpc_h__ */