/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-I11
 */

/*
 * ======== GENERATED SECTIONS ========
 *
 *     PROLOGUE
 *     INCLUDES
 *
 *     CREATE ARGS
 *     INTERNAL DEFINITIONS
 *     MODULE-WIDE CONFIGS
 *     PER-INSTANCE TYPES
 *     VIRTUAL FUNCTIONS
 *     FUNCTION DECLARATIONS
 *     CONVERTORS
 *     SYSTEM FUNCTIONS
 *
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sysbios_xdcruntime_SemThreadSupport__include
#define ti_sysbios_xdcruntime_SemThreadSupport__include

#ifndef __nested__
#define __nested__
#define ti_sysbios_xdcruntime_SemThreadSupport__top__
#endif

#ifndef __extern
#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif
#endif

#define ti_sysbios_xdcruntime_SemThreadSupport___VERS 200


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sysbios/xdcruntime/package/package.defs.h>

#include <xdc/runtime/knl/ISemThreadSupport.h>
#include <ti/sysbios/knl/Semaphore.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* PendStatus */
typedef xdc_runtime_knl_ISemaphore_PendStatus ti_sysbios_xdcruntime_SemThreadSupport_PendStatus;

/* FOREVER */
#define ti_sysbios_xdcruntime_SemThreadSupport_FOREVER (~(0))

/* Mode */
typedef xdc_runtime_knl_ISemaphore_Mode ti_sysbios_xdcruntime_SemThreadSupport_Mode;

/* PendStatus_ERROR */
#define ti_sysbios_xdcruntime_SemThreadSupport_PendStatus_ERROR xdc_runtime_knl_ISemaphore_PendStatus_ERROR

/* PendStatus_TIMEOUT */
#define ti_sysbios_xdcruntime_SemThreadSupport_PendStatus_TIMEOUT xdc_runtime_knl_ISemaphore_PendStatus_TIMEOUT

/* PendStatus_SUCCESS */
#define ti_sysbios_xdcruntime_SemThreadSupport_PendStatus_SUCCESS xdc_runtime_knl_ISemaphore_PendStatus_SUCCESS

/* Mode_COUNTING */
#define ti_sysbios_xdcruntime_SemThreadSupport_Mode_COUNTING xdc_runtime_knl_ISemaphore_Mode_COUNTING

/* Mode_BINARY */
#define ti_sysbios_xdcruntime_SemThreadSupport_Mode_BINARY xdc_runtime_knl_ISemaphore_Mode_BINARY


/*
 * ======== CREATE ARGS ========
 */

/* Args__create */
typedef struct ti_sysbios_xdcruntime_SemThreadSupport_Args__create {
    xdc_Int count;
} ti_sysbios_xdcruntime_SemThreadSupport_Args__create;


/*
 * ======== INTERNAL DEFINITIONS ========
 */


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsEnabled ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsEnabled__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsEnabled__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsEnabled__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsEnabled*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsEnabled__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsEnabled (ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsEnabled__C)
#endif

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsIncluded ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsIncluded__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsIncluded__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsIncluded__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsIncluded*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsIncluded__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsIncluded (ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsIncluded__C)
#endif

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask (ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask__C)
#endif

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__gateObj;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__gateObj ti_sysbios_xdcruntime_SemThreadSupport_Module__gateObj__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Module__gateObj__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__gateObj__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__gateObj*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Module__gateObj__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__gateObj (ti_sysbios_xdcruntime_SemThreadSupport_Module__gateObj__C)
#endif

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__gatePrms;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__gatePrms ti_sysbios_xdcruntime_SemThreadSupport_Module__gatePrms__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Module__gatePrms__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__gatePrms__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__gatePrms*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Module__gatePrms__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__gatePrms (ti_sysbios_xdcruntime_SemThreadSupport_Module__gatePrms__C)
#endif

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__id;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__id ti_sysbios_xdcruntime_SemThreadSupport_Module__id__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Module__id__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__id__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__id*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Module__id__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__id (ti_sysbios_xdcruntime_SemThreadSupport_Module__id__C)
#endif

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerDefined;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerDefined ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerDefined__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerDefined__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerDefined__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerDefined*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerDefined__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerDefined (ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerDefined__C)
#endif

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerObj;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerObj ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerObj__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerObj__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerObj__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerObj*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerObj__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerObj (ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerObj__C)
#endif

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn0 ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn0__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn0__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn0__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn0*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn0__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn0 (ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn0__C)
#endif

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn1 ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn1__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn1__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn1__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn1*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn1__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn1 (ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn1__C)
#endif

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn2 ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn2__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn2__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn2__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn2*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn2__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn2 (ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn2__C)
#endif

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn4 ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn4__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn4__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn4__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn4*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn4__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn4 (ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn4__C)
#endif

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn8 ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn8__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn8__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn8__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn8*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn8__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn8 (ti_sysbios_xdcruntime_SemThreadSupport_Module__loggerFxn8__C)
#endif

/* Object__count */
typedef xdc_Int CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__count;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__count ti_sysbios_xdcruntime_SemThreadSupport_Object__count__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Object__count__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Object__count__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__count*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Object__count__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Object__count (ti_sysbios_xdcruntime_SemThreadSupport_Object__count__C)
#endif

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__heap;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__heap ti_sysbios_xdcruntime_SemThreadSupport_Object__heap__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Object__heap__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Object__heap__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__heap*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Object__heap__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Object__heap (ti_sysbios_xdcruntime_SemThreadSupport_Object__heap__C)
#endif

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__sizeof;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__sizeof ti_sysbios_xdcruntime_SemThreadSupport_Object__sizeof__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Object__sizeof__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Object__sizeof__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__sizeof*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Object__sizeof__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Object__sizeof (ti_sysbios_xdcruntime_SemThreadSupport_Object__sizeof__C)
#endif

/* Object__table */
typedef xdc_Ptr CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__table;
__extern __FAR__ const CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__table ti_sysbios_xdcruntime_SemThreadSupport_Object__table__C;
#ifdef ti_sysbios_xdcruntime_SemThreadSupport_Object__table__CR
#define ti_sysbios_xdcruntime_SemThreadSupport_Object__table__C (*((CT__ti_sysbios_xdcruntime_SemThreadSupport_Object__table*)(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Object__table__C_offset)))
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Object__table (ti_sysbios_xdcruntime_SemThreadSupport_Object__table__C)
#endif


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sysbios_xdcruntime_SemThreadSupport_Params {
    size_t __size;
    const void *__self;
    void *__fxns;
    xdc_runtime_IInstance_Params *instance;
    xdc_runtime_knl_ISemaphore_Mode mode;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sysbios_xdcruntime_SemThreadSupport_Struct {
    const ti_sysbios_xdcruntime_SemThreadSupport_Fxns__ *__fxns;
    ti_sysbios_knl_Semaphore_Struct f0;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sysbios_xdcruntime_SemThreadSupport_Fxns__ {
    const xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Int (*pend)(ti_sysbios_xdcruntime_SemThreadSupport_Handle inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb);
    xdc_Bool (*post)(ti_sysbios_xdcruntime_SemThreadSupport_Handle inst, xdc_runtime_Error_Block* eb);
    xdc_runtime_Types_SysFxns2 __sfxns;
};
#ifndef ti_sysbios_xdcruntime_SemThreadSupport_Module__FXNS__CR

/* Module__FXNS__C */
__extern const ti_sysbios_xdcruntime_SemThreadSupport_Fxns__ ti_sysbios_xdcruntime_SemThreadSupport_Module__FXNS__C;
#else
#define ti_sysbios_xdcruntime_SemThreadSupport_Module__FXNS__C (*(xdcRomConstPtr + ti_sysbios_xdcruntime_SemThreadSupport_Module__FXNS__C_offset))
#endif


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sysbios_xdcruntime_SemThreadSupport_Module_startup( state ) (-1)

/* Instance_init__E */
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_Instance_init__E, "ti_sysbios_xdcruntime_SemThreadSupport_Instance_init")
__extern xdc_Void ti_sysbios_xdcruntime_SemThreadSupport_Instance_init__E(ti_sysbios_xdcruntime_SemThreadSupport_Object *obj, xdc_Int count, const ti_sysbios_xdcruntime_SemThreadSupport_Params *prms);

/* Instance_finalize__E */
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_Instance_finalize__E, "ti_sysbios_xdcruntime_SemThreadSupport_Instance_finalize")
__extern void ti_sysbios_xdcruntime_SemThreadSupport_Instance_finalize__E(ti_sysbios_xdcruntime_SemThreadSupport_Object *obj);

/* create */
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_create, "ti_sysbios_xdcruntime_SemThreadSupport_create")
__extern ti_sysbios_xdcruntime_SemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_create( xdc_Int count, const ti_sysbios_xdcruntime_SemThreadSupport_Params *prms, xdc_runtime_Error_Block *eb);

/* construct */
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_construct, "ti_sysbios_xdcruntime_SemThreadSupport_construct")
__extern void ti_sysbios_xdcruntime_SemThreadSupport_construct(ti_sysbios_xdcruntime_SemThreadSupport_Struct *obj, xdc_Int count, const ti_sysbios_xdcruntime_SemThreadSupport_Params *prms);

/* delete */
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_delete, "ti_sysbios_xdcruntime_SemThreadSupport_delete")
__extern void ti_sysbios_xdcruntime_SemThreadSupport_delete(ti_sysbios_xdcruntime_SemThreadSupport_Handle *instp);

/* destruct */
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_destruct, "ti_sysbios_xdcruntime_SemThreadSupport_destruct")
__extern void ti_sysbios_xdcruntime_SemThreadSupport_destruct(ti_sysbios_xdcruntime_SemThreadSupport_Struct *obj);

/* Handle__label__S */
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_Handle__label__S, "ti_sysbios_xdcruntime_SemThreadSupport_Handle__label__S")
__extern xdc_runtime_Types_Label *ti_sysbios_xdcruntime_SemThreadSupport_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label *lab);

/* Module__startupDone__S */
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_Module__startupDone__S, "ti_sysbios_xdcruntime_SemThreadSupport_Module__startupDone__S")
__extern xdc_Bool ti_sysbios_xdcruntime_SemThreadSupport_Module__startupDone__S( void);

/* Object__create__S */
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_Object__create__S, "ti_sysbios_xdcruntime_SemThreadSupport_Object__create__S")
__extern xdc_Ptr ti_sysbios_xdcruntime_SemThreadSupport_Object__create__S( xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb);

/* Object__delete__S */
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_Object__delete__S, "ti_sysbios_xdcruntime_SemThreadSupport_Object__delete__S")
__extern xdc_Void ti_sysbios_xdcruntime_SemThreadSupport_Object__delete__S( xdc_Ptr instp);

/* Object__get__S */
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_Object__get__S, "ti_sysbios_xdcruntime_SemThreadSupport_Object__get__S")
__extern xdc_Ptr ti_sysbios_xdcruntime_SemThreadSupport_Object__get__S( xdc_Ptr oarr, xdc_Int i);

/* Object__first__S */
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_Object__first__S, "ti_sysbios_xdcruntime_SemThreadSupport_Object__first__S")
__extern xdc_Ptr ti_sysbios_xdcruntime_SemThreadSupport_Object__first__S( void);

/* Object__next__S */
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_Object__next__S, "ti_sysbios_xdcruntime_SemThreadSupport_Object__next__S")
__extern xdc_Ptr ti_sysbios_xdcruntime_SemThreadSupport_Object__next__S( xdc_Ptr obj);

/* Params__init__S */
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_Params__init__S, "ti_sysbios_xdcruntime_SemThreadSupport_Params__init__S")
__extern xdc_Void ti_sysbios_xdcruntime_SemThreadSupport_Params__init__S( xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz);

/* pend__E */
#define ti_sysbios_xdcruntime_SemThreadSupport_pend ti_sysbios_xdcruntime_SemThreadSupport_pend__E
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_pend__E, "ti_sysbios_xdcruntime_SemThreadSupport_pend")
__extern xdc_Int ti_sysbios_xdcruntime_SemThreadSupport_pend__E( ti_sysbios_xdcruntime_SemThreadSupport_Handle instp, xdc_UInt timeout, xdc_runtime_Error_Block *eb);

/* post__E */
#define ti_sysbios_xdcruntime_SemThreadSupport_post ti_sysbios_xdcruntime_SemThreadSupport_post__E
xdc__CODESECT(ti_sysbios_xdcruntime_SemThreadSupport_post__E, "ti_sysbios_xdcruntime_SemThreadSupport_post")
__extern xdc_Bool ti_sysbios_xdcruntime_SemThreadSupport_post__E( ti_sysbios_xdcruntime_SemThreadSupport_Handle instp, xdc_runtime_Error_Block *eb);


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline xdc_runtime_knl_ISemThreadSupport_Module ti_sysbios_xdcruntime_SemThreadSupport_Module_upCast(void);
static inline xdc_runtime_knl_ISemThreadSupport_Module ti_sysbios_xdcruntime_SemThreadSupport_Module_upCast(void)
{
    return (xdc_runtime_knl_ISemThreadSupport_Module)&ti_sysbios_xdcruntime_SemThreadSupport_Module__FXNS__C;
}

/* Module_to_xdc_runtime_knl_ISemThreadSupport */
#define ti_sysbios_xdcruntime_SemThreadSupport_Module_to_xdc_runtime_knl_ISemThreadSupport ti_sysbios_xdcruntime_SemThreadSupport_Module_upCast

/* Handle_upCast */
static inline xdc_runtime_knl_ISemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_Handle_upCast(ti_sysbios_xdcruntime_SemThreadSupport_Handle i);
static inline xdc_runtime_knl_ISemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_Handle_upCast(ti_sysbios_xdcruntime_SemThreadSupport_Handle i)
{
    return (xdc_runtime_knl_ISemThreadSupport_Handle)i;
}

/* Handle_to_xdc_runtime_knl_ISemThreadSupport */
#define ti_sysbios_xdcruntime_SemThreadSupport_Handle_to_xdc_runtime_knl_ISemThreadSupport ti_sysbios_xdcruntime_SemThreadSupport_Handle_upCast

/* Handle_downCast */
static inline ti_sysbios_xdcruntime_SemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_Handle_downCast(xdc_runtime_knl_ISemThreadSupport_Handle i);
static inline ti_sysbios_xdcruntime_SemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_Handle_downCast(xdc_runtime_knl_ISemThreadSupport_Handle i)
{
    xdc_runtime_knl_ISemThreadSupport_Handle i2 = (xdc_runtime_knl_ISemThreadSupport_Handle)i;
    return ((const void*)i2->__fxns == (const void*)&ti_sysbios_xdcruntime_SemThreadSupport_Module__FXNS__C) ? (ti_sysbios_xdcruntime_SemThreadSupport_Handle)i : (ti_sysbios_xdcruntime_SemThreadSupport_Handle)NULL;
}

/* Handle_from_xdc_runtime_knl_ISemThreadSupport */
#define ti_sysbios_xdcruntime_SemThreadSupport_Handle_from_xdc_runtime_knl_ISemThreadSupport ti_sysbios_xdcruntime_SemThreadSupport_Handle_downCast

/* Module_upCast2 */
static inline xdc_runtime_knl_ISemaphore_Module ti_sysbios_xdcruntime_SemThreadSupport_Module_upCast2(void);
static inline xdc_runtime_knl_ISemaphore_Module ti_sysbios_xdcruntime_SemThreadSupport_Module_upCast2(void)
{
    return (xdc_runtime_knl_ISemaphore_Module)&ti_sysbios_xdcruntime_SemThreadSupport_Module__FXNS__C;
}

/* Module_to_xdc_runtime_knl_ISemaphore */
#define ti_sysbios_xdcruntime_SemThreadSupport_Module_to_xdc_runtime_knl_ISemaphore ti_sysbios_xdcruntime_SemThreadSupport_Module_upCast2

/* Handle_upCast2 */
static inline xdc_runtime_knl_ISemaphore_Handle ti_sysbios_xdcruntime_SemThreadSupport_Handle_upCast2(ti_sysbios_xdcruntime_SemThreadSupport_Handle i);
static inline xdc_runtime_knl_ISemaphore_Handle ti_sysbios_xdcruntime_SemThreadSupport_Handle_upCast2(ti_sysbios_xdcruntime_SemThreadSupport_Handle i)
{
    return (xdc_runtime_knl_ISemaphore_Handle)i;
}

/* Handle_to_xdc_runtime_knl_ISemaphore */
#define ti_sysbios_xdcruntime_SemThreadSupport_Handle_to_xdc_runtime_knl_ISemaphore ti_sysbios_xdcruntime_SemThreadSupport_Handle_upCast2

/* Handle_downCast2 */
static inline ti_sysbios_xdcruntime_SemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_Handle_downCast2(xdc_runtime_knl_ISemaphore_Handle i);
static inline ti_sysbios_xdcruntime_SemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_Handle_downCast2(xdc_runtime_knl_ISemaphore_Handle i)
{
    xdc_runtime_knl_ISemaphore_Handle i2 = (xdc_runtime_knl_ISemaphore_Handle)i;
    return ((const void*)i2->__fxns == (const void*)&ti_sysbios_xdcruntime_SemThreadSupport_Module__FXNS__C) ? (ti_sysbios_xdcruntime_SemThreadSupport_Handle)i : (ti_sysbios_xdcruntime_SemThreadSupport_Handle)NULL;
}

/* Handle_from_xdc_runtime_knl_ISemaphore */
#define ti_sysbios_xdcruntime_SemThreadSupport_Handle_from_xdc_runtime_knl_ISemaphore ti_sysbios_xdcruntime_SemThreadSupport_Handle_downCast2


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sysbios_xdcruntime_SemThreadSupport_Module_startupDone() ti_sysbios_xdcruntime_SemThreadSupport_Module__startupDone__S()

/* Object_heap */
#define ti_sysbios_xdcruntime_SemThreadSupport_Object_heap() ti_sysbios_xdcruntime_SemThreadSupport_Object__heap__C

/* Module_heap */
#define ti_sysbios_xdcruntime_SemThreadSupport_Module_heap() ti_sysbios_xdcruntime_SemThreadSupport_Object__heap__C

/* Module_id */
static inline CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__id ti_sysbios_xdcruntime_SemThreadSupport_Module_id(void);
static inline CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__id ti_sysbios_xdcruntime_SemThreadSupport_Module_id( void ) 
{
    return ti_sysbios_xdcruntime_SemThreadSupport_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sysbios_xdcruntime_SemThreadSupport_Module_hasMask(void);
static inline xdc_Bool ti_sysbios_xdcruntime_SemThreadSupport_Module_hasMask(void)
{
    return (xdc_Bool)(ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask__C != (CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask)NULL);
}

/* Module_getMask */
static inline xdc_Bits16 ti_sysbios_xdcruntime_SemThreadSupport_Module_getMask(void);
static inline xdc_Bits16 ti_sysbios_xdcruntime_SemThreadSupport_Module_getMask(void)
{
    return (ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask__C != (CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask)NULL) ? *ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask__C : (xdc_Bits16)0;
}

/* Module_setMask */
static inline xdc_Void ti_sysbios_xdcruntime_SemThreadSupport_Module_setMask(xdc_Bits16 mask);
static inline xdc_Void ti_sysbios_xdcruntime_SemThreadSupport_Module_setMask(xdc_Bits16 mask)
{
    if (ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask__C != (CT__ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask)NULL) {
        *ti_sysbios_xdcruntime_SemThreadSupport_Module__diagsMask__C = mask;
    }
}

/* Params_init */
static inline void ti_sysbios_xdcruntime_SemThreadSupport_Params_init(ti_sysbios_xdcruntime_SemThreadSupport_Params *prms);
static inline void ti_sysbios_xdcruntime_SemThreadSupport_Params_init( ti_sysbios_xdcruntime_SemThreadSupport_Params *prms ) 
{
    if (prms != NULL) {
        ti_sysbios_xdcruntime_SemThreadSupport_Params__init__S(prms, NULL, sizeof(ti_sysbios_xdcruntime_SemThreadSupport_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sysbios_xdcruntime_SemThreadSupport_Params_copy(ti_sysbios_xdcruntime_SemThreadSupport_Params *dst, const ti_sysbios_xdcruntime_SemThreadSupport_Params *src);
static inline void ti_sysbios_xdcruntime_SemThreadSupport_Params_copy(ti_sysbios_xdcruntime_SemThreadSupport_Params *dst, const ti_sysbios_xdcruntime_SemThreadSupport_Params *src) 
{
    if (dst != NULL) {
        ti_sysbios_xdcruntime_SemThreadSupport_Params__init__S(dst, (const void *)src, sizeof(ti_sysbios_xdcruntime_SemThreadSupport_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Object_count */
#define ti_sysbios_xdcruntime_SemThreadSupport_Object_count() ti_sysbios_xdcruntime_SemThreadSupport_Object__count__C

/* Object_sizeof */
#define ti_sysbios_xdcruntime_SemThreadSupport_Object_sizeof() ti_sysbios_xdcruntime_SemThreadSupport_Object__sizeof__C

/* Object_get */
static inline ti_sysbios_xdcruntime_SemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_Object_get(ti_sysbios_xdcruntime_SemThreadSupport_Object *oarr, int i);
static inline ti_sysbios_xdcruntime_SemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_Object_get(ti_sysbios_xdcruntime_SemThreadSupport_Object *oarr, int i) 
{
    return (ti_sysbios_xdcruntime_SemThreadSupport_Handle)ti_sysbios_xdcruntime_SemThreadSupport_Object__get__S(oarr, i);
}

/* Object_first */
static inline ti_sysbios_xdcruntime_SemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_Object_first(void);
static inline ti_sysbios_xdcruntime_SemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_Object_first(void)
{
    return (ti_sysbios_xdcruntime_SemThreadSupport_Handle)ti_sysbios_xdcruntime_SemThreadSupport_Object__first__S();
}

/* Object_next */
static inline ti_sysbios_xdcruntime_SemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_Object_next(ti_sysbios_xdcruntime_SemThreadSupport_Object *obj);
static inline ti_sysbios_xdcruntime_SemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_Object_next(ti_sysbios_xdcruntime_SemThreadSupport_Object *obj)
{
    return (ti_sysbios_xdcruntime_SemThreadSupport_Handle)ti_sysbios_xdcruntime_SemThreadSupport_Object__next__S(obj);
}

/* Handle_label */
static inline xdc_runtime_Types_Label *ti_sysbios_xdcruntime_SemThreadSupport_Handle_label(ti_sysbios_xdcruntime_SemThreadSupport_Handle inst, xdc_runtime_Types_Label *lab);
static inline xdc_runtime_Types_Label *ti_sysbios_xdcruntime_SemThreadSupport_Handle_label(ti_sysbios_xdcruntime_SemThreadSupport_Handle inst, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_xdcruntime_SemThreadSupport_Handle__label__S(inst, lab);
}

/* Handle_name */
static inline xdc_String ti_sysbios_xdcruntime_SemThreadSupport_Handle_name(ti_sysbios_xdcruntime_SemThreadSupport_Handle inst);
static inline xdc_String ti_sysbios_xdcruntime_SemThreadSupport_Handle_name(ti_sysbios_xdcruntime_SemThreadSupport_Handle inst)
{
    xdc_runtime_Types_Label lab;
    return ti_sysbios_xdcruntime_SemThreadSupport_Handle__label__S(inst, &lab)->iname;
}

/* handle */
static inline ti_sysbios_xdcruntime_SemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_handle(ti_sysbios_xdcruntime_SemThreadSupport_Struct *str);
static inline ti_sysbios_xdcruntime_SemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_handle(ti_sysbios_xdcruntime_SemThreadSupport_Struct *str)
{
    return (ti_sysbios_xdcruntime_SemThreadSupport_Handle)str;
}

/* struct */
static inline ti_sysbios_xdcruntime_SemThreadSupport_Struct *ti_sysbios_xdcruntime_SemThreadSupport_struct(ti_sysbios_xdcruntime_SemThreadSupport_Handle inst);
static inline ti_sysbios_xdcruntime_SemThreadSupport_Struct *ti_sysbios_xdcruntime_SemThreadSupport_struct(ti_sysbios_xdcruntime_SemThreadSupport_Handle inst)
{
    return (ti_sysbios_xdcruntime_SemThreadSupport_Struct*)inst;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sysbios_xdcruntime_SemThreadSupport__top__
#undef __nested__
#endif

#endif /* ti_sysbios_xdcruntime_SemThreadSupport__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sysbios_xdcruntime_SemThreadSupport__internalaccess))

#ifndef ti_sysbios_xdcruntime_SemThreadSupport__include_state
#define ti_sysbios_xdcruntime_SemThreadSupport__include_state

/* Object */
struct ti_sysbios_xdcruntime_SemThreadSupport_Object {
    const ti_sysbios_xdcruntime_SemThreadSupport_Fxns__ *__fxns;
    char dummy;
};

/* Instance_State_sem */
#ifndef ti_sysbios_xdcruntime_SemThreadSupport_Instance_State_sem__OR
__extern __FAR__ const xdc_SizeT ti_sysbios_xdcruntime_SemThreadSupport_Instance_State_sem__O;
#endif
static inline ti_sysbios_knl_Semaphore_Handle ti_sysbios_xdcruntime_SemThreadSupport_Instance_State_sem(ti_sysbios_xdcruntime_SemThreadSupport_Object *obj);
static inline ti_sysbios_knl_Semaphore_Handle ti_sysbios_xdcruntime_SemThreadSupport_Instance_State_sem(ti_sysbios_xdcruntime_SemThreadSupport_Object *obj)
{
    return (ti_sysbios_knl_Semaphore_Handle)(((char*)obj) + ti_sysbios_xdcruntime_SemThreadSupport_Instance_State_sem__O);
}

#endif /* ti_sysbios_xdcruntime_SemThreadSupport__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sysbios_xdcruntime_SemThreadSupport__nolocalnames)

#ifndef ti_sysbios_xdcruntime_SemThreadSupport__localnames__done
#define ti_sysbios_xdcruntime_SemThreadSupport__localnames__done

/* module prefix */
#define SemThreadSupport_Instance ti_sysbios_xdcruntime_SemThreadSupport_Instance
#define SemThreadSupport_Handle ti_sysbios_xdcruntime_SemThreadSupport_Handle
#define SemThreadSupport_Module ti_sysbios_xdcruntime_SemThreadSupport_Module
#define SemThreadSupport_Object ti_sysbios_xdcruntime_SemThreadSupport_Object
#define SemThreadSupport_Struct ti_sysbios_xdcruntime_SemThreadSupport_Struct
#define SemThreadSupport_PendStatus ti_sysbios_xdcruntime_SemThreadSupport_PendStatus
#define SemThreadSupport_FOREVER ti_sysbios_xdcruntime_SemThreadSupport_FOREVER
#define SemThreadSupport_Mode ti_sysbios_xdcruntime_SemThreadSupport_Mode
#define SemThreadSupport_Instance_State ti_sysbios_xdcruntime_SemThreadSupport_Instance_State
#define SemThreadSupport_PendStatus_ERROR ti_sysbios_xdcruntime_SemThreadSupport_PendStatus_ERROR
#define SemThreadSupport_PendStatus_TIMEOUT ti_sysbios_xdcruntime_SemThreadSupport_PendStatus_TIMEOUT
#define SemThreadSupport_PendStatus_SUCCESS ti_sysbios_xdcruntime_SemThreadSupport_PendStatus_SUCCESS
#define SemThreadSupport_Mode_COUNTING ti_sysbios_xdcruntime_SemThreadSupport_Mode_COUNTING
#define SemThreadSupport_Mode_BINARY ti_sysbios_xdcruntime_SemThreadSupport_Mode_BINARY
#define SemThreadSupport_Instance_State_sem ti_sysbios_xdcruntime_SemThreadSupport_Instance_State_sem
#define SemThreadSupport_Params ti_sysbios_xdcruntime_SemThreadSupport_Params
#define SemThreadSupport_pend ti_sysbios_xdcruntime_SemThreadSupport_pend
#define SemThreadSupport_post ti_sysbios_xdcruntime_SemThreadSupport_post
#define SemThreadSupport_Module_name ti_sysbios_xdcruntime_SemThreadSupport_Module_name
#define SemThreadSupport_Module_id ti_sysbios_xdcruntime_SemThreadSupport_Module_id
#define SemThreadSupport_Module_startup ti_sysbios_xdcruntime_SemThreadSupport_Module_startup
#define SemThreadSupport_Module_startupDone ti_sysbios_xdcruntime_SemThreadSupport_Module_startupDone
#define SemThreadSupport_Module_hasMask ti_sysbios_xdcruntime_SemThreadSupport_Module_hasMask
#define SemThreadSupport_Module_getMask ti_sysbios_xdcruntime_SemThreadSupport_Module_getMask
#define SemThreadSupport_Module_setMask ti_sysbios_xdcruntime_SemThreadSupport_Module_setMask
#define SemThreadSupport_Object_heap ti_sysbios_xdcruntime_SemThreadSupport_Object_heap
#define SemThreadSupport_Module_heap ti_sysbios_xdcruntime_SemThreadSupport_Module_heap
#define SemThreadSupport_construct ti_sysbios_xdcruntime_SemThreadSupport_construct
#define SemThreadSupport_create ti_sysbios_xdcruntime_SemThreadSupport_create
#define SemThreadSupport_handle ti_sysbios_xdcruntime_SemThreadSupport_handle
#define SemThreadSupport_struct ti_sysbios_xdcruntime_SemThreadSupport_struct
#define SemThreadSupport_Handle_label ti_sysbios_xdcruntime_SemThreadSupport_Handle_label
#define SemThreadSupport_Handle_name ti_sysbios_xdcruntime_SemThreadSupport_Handle_name
#define SemThreadSupport_Instance_init ti_sysbios_xdcruntime_SemThreadSupport_Instance_init
#define SemThreadSupport_Object_count ti_sysbios_xdcruntime_SemThreadSupport_Object_count
#define SemThreadSupport_Object_get ti_sysbios_xdcruntime_SemThreadSupport_Object_get
#define SemThreadSupport_Object_first ti_sysbios_xdcruntime_SemThreadSupport_Object_first
#define SemThreadSupport_Object_next ti_sysbios_xdcruntime_SemThreadSupport_Object_next
#define SemThreadSupport_Object_sizeof ti_sysbios_xdcruntime_SemThreadSupport_Object_sizeof
#define SemThreadSupport_Params_copy ti_sysbios_xdcruntime_SemThreadSupport_Params_copy
#define SemThreadSupport_Params_init ti_sysbios_xdcruntime_SemThreadSupport_Params_init
#define SemThreadSupport_Instance_finalize ti_sysbios_xdcruntime_SemThreadSupport_Instance_finalize
#define SemThreadSupport_delete ti_sysbios_xdcruntime_SemThreadSupport_delete
#define SemThreadSupport_destruct ti_sysbios_xdcruntime_SemThreadSupport_destruct
#define SemThreadSupport_Module_upCast ti_sysbios_xdcruntime_SemThreadSupport_Module_upCast
#define SemThreadSupport_Module_to_xdc_runtime_knl_ISemThreadSupport ti_sysbios_xdcruntime_SemThreadSupport_Module_to_xdc_runtime_knl_ISemThreadSupport
#define SemThreadSupport_Handle_upCast ti_sysbios_xdcruntime_SemThreadSupport_Handle_upCast
#define SemThreadSupport_Handle_to_xdc_runtime_knl_ISemThreadSupport ti_sysbios_xdcruntime_SemThreadSupport_Handle_to_xdc_runtime_knl_ISemThreadSupport
#define SemThreadSupport_Handle_downCast ti_sysbios_xdcruntime_SemThreadSupport_Handle_downCast
#define SemThreadSupport_Handle_from_xdc_runtime_knl_ISemThreadSupport ti_sysbios_xdcruntime_SemThreadSupport_Handle_from_xdc_runtime_knl_ISemThreadSupport
#define SemThreadSupport_Module_upCast2 ti_sysbios_xdcruntime_SemThreadSupport_Module_upCast2
#define SemThreadSupport_Module_to_xdc_runtime_knl_ISemaphore ti_sysbios_xdcruntime_SemThreadSupport_Module_to_xdc_runtime_knl_ISemaphore
#define SemThreadSupport_Handle_upCast2 ti_sysbios_xdcruntime_SemThreadSupport_Handle_upCast2
#define SemThreadSupport_Handle_to_xdc_runtime_knl_ISemaphore ti_sysbios_xdcruntime_SemThreadSupport_Handle_to_xdc_runtime_knl_ISemaphore
#define SemThreadSupport_Handle_downCast2 ti_sysbios_xdcruntime_SemThreadSupport_Handle_downCast2
#define SemThreadSupport_Handle_from_xdc_runtime_knl_ISemaphore ti_sysbios_xdcruntime_SemThreadSupport_Handle_from_xdc_runtime_knl_ISemaphore

#endif /* ti_sysbios_xdcruntime_SemThreadSupport__localnames__done */
#endif
