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

#ifndef ti_uia_events_UIARoundtrip__include
#define ti_uia_events_UIARoundtrip__include

#ifndef __nested__
#define __nested__
#define ti_uia_events_UIARoundtrip__top__
#endif

#ifndef __extern
#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif
#endif

#define ti_uia_events_UIARoundtrip___VERS 200


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <ti/uia/events/package/package.defs.h>

#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Types.h>
#include <ti/uia/events/DvtTypes.h>
#include <ti/uia/events/IUIAEvent.h>
#include <xdc/runtime/Log.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */


/*
 * ======== INTERNAL DEFINITIONS ========
 */


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_uia_events_UIARoundtrip_Module__diagsEnabled;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Module__diagsEnabled ti_uia_events_UIARoundtrip_Module__diagsEnabled__C;
#ifdef ti_uia_events_UIARoundtrip_Module__diagsEnabled__CR
#define ti_uia_events_UIARoundtrip_Module__diagsEnabled__C (*((CT__ti_uia_events_UIARoundtrip_Module__diagsEnabled*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Module__diagsEnabled__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Module__diagsEnabled (ti_uia_events_UIARoundtrip_Module__diagsEnabled__C)
#endif

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_uia_events_UIARoundtrip_Module__diagsIncluded;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Module__diagsIncluded ti_uia_events_UIARoundtrip_Module__diagsIncluded__C;
#ifdef ti_uia_events_UIARoundtrip_Module__diagsIncluded__CR
#define ti_uia_events_UIARoundtrip_Module__diagsIncluded__C (*((CT__ti_uia_events_UIARoundtrip_Module__diagsIncluded*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Module__diagsIncluded__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Module__diagsIncluded (ti_uia_events_UIARoundtrip_Module__diagsIncluded__C)
#endif

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_uia_events_UIARoundtrip_Module__diagsMask;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Module__diagsMask ti_uia_events_UIARoundtrip_Module__diagsMask__C;
#ifdef ti_uia_events_UIARoundtrip_Module__diagsMask__CR
#define ti_uia_events_UIARoundtrip_Module__diagsMask__C (*((CT__ti_uia_events_UIARoundtrip_Module__diagsMask*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Module__diagsMask__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Module__diagsMask (ti_uia_events_UIARoundtrip_Module__diagsMask__C)
#endif

/* Module__gateObj */
typedef xdc_Ptr CT__ti_uia_events_UIARoundtrip_Module__gateObj;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Module__gateObj ti_uia_events_UIARoundtrip_Module__gateObj__C;
#ifdef ti_uia_events_UIARoundtrip_Module__gateObj__CR
#define ti_uia_events_UIARoundtrip_Module__gateObj__C (*((CT__ti_uia_events_UIARoundtrip_Module__gateObj*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Module__gateObj__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Module__gateObj (ti_uia_events_UIARoundtrip_Module__gateObj__C)
#endif

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_uia_events_UIARoundtrip_Module__gatePrms;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Module__gatePrms ti_uia_events_UIARoundtrip_Module__gatePrms__C;
#ifdef ti_uia_events_UIARoundtrip_Module__gatePrms__CR
#define ti_uia_events_UIARoundtrip_Module__gatePrms__C (*((CT__ti_uia_events_UIARoundtrip_Module__gatePrms*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Module__gatePrms__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Module__gatePrms (ti_uia_events_UIARoundtrip_Module__gatePrms__C)
#endif

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_uia_events_UIARoundtrip_Module__id;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Module__id ti_uia_events_UIARoundtrip_Module__id__C;
#ifdef ti_uia_events_UIARoundtrip_Module__id__CR
#define ti_uia_events_UIARoundtrip_Module__id__C (*((CT__ti_uia_events_UIARoundtrip_Module__id*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Module__id__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Module__id (ti_uia_events_UIARoundtrip_Module__id__C)
#endif

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_uia_events_UIARoundtrip_Module__loggerDefined;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerDefined ti_uia_events_UIARoundtrip_Module__loggerDefined__C;
#ifdef ti_uia_events_UIARoundtrip_Module__loggerDefined__CR
#define ti_uia_events_UIARoundtrip_Module__loggerDefined__C (*((CT__ti_uia_events_UIARoundtrip_Module__loggerDefined*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Module__loggerDefined__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Module__loggerDefined (ti_uia_events_UIARoundtrip_Module__loggerDefined__C)
#endif

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_uia_events_UIARoundtrip_Module__loggerObj;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerObj ti_uia_events_UIARoundtrip_Module__loggerObj__C;
#ifdef ti_uia_events_UIARoundtrip_Module__loggerObj__CR
#define ti_uia_events_UIARoundtrip_Module__loggerObj__C (*((CT__ti_uia_events_UIARoundtrip_Module__loggerObj*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Module__loggerObj__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Module__loggerObj (ti_uia_events_UIARoundtrip_Module__loggerObj__C)
#endif

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_uia_events_UIARoundtrip_Module__loggerFxn0;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn0 ti_uia_events_UIARoundtrip_Module__loggerFxn0__C;
#ifdef ti_uia_events_UIARoundtrip_Module__loggerFxn0__CR
#define ti_uia_events_UIARoundtrip_Module__loggerFxn0__C (*((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn0*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Module__loggerFxn0__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Module__loggerFxn0 (ti_uia_events_UIARoundtrip_Module__loggerFxn0__C)
#endif

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_uia_events_UIARoundtrip_Module__loggerFxn1;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn1 ti_uia_events_UIARoundtrip_Module__loggerFxn1__C;
#ifdef ti_uia_events_UIARoundtrip_Module__loggerFxn1__CR
#define ti_uia_events_UIARoundtrip_Module__loggerFxn1__C (*((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn1*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Module__loggerFxn1__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Module__loggerFxn1 (ti_uia_events_UIARoundtrip_Module__loggerFxn1__C)
#endif

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_uia_events_UIARoundtrip_Module__loggerFxn2;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn2 ti_uia_events_UIARoundtrip_Module__loggerFxn2__C;
#ifdef ti_uia_events_UIARoundtrip_Module__loggerFxn2__CR
#define ti_uia_events_UIARoundtrip_Module__loggerFxn2__C (*((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn2*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Module__loggerFxn2__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Module__loggerFxn2 (ti_uia_events_UIARoundtrip_Module__loggerFxn2__C)
#endif

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_uia_events_UIARoundtrip_Module__loggerFxn4;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn4 ti_uia_events_UIARoundtrip_Module__loggerFxn4__C;
#ifdef ti_uia_events_UIARoundtrip_Module__loggerFxn4__CR
#define ti_uia_events_UIARoundtrip_Module__loggerFxn4__C (*((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn4*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Module__loggerFxn4__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Module__loggerFxn4 (ti_uia_events_UIARoundtrip_Module__loggerFxn4__C)
#endif

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_uia_events_UIARoundtrip_Module__loggerFxn8;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Module__loggerFxn8 ti_uia_events_UIARoundtrip_Module__loggerFxn8__C;
#ifdef ti_uia_events_UIARoundtrip_Module__loggerFxn8__CR
#define ti_uia_events_UIARoundtrip_Module__loggerFxn8__C (*((CT__ti_uia_events_UIARoundtrip_Module__loggerFxn8*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Module__loggerFxn8__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Module__loggerFxn8 (ti_uia_events_UIARoundtrip_Module__loggerFxn8__C)
#endif

/* Object__count */
typedef xdc_Int CT__ti_uia_events_UIARoundtrip_Object__count;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Object__count ti_uia_events_UIARoundtrip_Object__count__C;
#ifdef ti_uia_events_UIARoundtrip_Object__count__CR
#define ti_uia_events_UIARoundtrip_Object__count__C (*((CT__ti_uia_events_UIARoundtrip_Object__count*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Object__count__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Object__count (ti_uia_events_UIARoundtrip_Object__count__C)
#endif

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_uia_events_UIARoundtrip_Object__heap;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Object__heap ti_uia_events_UIARoundtrip_Object__heap__C;
#ifdef ti_uia_events_UIARoundtrip_Object__heap__CR
#define ti_uia_events_UIARoundtrip_Object__heap__C (*((CT__ti_uia_events_UIARoundtrip_Object__heap*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Object__heap__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Object__heap (ti_uia_events_UIARoundtrip_Object__heap__C)
#endif

/* Object__sizeof */
typedef xdc_SizeT CT__ti_uia_events_UIARoundtrip_Object__sizeof;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Object__sizeof ti_uia_events_UIARoundtrip_Object__sizeof__C;
#ifdef ti_uia_events_UIARoundtrip_Object__sizeof__CR
#define ti_uia_events_UIARoundtrip_Object__sizeof__C (*((CT__ti_uia_events_UIARoundtrip_Object__sizeof*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Object__sizeof__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Object__sizeof (ti_uia_events_UIARoundtrip_Object__sizeof__C)
#endif

/* Object__table */
typedef xdc_Ptr CT__ti_uia_events_UIARoundtrip_Object__table;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_Object__table ti_uia_events_UIARoundtrip_Object__table__C;
#ifdef ti_uia_events_UIARoundtrip_Object__table__CR
#define ti_uia_events_UIARoundtrip_Object__table__C (*((CT__ti_uia_events_UIARoundtrip_Object__table*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Object__table__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_Object__table (ti_uia_events_UIARoundtrip_Object__table__C)
#endif

/* start */
typedef xdc_runtime_Log_Event CT__ti_uia_events_UIARoundtrip_start;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_start ti_uia_events_UIARoundtrip_start__C;
#ifdef ti_uia_events_UIARoundtrip_start__CR
#define ti_uia_events_UIARoundtrip_start (*((CT__ti_uia_events_UIARoundtrip_start*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_start__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_start (ti_uia_events_UIARoundtrip_start__C)
#endif

/* stop */
typedef xdc_runtime_Log_Event CT__ti_uia_events_UIARoundtrip_stop;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_stop ti_uia_events_UIARoundtrip_stop__C;
#ifdef ti_uia_events_UIARoundtrip_stop__CR
#define ti_uia_events_UIARoundtrip_stop (*((CT__ti_uia_events_UIARoundtrip_stop*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_stop__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_stop (ti_uia_events_UIARoundtrip_stop__C)
#endif

/* startInstance */
typedef xdc_runtime_Log_Event CT__ti_uia_events_UIARoundtrip_startInstance;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_startInstance ti_uia_events_UIARoundtrip_startInstance__C;
#ifdef ti_uia_events_UIARoundtrip_startInstance__CR
#define ti_uia_events_UIARoundtrip_startInstance (*((CT__ti_uia_events_UIARoundtrip_startInstance*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_startInstance__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_startInstance (ti_uia_events_UIARoundtrip_startInstance__C)
#endif

/* stopInstance */
typedef xdc_runtime_Log_Event CT__ti_uia_events_UIARoundtrip_stopInstance;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_stopInstance ti_uia_events_UIARoundtrip_stopInstance__C;
#ifdef ti_uia_events_UIARoundtrip_stopInstance__CR
#define ti_uia_events_UIARoundtrip_stopInstance (*((CT__ti_uia_events_UIARoundtrip_stopInstance*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_stopInstance__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_stopInstance (ti_uia_events_UIARoundtrip_stopInstance__C)
#endif

/* startInstanceWithAdrs */
typedef xdc_runtime_Log_Event CT__ti_uia_events_UIARoundtrip_startInstanceWithAdrs;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_startInstanceWithAdrs ti_uia_events_UIARoundtrip_startInstanceWithAdrs__C;
#ifdef ti_uia_events_UIARoundtrip_startInstanceWithAdrs__CR
#define ti_uia_events_UIARoundtrip_startInstanceWithAdrs (*((CT__ti_uia_events_UIARoundtrip_startInstanceWithAdrs*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_startInstanceWithAdrs__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_startInstanceWithAdrs (ti_uia_events_UIARoundtrip_startInstanceWithAdrs__C)
#endif

/* stopInstanceWithAdrs */
typedef xdc_runtime_Log_Event CT__ti_uia_events_UIARoundtrip_stopInstanceWithAdrs;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_stopInstanceWithAdrs ti_uia_events_UIARoundtrip_stopInstanceWithAdrs__C;
#ifdef ti_uia_events_UIARoundtrip_stopInstanceWithAdrs__CR
#define ti_uia_events_UIARoundtrip_stopInstanceWithAdrs (*((CT__ti_uia_events_UIARoundtrip_stopInstanceWithAdrs*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_stopInstanceWithAdrs__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_stopInstanceWithAdrs (ti_uia_events_UIARoundtrip_stopInstanceWithAdrs__C)
#endif

/* startInstanceWithStr */
typedef xdc_runtime_Log_Event CT__ti_uia_events_UIARoundtrip_startInstanceWithStr;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_startInstanceWithStr ti_uia_events_UIARoundtrip_startInstanceWithStr__C;
#ifdef ti_uia_events_UIARoundtrip_startInstanceWithStr__CR
#define ti_uia_events_UIARoundtrip_startInstanceWithStr (*((CT__ti_uia_events_UIARoundtrip_startInstanceWithStr*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_startInstanceWithStr__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_startInstanceWithStr (ti_uia_events_UIARoundtrip_startInstanceWithStr__C)
#endif

/* stopInstanceWithStr */
typedef xdc_runtime_Log_Event CT__ti_uia_events_UIARoundtrip_stopInstanceWithStr;
__extern __FAR__ const CT__ti_uia_events_UIARoundtrip_stopInstanceWithStr ti_uia_events_UIARoundtrip_stopInstanceWithStr__C;
#ifdef ti_uia_events_UIARoundtrip_stopInstanceWithStr__CR
#define ti_uia_events_UIARoundtrip_stopInstanceWithStr (*((CT__ti_uia_events_UIARoundtrip_stopInstanceWithStr*)(xdcRomConstPtr + ti_uia_events_UIARoundtrip_stopInstanceWithStr__C_offset)))
#else
#define ti_uia_events_UIARoundtrip_stopInstanceWithStr (ti_uia_events_UIARoundtrip_stopInstanceWithStr__C)
#endif


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_uia_events_UIARoundtrip_Fxns__ {
    const xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_runtime_Types_SysFxns2 __sfxns;
};
#ifndef ti_uia_events_UIARoundtrip_Module__FXNS__CR

/* Module__FXNS__C */
__extern const ti_uia_events_UIARoundtrip_Fxns__ ti_uia_events_UIARoundtrip_Module__FXNS__C;
#else
#define ti_uia_events_UIARoundtrip_Module__FXNS__C (*(xdcRomConstPtr + ti_uia_events_UIARoundtrip_Module__FXNS__C_offset))
#endif


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_uia_events_UIARoundtrip_Module_startup( state ) (-1)

/* Module__startupDone__S */
xdc__CODESECT(ti_uia_events_UIARoundtrip_Module__startupDone__S, "ti_uia_events_UIARoundtrip_Module__startupDone__S")
__extern xdc_Bool ti_uia_events_UIARoundtrip_Module__startupDone__S( void);


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline ti_uia_events_IUIAEvent_Module ti_uia_events_UIARoundtrip_Module_upCast(void);
static inline ti_uia_events_IUIAEvent_Module ti_uia_events_UIARoundtrip_Module_upCast(void)
{
    return (ti_uia_events_IUIAEvent_Module)&ti_uia_events_UIARoundtrip_Module__FXNS__C;
}

/* Module_to_ti_uia_events_IUIAEvent */
#define ti_uia_events_UIARoundtrip_Module_to_ti_uia_events_IUIAEvent ti_uia_events_UIARoundtrip_Module_upCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_uia_events_UIARoundtrip_Module_startupDone() ti_uia_events_UIARoundtrip_Module__startupDone__S()

/* Object_heap */
#define ti_uia_events_UIARoundtrip_Object_heap() ti_uia_events_UIARoundtrip_Object__heap__C

/* Module_heap */
#define ti_uia_events_UIARoundtrip_Module_heap() ti_uia_events_UIARoundtrip_Object__heap__C

/* Module_id */
static inline CT__ti_uia_events_UIARoundtrip_Module__id ti_uia_events_UIARoundtrip_Module_id(void);
static inline CT__ti_uia_events_UIARoundtrip_Module__id ti_uia_events_UIARoundtrip_Module_id( void ) 
{
    return ti_uia_events_UIARoundtrip_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_uia_events_UIARoundtrip_Module_hasMask(void);
static inline xdc_Bool ti_uia_events_UIARoundtrip_Module_hasMask(void)
{
    return (xdc_Bool)(ti_uia_events_UIARoundtrip_Module__diagsMask__C != (CT__ti_uia_events_UIARoundtrip_Module__diagsMask)NULL);
}

/* Module_getMask */
static inline xdc_Bits16 ti_uia_events_UIARoundtrip_Module_getMask(void);
static inline xdc_Bits16 ti_uia_events_UIARoundtrip_Module_getMask(void)
{
    return (ti_uia_events_UIARoundtrip_Module__diagsMask__C != (CT__ti_uia_events_UIARoundtrip_Module__diagsMask)NULL) ? *ti_uia_events_UIARoundtrip_Module__diagsMask__C : (xdc_Bits16)0;
}

/* Module_setMask */
static inline xdc_Void ti_uia_events_UIARoundtrip_Module_setMask(xdc_Bits16 mask);
static inline xdc_Void ti_uia_events_UIARoundtrip_Module_setMask(xdc_Bits16 mask)
{
    if (ti_uia_events_UIARoundtrip_Module__diagsMask__C != (CT__ti_uia_events_UIARoundtrip_Module__diagsMask)NULL) {
        *ti_uia_events_UIARoundtrip_Module__diagsMask__C = mask;
    }
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_uia_events_UIARoundtrip__top__
#undef __nested__
#endif

#endif /* ti_uia_events_UIARoundtrip__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_uia_events_UIARoundtrip__internalaccess))

#ifndef ti_uia_events_UIARoundtrip__include_state
#define ti_uia_events_UIARoundtrip__include_state


#endif /* ti_uia_events_UIARoundtrip__include_state */

#endif

/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_uia_events_UIARoundtrip__nolocalnames)

#ifndef ti_uia_events_UIARoundtrip__localnames__done
#define ti_uia_events_UIARoundtrip__localnames__done

/* module prefix */
#define UIARoundtrip_start ti_uia_events_UIARoundtrip_start
#define UIARoundtrip_stop ti_uia_events_UIARoundtrip_stop
#define UIARoundtrip_startInstance ti_uia_events_UIARoundtrip_startInstance
#define UIARoundtrip_stopInstance ti_uia_events_UIARoundtrip_stopInstance
#define UIARoundtrip_startInstanceWithAdrs ti_uia_events_UIARoundtrip_startInstanceWithAdrs
#define UIARoundtrip_stopInstanceWithAdrs ti_uia_events_UIARoundtrip_stopInstanceWithAdrs
#define UIARoundtrip_startInstanceWithStr ti_uia_events_UIARoundtrip_startInstanceWithStr
#define UIARoundtrip_stopInstanceWithStr ti_uia_events_UIARoundtrip_stopInstanceWithStr
#define UIARoundtrip_Module_name ti_uia_events_UIARoundtrip_Module_name
#define UIARoundtrip_Module_id ti_uia_events_UIARoundtrip_Module_id
#define UIARoundtrip_Module_startup ti_uia_events_UIARoundtrip_Module_startup
#define UIARoundtrip_Module_startupDone ti_uia_events_UIARoundtrip_Module_startupDone
#define UIARoundtrip_Module_hasMask ti_uia_events_UIARoundtrip_Module_hasMask
#define UIARoundtrip_Module_getMask ti_uia_events_UIARoundtrip_Module_getMask
#define UIARoundtrip_Module_setMask ti_uia_events_UIARoundtrip_Module_setMask
#define UIARoundtrip_Object_heap ti_uia_events_UIARoundtrip_Object_heap
#define UIARoundtrip_Module_heap ti_uia_events_UIARoundtrip_Module_heap
#define UIARoundtrip_Module_upCast ti_uia_events_UIARoundtrip_Module_upCast
#define UIARoundtrip_Module_to_ti_uia_events_IUIAEvent ti_uia_events_UIARoundtrip_Module_to_ti_uia_events_IUIAEvent

#endif /* ti_uia_events_UIARoundtrip__localnames__done */
#endif
