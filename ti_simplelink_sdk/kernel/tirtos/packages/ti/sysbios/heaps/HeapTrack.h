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

#ifndef ti_sysbios_heaps_HeapTrack__include
#define ti_sysbios_heaps_HeapTrack__include

#ifndef __nested__
#define __nested__
#define ti_sysbios_heaps_HeapTrack__top__
#endif

#ifndef __extern
#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif
#endif

#define ti_sysbios_heaps_HeapTrack___VERS 200


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sysbios/heaps/package/package.defs.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/IHeap.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Queue.h>
#include <xdc/runtime/Assert.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* Tracker */
struct ti_sysbios_heaps_HeapTrack_Tracker {
    xdc_UArg scribble;
    ti_sysbios_knl_Queue_Elem queElem;
    xdc_SizeT size;
    xdc_UInt32 tick;
    ti_sysbios_knl_Task_Handle taskHandle;
};

/* STARTSCRIBBLE */
#define ti_sysbios_heaps_HeapTrack_STARTSCRIBBLE (0xa5a5a5a5)


/*
 * ======== INTERNAL DEFINITIONS ========
 */

/* NOSCRIBBLE */
#define ti_sysbios_heaps_HeapTrack_NOSCRIBBLE (0x05101920)


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sysbios_heaps_HeapTrack_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__diagsEnabled ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__C;
#ifdef ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__CR
#define ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__C (*((CT__ti_sysbios_heaps_HeapTrack_Module__diagsEnabled*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Module__diagsEnabled (ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__C)
#endif

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sysbios_heaps_HeapTrack_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__diagsIncluded ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__C;
#ifdef ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__CR
#define ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__C (*((CT__ti_sysbios_heaps_HeapTrack_Module__diagsIncluded*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Module__diagsIncluded (ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__C)
#endif

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_sysbios_heaps_HeapTrack_Module__diagsMask;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__diagsMask ti_sysbios_heaps_HeapTrack_Module__diagsMask__C;
#ifdef ti_sysbios_heaps_HeapTrack_Module__diagsMask__CR
#define ti_sysbios_heaps_HeapTrack_Module__diagsMask__C (*((CT__ti_sysbios_heaps_HeapTrack_Module__diagsMask*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Module__diagsMask__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Module__diagsMask (ti_sysbios_heaps_HeapTrack_Module__diagsMask__C)
#endif

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sysbios_heaps_HeapTrack_Module__gateObj;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__gateObj ti_sysbios_heaps_HeapTrack_Module__gateObj__C;
#ifdef ti_sysbios_heaps_HeapTrack_Module__gateObj__CR
#define ti_sysbios_heaps_HeapTrack_Module__gateObj__C (*((CT__ti_sysbios_heaps_HeapTrack_Module__gateObj*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Module__gateObj__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Module__gateObj (ti_sysbios_heaps_HeapTrack_Module__gateObj__C)
#endif

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sysbios_heaps_HeapTrack_Module__gatePrms;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__gatePrms ti_sysbios_heaps_HeapTrack_Module__gatePrms__C;
#ifdef ti_sysbios_heaps_HeapTrack_Module__gatePrms__CR
#define ti_sysbios_heaps_HeapTrack_Module__gatePrms__C (*((CT__ti_sysbios_heaps_HeapTrack_Module__gatePrms*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Module__gatePrms__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Module__gatePrms (ti_sysbios_heaps_HeapTrack_Module__gatePrms__C)
#endif

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sysbios_heaps_HeapTrack_Module__id;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__id ti_sysbios_heaps_HeapTrack_Module__id__C;
#ifdef ti_sysbios_heaps_HeapTrack_Module__id__CR
#define ti_sysbios_heaps_HeapTrack_Module__id__C (*((CT__ti_sysbios_heaps_HeapTrack_Module__id*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Module__id__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Module__id (ti_sysbios_heaps_HeapTrack_Module__id__C)
#endif

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sysbios_heaps_HeapTrack_Module__loggerDefined;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerDefined ti_sysbios_heaps_HeapTrack_Module__loggerDefined__C;
#ifdef ti_sysbios_heaps_HeapTrack_Module__loggerDefined__CR
#define ti_sysbios_heaps_HeapTrack_Module__loggerDefined__C (*((CT__ti_sysbios_heaps_HeapTrack_Module__loggerDefined*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Module__loggerDefined__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Module__loggerDefined (ti_sysbios_heaps_HeapTrack_Module__loggerDefined__C)
#endif

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sysbios_heaps_HeapTrack_Module__loggerObj;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerObj ti_sysbios_heaps_HeapTrack_Module__loggerObj__C;
#ifdef ti_sysbios_heaps_HeapTrack_Module__loggerObj__CR
#define ti_sysbios_heaps_HeapTrack_Module__loggerObj__C (*((CT__ti_sysbios_heaps_HeapTrack_Module__loggerObj*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Module__loggerObj__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Module__loggerObj (ti_sysbios_heaps_HeapTrack_Module__loggerObj__C)
#endif

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn0 ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__C;
#ifdef ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__CR
#define ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__C (*((CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn0*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Module__loggerFxn0 (ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__C)
#endif

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn1 ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__C;
#ifdef ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__CR
#define ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__C (*((CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn1*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Module__loggerFxn1 (ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__C)
#endif

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn2 ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__C;
#ifdef ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__CR
#define ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__C (*((CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn2*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Module__loggerFxn2 (ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__C)
#endif

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn4 ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__C;
#ifdef ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__CR
#define ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__C (*((CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn4*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Module__loggerFxn4 (ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__C)
#endif

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn8 ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__C;
#ifdef ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__CR
#define ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__C (*((CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn8*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Module__loggerFxn8 (ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__C)
#endif

/* Object__count */
typedef xdc_Int CT__ti_sysbios_heaps_HeapTrack_Object__count;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__count ti_sysbios_heaps_HeapTrack_Object__count__C;
#ifdef ti_sysbios_heaps_HeapTrack_Object__count__CR
#define ti_sysbios_heaps_HeapTrack_Object__count__C (*((CT__ti_sysbios_heaps_HeapTrack_Object__count*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Object__count__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Object__count (ti_sysbios_heaps_HeapTrack_Object__count__C)
#endif

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sysbios_heaps_HeapTrack_Object__heap;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__heap ti_sysbios_heaps_HeapTrack_Object__heap__C;
#ifdef ti_sysbios_heaps_HeapTrack_Object__heap__CR
#define ti_sysbios_heaps_HeapTrack_Object__heap__C (*((CT__ti_sysbios_heaps_HeapTrack_Object__heap*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Object__heap__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Object__heap (ti_sysbios_heaps_HeapTrack_Object__heap__C)
#endif

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sysbios_heaps_HeapTrack_Object__sizeof;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__sizeof ti_sysbios_heaps_HeapTrack_Object__sizeof__C;
#ifdef ti_sysbios_heaps_HeapTrack_Object__sizeof__CR
#define ti_sysbios_heaps_HeapTrack_Object__sizeof__C (*((CT__ti_sysbios_heaps_HeapTrack_Object__sizeof*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Object__sizeof__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Object__sizeof (ti_sysbios_heaps_HeapTrack_Object__sizeof__C)
#endif

/* Object__table */
typedef xdc_Ptr CT__ti_sysbios_heaps_HeapTrack_Object__table;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__table ti_sysbios_heaps_HeapTrack_Object__table__C;
#ifdef ti_sysbios_heaps_HeapTrack_Object__table__CR
#define ti_sysbios_heaps_HeapTrack_Object__table__C (*((CT__ti_sysbios_heaps_HeapTrack_Object__table*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Object__table__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_Object__table (ti_sysbios_heaps_HeapTrack_Object__table__C)
#endif

/* A_doubleFree */
typedef xdc_runtime_Assert_Id CT__ti_sysbios_heaps_HeapTrack_A_doubleFree;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_A_doubleFree ti_sysbios_heaps_HeapTrack_A_doubleFree__C;
#ifdef ti_sysbios_heaps_HeapTrack_A_doubleFree__CR
#define ti_sysbios_heaps_HeapTrack_A_doubleFree (*((CT__ti_sysbios_heaps_HeapTrack_A_doubleFree*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_A_doubleFree__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_A_doubleFree (ti_sysbios_heaps_HeapTrack_A_doubleFree__C)
#endif

/* A_bufOverflow */
typedef xdc_runtime_Assert_Id CT__ti_sysbios_heaps_HeapTrack_A_bufOverflow;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_A_bufOverflow ti_sysbios_heaps_HeapTrack_A_bufOverflow__C;
#ifdef ti_sysbios_heaps_HeapTrack_A_bufOverflow__CR
#define ti_sysbios_heaps_HeapTrack_A_bufOverflow (*((CT__ti_sysbios_heaps_HeapTrack_A_bufOverflow*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_A_bufOverflow__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_A_bufOverflow (ti_sysbios_heaps_HeapTrack_A_bufOverflow__C)
#endif

/* A_notEmpty */
typedef xdc_runtime_Assert_Id CT__ti_sysbios_heaps_HeapTrack_A_notEmpty;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_A_notEmpty ti_sysbios_heaps_HeapTrack_A_notEmpty__C;
#ifdef ti_sysbios_heaps_HeapTrack_A_notEmpty__CR
#define ti_sysbios_heaps_HeapTrack_A_notEmpty (*((CT__ti_sysbios_heaps_HeapTrack_A_notEmpty*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_A_notEmpty__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_A_notEmpty (ti_sysbios_heaps_HeapTrack_A_notEmpty__C)
#endif

/* A_nullObject */
typedef xdc_runtime_Assert_Id CT__ti_sysbios_heaps_HeapTrack_A_nullObject;
__extern __FAR__ const CT__ti_sysbios_heaps_HeapTrack_A_nullObject ti_sysbios_heaps_HeapTrack_A_nullObject__C;
#ifdef ti_sysbios_heaps_HeapTrack_A_nullObject__CR
#define ti_sysbios_heaps_HeapTrack_A_nullObject (*((CT__ti_sysbios_heaps_HeapTrack_A_nullObject*)(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_A_nullObject__C_offset)))
#else
#define ti_sysbios_heaps_HeapTrack_A_nullObject (ti_sysbios_heaps_HeapTrack_A_nullObject__C)
#endif


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sysbios_heaps_HeapTrack_Params {
    size_t __size;
    const void *__self;
    void *__fxns;
    xdc_runtime_IInstance_Params *instance;
    xdc_runtime_IHeap_Handle heap;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sysbios_heaps_HeapTrack_Struct {
    const ti_sysbios_heaps_HeapTrack_Fxns__ *__fxns;
    xdc_runtime_IHeap_Handle f0;
    xdc_SizeT f1;
    xdc_SizeT f2;
    xdc_SizeT f3;
    xdc_SizeT f4;
    ti_sysbios_knl_Queue_Struct f5;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sysbios_heaps_HeapTrack_Fxns__ {
    const xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Ptr (*alloc)(ti_sysbios_heaps_HeapTrack_Handle inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb);
    xdc_Void (*free)(ti_sysbios_heaps_HeapTrack_Handle inst, xdc_Ptr block, xdc_SizeT size);
    xdc_Bool (*isBlocking)(ti_sysbios_heaps_HeapTrack_Handle inst);
    xdc_Void (*getStats)(ti_sysbios_heaps_HeapTrack_Handle inst, xdc_runtime_Memory_Stats* stats);
    xdc_runtime_Types_SysFxns2 __sfxns;
};
#ifndef ti_sysbios_heaps_HeapTrack_Module__FXNS__CR

/* Module__FXNS__C */
__extern const ti_sysbios_heaps_HeapTrack_Fxns__ ti_sysbios_heaps_HeapTrack_Module__FXNS__C;
#else
#define ti_sysbios_heaps_HeapTrack_Module__FXNS__C (*(xdcRomConstPtr + ti_sysbios_heaps_HeapTrack_Module__FXNS__C_offset))
#endif


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sysbios_heaps_HeapTrack_Module_startup( state ) (-1)

/* Instance_init__E */
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_Instance_init__E, "ti_sysbios_heaps_HeapTrack_Instance_init")
__extern xdc_Void ti_sysbios_heaps_HeapTrack_Instance_init__E(ti_sysbios_heaps_HeapTrack_Object *obj, const ti_sysbios_heaps_HeapTrack_Params *prms);

/* Instance_finalize__E */
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_Instance_finalize__E, "ti_sysbios_heaps_HeapTrack_Instance_finalize")
__extern void ti_sysbios_heaps_HeapTrack_Instance_finalize__E(ti_sysbios_heaps_HeapTrack_Object *obj);

/* create */
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_create, "ti_sysbios_heaps_HeapTrack_create")
__extern ti_sysbios_heaps_HeapTrack_Handle ti_sysbios_heaps_HeapTrack_create( const ti_sysbios_heaps_HeapTrack_Params *prms, xdc_runtime_Error_Block *eb);

/* construct */
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_construct, "ti_sysbios_heaps_HeapTrack_construct")
__extern void ti_sysbios_heaps_HeapTrack_construct(ti_sysbios_heaps_HeapTrack_Struct *obj, const ti_sysbios_heaps_HeapTrack_Params *prms);

/* delete */
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_delete, "ti_sysbios_heaps_HeapTrack_delete")
__extern void ti_sysbios_heaps_HeapTrack_delete(ti_sysbios_heaps_HeapTrack_Handle *instp);

/* destruct */
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_destruct, "ti_sysbios_heaps_HeapTrack_destruct")
__extern void ti_sysbios_heaps_HeapTrack_destruct(ti_sysbios_heaps_HeapTrack_Struct *obj);

/* Handle__label__S */
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_Handle__label__S, "ti_sysbios_heaps_HeapTrack_Handle__label__S")
__extern xdc_runtime_Types_Label *ti_sysbios_heaps_HeapTrack_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label *lab);

/* Module__startupDone__S */
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_Module__startupDone__S, "ti_sysbios_heaps_HeapTrack_Module__startupDone__S")
__extern xdc_Bool ti_sysbios_heaps_HeapTrack_Module__startupDone__S( void);

/* Object__create__S */
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_Object__create__S, "ti_sysbios_heaps_HeapTrack_Object__create__S")
__extern xdc_Ptr ti_sysbios_heaps_HeapTrack_Object__create__S( xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb);

/* Object__delete__S */
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_Object__delete__S, "ti_sysbios_heaps_HeapTrack_Object__delete__S")
__extern xdc_Void ti_sysbios_heaps_HeapTrack_Object__delete__S( xdc_Ptr instp);

/* Object__get__S */
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_Object__get__S, "ti_sysbios_heaps_HeapTrack_Object__get__S")
__extern xdc_Ptr ti_sysbios_heaps_HeapTrack_Object__get__S( xdc_Ptr oarr, xdc_Int i);

/* Object__first__S */
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_Object__first__S, "ti_sysbios_heaps_HeapTrack_Object__first__S")
__extern xdc_Ptr ti_sysbios_heaps_HeapTrack_Object__first__S( void);

/* Object__next__S */
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_Object__next__S, "ti_sysbios_heaps_HeapTrack_Object__next__S")
__extern xdc_Ptr ti_sysbios_heaps_HeapTrack_Object__next__S( xdc_Ptr obj);

/* Params__init__S */
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_Params__init__S, "ti_sysbios_heaps_HeapTrack_Params__init__S")
__extern xdc_Void ti_sysbios_heaps_HeapTrack_Params__init__S( xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz);

/* alloc__E */
#define ti_sysbios_heaps_HeapTrack_alloc ti_sysbios_heaps_HeapTrack_alloc__E
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_alloc__E, "ti_sysbios_heaps_HeapTrack_alloc")
__extern xdc_Ptr ti_sysbios_heaps_HeapTrack_alloc__E( ti_sysbios_heaps_HeapTrack_Handle instp, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb);

/* free__E */
#define ti_sysbios_heaps_HeapTrack_free ti_sysbios_heaps_HeapTrack_free__E
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_free__E, "ti_sysbios_heaps_HeapTrack_free")
__extern xdc_Void ti_sysbios_heaps_HeapTrack_free__E( ti_sysbios_heaps_HeapTrack_Handle instp, xdc_Ptr block, xdc_SizeT size);

/* isBlocking__E */
#define ti_sysbios_heaps_HeapTrack_isBlocking ti_sysbios_heaps_HeapTrack_isBlocking__E
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_isBlocking__E, "ti_sysbios_heaps_HeapTrack_isBlocking")
__extern xdc_Bool ti_sysbios_heaps_HeapTrack_isBlocking__E( ti_sysbios_heaps_HeapTrack_Handle instp);

/* getStats__E */
#define ti_sysbios_heaps_HeapTrack_getStats ti_sysbios_heaps_HeapTrack_getStats__E
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_getStats__E, "ti_sysbios_heaps_HeapTrack_getStats")
__extern xdc_Void ti_sysbios_heaps_HeapTrack_getStats__E( ti_sysbios_heaps_HeapTrack_Handle instp, xdc_runtime_Memory_Stats *stats);

/* printTask__E */
#define ti_sysbios_heaps_HeapTrack_printTask ti_sysbios_heaps_HeapTrack_printTask__E
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_printTask__E, "ti_sysbios_heaps_HeapTrack_printTask")
__extern xdc_Void ti_sysbios_heaps_HeapTrack_printTask__E( ti_sysbios_knl_Task_Handle taskHandle);

/* printHeap__E */
#define ti_sysbios_heaps_HeapTrack_printHeap ti_sysbios_heaps_HeapTrack_printHeap__E
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_printHeap__E, "ti_sysbios_heaps_HeapTrack_printHeap")
__extern xdc_Void ti_sysbios_heaps_HeapTrack_printHeap__E( ti_sysbios_heaps_HeapTrack_Handle instp);

/* printTrack__I */
#define ti_sysbios_heaps_HeapTrack_printTrack ti_sysbios_heaps_HeapTrack_printTrack__I
xdc__CODESECT(ti_sysbios_heaps_HeapTrack_printTrack__I, "ti_sysbios_heaps_HeapTrack_printTrack")
__extern xdc_Bool ti_sysbios_heaps_HeapTrack_printTrack__I( ti_sysbios_heaps_HeapTrack_Tracker *tracker, ti_sysbios_heaps_HeapTrack_Handle handle);


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline xdc_runtime_IHeap_Module ti_sysbios_heaps_HeapTrack_Module_upCast(void);
static inline xdc_runtime_IHeap_Module ti_sysbios_heaps_HeapTrack_Module_upCast(void)
{
    return (xdc_runtime_IHeap_Module)&ti_sysbios_heaps_HeapTrack_Module__FXNS__C;
}

/* Module_to_xdc_runtime_IHeap */
#define ti_sysbios_heaps_HeapTrack_Module_to_xdc_runtime_IHeap ti_sysbios_heaps_HeapTrack_Module_upCast

/* Handle_upCast */
static inline xdc_runtime_IHeap_Handle ti_sysbios_heaps_HeapTrack_Handle_upCast(ti_sysbios_heaps_HeapTrack_Handle i);
static inline xdc_runtime_IHeap_Handle ti_sysbios_heaps_HeapTrack_Handle_upCast(ti_sysbios_heaps_HeapTrack_Handle i)
{
    return (xdc_runtime_IHeap_Handle)i;
}

/* Handle_to_xdc_runtime_IHeap */
#define ti_sysbios_heaps_HeapTrack_Handle_to_xdc_runtime_IHeap ti_sysbios_heaps_HeapTrack_Handle_upCast

/* Handle_downCast */
static inline ti_sysbios_heaps_HeapTrack_Handle ti_sysbios_heaps_HeapTrack_Handle_downCast(xdc_runtime_IHeap_Handle i);
static inline ti_sysbios_heaps_HeapTrack_Handle ti_sysbios_heaps_HeapTrack_Handle_downCast(xdc_runtime_IHeap_Handle i)
{
    xdc_runtime_IHeap_Handle i2 = (xdc_runtime_IHeap_Handle)i;
    return ((const void*)i2->__fxns == (const void*)&ti_sysbios_heaps_HeapTrack_Module__FXNS__C) ? (ti_sysbios_heaps_HeapTrack_Handle)i : (ti_sysbios_heaps_HeapTrack_Handle)NULL;
}

/* Handle_from_xdc_runtime_IHeap */
#define ti_sysbios_heaps_HeapTrack_Handle_from_xdc_runtime_IHeap ti_sysbios_heaps_HeapTrack_Handle_downCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sysbios_heaps_HeapTrack_Module_startupDone() ti_sysbios_heaps_HeapTrack_Module__startupDone__S()

/* Object_heap */
#define ti_sysbios_heaps_HeapTrack_Object_heap() ti_sysbios_heaps_HeapTrack_Object__heap__C

/* Module_heap */
#define ti_sysbios_heaps_HeapTrack_Module_heap() ti_sysbios_heaps_HeapTrack_Object__heap__C

/* Module_id */
static inline CT__ti_sysbios_heaps_HeapTrack_Module__id ti_sysbios_heaps_HeapTrack_Module_id(void);
static inline CT__ti_sysbios_heaps_HeapTrack_Module__id ti_sysbios_heaps_HeapTrack_Module_id( void ) 
{
    return ti_sysbios_heaps_HeapTrack_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sysbios_heaps_HeapTrack_Module_hasMask(void);
static inline xdc_Bool ti_sysbios_heaps_HeapTrack_Module_hasMask(void)
{
    return (xdc_Bool)(ti_sysbios_heaps_HeapTrack_Module__diagsMask__C != (CT__ti_sysbios_heaps_HeapTrack_Module__diagsMask)NULL);
}

/* Module_getMask */
static inline xdc_Bits16 ti_sysbios_heaps_HeapTrack_Module_getMask(void);
static inline xdc_Bits16 ti_sysbios_heaps_HeapTrack_Module_getMask(void)
{
    return (ti_sysbios_heaps_HeapTrack_Module__diagsMask__C != (CT__ti_sysbios_heaps_HeapTrack_Module__diagsMask)NULL) ? *ti_sysbios_heaps_HeapTrack_Module__diagsMask__C : (xdc_Bits16)0;
}

/* Module_setMask */
static inline xdc_Void ti_sysbios_heaps_HeapTrack_Module_setMask(xdc_Bits16 mask);
static inline xdc_Void ti_sysbios_heaps_HeapTrack_Module_setMask(xdc_Bits16 mask)
{
    if (ti_sysbios_heaps_HeapTrack_Module__diagsMask__C != (CT__ti_sysbios_heaps_HeapTrack_Module__diagsMask)NULL) {
        *ti_sysbios_heaps_HeapTrack_Module__diagsMask__C = mask;
    }
}

/* Params_init */
static inline void ti_sysbios_heaps_HeapTrack_Params_init(ti_sysbios_heaps_HeapTrack_Params *prms);
static inline void ti_sysbios_heaps_HeapTrack_Params_init( ti_sysbios_heaps_HeapTrack_Params *prms ) 
{
    if (prms != NULL) {
        ti_sysbios_heaps_HeapTrack_Params__init__S(prms, NULL, sizeof(ti_sysbios_heaps_HeapTrack_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sysbios_heaps_HeapTrack_Params_copy(ti_sysbios_heaps_HeapTrack_Params *dst, const ti_sysbios_heaps_HeapTrack_Params *src);
static inline void ti_sysbios_heaps_HeapTrack_Params_copy(ti_sysbios_heaps_HeapTrack_Params *dst, const ti_sysbios_heaps_HeapTrack_Params *src) 
{
    if (dst != NULL) {
        ti_sysbios_heaps_HeapTrack_Params__init__S(dst, (const void *)src, sizeof(ti_sysbios_heaps_HeapTrack_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Object_count */
#define ti_sysbios_heaps_HeapTrack_Object_count() ti_sysbios_heaps_HeapTrack_Object__count__C

/* Object_sizeof */
#define ti_sysbios_heaps_HeapTrack_Object_sizeof() ti_sysbios_heaps_HeapTrack_Object__sizeof__C

/* Object_get */
static inline ti_sysbios_heaps_HeapTrack_Handle ti_sysbios_heaps_HeapTrack_Object_get(ti_sysbios_heaps_HeapTrack_Object *oarr, int i);
static inline ti_sysbios_heaps_HeapTrack_Handle ti_sysbios_heaps_HeapTrack_Object_get(ti_sysbios_heaps_HeapTrack_Object *oarr, int i) 
{
    return (ti_sysbios_heaps_HeapTrack_Handle)ti_sysbios_heaps_HeapTrack_Object__get__S(oarr, i);
}

/* Object_first */
static inline ti_sysbios_heaps_HeapTrack_Handle ti_sysbios_heaps_HeapTrack_Object_first(void);
static inline ti_sysbios_heaps_HeapTrack_Handle ti_sysbios_heaps_HeapTrack_Object_first(void)
{
    return (ti_sysbios_heaps_HeapTrack_Handle)ti_sysbios_heaps_HeapTrack_Object__first__S();
}

/* Object_next */
static inline ti_sysbios_heaps_HeapTrack_Handle ti_sysbios_heaps_HeapTrack_Object_next(ti_sysbios_heaps_HeapTrack_Object *obj);
static inline ti_sysbios_heaps_HeapTrack_Handle ti_sysbios_heaps_HeapTrack_Object_next(ti_sysbios_heaps_HeapTrack_Object *obj)
{
    return (ti_sysbios_heaps_HeapTrack_Handle)ti_sysbios_heaps_HeapTrack_Object__next__S(obj);
}

/* Handle_label */
static inline xdc_runtime_Types_Label *ti_sysbios_heaps_HeapTrack_Handle_label(ti_sysbios_heaps_HeapTrack_Handle inst, xdc_runtime_Types_Label *lab);
static inline xdc_runtime_Types_Label *ti_sysbios_heaps_HeapTrack_Handle_label(ti_sysbios_heaps_HeapTrack_Handle inst, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapTrack_Handle__label__S(inst, lab);
}

/* Handle_name */
static inline xdc_String ti_sysbios_heaps_HeapTrack_Handle_name(ti_sysbios_heaps_HeapTrack_Handle inst);
static inline xdc_String ti_sysbios_heaps_HeapTrack_Handle_name(ti_sysbios_heaps_HeapTrack_Handle inst)
{
    xdc_runtime_Types_Label lab;
    return ti_sysbios_heaps_HeapTrack_Handle__label__S(inst, &lab)->iname;
}

/* handle */
static inline ti_sysbios_heaps_HeapTrack_Handle ti_sysbios_heaps_HeapTrack_handle(ti_sysbios_heaps_HeapTrack_Struct *str);
static inline ti_sysbios_heaps_HeapTrack_Handle ti_sysbios_heaps_HeapTrack_handle(ti_sysbios_heaps_HeapTrack_Struct *str)
{
    return (ti_sysbios_heaps_HeapTrack_Handle)str;
}

/* struct */
static inline ti_sysbios_heaps_HeapTrack_Struct *ti_sysbios_heaps_HeapTrack_struct(ti_sysbios_heaps_HeapTrack_Handle inst);
static inline ti_sysbios_heaps_HeapTrack_Struct *ti_sysbios_heaps_HeapTrack_struct(ti_sysbios_heaps_HeapTrack_Handle inst)
{
    return (ti_sysbios_heaps_HeapTrack_Struct*)inst;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sysbios_heaps_HeapTrack__top__
#undef __nested__
#endif

#endif /* ti_sysbios_heaps_HeapTrack__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sysbios_heaps_HeapTrack__internalaccess))

#ifndef ti_sysbios_heaps_HeapTrack__include_state
#define ti_sysbios_heaps_HeapTrack__include_state

/* Object */
struct ti_sysbios_heaps_HeapTrack_Object {
    const ti_sysbios_heaps_HeapTrack_Fxns__ *__fxns;
    xdc_runtime_IHeap_Handle internalHeap;
    xdc_SizeT size;
    xdc_SizeT peak;
    xdc_SizeT sizeWithoutTracker;
    xdc_SizeT peakWithoutTracker;
    char dummy;
};

/* Instance_State_trackQueue */
#ifndef ti_sysbios_heaps_HeapTrack_Instance_State_trackQueue__OR
__extern __FAR__ const xdc_SizeT ti_sysbios_heaps_HeapTrack_Instance_State_trackQueue__O;
#endif
static inline ti_sysbios_knl_Queue_Handle ti_sysbios_heaps_HeapTrack_Instance_State_trackQueue(ti_sysbios_heaps_HeapTrack_Object *obj);
static inline ti_sysbios_knl_Queue_Handle ti_sysbios_heaps_HeapTrack_Instance_State_trackQueue(ti_sysbios_heaps_HeapTrack_Object *obj)
{
    return (ti_sysbios_knl_Queue_Handle)(((char*)obj) + ti_sysbios_heaps_HeapTrack_Instance_State_trackQueue__O);
}

#endif /* ti_sysbios_heaps_HeapTrack__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sysbios_heaps_HeapTrack__nolocalnames)

#ifndef ti_sysbios_heaps_HeapTrack__localnames__done
#define ti_sysbios_heaps_HeapTrack__localnames__done

/* module prefix */
#define HeapTrack_Instance ti_sysbios_heaps_HeapTrack_Instance
#define HeapTrack_Handle ti_sysbios_heaps_HeapTrack_Handle
#define HeapTrack_Module ti_sysbios_heaps_HeapTrack_Module
#define HeapTrack_Object ti_sysbios_heaps_HeapTrack_Object
#define HeapTrack_Struct ti_sysbios_heaps_HeapTrack_Struct
#define HeapTrack_Tracker ti_sysbios_heaps_HeapTrack_Tracker
#define HeapTrack_STARTSCRIBBLE ti_sysbios_heaps_HeapTrack_STARTSCRIBBLE
#define HeapTrack_NOSCRIBBLE ti_sysbios_heaps_HeapTrack_NOSCRIBBLE
#define HeapTrack_Instance_State ti_sysbios_heaps_HeapTrack_Instance_State
#define HeapTrack_A_doubleFree ti_sysbios_heaps_HeapTrack_A_doubleFree
#define HeapTrack_A_bufOverflow ti_sysbios_heaps_HeapTrack_A_bufOverflow
#define HeapTrack_A_notEmpty ti_sysbios_heaps_HeapTrack_A_notEmpty
#define HeapTrack_A_nullObject ti_sysbios_heaps_HeapTrack_A_nullObject
#define HeapTrack_Instance_State_trackQueue ti_sysbios_heaps_HeapTrack_Instance_State_trackQueue
#define HeapTrack_Params ti_sysbios_heaps_HeapTrack_Params
#define HeapTrack_alloc ti_sysbios_heaps_HeapTrack_alloc
#define HeapTrack_free ti_sysbios_heaps_HeapTrack_free
#define HeapTrack_isBlocking ti_sysbios_heaps_HeapTrack_isBlocking
#define HeapTrack_getStats ti_sysbios_heaps_HeapTrack_getStats
#define HeapTrack_printTask ti_sysbios_heaps_HeapTrack_printTask
#define HeapTrack_printHeap ti_sysbios_heaps_HeapTrack_printHeap
#define HeapTrack_Module_name ti_sysbios_heaps_HeapTrack_Module_name
#define HeapTrack_Module_id ti_sysbios_heaps_HeapTrack_Module_id
#define HeapTrack_Module_startup ti_sysbios_heaps_HeapTrack_Module_startup
#define HeapTrack_Module_startupDone ti_sysbios_heaps_HeapTrack_Module_startupDone
#define HeapTrack_Module_hasMask ti_sysbios_heaps_HeapTrack_Module_hasMask
#define HeapTrack_Module_getMask ti_sysbios_heaps_HeapTrack_Module_getMask
#define HeapTrack_Module_setMask ti_sysbios_heaps_HeapTrack_Module_setMask
#define HeapTrack_Object_heap ti_sysbios_heaps_HeapTrack_Object_heap
#define HeapTrack_Module_heap ti_sysbios_heaps_HeapTrack_Module_heap
#define HeapTrack_construct ti_sysbios_heaps_HeapTrack_construct
#define HeapTrack_create ti_sysbios_heaps_HeapTrack_create
#define HeapTrack_handle ti_sysbios_heaps_HeapTrack_handle
#define HeapTrack_struct ti_sysbios_heaps_HeapTrack_struct
#define HeapTrack_Handle_label ti_sysbios_heaps_HeapTrack_Handle_label
#define HeapTrack_Handle_name ti_sysbios_heaps_HeapTrack_Handle_name
#define HeapTrack_Instance_init ti_sysbios_heaps_HeapTrack_Instance_init
#define HeapTrack_Object_count ti_sysbios_heaps_HeapTrack_Object_count
#define HeapTrack_Object_get ti_sysbios_heaps_HeapTrack_Object_get
#define HeapTrack_Object_first ti_sysbios_heaps_HeapTrack_Object_first
#define HeapTrack_Object_next ti_sysbios_heaps_HeapTrack_Object_next
#define HeapTrack_Object_sizeof ti_sysbios_heaps_HeapTrack_Object_sizeof
#define HeapTrack_Params_copy ti_sysbios_heaps_HeapTrack_Params_copy
#define HeapTrack_Params_init ti_sysbios_heaps_HeapTrack_Params_init
#define HeapTrack_Instance_finalize ti_sysbios_heaps_HeapTrack_Instance_finalize
#define HeapTrack_delete ti_sysbios_heaps_HeapTrack_delete
#define HeapTrack_destruct ti_sysbios_heaps_HeapTrack_destruct
#define HeapTrack_Module_upCast ti_sysbios_heaps_HeapTrack_Module_upCast
#define HeapTrack_Module_to_xdc_runtime_IHeap ti_sysbios_heaps_HeapTrack_Module_to_xdc_runtime_IHeap
#define HeapTrack_Handle_upCast ti_sysbios_heaps_HeapTrack_Handle_upCast
#define HeapTrack_Handle_to_xdc_runtime_IHeap ti_sysbios_heaps_HeapTrack_Handle_to_xdc_runtime_IHeap
#define HeapTrack_Handle_downCast ti_sysbios_heaps_HeapTrack_Handle_downCast
#define HeapTrack_Handle_from_xdc_runtime_IHeap ti_sysbios_heaps_HeapTrack_Handle_from_xdc_runtime_IHeap

#endif /* ti_sysbios_heaps_HeapTrack__localnames__done */
#endif
