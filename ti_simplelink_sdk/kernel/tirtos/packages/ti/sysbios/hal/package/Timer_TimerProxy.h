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
 *     MODULE-WIDE CONFIGS
 *     PER-INSTANCE TYPES
 *     VIRTUAL FUNCTIONS
 *     FUNCTION DECLARATIONS
 *     CONVERTORS
 *     SYSTEM FUNCTIONS
 *
 *     EPILOGUE
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sysbios_hal_Timer_TimerProxy__include
#define ti_sysbios_hal_Timer_TimerProxy__include

#ifndef __nested__
#define __nested__
#define ti_sysbios_hal_Timer_TimerProxy__top__
#endif

#ifndef __extern
#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif
#endif

#define ti_sysbios_hal_Timer_TimerProxy___VERS 200


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sysbios/hal/package/package.defs.h>

#include <ti/sysbios/interfaces/ITimer.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* FuncPtr */
typedef ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_FuncPtr;

/* ANY */
#define ti_sysbios_hal_Timer_TimerProxy_ANY (~0)

/* StartMode */
typedef ti_sysbios_interfaces_ITimer_StartMode ti_sysbios_hal_Timer_TimerProxy_StartMode;

/* RunMode */
typedef ti_sysbios_interfaces_ITimer_RunMode ti_sysbios_hal_Timer_TimerProxy_RunMode;

/* Status */
typedef ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_Status;

/* PeriodType */
typedef ti_sysbios_interfaces_ITimer_PeriodType ti_sysbios_hal_Timer_TimerProxy_PeriodType;


/*
 * ======== CREATE ARGS ========
 */

/* Args__create */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Args__create {
    xdc_Int id;
    ti_sysbios_interfaces_ITimer_FuncPtr tickFxn;
} ti_sysbios_hal_Timer_TimerProxy_Args__create;


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__CR
#define ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled (ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C)
#endif

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__CR
#define ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded (ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C)
#endif

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__CR
#define ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask (ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C)
#endif

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sysbios_hal_Timer_TimerProxy_Module__gateObj;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Module__gateObj ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__CR
#define ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Module__gateObj*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Module__gateObj (ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C)
#endif

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__CR
#define ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms (ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C)
#endif

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sysbios_hal_Timer_TimerProxy_Module__id;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Module__id ti_sysbios_hal_Timer_TimerProxy_Module__id__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Module__id__CR
#define ti_sysbios_hal_Timer_TimerProxy_Module__id__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Module__id*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Module__id__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Module__id (ti_sysbios_hal_Timer_TimerProxy_Module__id__C)
#endif

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__CR
#define ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined (ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C)
#endif

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__CR
#define ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj (ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C)
#endif

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__CR
#define ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0 (ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C)
#endif

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__CR
#define ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1 (ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C)
#endif

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__CR
#define ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2 (ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C)
#endif

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__CR
#define ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4 (ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C)
#endif

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__CR
#define ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8 (ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C)
#endif

/* Object__count */
typedef xdc_Int CT__ti_sysbios_hal_Timer_TimerProxy_Object__count;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Object__count ti_sysbios_hal_Timer_TimerProxy_Object__count__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Object__count__CR
#define ti_sysbios_hal_Timer_TimerProxy_Object__count__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Object__count*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Object__count__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Object__count (ti_sysbios_hal_Timer_TimerProxy_Object__count__C)
#endif

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sysbios_hal_Timer_TimerProxy_Object__heap;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Object__heap ti_sysbios_hal_Timer_TimerProxy_Object__heap__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Object__heap__CR
#define ti_sysbios_hal_Timer_TimerProxy_Object__heap__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Object__heap*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Object__heap__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Object__heap (ti_sysbios_hal_Timer_TimerProxy_Object__heap__C)
#endif

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sysbios_hal_Timer_TimerProxy_Object__sizeof;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Object__sizeof ti_sysbios_hal_Timer_TimerProxy_Object__sizeof__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Object__sizeof__CR
#define ti_sysbios_hal_Timer_TimerProxy_Object__sizeof__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Object__sizeof*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Object__sizeof__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Object__sizeof (ti_sysbios_hal_Timer_TimerProxy_Object__sizeof__C)
#endif

/* Object__table */
typedef xdc_Ptr CT__ti_sysbios_hal_Timer_TimerProxy_Object__table;
__extern __FAR__ const CT__ti_sysbios_hal_Timer_TimerProxy_Object__table ti_sysbios_hal_Timer_TimerProxy_Object__table__C;
#ifdef ti_sysbios_hal_Timer_TimerProxy_Object__table__CR
#define ti_sysbios_hal_Timer_TimerProxy_Object__table__C (*((CT__ti_sysbios_hal_Timer_TimerProxy_Object__table*)(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Object__table__C_offset)))
#else
#define ti_sysbios_hal_Timer_TimerProxy_Object__table (ti_sysbios_hal_Timer_TimerProxy_Object__table__C)
#endif


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sysbios_hal_Timer_TimerProxy_Params {
    size_t __size;
    const void *__self;
    void *__fxns;
    xdc_runtime_IInstance_Params *instance;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UArg arg;
    xdc_UInt32 period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_runtime_Types_FreqHz extFreq;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sysbios_hal_Timer_TimerProxy_Struct {
    const ti_sysbios_hal_Timer_TimerProxy_Fxns__ *__fxns;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sysbios_hal_Timer_TimerProxy_Fxns__ {
    const xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_UInt (*getNumTimers)(void);
    ti_sysbios_interfaces_ITimer_Status (*getStatus)(xdc_UInt id);
    xdc_Void (*startup)(void);
    xdc_UInt32 (*getMaxTicks)(ti_sysbios_hal_Timer_TimerProxy_Handle inst);
    xdc_Void (*setNextTick)(ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UInt32 ticks);
    xdc_Void (*start)(ti_sysbios_hal_Timer_TimerProxy_Handle inst);
    xdc_Void (*stop)(ti_sysbios_hal_Timer_TimerProxy_Handle inst);
    xdc_Void (*setPeriod)(ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UInt32 period);
    xdc_Bool (*setPeriodMicroSecs)(ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UInt32 microsecs);
    xdc_UInt32 (*getPeriod)(ti_sysbios_hal_Timer_TimerProxy_Handle inst);
    xdc_UInt32 (*getCount)(ti_sysbios_hal_Timer_TimerProxy_Handle inst);
    xdc_Void (*getFreq)(ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_runtime_Types_FreqHz* freq);
    ti_sysbios_interfaces_ITimer_FuncPtr (*getFunc)(ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UArg* arg);
    xdc_Void (*setFunc)(ti_sysbios_hal_Timer_TimerProxy_Handle inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg);
    xdc_Void (*trigger)(ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UInt32 cycles);
    xdc_UInt32 (*getExpiredCounts)(ti_sysbios_hal_Timer_TimerProxy_Handle inst);
    xdc_UInt32 (*getExpiredTicks)(ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UInt32 tickPeriod);
    xdc_UInt32 (*getCurrentTick)(ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_Bool save);
    xdc_runtime_Types_SysFxns2 __sfxns;
};
#ifndef ti_sysbios_hal_Timer_TimerProxy_Module__FXNS__CR

/* Module__FXNS__C */
__extern const ti_sysbios_hal_Timer_TimerProxy_Fxns__ ti_sysbios_hal_Timer_TimerProxy_Module__FXNS__C;
#else
#define ti_sysbios_hal_Timer_TimerProxy_Module__FXNS__C (*(xdcRomConstPtr + ti_sysbios_hal_Timer_TimerProxy_Module__FXNS__C_offset))
#endif


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sysbios_hal_Timer_TimerProxy_Module_startup( state ) (-1)

/* create */
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_create, "ti_sysbios_hal_Timer_TimerProxy_create")
__extern ti_sysbios_hal_Timer_TimerProxy_Handle ti_sysbios_hal_Timer_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_TimerProxy_Params *prms, xdc_runtime_Error_Block *eb);

/* delete */
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_delete, "ti_sysbios_hal_Timer_TimerProxy_delete")
__extern void ti_sysbios_hal_Timer_TimerProxy_delete(ti_sysbios_hal_Timer_TimerProxy_Handle *instp);

/* Handle__label__S */
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_Handle__label__S, "ti_sysbios_hal_Timer_TimerProxy_Handle__label__S")
__extern xdc_runtime_Types_Label *ti_sysbios_hal_Timer_TimerProxy_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label *lab);

/* Module__startupDone__S */
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S, "ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S")
__extern xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void);

/* Object__get__S */
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_Object__get__S, "ti_sysbios_hal_Timer_TimerProxy_Object__get__S")
__extern xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__get__S( xdc_Ptr oarr, xdc_Int i);

/* Object__first__S */
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_Object__first__S, "ti_sysbios_hal_Timer_TimerProxy_Object__first__S")
__extern xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__first__S( void);

/* Object__next__S */
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_Object__next__S, "ti_sysbios_hal_Timer_TimerProxy_Object__next__S")
__extern xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__next__S( xdc_Ptr obj);

/* Params__init__S */
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_Params__init__S, "ti_sysbios_hal_Timer_TimerProxy_Params__init__S")
__extern xdc_Void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz);

/* Proxy__abstract__S */
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S, "ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S")
__extern xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void);

/* Proxy__delegate__S */
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S, "ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S")
__extern xdc_CPtr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void);

/* getNumTimers__E */
#define ti_sysbios_hal_Timer_TimerProxy_getNumTimers ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E, "ti_sysbios_hal_Timer_TimerProxy_getNumTimers")
__extern xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void);

/* getStatus__E */
#define ti_sysbios_hal_Timer_TimerProxy_getStatus ti_sysbios_hal_Timer_TimerProxy_getStatus__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_getStatus__E, "ti_sysbios_hal_Timer_TimerProxy_getStatus")
__extern ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id);

/* startup__E */
#define ti_sysbios_hal_Timer_TimerProxy_startup ti_sysbios_hal_Timer_TimerProxy_startup__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_startup__E, "ti_sysbios_hal_Timer_TimerProxy_startup")
__extern xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void);

/* getMaxTicks__E */
#define ti_sysbios_hal_Timer_TimerProxy_getMaxTicks ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E, "ti_sysbios_hal_Timer_TimerProxy_getMaxTicks")
__extern xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle instp);

/* setNextTick__E */
#define ti_sysbios_hal_Timer_TimerProxy_setNextTick ti_sysbios_hal_Timer_TimerProxy_setNextTick__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_setNextTick__E, "ti_sysbios_hal_Timer_TimerProxy_setNextTick")
__extern xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle instp, xdc_UInt32 ticks);

/* start__E */
#define ti_sysbios_hal_Timer_TimerProxy_start ti_sysbios_hal_Timer_TimerProxy_start__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_start__E, "ti_sysbios_hal_Timer_TimerProxy_start")
__extern xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle instp);

/* stop__E */
#define ti_sysbios_hal_Timer_TimerProxy_stop ti_sysbios_hal_Timer_TimerProxy_stop__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_stop__E, "ti_sysbios_hal_Timer_TimerProxy_stop")
__extern xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle instp);

/* setPeriod__E */
#define ti_sysbios_hal_Timer_TimerProxy_setPeriod ti_sysbios_hal_Timer_TimerProxy_setPeriod__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_setPeriod__E, "ti_sysbios_hal_Timer_TimerProxy_setPeriod")
__extern xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle instp, xdc_UInt32 period);

/* setPeriodMicroSecs__E */
#define ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E, "ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs")
__extern xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle instp, xdc_UInt32 microsecs);

/* getPeriod__E */
#define ti_sysbios_hal_Timer_TimerProxy_getPeriod ti_sysbios_hal_Timer_TimerProxy_getPeriod__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_getPeriod__E, "ti_sysbios_hal_Timer_TimerProxy_getPeriod")
__extern xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle instp);

/* getCount__E */
#define ti_sysbios_hal_Timer_TimerProxy_getCount ti_sysbios_hal_Timer_TimerProxy_getCount__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_getCount__E, "ti_sysbios_hal_Timer_TimerProxy_getCount")
__extern xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle instp);

/* getFreq__E */
#define ti_sysbios_hal_Timer_TimerProxy_getFreq ti_sysbios_hal_Timer_TimerProxy_getFreq__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_getFreq__E, "ti_sysbios_hal_Timer_TimerProxy_getFreq")
__extern xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle instp, xdc_runtime_Types_FreqHz *freq);

/* getFunc__E */
#define ti_sysbios_hal_Timer_TimerProxy_getFunc ti_sysbios_hal_Timer_TimerProxy_getFunc__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_getFunc__E, "ti_sysbios_hal_Timer_TimerProxy_getFunc")
__extern ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle instp, xdc_UArg *arg);

/* setFunc__E */
#define ti_sysbios_hal_Timer_TimerProxy_setFunc ti_sysbios_hal_Timer_TimerProxy_setFunc__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_setFunc__E, "ti_sysbios_hal_Timer_TimerProxy_setFunc")
__extern xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle instp, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg);

/* trigger__E */
#define ti_sysbios_hal_Timer_TimerProxy_trigger ti_sysbios_hal_Timer_TimerProxy_trigger__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_trigger__E, "ti_sysbios_hal_Timer_TimerProxy_trigger")
__extern xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle instp, xdc_UInt32 cycles);

/* getExpiredCounts__E */
#define ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E, "ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts")
__extern xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle instp);

/* getExpiredTicks__E */
#define ti_sysbios_hal_Timer_TimerProxy_getExpiredTicks ti_sysbios_hal_Timer_TimerProxy_getExpiredTicks__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_getExpiredTicks__E, "ti_sysbios_hal_Timer_TimerProxy_getExpiredTicks")
__extern xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle instp, xdc_UInt32 tickPeriod);

/* getCurrentTick__E */
#define ti_sysbios_hal_Timer_TimerProxy_getCurrentTick ti_sysbios_hal_Timer_TimerProxy_getCurrentTick__E
xdc__CODESECT(ti_sysbios_hal_Timer_TimerProxy_getCurrentTick__E, "ti_sysbios_hal_Timer_TimerProxy_getCurrentTick")
__extern xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCurrentTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle instp, xdc_Bool save);


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline ti_sysbios_interfaces_ITimer_Module ti_sysbios_hal_Timer_TimerProxy_Module_upCast(void);
static inline ti_sysbios_interfaces_ITimer_Module ti_sysbios_hal_Timer_TimerProxy_Module_upCast(void)
{
    return (ti_sysbios_interfaces_ITimer_Module)ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S();
}

/* Module_to_ti_sysbios_interfaces_ITimer */
#define ti_sysbios_hal_Timer_TimerProxy_Module_to_ti_sysbios_interfaces_ITimer ti_sysbios_hal_Timer_TimerProxy_Module_upCast

/* Handle_upCast */
static inline ti_sysbios_interfaces_ITimer_Handle ti_sysbios_hal_Timer_TimerProxy_Handle_upCast(ti_sysbios_hal_Timer_TimerProxy_Handle i);
static inline ti_sysbios_interfaces_ITimer_Handle ti_sysbios_hal_Timer_TimerProxy_Handle_upCast(ti_sysbios_hal_Timer_TimerProxy_Handle i)
{
    return (ti_sysbios_interfaces_ITimer_Handle)i;
}

/* Handle_to_ti_sysbios_interfaces_ITimer */
#define ti_sysbios_hal_Timer_TimerProxy_Handle_to_ti_sysbios_interfaces_ITimer ti_sysbios_hal_Timer_TimerProxy_Handle_upCast

/* Handle_downCast */
static inline ti_sysbios_hal_Timer_TimerProxy_Handle ti_sysbios_hal_Timer_TimerProxy_Handle_downCast(ti_sysbios_interfaces_ITimer_Handle i);
static inline ti_sysbios_hal_Timer_TimerProxy_Handle ti_sysbios_hal_Timer_TimerProxy_Handle_downCast(ti_sysbios_interfaces_ITimer_Handle i)
{
    ti_sysbios_interfaces_ITimer_Handle i2 = (ti_sysbios_interfaces_ITimer_Handle)i;
    if (ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S() != 0U) {
        return (ti_sysbios_hal_Timer_TimerProxy_Handle)i;
    }
    return ((const void*)i2->__fxns == (const void*)ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S()) ? (ti_sysbios_hal_Timer_TimerProxy_Handle)i : (ti_sysbios_hal_Timer_TimerProxy_Handle)NULL;
}

/* Handle_from_ti_sysbios_interfaces_ITimer */
#define ti_sysbios_hal_Timer_TimerProxy_Handle_from_ti_sysbios_interfaces_ITimer ti_sysbios_hal_Timer_TimerProxy_Handle_downCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sysbios_hal_Timer_TimerProxy_Module_startupDone() ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S()

/* Object_heap */
#define ti_sysbios_hal_Timer_TimerProxy_Object_heap() ti_sysbios_hal_Timer_TimerProxy_Object__heap__C

/* Module_heap */
#define ti_sysbios_hal_Timer_TimerProxy_Module_heap() ti_sysbios_hal_Timer_TimerProxy_Object__heap__C

/* Module_id */
static inline CT__ti_sysbios_hal_Timer_TimerProxy_Module__id ti_sysbios_hal_Timer_TimerProxy_Module_id(void);
static inline CT__ti_sysbios_hal_Timer_TimerProxy_Module__id ti_sysbios_hal_Timer_TimerProxy_Module_id( void ) 
{
    return ti_sysbios_hal_Timer_TimerProxy_Module__id__C;
}

/* Proxy_abstract */
#define ti_sysbios_hal_Timer_TimerProxy_Proxy_abstract() ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S()

/* Proxy_delegate */
#define ti_sysbios_hal_Timer_TimerProxy_Proxy_delegate() ((ti_sysbios_interfaces_ITimer_Module)ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S())

/* Params_init */
static inline void ti_sysbios_hal_Timer_TimerProxy_Params_init(ti_sysbios_hal_Timer_TimerProxy_Params *prms);
static inline void ti_sysbios_hal_Timer_TimerProxy_Params_init( ti_sysbios_hal_Timer_TimerProxy_Params *prms ) 
{
    if (prms != NULL) {
        ti_sysbios_hal_Timer_TimerProxy_Params__init__S(prms, NULL, sizeof(ti_sysbios_hal_Timer_TimerProxy_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sysbios_hal_Timer_TimerProxy_Params_copy(ti_sysbios_hal_Timer_TimerProxy_Params *dst, const ti_sysbios_hal_Timer_TimerProxy_Params *src);
static inline void ti_sysbios_hal_Timer_TimerProxy_Params_copy(ti_sysbios_hal_Timer_TimerProxy_Params *dst, const ti_sysbios_hal_Timer_TimerProxy_Params *src) 
{
    if (dst != NULL) {
        ti_sysbios_hal_Timer_TimerProxy_Params__init__S(dst, (const void *)src, sizeof(ti_sysbios_hal_Timer_TimerProxy_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sysbios_hal_Timer_TimerProxy__top__
#undef __nested__
#endif

#endif /* ti_sysbios_hal_Timer_TimerProxy__include */


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sysbios_hal_Timer_TimerProxy__nolocalnames)

#ifndef ti_sysbios_hal_Timer_TimerProxy__localnames__done
#define ti_sysbios_hal_Timer_TimerProxy__localnames__done

/* module prefix */
#define Timer_TimerProxy_Instance ti_sysbios_hal_Timer_TimerProxy_Instance
#define Timer_TimerProxy_Handle ti_sysbios_hal_Timer_TimerProxy_Handle
#define Timer_TimerProxy_Module ti_sysbios_hal_Timer_TimerProxy_Module
#define Timer_TimerProxy_Object ti_sysbios_hal_Timer_TimerProxy_Object
#define Timer_TimerProxy_Struct ti_sysbios_hal_Timer_TimerProxy_Struct
#define Timer_TimerProxy_FuncPtr ti_sysbios_hal_Timer_TimerProxy_FuncPtr
#define Timer_TimerProxy_ANY ti_sysbios_hal_Timer_TimerProxy_ANY
#define Timer_TimerProxy_StartMode ti_sysbios_hal_Timer_TimerProxy_StartMode
#define Timer_TimerProxy_RunMode ti_sysbios_hal_Timer_TimerProxy_RunMode
#define Timer_TimerProxy_Status ti_sysbios_hal_Timer_TimerProxy_Status
#define Timer_TimerProxy_PeriodType ti_sysbios_hal_Timer_TimerProxy_PeriodType
#define Timer_TimerProxy_Params ti_sysbios_hal_Timer_TimerProxy_Params
#define Timer_TimerProxy_getNumTimers ti_sysbios_hal_Timer_TimerProxy_getNumTimers
#define Timer_TimerProxy_getStatus ti_sysbios_hal_Timer_TimerProxy_getStatus
#define Timer_TimerProxy_startup ti_sysbios_hal_Timer_TimerProxy_startup
#define Timer_TimerProxy_getMaxTicks ti_sysbios_hal_Timer_TimerProxy_getMaxTicks
#define Timer_TimerProxy_setNextTick ti_sysbios_hal_Timer_TimerProxy_setNextTick
#define Timer_TimerProxy_start ti_sysbios_hal_Timer_TimerProxy_start
#define Timer_TimerProxy_stop ti_sysbios_hal_Timer_TimerProxy_stop
#define Timer_TimerProxy_setPeriod ti_sysbios_hal_Timer_TimerProxy_setPeriod
#define Timer_TimerProxy_setPeriodMicroSecs ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs
#define Timer_TimerProxy_getPeriod ti_sysbios_hal_Timer_TimerProxy_getPeriod
#define Timer_TimerProxy_getCount ti_sysbios_hal_Timer_TimerProxy_getCount
#define Timer_TimerProxy_getFreq ti_sysbios_hal_Timer_TimerProxy_getFreq
#define Timer_TimerProxy_getFunc ti_sysbios_hal_Timer_TimerProxy_getFunc
#define Timer_TimerProxy_setFunc ti_sysbios_hal_Timer_TimerProxy_setFunc
#define Timer_TimerProxy_trigger ti_sysbios_hal_Timer_TimerProxy_trigger
#define Timer_TimerProxy_getExpiredCounts ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts
#define Timer_TimerProxy_getExpiredTicks ti_sysbios_hal_Timer_TimerProxy_getExpiredTicks
#define Timer_TimerProxy_getCurrentTick ti_sysbios_hal_Timer_TimerProxy_getCurrentTick
#define Timer_TimerProxy_Module_name ti_sysbios_hal_Timer_TimerProxy_Module_name
#define Timer_TimerProxy_Module_id ti_sysbios_hal_Timer_TimerProxy_Module_id
#define Timer_TimerProxy_Module_startup ti_sysbios_hal_Timer_TimerProxy_Module_startup
#define Timer_TimerProxy_Module_startupDone ti_sysbios_hal_Timer_TimerProxy_Module_startupDone
#define Timer_TimerProxy_Module_hasMask ti_sysbios_hal_Timer_TimerProxy_Module_hasMask
#define Timer_TimerProxy_Module_getMask ti_sysbios_hal_Timer_TimerProxy_Module_getMask
#define Timer_TimerProxy_Module_setMask ti_sysbios_hal_Timer_TimerProxy_Module_setMask
#define Timer_TimerProxy_Object_heap ti_sysbios_hal_Timer_TimerProxy_Object_heap
#define Timer_TimerProxy_Module_heap ti_sysbios_hal_Timer_TimerProxy_Module_heap
#define Timer_TimerProxy_construct ti_sysbios_hal_Timer_TimerProxy_construct
#define Timer_TimerProxy_create ti_sysbios_hal_Timer_TimerProxy_create
#define Timer_TimerProxy_handle ti_sysbios_hal_Timer_TimerProxy_handle
#define Timer_TimerProxy_struct ti_sysbios_hal_Timer_TimerProxy_struct
#define Timer_TimerProxy_Handle_label ti_sysbios_hal_Timer_TimerProxy_Handle_label
#define Timer_TimerProxy_Handle_name ti_sysbios_hal_Timer_TimerProxy_Handle_name
#define Timer_TimerProxy_Instance_init ti_sysbios_hal_Timer_TimerProxy_Instance_init
#define Timer_TimerProxy_Object_count ti_sysbios_hal_Timer_TimerProxy_Object_count
#define Timer_TimerProxy_Object_get ti_sysbios_hal_Timer_TimerProxy_Object_get
#define Timer_TimerProxy_Object_first ti_sysbios_hal_Timer_TimerProxy_Object_first
#define Timer_TimerProxy_Object_next ti_sysbios_hal_Timer_TimerProxy_Object_next
#define Timer_TimerProxy_Object_sizeof ti_sysbios_hal_Timer_TimerProxy_Object_sizeof
#define Timer_TimerProxy_Params_copy ti_sysbios_hal_Timer_TimerProxy_Params_copy
#define Timer_TimerProxy_Params_init ti_sysbios_hal_Timer_TimerProxy_Params_init
#define Timer_TimerProxy_Instance_finalize ti_sysbios_hal_Timer_TimerProxy_Instance_finalize
#define Timer_TimerProxy_Proxy_abstract ti_sysbios_hal_Timer_TimerProxy_Proxy_abstract
#define Timer_TimerProxy_Proxy_delegate ti_sysbios_hal_Timer_TimerProxy_Proxy_delegate
#define Timer_TimerProxy_delete ti_sysbios_hal_Timer_TimerProxy_delete
#define Timer_TimerProxy_destruct ti_sysbios_hal_Timer_TimerProxy_destruct
#define Timer_TimerProxy_Module_upCast ti_sysbios_hal_Timer_TimerProxy_Module_upCast
#define Timer_TimerProxy_Module_to_ti_sysbios_interfaces_ITimer ti_sysbios_hal_Timer_TimerProxy_Module_to_ti_sysbios_interfaces_ITimer
#define Timer_TimerProxy_Handle_upCast ti_sysbios_hal_Timer_TimerProxy_Handle_upCast
#define Timer_TimerProxy_Handle_to_ti_sysbios_interfaces_ITimer ti_sysbios_hal_Timer_TimerProxy_Handle_to_ti_sysbios_interfaces_ITimer
#define Timer_TimerProxy_Handle_downCast ti_sysbios_hal_Timer_TimerProxy_Handle_downCast
#define Timer_TimerProxy_Handle_from_ti_sysbios_interfaces_ITimer ti_sysbios_hal_Timer_TimerProxy_Handle_from_ti_sysbios_interfaces_ITimer

#endif /* ti_sysbios_hal_Timer_TimerProxy__localnames__done */
#endif
