

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.xx.xxxx */
/* at a redacted point in time
 */
/* Compiler settings for ../../edge_embedded_browser/client/win/current/webview2experimental.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.xx.xxxx 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __webview2experimental_h__
#define __webview2experimental_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __ICoreWebView2Experimental5_FWD_DEFINED__
#define __ICoreWebView2Experimental5_FWD_DEFINED__
typedef interface ICoreWebView2Experimental5 ICoreWebView2Experimental5;

#endif 	/* __ICoreWebView2Experimental5_FWD_DEFINED__ */


#ifndef __ICoreWebView2Experimental16_FWD_DEFINED__
#define __ICoreWebView2Experimental16_FWD_DEFINED__
typedef interface ICoreWebView2Experimental16 ICoreWebView2Experimental16;

#endif 	/* __ICoreWebView2Experimental16_FWD_DEFINED__ */


#ifndef __ICoreWebView2Experimental17_FWD_DEFINED__
#define __ICoreWebView2Experimental17_FWD_DEFINED__
typedef interface ICoreWebView2Experimental17 ICoreWebView2Experimental17;

#endif 	/* __ICoreWebView2Experimental17_FWD_DEFINED__ */


#ifndef __ICoreWebView2Experimental18_FWD_DEFINED__
#define __ICoreWebView2Experimental18_FWD_DEFINED__
typedef interface ICoreWebView2Experimental18 ICoreWebView2Experimental18;

#endif 	/* __ICoreWebView2Experimental18_FWD_DEFINED__ */


#ifndef __ICoreWebView2Experimental19_FWD_DEFINED__
#define __ICoreWebView2Experimental19_FWD_DEFINED__
typedef interface ICoreWebView2Experimental19 ICoreWebView2Experimental19;

#endif 	/* __ICoreWebView2Experimental19_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalCompositionController4_FWD_DEFINED__
#define __ICoreWebView2ExperimentalCompositionController4_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalCompositionController4 ICoreWebView2ExperimentalCompositionController4;

#endif 	/* __ICoreWebView2ExperimentalCompositionController4_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment3_FWD_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment3_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalEnvironment3 ICoreWebView2ExperimentalEnvironment3;

#endif 	/* __ICoreWebView2ExperimentalEnvironment3_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalExecuteScriptResult_FWD_DEFINED__
#define __ICoreWebView2ExperimentalExecuteScriptResult_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalExecuteScriptResult ICoreWebView2ExperimentalExecuteScriptResult;

#endif 	/* __ICoreWebView2ExperimentalExecuteScriptResult_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler;

#endif 	/* __ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalScriptException_FWD_DEFINED__
#define __ICoreWebView2ExperimentalScriptException_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalScriptException ICoreWebView2ExperimentalScriptException;

#endif 	/* __ICoreWebView2ExperimentalScriptException_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalPrintSettings2_FWD_DEFINED__
#define __ICoreWebView2ExperimentalPrintSettings2_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalPrintSettings2 ICoreWebView2ExperimentalPrintSettings2;

#endif 	/* __ICoreWebView2ExperimentalPrintSettings2_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalPrintCompletedHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalPrintCompletedHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalPrintCompletedHandler ICoreWebView2ExperimentalPrintCompletedHandler;

#endif 	/* __ICoreWebView2ExperimentalPrintCompletedHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler;

#endif 	/* __ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment10_FWD_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment10_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalEnvironment10 ICoreWebView2ExperimentalEnvironment10;

#endif 	/* __ICoreWebView2ExperimentalEnvironment10_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalFrame4_FWD_DEFINED__
#define __ICoreWebView2ExperimentalFrame4_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalFrame4 ICoreWebView2ExperimentalFrame4;

#endif 	/* __ICoreWebView2ExperimentalFrame4_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSharedBuffer_FWD_DEFINED__
#define __ICoreWebView2ExperimentalSharedBuffer_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalSharedBuffer ICoreWebView2ExperimentalSharedBuffer;

#endif 	/* __ICoreWebView2ExperimentalSharedBuffer_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler;

#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeResult_FWD_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeResult_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalUpdateRuntimeResult ICoreWebView2ExperimentalUpdateRuntimeResult;

#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeResult_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalWebResourceRequestedEventArgs_FWD_DEFINED__
#define __ICoreWebView2ExperimentalWebResourceRequestedEventArgs_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalWebResourceRequestedEventArgs ICoreWebView2ExperimentalWebResourceRequestedEventArgs;

#endif 	/* __ICoreWebView2ExperimentalWebResourceRequestedEventArgs_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalCustomSchemeRegistration_FWD_DEFINED__
#define __ICoreWebView2ExperimentalCustomSchemeRegistration_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalCustomSchemeRegistration ICoreWebView2ExperimentalCustomSchemeRegistration;

#endif 	/* __ICoreWebView2ExperimentalCustomSchemeRegistration_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironmentOptions_FWD_DEFINED__
#define __ICoreWebView2ExperimentalEnvironmentOptions_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalEnvironmentOptions ICoreWebView2ExperimentalEnvironmentOptions;

#endif 	/* __ICoreWebView2ExperimentalEnvironmentOptions_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSettings7_FWD_DEFINED__
#define __ICoreWebView2ExperimentalSettings7_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalSettings7 ICoreWebView2ExperimentalSettings7;

#endif 	/* __ICoreWebView2ExperimentalSettings7_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironmentOptions2_FWD_DEFINED__
#define __ICoreWebView2ExperimentalEnvironmentOptions2_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalEnvironmentOptions2 ICoreWebView2ExperimentalEnvironmentOptions2;

#endif 	/* __ICoreWebView2ExperimentalEnvironmentOptions2_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment_FWD_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalEnvironment ICoreWebView2ExperimentalEnvironment;

#endif 	/* __ICoreWebView2ExperimentalEnvironment_FWD_DEFINED__ */


/* header files for imported files */
#include "webview2.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __WebView2Experimental_LIBRARY_DEFINED__
#define __WebView2Experimental_LIBRARY_DEFINED__

/* library WebView2Experimental */
/* [version][uuid] */ 





















typedef /* [v1_enum] */ 
enum COREWEBVIEW2_WEB_RESOURCE_REQUEST_SOURCE_KINDS
    {
        COREWEBVIEW2_WEB_RESOURCE_REQUEST_SOURCE_KINDS_NONE	= 0,
        COREWEBVIEW2_WEB_RESOURCE_REQUEST_SOURCE_KINDS_DOCUMENT	= 1,
        COREWEBVIEW2_WEB_RESOURCE_REQUEST_SOURCE_KINDS_SHARED_WORKER	= 2,
        COREWEBVIEW2_WEB_RESOURCE_REQUEST_SOURCE_KINDS_SERVICE_WORKER	= 4,
        COREWEBVIEW2_WEB_RESOURCE_REQUEST_SOURCE_KINDS_ALL	= 0xffffffff
    } 	COREWEBVIEW2_WEB_RESOURCE_REQUEST_SOURCE_KINDS;

DEFINE_ENUM_FLAG_OPERATORS(COREWEBVIEW2_WEB_RESOURCE_REQUEST_SOURCE_KINDS)
typedef struct COREWEBVIEW2_MATRIX_4X4
    {
    FLOAT _11;
    FLOAT _12;
    FLOAT _13;
    FLOAT _14;
    FLOAT _21;
    FLOAT _22;
    FLOAT _23;
    FLOAT _24;
    FLOAT _31;
    FLOAT _32;
    FLOAT _33;
    FLOAT _34;
    FLOAT _41;
    FLOAT _42;
    FLOAT _43;
    FLOAT _44;
    } 	COREWEBVIEW2_MATRIX_4X4;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_UPDATE_RUNTIME_STATUS
    {
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_LATEST_VERSION_INSTALLED	= 0,
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_UPDATE_ALREADY_RUNNING	= ( COREWEBVIEW2_UPDATE_RUNTIME_STATUS_LATEST_VERSION_INSTALLED + 1 ) ,
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_BLOCKED_BY_POLICY	= ( COREWEBVIEW2_UPDATE_RUNTIME_STATUS_UPDATE_ALREADY_RUNNING + 1 ) ,
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_FAILED	= ( COREWEBVIEW2_UPDATE_RUNTIME_STATUS_BLOCKED_BY_POLICY + 1 ) 
    } 	COREWEBVIEW2_UPDATE_RUNTIME_STATUS;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL
    {
        COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL_NORMAL	= 0,
        COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL_LOW	= ( COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL_NORMAL + 1 ) 
    } 	COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_PRINT_DIALOG_KIND
    {
        COREWEBVIEW2_PRINT_DIALOG_KIND_BROWSER	= 0,
        COREWEBVIEW2_PRINT_DIALOG_KIND_SYSTEM	= ( COREWEBVIEW2_PRINT_DIALOG_KIND_BROWSER + 1 ) 
    } 	COREWEBVIEW2_PRINT_DIALOG_KIND;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_PRINT_DUPLEX
    {
        COREWEBVIEW2_PRINT_DUPLEX_DEFAULT	= 0,
        COREWEBVIEW2_PRINT_DUPLEX_ONE_SIDED	= ( COREWEBVIEW2_PRINT_DUPLEX_DEFAULT + 1 ) ,
        COREWEBVIEW2_PRINT_DUPLEX_TWO_SIDED_LONG_EDGE	= ( COREWEBVIEW2_PRINT_DUPLEX_ONE_SIDED + 1 ) ,
        COREWEBVIEW2_PRINT_DUPLEX_TWO_SIDED_SHORT_EDGE	= ( COREWEBVIEW2_PRINT_DUPLEX_TWO_SIDED_LONG_EDGE + 1 ) 
    } 	COREWEBVIEW2_PRINT_DUPLEX;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_PRINT_COLOR_MODE
    {
        COREWEBVIEW2_PRINT_COLOR_MODE_DEFAULT	= 0,
        COREWEBVIEW2_PRINT_COLOR_MODE_COLOR	= ( COREWEBVIEW2_PRINT_COLOR_MODE_DEFAULT + 1 ) ,
        COREWEBVIEW2_PRINT_COLOR_MODE_GRAYSCALE	= ( COREWEBVIEW2_PRINT_COLOR_MODE_COLOR + 1 ) 
    } 	COREWEBVIEW2_PRINT_COLOR_MODE;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_PRINT_COLLATION
    {
        COREWEBVIEW2_PRINT_COLLATION_DEFAULT	= 0,
        COREWEBVIEW2_PRINT_COLLATION_COLLATED	= ( COREWEBVIEW2_PRINT_COLLATION_DEFAULT + 1 ) ,
        COREWEBVIEW2_PRINT_COLLATION_UNCOLLATED	= ( COREWEBVIEW2_PRINT_COLLATION_COLLATED + 1 ) 
    } 	COREWEBVIEW2_PRINT_COLLATION;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_PRINT_MEDIA_SIZE
    {
        COREWEBVIEW2_PRINT_MEDIA_SIZE_DEFAULT	= 0,
        COREWEBVIEW2_PRINT_MEDIA_SIZE_CUSTOM	= ( COREWEBVIEW2_PRINT_MEDIA_SIZE_DEFAULT + 1 ) 
    } 	COREWEBVIEW2_PRINT_MEDIA_SIZE;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_PRINT_STATUS
    {
        COREWEBVIEW2_PRINT_STATUS_SUCCEEDED	= 0,
        COREWEBVIEW2_PRINT_STATUS_PRINTER_UNAVAILABLE	= ( COREWEBVIEW2_PRINT_STATUS_SUCCEEDED + 1 ) ,
        COREWEBVIEW2_PRINT_STATUS_OTHER_ERROR	= ( COREWEBVIEW2_PRINT_STATUS_PRINTER_UNAVAILABLE + 1 ) 
    } 	COREWEBVIEW2_PRINT_STATUS;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_SHARED_BUFFER_ACCESS
    {
        COREWEBVIEW2_SHARED_BUFFER_ACCESS_READ_ONLY	= 0,
        COREWEBVIEW2_SHARED_BUFFER_ACCESS_READ_WRITE	= ( COREWEBVIEW2_SHARED_BUFFER_ACCESS_READ_ONLY + 1 ) 
    } 	COREWEBVIEW2_SHARED_BUFFER_ACCESS;


EXTERN_C const IID LIBID_WebView2Experimental;

#ifndef __ICoreWebView2Experimental5_INTERFACE_DEFINED__
#define __ICoreWebView2Experimental5_INTERFACE_DEFINED__

/* interface ICoreWebView2Experimental5 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2Experimental5 = {0xE05E04CA,0x7924,0x4C04,{0xA8,0x4C,0xA9,0x05,0x72,0xDB,0xA2,0x2A}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E05E04CA-7924-4C04-A84C-A90572DBA22A")
    ICoreWebView2Experimental5 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MemoryUsageTargetLevel( 
            /* [retval][out] */ COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL *level) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MemoryUsageTargetLevel( 
            /* [in] */ COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL level) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2Experimental5Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2Experimental5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2Experimental5 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2Experimental5 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental5, get_MemoryUsageTargetLevel)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MemoryUsageTargetLevel )( 
            ICoreWebView2Experimental5 * This,
            /* [retval][out] */ COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL *level);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental5, put_MemoryUsageTargetLevel)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MemoryUsageTargetLevel )( 
            ICoreWebView2Experimental5 * This,
            /* [in] */ COREWEBVIEW2_MEMORY_USAGE_TARGET_LEVEL level);
        
        END_INTERFACE
    } ICoreWebView2Experimental5Vtbl;

    interface ICoreWebView2Experimental5
    {
        CONST_VTBL struct ICoreWebView2Experimental5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2Experimental5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2Experimental5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2Experimental5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2Experimental5_get_MemoryUsageTargetLevel(This,level)	\
    ( (This)->lpVtbl -> get_MemoryUsageTargetLevel(This,level) ) 

#define ICoreWebView2Experimental5_put_MemoryUsageTargetLevel(This,level)	\
    ( (This)->lpVtbl -> put_MemoryUsageTargetLevel(This,level) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2Experimental5_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2Experimental16_INTERFACE_DEFINED__
#define __ICoreWebView2Experimental16_INTERFACE_DEFINED__

/* interface ICoreWebView2Experimental16 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2Experimental16 = {0x679ddf3f,0x9044,0x486f,{0x84,0x58,0x16,0x65,0x3a,0x0e,0x16,0x03}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("679ddf3f-9044-486f-8458-16653a0e1603")
    ICoreWebView2Experimental16 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddWebResourceRequestedFilterWithRequestSourceKinds( 
            /* [in] */ const LPCWSTR uri,
            /* [in] */ const COREWEBVIEW2_WEB_RESOURCE_CONTEXT resourceContext,
            /* [in] */ const COREWEBVIEW2_WEB_RESOURCE_REQUEST_SOURCE_KINDS requestSourceKinds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveWebResourceRequestedFilterWithRequestSourceKinds( 
            /* [in] */ const LPCWSTR uri,
            /* [in] */ const COREWEBVIEW2_WEB_RESOURCE_CONTEXT resourceContext,
            /* [in] */ const COREWEBVIEW2_WEB_RESOURCE_REQUEST_SOURCE_KINDS requestSourceKinds) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2Experimental16Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2Experimental16 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2Experimental16 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2Experimental16 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental16, AddWebResourceRequestedFilterWithRequestSourceKinds)
        HRESULT ( STDMETHODCALLTYPE *AddWebResourceRequestedFilterWithRequestSourceKinds )( 
            ICoreWebView2Experimental16 * This,
            /* [in] */ const LPCWSTR uri,
            /* [in] */ const COREWEBVIEW2_WEB_RESOURCE_CONTEXT resourceContext,
            /* [in] */ const COREWEBVIEW2_WEB_RESOURCE_REQUEST_SOURCE_KINDS requestSourceKinds);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental16, RemoveWebResourceRequestedFilterWithRequestSourceKinds)
        HRESULT ( STDMETHODCALLTYPE *RemoveWebResourceRequestedFilterWithRequestSourceKinds )( 
            ICoreWebView2Experimental16 * This,
            /* [in] */ const LPCWSTR uri,
            /* [in] */ const COREWEBVIEW2_WEB_RESOURCE_CONTEXT resourceContext,
            /* [in] */ const COREWEBVIEW2_WEB_RESOURCE_REQUEST_SOURCE_KINDS requestSourceKinds);
        
        END_INTERFACE
    } ICoreWebView2Experimental16Vtbl;

    interface ICoreWebView2Experimental16
    {
        CONST_VTBL struct ICoreWebView2Experimental16Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2Experimental16_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2Experimental16_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2Experimental16_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2Experimental16_AddWebResourceRequestedFilterWithRequestSourceKinds(This,uri,resourceContext,requestSourceKinds)	\
    ( (This)->lpVtbl -> AddWebResourceRequestedFilterWithRequestSourceKinds(This,uri,resourceContext,requestSourceKinds) ) 

#define ICoreWebView2Experimental16_RemoveWebResourceRequestedFilterWithRequestSourceKinds(This,uri,resourceContext,requestSourceKinds)	\
    ( (This)->lpVtbl -> RemoveWebResourceRequestedFilterWithRequestSourceKinds(This,uri,resourceContext,requestSourceKinds) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2Experimental16_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2Experimental17_INTERFACE_DEFINED__
#define __ICoreWebView2Experimental17_INTERFACE_DEFINED__

/* interface ICoreWebView2Experimental17 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2Experimental17 = {0x531FFEE9,0x6225,0x43F3,{0x9E,0xA9,0x5A,0xD3,0xEC,0x88,0x7E,0xFD}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("531FFEE9-6225-43F3-9EA9-5AD3EC887EFD")
    ICoreWebView2Experimental17 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Print( 
            /* [in] */ ICoreWebView2PrintSettings *printSettings,
            /* [in] */ ICoreWebView2ExperimentalPrintCompletedHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowPrintUI( 
            /* [in] */ COREWEBVIEW2_PRINT_DIALOG_KIND printDialogKind) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrintToPdfStream( 
            /* [in] */ ICoreWebView2PrintSettings *printSettings,
            /* [in] */ ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler *handler) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2Experimental17Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2Experimental17 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2Experimental17 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2Experimental17 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental17, Print)
        HRESULT ( STDMETHODCALLTYPE *Print )( 
            ICoreWebView2Experimental17 * This,
            /* [in] */ ICoreWebView2PrintSettings *printSettings,
            /* [in] */ ICoreWebView2ExperimentalPrintCompletedHandler *handler);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental17, ShowPrintUI)
        HRESULT ( STDMETHODCALLTYPE *ShowPrintUI )( 
            ICoreWebView2Experimental17 * This,
            /* [in] */ COREWEBVIEW2_PRINT_DIALOG_KIND printDialogKind);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental17, PrintToPdfStream)
        HRESULT ( STDMETHODCALLTYPE *PrintToPdfStream )( 
            ICoreWebView2Experimental17 * This,
            /* [in] */ ICoreWebView2PrintSettings *printSettings,
            /* [in] */ ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler *handler);
        
        END_INTERFACE
    } ICoreWebView2Experimental17Vtbl;

    interface ICoreWebView2Experimental17
    {
        CONST_VTBL struct ICoreWebView2Experimental17Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2Experimental17_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2Experimental17_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2Experimental17_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2Experimental17_Print(This,printSettings,handler)	\
    ( (This)->lpVtbl -> Print(This,printSettings,handler) ) 

#define ICoreWebView2Experimental17_ShowPrintUI(This,printDialogKind)	\
    ( (This)->lpVtbl -> ShowPrintUI(This,printDialogKind) ) 

#define ICoreWebView2Experimental17_PrintToPdfStream(This,printSettings,handler)	\
    ( (This)->lpVtbl -> PrintToPdfStream(This,printSettings,handler) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2Experimental17_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2Experimental18_INTERFACE_DEFINED__
#define __ICoreWebView2Experimental18_INTERFACE_DEFINED__

/* interface ICoreWebView2Experimental18 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2Experimental18 = {0xB96480A2,0x167A,0x469F,{0xA0,0x90,0x5F,0x0F,0x5C,0x88,0xDB,0xE4}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B96480A2-167A-469F-A090-5F0F5C88DBE4")
    ICoreWebView2Experimental18 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PostSharedBufferToScript( 
            /* [in] */ ICoreWebView2ExperimentalSharedBuffer *sharedBuffer,
            /* [in] */ COREWEBVIEW2_SHARED_BUFFER_ACCESS access,
            /* [in] */ LPCWSTR additionalDataAsJson) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2Experimental18Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2Experimental18 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2Experimental18 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2Experimental18 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental18, PostSharedBufferToScript)
        HRESULT ( STDMETHODCALLTYPE *PostSharedBufferToScript )( 
            ICoreWebView2Experimental18 * This,
            /* [in] */ ICoreWebView2ExperimentalSharedBuffer *sharedBuffer,
            /* [in] */ COREWEBVIEW2_SHARED_BUFFER_ACCESS access,
            /* [in] */ LPCWSTR additionalDataAsJson);
        
        END_INTERFACE
    } ICoreWebView2Experimental18Vtbl;

    interface ICoreWebView2Experimental18
    {
        CONST_VTBL struct ICoreWebView2Experimental18Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2Experimental18_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2Experimental18_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2Experimental18_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2Experimental18_PostSharedBufferToScript(This,sharedBuffer,access,additionalDataAsJson)	\
    ( (This)->lpVtbl -> PostSharedBufferToScript(This,sharedBuffer,access,additionalDataAsJson) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2Experimental18_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2Experimental19_INTERFACE_DEFINED__
#define __ICoreWebView2Experimental19_INTERFACE_DEFINED__

/* interface ICoreWebView2Experimental19 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2Experimental19 = {0x4C765E35,0x5BEB,0x4631,{0xB9,0x31,0x5E,0x52,0xD9,0xB0,0xA9,0xBE}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C765E35-5BEB-4631-B931-5E52D9B0A9BE")
    ICoreWebView2Experimental19 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ExecuteScriptWithResult( 
            /* [in] */ LPCWSTR javaScript,
            /* [in] */ ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler *handler) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2Experimental19Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2Experimental19 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2Experimental19 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2Experimental19 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental19, ExecuteScriptWithResult)
        HRESULT ( STDMETHODCALLTYPE *ExecuteScriptWithResult )( 
            ICoreWebView2Experimental19 * This,
            /* [in] */ LPCWSTR javaScript,
            /* [in] */ ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler *handler);
        
        END_INTERFACE
    } ICoreWebView2Experimental19Vtbl;

    interface ICoreWebView2Experimental19
    {
        CONST_VTBL struct ICoreWebView2Experimental19Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2Experimental19_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2Experimental19_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2Experimental19_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2Experimental19_ExecuteScriptWithResult(This,javaScript,handler)	\
    ( (This)->lpVtbl -> ExecuteScriptWithResult(This,javaScript,handler) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2Experimental19_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalCompositionController4_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalCompositionController4_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalCompositionController4 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalCompositionController4 = {0xe6041d7f,0x18ac,0x4654,{0xa0,0x4e,0x8b,0x3f,0x81,0x25,0x1c,0x33}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e6041d7f-18ac-4654-a04e-8b3f81251c33")
    ICoreWebView2ExperimentalCompositionController4 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AutomationProvider( 
            /* [retval][out] */ IUnknown **provider) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateCoreWebView2PointerInfoFromPointerId( 
            /* [in] */ UINT pointerId,
            /* [in] */ HWND parentWindow,
            /* [in] */ struct COREWEBVIEW2_MATRIX_4X4 transform,
            /* [retval][out] */ ICoreWebView2PointerInfo **pointerInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalCompositionController4Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalCompositionController4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalCompositionController4 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalCompositionController4 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCompositionController4, get_AutomationProvider)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutomationProvider )( 
            ICoreWebView2ExperimentalCompositionController4 * This,
            /* [retval][out] */ IUnknown **provider);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCompositionController4, CreateCoreWebView2PointerInfoFromPointerId)
        HRESULT ( STDMETHODCALLTYPE *CreateCoreWebView2PointerInfoFromPointerId )( 
            ICoreWebView2ExperimentalCompositionController4 * This,
            /* [in] */ UINT pointerId,
            /* [in] */ HWND parentWindow,
            /* [in] */ struct COREWEBVIEW2_MATRIX_4X4 transform,
            /* [retval][out] */ ICoreWebView2PointerInfo **pointerInfo);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalCompositionController4Vtbl;

    interface ICoreWebView2ExperimentalCompositionController4
    {
        CONST_VTBL struct ICoreWebView2ExperimentalCompositionController4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalCompositionController4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalCompositionController4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalCompositionController4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalCompositionController4_get_AutomationProvider(This,provider)	\
    ( (This)->lpVtbl -> get_AutomationProvider(This,provider) ) 

#define ICoreWebView2ExperimentalCompositionController4_CreateCoreWebView2PointerInfoFromPointerId(This,pointerId,parentWindow,transform,pointerInfo)	\
    ( (This)->lpVtbl -> CreateCoreWebView2PointerInfoFromPointerId(This,pointerId,parentWindow,transform,pointerInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalCompositionController4_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment3_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment3_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalEnvironment3 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalEnvironment3 = {0x9A2BE885,0x7F0B,0x4B26,{0xB6,0xDD,0xC9,0x69,0xBA,0xA0,0x0B,0xF1}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9A2BE885-7F0B-4B26-B6DD-C969BAA00BF1")
    ICoreWebView2ExperimentalEnvironment3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateRuntime( 
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler *handler) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalEnvironment3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalEnvironment3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalEnvironment3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalEnvironment3 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironment3, UpdateRuntime)
        HRESULT ( STDMETHODCALLTYPE *UpdateRuntime )( 
            ICoreWebView2ExperimentalEnvironment3 * This,
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler *handler);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalEnvironment3Vtbl;

    interface ICoreWebView2ExperimentalEnvironment3
    {
        CONST_VTBL struct ICoreWebView2ExperimentalEnvironment3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalEnvironment3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalEnvironment3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalEnvironment3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalEnvironment3_UpdateRuntime(This,handler)	\
    ( (This)->lpVtbl -> UpdateRuntime(This,handler) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalEnvironment3_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalExecuteScriptResult_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalExecuteScriptResult_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalExecuteScriptResult */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalExecuteScriptResult = {0x0CE15963,0x3698,0x4DF7,{0x93,0x99,0x71,0xED,0x6C,0xDD,0x8C,0x9F}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0CE15963-3698-4DF7-9399-71ED6CDD8C9F")
    ICoreWebView2ExperimentalExecuteScriptResult : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Succeeded( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ResultAsJson( 
            /* [retval][out] */ LPWSTR *jsonResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TryGetResultAsString( 
            /* [out] */ LPWSTR *stringResult,
            /* [out] */ BOOL *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Exception( 
            /* [retval][out] */ ICoreWebView2ExperimentalScriptException **exception) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalExecuteScriptResultVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalExecuteScriptResult * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalExecuteScriptResult * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalExecuteScriptResult * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalExecuteScriptResult, get_Succeeded)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Succeeded )( 
            ICoreWebView2ExperimentalExecuteScriptResult * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalExecuteScriptResult, get_ResultAsJson)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResultAsJson )( 
            ICoreWebView2ExperimentalExecuteScriptResult * This,
            /* [retval][out] */ LPWSTR *jsonResult);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalExecuteScriptResult, TryGetResultAsString)
        HRESULT ( STDMETHODCALLTYPE *TryGetResultAsString )( 
            ICoreWebView2ExperimentalExecuteScriptResult * This,
            /* [out] */ LPWSTR *stringResult,
            /* [out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalExecuteScriptResult, get_Exception)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exception )( 
            ICoreWebView2ExperimentalExecuteScriptResult * This,
            /* [retval][out] */ ICoreWebView2ExperimentalScriptException **exception);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalExecuteScriptResultVtbl;

    interface ICoreWebView2ExperimentalExecuteScriptResult
    {
        CONST_VTBL struct ICoreWebView2ExperimentalExecuteScriptResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalExecuteScriptResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalExecuteScriptResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalExecuteScriptResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalExecuteScriptResult_get_Succeeded(This,value)	\
    ( (This)->lpVtbl -> get_Succeeded(This,value) ) 

#define ICoreWebView2ExperimentalExecuteScriptResult_get_ResultAsJson(This,jsonResult)	\
    ( (This)->lpVtbl -> get_ResultAsJson(This,jsonResult) ) 

#define ICoreWebView2ExperimentalExecuteScriptResult_TryGetResultAsString(This,stringResult,value)	\
    ( (This)->lpVtbl -> TryGetResultAsString(This,stringResult,value) ) 

#define ICoreWebView2ExperimentalExecuteScriptResult_get_Exception(This,exception)	\
    ( (This)->lpVtbl -> get_Exception(This,exception) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalExecuteScriptResult_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler = {0x1BB5317B,0x8238,0x4C67,{0xA7,0xFF,0xBA,0xF6,0x55,0x8F,0x28,0x9D}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1BB5317B-8238-4C67-A7FF-BAF6558F289D")
    ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ HRESULT errorCode,
            /* [in] */ ICoreWebView2ExperimentalExecuteScriptResult *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler * This,
            /* [in] */ HRESULT errorCode,
            /* [in] */ ICoreWebView2ExperimentalExecuteScriptResult *result);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandlerVtbl;

    interface ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler_Invoke(This,errorCode,result)	\
    ( (This)->lpVtbl -> Invoke(This,errorCode,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalExecuteScriptWithResultCompletedHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalScriptException_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalScriptException_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalScriptException */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalScriptException = {0x054DAE00,0x84A3,0x49FF,{0xBC,0x17,0x40,0x12,0xA9,0x0B,0xC9,0xFD}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("054DAE00-84A3-49FF-BC17-4012A90BC9FD")
    ICoreWebView2ExperimentalScriptException : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LineNumber( 
            /* [retval][out] */ UINT32 *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ColumnNumber( 
            /* [retval][out] */ UINT32 *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Message( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ToJson( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalScriptExceptionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalScriptException * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalScriptException * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalScriptException * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalScriptException, get_LineNumber)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineNumber )( 
            ICoreWebView2ExperimentalScriptException * This,
            /* [retval][out] */ UINT32 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalScriptException, get_ColumnNumber)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColumnNumber )( 
            ICoreWebView2ExperimentalScriptException * This,
            /* [retval][out] */ UINT32 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalScriptException, get_Name)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICoreWebView2ExperimentalScriptException * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalScriptException, get_Message)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Message )( 
            ICoreWebView2ExperimentalScriptException * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalScriptException, get_ToJson)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ToJson )( 
            ICoreWebView2ExperimentalScriptException * This,
            /* [retval][out] */ LPWSTR *value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalScriptExceptionVtbl;

    interface ICoreWebView2ExperimentalScriptException
    {
        CONST_VTBL struct ICoreWebView2ExperimentalScriptExceptionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalScriptException_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalScriptException_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalScriptException_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalScriptException_get_LineNumber(This,value)	\
    ( (This)->lpVtbl -> get_LineNumber(This,value) ) 

#define ICoreWebView2ExperimentalScriptException_get_ColumnNumber(This,value)	\
    ( (This)->lpVtbl -> get_ColumnNumber(This,value) ) 

#define ICoreWebView2ExperimentalScriptException_get_Name(This,value)	\
    ( (This)->lpVtbl -> get_Name(This,value) ) 

#define ICoreWebView2ExperimentalScriptException_get_Message(This,value)	\
    ( (This)->lpVtbl -> get_Message(This,value) ) 

#define ICoreWebView2ExperimentalScriptException_get_ToJson(This,value)	\
    ( (This)->lpVtbl -> get_ToJson(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalScriptException_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalPrintSettings2_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalPrintSettings2_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalPrintSettings2 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalPrintSettings2 = {0xF07D42BA,0x20D8,0x49CD,{0x8C,0xA5,0x5C,0xAE,0x71,0xEF,0x96,0x86}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F07D42BA-20D8-49CD-8CA5-5CAE71EF9686")
    ICoreWebView2ExperimentalPrintSettings2 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PageRanges( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PageRanges( 
            /* [in] */ LPCWSTR value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PagesPerSide( 
            /* [retval][out] */ INT32 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PagesPerSide( 
            /* [in] */ INT32 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Copies( 
            /* [retval][out] */ INT32 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Copies( 
            /* [in] */ INT32 value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Collation( 
            /* [retval][out] */ COREWEBVIEW2_PRINT_COLLATION *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Collation( 
            /* [in] */ COREWEBVIEW2_PRINT_COLLATION value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ColorMode( 
            /* [retval][out] */ COREWEBVIEW2_PRINT_COLOR_MODE *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ColorMode( 
            /* [in] */ COREWEBVIEW2_PRINT_COLOR_MODE value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Duplex( 
            /* [retval][out] */ COREWEBVIEW2_PRINT_DUPLEX *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Duplex( 
            /* [in] */ COREWEBVIEW2_PRINT_DUPLEX value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MediaSize( 
            /* [retval][out] */ COREWEBVIEW2_PRINT_MEDIA_SIZE *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MediaSize( 
            /* [in] */ COREWEBVIEW2_PRINT_MEDIA_SIZE value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PrinterName( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PrinterName( 
            /* [in] */ LPCWSTR value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalPrintSettings2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalPrintSettings2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalPrintSettings2 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, get_PageRanges)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PageRanges )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, put_PageRanges)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PageRanges )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [in] */ LPCWSTR value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, get_PagesPerSide)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PagesPerSide )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [retval][out] */ INT32 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, put_PagesPerSide)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PagesPerSide )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [in] */ INT32 value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, get_Copies)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Copies )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [retval][out] */ INT32 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, put_Copies)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Copies )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [in] */ INT32 value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, get_Collation)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Collation )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [retval][out] */ COREWEBVIEW2_PRINT_COLLATION *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, put_Collation)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Collation )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [in] */ COREWEBVIEW2_PRINT_COLLATION value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, get_ColorMode)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorMode )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [retval][out] */ COREWEBVIEW2_PRINT_COLOR_MODE *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, put_ColorMode)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorMode )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [in] */ COREWEBVIEW2_PRINT_COLOR_MODE value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, get_Duplex)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Duplex )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [retval][out] */ COREWEBVIEW2_PRINT_DUPLEX *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, put_Duplex)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Duplex )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [in] */ COREWEBVIEW2_PRINT_DUPLEX value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, get_MediaSize)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MediaSize )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [retval][out] */ COREWEBVIEW2_PRINT_MEDIA_SIZE *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, put_MediaSize)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MediaSize )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [in] */ COREWEBVIEW2_PRINT_MEDIA_SIZE value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, get_PrinterName)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrinterName )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintSettings2, put_PrinterName)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PrinterName )( 
            ICoreWebView2ExperimentalPrintSettings2 * This,
            /* [in] */ LPCWSTR value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalPrintSettings2Vtbl;

    interface ICoreWebView2ExperimentalPrintSettings2
    {
        CONST_VTBL struct ICoreWebView2ExperimentalPrintSettings2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalPrintSettings2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalPrintSettings2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalPrintSettings2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalPrintSettings2_get_PageRanges(This,value)	\
    ( (This)->lpVtbl -> get_PageRanges(This,value) ) 

#define ICoreWebView2ExperimentalPrintSettings2_put_PageRanges(This,value)	\
    ( (This)->lpVtbl -> put_PageRanges(This,value) ) 

#define ICoreWebView2ExperimentalPrintSettings2_get_PagesPerSide(This,value)	\
    ( (This)->lpVtbl -> get_PagesPerSide(This,value) ) 

#define ICoreWebView2ExperimentalPrintSettings2_put_PagesPerSide(This,value)	\
    ( (This)->lpVtbl -> put_PagesPerSide(This,value) ) 

#define ICoreWebView2ExperimentalPrintSettings2_get_Copies(This,value)	\
    ( (This)->lpVtbl -> get_Copies(This,value) ) 

#define ICoreWebView2ExperimentalPrintSettings2_put_Copies(This,value)	\
    ( (This)->lpVtbl -> put_Copies(This,value) ) 

#define ICoreWebView2ExperimentalPrintSettings2_get_Collation(This,value)	\
    ( (This)->lpVtbl -> get_Collation(This,value) ) 

#define ICoreWebView2ExperimentalPrintSettings2_put_Collation(This,value)	\
    ( (This)->lpVtbl -> put_Collation(This,value) ) 

#define ICoreWebView2ExperimentalPrintSettings2_get_ColorMode(This,value)	\
    ( (This)->lpVtbl -> get_ColorMode(This,value) ) 

#define ICoreWebView2ExperimentalPrintSettings2_put_ColorMode(This,value)	\
    ( (This)->lpVtbl -> put_ColorMode(This,value) ) 

#define ICoreWebView2ExperimentalPrintSettings2_get_Duplex(This,value)	\
    ( (This)->lpVtbl -> get_Duplex(This,value) ) 

#define ICoreWebView2ExperimentalPrintSettings2_put_Duplex(This,value)	\
    ( (This)->lpVtbl -> put_Duplex(This,value) ) 

#define ICoreWebView2ExperimentalPrintSettings2_get_MediaSize(This,value)	\
    ( (This)->lpVtbl -> get_MediaSize(This,value) ) 

#define ICoreWebView2ExperimentalPrintSettings2_put_MediaSize(This,value)	\
    ( (This)->lpVtbl -> put_MediaSize(This,value) ) 

#define ICoreWebView2ExperimentalPrintSettings2_get_PrinterName(This,value)	\
    ( (This)->lpVtbl -> get_PrinterName(This,value) ) 

#define ICoreWebView2ExperimentalPrintSettings2_put_PrinterName(This,value)	\
    ( (This)->lpVtbl -> put_PrinterName(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalPrintSettings2_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalPrintCompletedHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalPrintCompletedHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalPrintCompletedHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalPrintCompletedHandler = {0x8FD80075,0xED08,0x42DB,{0x85,0x70,0xF5,0xD1,0x49,0x77,0x46,0x1E}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8FD80075-ED08-42DB-8570-F5D14977461E")
    ICoreWebView2ExperimentalPrintCompletedHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ HRESULT errorCode,
            /* [in] */ COREWEBVIEW2_PRINT_STATUS printStatus) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalPrintCompletedHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalPrintCompletedHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalPrintCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalPrintCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintCompletedHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalPrintCompletedHandler * This,
            /* [in] */ HRESULT errorCode,
            /* [in] */ COREWEBVIEW2_PRINT_STATUS printStatus);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalPrintCompletedHandlerVtbl;

    interface ICoreWebView2ExperimentalPrintCompletedHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalPrintCompletedHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalPrintCompletedHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalPrintCompletedHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalPrintCompletedHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalPrintCompletedHandler_Invoke(This,errorCode,printStatus)	\
    ( (This)->lpVtbl -> Invoke(This,errorCode,printStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalPrintCompletedHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler = {0x4C9F8229,0x8F93,0x444F,{0xA7,0x11,0x2C,0x0D,0xFD,0x63,0x59,0xD5}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C9F8229-8F93-444F-A711-2C0DFD6359D5")
    ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ HRESULT errorCode,
            /* [in] */ IStream *pdfStream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler * This,
            /* [in] */ HRESULT errorCode,
            /* [in] */ IStream *pdfStream);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandlerVtbl;

    interface ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler_Invoke(This,errorCode,pdfStream)	\
    ( (This)->lpVtbl -> Invoke(This,errorCode,pdfStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalPrintToPdfStreamCompletedHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment10_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment10_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalEnvironment10 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalEnvironment10 = {0x3C5BACE3,0xFF8E,0x44EA,{0x9C,0x7F,0x05,0xAF,0xA9,0x48,0xA7,0xB1}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3C5BACE3-FF8E-44EA-9C7F-05AFA948A7B1")
    ICoreWebView2ExperimentalEnvironment10 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateSharedBuffer( 
            /* [in] */ UINT64 size,
            /* [retval][out] */ ICoreWebView2ExperimentalSharedBuffer **shared_buffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalEnvironment10Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalEnvironment10 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalEnvironment10 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalEnvironment10 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironment10, CreateSharedBuffer)
        HRESULT ( STDMETHODCALLTYPE *CreateSharedBuffer )( 
            ICoreWebView2ExperimentalEnvironment10 * This,
            /* [in] */ UINT64 size,
            /* [retval][out] */ ICoreWebView2ExperimentalSharedBuffer **shared_buffer);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalEnvironment10Vtbl;

    interface ICoreWebView2ExperimentalEnvironment10
    {
        CONST_VTBL struct ICoreWebView2ExperimentalEnvironment10Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalEnvironment10_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalEnvironment10_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalEnvironment10_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalEnvironment10_CreateSharedBuffer(This,size,shared_buffer)	\
    ( (This)->lpVtbl -> CreateSharedBuffer(This,size,shared_buffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalEnvironment10_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalFrame4_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalFrame4_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalFrame4 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalFrame4 = {0x92CF9F34,0xF403,0x4D46,{0xBF,0xC3,0x0B,0x5E,0xD1,0x7D,0x55,0xCA}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92CF9F34-F403-4D46-BFC3-0B5ED17D55CA")
    ICoreWebView2ExperimentalFrame4 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PostSharedBufferToScript( 
            /* [in] */ ICoreWebView2ExperimentalSharedBuffer *sharedBuffer,
            /* [in] */ COREWEBVIEW2_SHARED_BUFFER_ACCESS access,
            /* [in] */ LPCWSTR additionalDataAsJson) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalFrame4Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalFrame4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalFrame4 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalFrame4 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalFrame4, PostSharedBufferToScript)
        HRESULT ( STDMETHODCALLTYPE *PostSharedBufferToScript )( 
            ICoreWebView2ExperimentalFrame4 * This,
            /* [in] */ ICoreWebView2ExperimentalSharedBuffer *sharedBuffer,
            /* [in] */ COREWEBVIEW2_SHARED_BUFFER_ACCESS access,
            /* [in] */ LPCWSTR additionalDataAsJson);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalFrame4Vtbl;

    interface ICoreWebView2ExperimentalFrame4
    {
        CONST_VTBL struct ICoreWebView2ExperimentalFrame4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalFrame4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalFrame4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalFrame4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalFrame4_PostSharedBufferToScript(This,sharedBuffer,access,additionalDataAsJson)	\
    ( (This)->lpVtbl -> PostSharedBufferToScript(This,sharedBuffer,access,additionalDataAsJson) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalFrame4_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSharedBuffer_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalSharedBuffer_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalSharedBuffer */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalSharedBuffer = {0xB747A495,0x0C6F,0x449E,{0x97,0xB8,0x2F,0x81,0xE9,0xD6,0xAB,0x43}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B747A495-0C6F-449E-97B8-2F81E9D6AB43")
    ICoreWebView2ExperimentalSharedBuffer : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ UINT64 *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Buffer( 
            /* [retval][out] */ BYTE **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenStream( 
            /* [retval][out] */ IStream **value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FileMappingHandle( 
            /* [retval][out] */ HANDLE *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalSharedBufferVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalSharedBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalSharedBuffer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalSharedBuffer * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSharedBuffer, get_Size)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            ICoreWebView2ExperimentalSharedBuffer * This,
            /* [retval][out] */ UINT64 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSharedBuffer, get_Buffer)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Buffer )( 
            ICoreWebView2ExperimentalSharedBuffer * This,
            /* [retval][out] */ BYTE **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSharedBuffer, OpenStream)
        HRESULT ( STDMETHODCALLTYPE *OpenStream )( 
            ICoreWebView2ExperimentalSharedBuffer * This,
            /* [retval][out] */ IStream **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSharedBuffer, get_FileMappingHandle)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileMappingHandle )( 
            ICoreWebView2ExperimentalSharedBuffer * This,
            /* [retval][out] */ HANDLE *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSharedBuffer, Close)
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            ICoreWebView2ExperimentalSharedBuffer * This);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalSharedBufferVtbl;

    interface ICoreWebView2ExperimentalSharedBuffer
    {
        CONST_VTBL struct ICoreWebView2ExperimentalSharedBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalSharedBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalSharedBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalSharedBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalSharedBuffer_get_Size(This,value)	\
    ( (This)->lpVtbl -> get_Size(This,value) ) 

#define ICoreWebView2ExperimentalSharedBuffer_get_Buffer(This,value)	\
    ( (This)->lpVtbl -> get_Buffer(This,value) ) 

#define ICoreWebView2ExperimentalSharedBuffer_OpenStream(This,value)	\
    ( (This)->lpVtbl -> OpenStream(This,value) ) 

#define ICoreWebView2ExperimentalSharedBuffer_get_FileMappingHandle(This,value)	\
    ( (This)->lpVtbl -> get_FileMappingHandle(This,value) ) 

#define ICoreWebView2ExperimentalSharedBuffer_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalSharedBuffer_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler = {0xF1D2D722,0x3721,0x499C,{0x87,0xF5,0x4C,0x40,0x52,0x60,0x69,0x7A}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F1D2D722-3721-499C-87F5-4C405260697A")
    ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ HRESULT errorCode,
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeResult *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalUpdateRuntimeCompletedHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This,
            /* [in] */ HRESULT errorCode,
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeResult *result);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalUpdateRuntimeCompletedHandlerVtbl;

    interface ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalUpdateRuntimeCompletedHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_Invoke(This,errorCode,result)	\
    ( (This)->lpVtbl -> Invoke(This,errorCode,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeResult_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeResult_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalUpdateRuntimeResult */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalUpdateRuntimeResult = {0xDD503E49,0xAB19,0x47C0,{0xB2,0xAD,0x6D,0xDD,0x09,0xCC,0x3E,0x3A}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD503E49-AB19-47C0-B2AD-6DDD09CC3E3A")
    ICoreWebView2ExperimentalUpdateRuntimeResult : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ COREWEBVIEW2_UPDATE_RUNTIME_STATUS *status) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ExtendedError( 
            /* [retval][out] */ HRESULT *error) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalUpdateRuntimeResultVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalUpdateRuntimeResult, get_Status)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This,
            /* [retval][out] */ COREWEBVIEW2_UPDATE_RUNTIME_STATUS *status);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalUpdateRuntimeResult, get_ExtendedError)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This,
            /* [retval][out] */ HRESULT *error);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalUpdateRuntimeResultVtbl;

    interface ICoreWebView2ExperimentalUpdateRuntimeResult
    {
        CONST_VTBL struct ICoreWebView2ExperimentalUpdateRuntimeResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalUpdateRuntimeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalUpdateRuntimeResult_get_Status(This,status)	\
    ( (This)->lpVtbl -> get_Status(This,status) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeResult_get_ExtendedError(This,error)	\
    ( (This)->lpVtbl -> get_ExtendedError(This,error) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeResult_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalWebResourceRequestedEventArgs_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalWebResourceRequestedEventArgs_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalWebResourceRequestedEventArgs */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalWebResourceRequestedEventArgs = {0x8f3ec528,0x0596,0x4d51,{0x9f,0x9e,0x2d,0xa5,0x80,0xac,0x97,0x87}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8f3ec528-0596-4d51-9f9e-2da580ac9787")
    ICoreWebView2ExperimentalWebResourceRequestedEventArgs : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RequestedSourceKind( 
            /* [retval][out] */ COREWEBVIEW2_WEB_RESOURCE_REQUEST_SOURCE_KINDS *requestedSourceKind) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalWebResourceRequestedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalWebResourceRequestedEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalWebResourceRequestedEventArgs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalWebResourceRequestedEventArgs * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalWebResourceRequestedEventArgs, get_RequestedSourceKind)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequestedSourceKind )( 
            ICoreWebView2ExperimentalWebResourceRequestedEventArgs * This,
            /* [retval][out] */ COREWEBVIEW2_WEB_RESOURCE_REQUEST_SOURCE_KINDS *requestedSourceKind);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalWebResourceRequestedEventArgsVtbl;

    interface ICoreWebView2ExperimentalWebResourceRequestedEventArgs
    {
        CONST_VTBL struct ICoreWebView2ExperimentalWebResourceRequestedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalWebResourceRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalWebResourceRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalWebResourceRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalWebResourceRequestedEventArgs_get_RequestedSourceKind(This,requestedSourceKind)	\
    ( (This)->lpVtbl -> get_RequestedSourceKind(This,requestedSourceKind) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalWebResourceRequestedEventArgs_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalCustomSchemeRegistration_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalCustomSchemeRegistration_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalCustomSchemeRegistration */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalCustomSchemeRegistration = {0xd60ac92c,0x37a6,0x4b26,{0xa3,0x9e,0x95,0xcf,0xe5,0x90,0x47,0xbb}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d60ac92c-37a6-4b26-a39e-95cfe59047bb")
    ICoreWebView2ExperimentalCustomSchemeRegistration : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SchemeName( 
            /* [retval][out] */ LPWSTR *schemeName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TreatAsSecure( 
            /* [retval][out] */ BOOL *treatAsSecure) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TreatAsSecure( 
            /* [in] */ BOOL value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAllowedOrigins( 
            /* [out] */ UINT32 *allowedOriginsCount,
            /* [out] */ LPWSTR **allowedOrigins) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAllowedOrigins( 
            /* [in] */ UINT32 allowedOriginsCount,
            /* [in] */ LPCWSTR *allowedOrigins) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasAuthorityComponent( 
            /* [retval][out] */ BOOL *hasAuthorityComponent) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HasAuthorityComponent( 
            /* [in] */ BOOL hasAuthorityComponent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalCustomSchemeRegistrationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalCustomSchemeRegistration * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalCustomSchemeRegistration * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalCustomSchemeRegistration * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCustomSchemeRegistration, get_SchemeName)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SchemeName )( 
            ICoreWebView2ExperimentalCustomSchemeRegistration * This,
            /* [retval][out] */ LPWSTR *schemeName);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCustomSchemeRegistration, get_TreatAsSecure)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TreatAsSecure )( 
            ICoreWebView2ExperimentalCustomSchemeRegistration * This,
            /* [retval][out] */ BOOL *treatAsSecure);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCustomSchemeRegistration, put_TreatAsSecure)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TreatAsSecure )( 
            ICoreWebView2ExperimentalCustomSchemeRegistration * This,
            /* [in] */ BOOL value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCustomSchemeRegistration, GetAllowedOrigins)
        HRESULT ( STDMETHODCALLTYPE *GetAllowedOrigins )( 
            ICoreWebView2ExperimentalCustomSchemeRegistration * This,
            /* [out] */ UINT32 *allowedOriginsCount,
            /* [out] */ LPWSTR **allowedOrigins);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCustomSchemeRegistration, SetAllowedOrigins)
        HRESULT ( STDMETHODCALLTYPE *SetAllowedOrigins )( 
            ICoreWebView2ExperimentalCustomSchemeRegistration * This,
            /* [in] */ UINT32 allowedOriginsCount,
            /* [in] */ LPCWSTR *allowedOrigins);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCustomSchemeRegistration, get_HasAuthorityComponent)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasAuthorityComponent )( 
            ICoreWebView2ExperimentalCustomSchemeRegistration * This,
            /* [retval][out] */ BOOL *hasAuthorityComponent);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCustomSchemeRegistration, put_HasAuthorityComponent)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HasAuthorityComponent )( 
            ICoreWebView2ExperimentalCustomSchemeRegistration * This,
            /* [in] */ BOOL hasAuthorityComponent);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalCustomSchemeRegistrationVtbl;

    interface ICoreWebView2ExperimentalCustomSchemeRegistration
    {
        CONST_VTBL struct ICoreWebView2ExperimentalCustomSchemeRegistrationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalCustomSchemeRegistration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalCustomSchemeRegistration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalCustomSchemeRegistration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalCustomSchemeRegistration_get_SchemeName(This,schemeName)	\
    ( (This)->lpVtbl -> get_SchemeName(This,schemeName) ) 

#define ICoreWebView2ExperimentalCustomSchemeRegistration_get_TreatAsSecure(This,treatAsSecure)	\
    ( (This)->lpVtbl -> get_TreatAsSecure(This,treatAsSecure) ) 

#define ICoreWebView2ExperimentalCustomSchemeRegistration_put_TreatAsSecure(This,value)	\
    ( (This)->lpVtbl -> put_TreatAsSecure(This,value) ) 

#define ICoreWebView2ExperimentalCustomSchemeRegistration_GetAllowedOrigins(This,allowedOriginsCount,allowedOrigins)	\
    ( (This)->lpVtbl -> GetAllowedOrigins(This,allowedOriginsCount,allowedOrigins) ) 

#define ICoreWebView2ExperimentalCustomSchemeRegistration_SetAllowedOrigins(This,allowedOriginsCount,allowedOrigins)	\
    ( (This)->lpVtbl -> SetAllowedOrigins(This,allowedOriginsCount,allowedOrigins) ) 

#define ICoreWebView2ExperimentalCustomSchemeRegistration_get_HasAuthorityComponent(This,hasAuthorityComponent)	\
    ( (This)->lpVtbl -> get_HasAuthorityComponent(This,hasAuthorityComponent) ) 

#define ICoreWebView2ExperimentalCustomSchemeRegistration_put_HasAuthorityComponent(This,hasAuthorityComponent)	\
    ( (This)->lpVtbl -> put_HasAuthorityComponent(This,hasAuthorityComponent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalCustomSchemeRegistration_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironmentOptions_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalEnvironmentOptions_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalEnvironmentOptions */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalEnvironmentOptions = {0xac52d13f,0x0d38,0x475a,{0x9d,0xca,0x87,0x65,0x80,0xd6,0x79,0x3e}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ac52d13f-0d38-475a-9dca-876580d6793e")
    ICoreWebView2ExperimentalEnvironmentOptions : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCustomSchemeRegistrations( 
            /* [out] */ UINT32 *count,
            /* [out] */ ICoreWebView2ExperimentalCustomSchemeRegistration ***schemeRegistrations) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCustomSchemeRegistrations( 
            /* [in] */ UINT32 count,
            /* [in] */ ICoreWebView2ExperimentalCustomSchemeRegistration **schemeRegistrations) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalEnvironmentOptionsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalEnvironmentOptions * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalEnvironmentOptions * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalEnvironmentOptions * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironmentOptions, GetCustomSchemeRegistrations)
        HRESULT ( STDMETHODCALLTYPE *GetCustomSchemeRegistrations )( 
            ICoreWebView2ExperimentalEnvironmentOptions * This,
            /* [out] */ UINT32 *count,
            /* [out] */ ICoreWebView2ExperimentalCustomSchemeRegistration ***schemeRegistrations);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironmentOptions, SetCustomSchemeRegistrations)
        HRESULT ( STDMETHODCALLTYPE *SetCustomSchemeRegistrations )( 
            ICoreWebView2ExperimentalEnvironmentOptions * This,
            /* [in] */ UINT32 count,
            /* [in] */ ICoreWebView2ExperimentalCustomSchemeRegistration **schemeRegistrations);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalEnvironmentOptionsVtbl;

    interface ICoreWebView2ExperimentalEnvironmentOptions
    {
        CONST_VTBL struct ICoreWebView2ExperimentalEnvironmentOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalEnvironmentOptions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalEnvironmentOptions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalEnvironmentOptions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalEnvironmentOptions_GetCustomSchemeRegistrations(This,count,schemeRegistrations)	\
    ( (This)->lpVtbl -> GetCustomSchemeRegistrations(This,count,schemeRegistrations) ) 

#define ICoreWebView2ExperimentalEnvironmentOptions_SetCustomSchemeRegistrations(This,count,schemeRegistrations)	\
    ( (This)->lpVtbl -> SetCustomSchemeRegistrations(This,count,schemeRegistrations) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalEnvironmentOptions_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSettings7_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalSettings7_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalSettings7 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalSettings7 = {0xd667d3a7,0xc1b7,0x479f,{0x88,0x33,0xdb,0x75,0x47,0xdf,0x66,0x87}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d667d3a7-c1b7-479f-8833-db7547df6687")
    ICoreWebView2ExperimentalSettings7 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsReputationCheckingRequired( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IsReputationCheckingRequired( 
            /* [in] */ BOOL value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalSettings7Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalSettings7 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalSettings7 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalSettings7 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSettings7, get_IsReputationCheckingRequired)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsReputationCheckingRequired )( 
            ICoreWebView2ExperimentalSettings7 * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSettings7, put_IsReputationCheckingRequired)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsReputationCheckingRequired )( 
            ICoreWebView2ExperimentalSettings7 * This,
            /* [in] */ BOOL value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalSettings7Vtbl;

    interface ICoreWebView2ExperimentalSettings7
    {
        CONST_VTBL struct ICoreWebView2ExperimentalSettings7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalSettings7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalSettings7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalSettings7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalSettings7_get_IsReputationCheckingRequired(This,value)	\
    ( (This)->lpVtbl -> get_IsReputationCheckingRequired(This,value) ) 

#define ICoreWebView2ExperimentalSettings7_put_IsReputationCheckingRequired(This,value)	\
    ( (This)->lpVtbl -> put_IsReputationCheckingRequired(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalSettings7_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironmentOptions2_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalEnvironmentOptions2_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalEnvironmentOptions2 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalEnvironmentOptions2 = {0x4A5C436E,0xA9E3,0x4A2E,{0x89,0xC3,0x91,0x0D,0x35,0x13,0xF5,0xCC}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4A5C436E-A9E3-4A2E-89C3-910D3513F5CC")
    ICoreWebView2ExperimentalEnvironmentOptions2 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsCustomCrashReportingEnabled( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IsCustomCrashReportingEnabled( 
            /* [in] */ BOOL value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalEnvironmentOptions2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalEnvironmentOptions2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalEnvironmentOptions2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalEnvironmentOptions2 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironmentOptions2, get_IsCustomCrashReportingEnabled)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsCustomCrashReportingEnabled )( 
            ICoreWebView2ExperimentalEnvironmentOptions2 * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironmentOptions2, put_IsCustomCrashReportingEnabled)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsCustomCrashReportingEnabled )( 
            ICoreWebView2ExperimentalEnvironmentOptions2 * This,
            /* [in] */ BOOL value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalEnvironmentOptions2Vtbl;

    interface ICoreWebView2ExperimentalEnvironmentOptions2
    {
        CONST_VTBL struct ICoreWebView2ExperimentalEnvironmentOptions2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalEnvironmentOptions2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalEnvironmentOptions2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalEnvironmentOptions2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalEnvironmentOptions2_get_IsCustomCrashReportingEnabled(This,value)	\
    ( (This)->lpVtbl -> get_IsCustomCrashReportingEnabled(This,value) ) 

#define ICoreWebView2ExperimentalEnvironmentOptions2_put_IsCustomCrashReportingEnabled(This,value)	\
    ( (This)->lpVtbl -> put_IsCustomCrashReportingEnabled(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalEnvironmentOptions2_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalEnvironment */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalEnvironment = {0x93186BDD,0x0499,0x4939,{0xAD,0x58,0xFB,0xC5,0xED,0x97,0xAE,0x11}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("93186BDD-0499-4939-AD58-FBC5ED97AE11")
    ICoreWebView2ExperimentalEnvironment : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FailureReportFolderPath( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalEnvironmentVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalEnvironment * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalEnvironment * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalEnvironment * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironment, get_FailureReportFolderPath)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FailureReportFolderPath )( 
            ICoreWebView2ExperimentalEnvironment * This,
            /* [retval][out] */ LPWSTR *value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalEnvironmentVtbl;

    interface ICoreWebView2ExperimentalEnvironment
    {
        CONST_VTBL struct ICoreWebView2ExperimentalEnvironmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalEnvironment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalEnvironment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalEnvironment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalEnvironment_get_FailureReportFolderPath(This,value)	\
    ( (This)->lpVtbl -> get_FailureReportFolderPath(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalEnvironment_INTERFACE_DEFINED__ */

#endif /* __WebView2Experimental_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


