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

#ifndef ti_sysbios_hal_CacheNull__include
#define ti_sysbios_hal_CacheNull__include

#ifndef __nested__
#define __nested__
#define ti_sysbios_hal_CacheNull__top__
#endif

#ifndef __extern
#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif
#endif

#define ti_sysbios_hal_CacheNull___VERS 200


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <ti/sysbios/hal/package/package.defs.h>

#include <ti/sysbios/interfaces/ICache.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* Type */
typedef ti_sysbios_interfaces_ICache_Type ti_sysbios_hal_CacheNull_Type;

/* Type_L1P */
#define ti_sysbios_hal_CacheNull_Type_L1P ti_sysbios_interfaces_ICache_Type_L1P

/* Type_L1D */
#define ti_sysbios_hal_CacheNull_Type_L1D ti_sysbios_interfaces_ICache_Type_L1D

/* Type_L1 */
#define ti_sysbios_hal_CacheNull_Type_L1 ti_sysbios_interfaces_ICache_Type_L1

/* Type_L2P */
#define ti_sysbios_hal_CacheNull_Type_L2P ti_sysbios_interfaces_ICache_Type_L2P

/* Type_L2D */
#define ti_sysbios_hal_CacheNull_Type_L2D ti_sysbios_interfaces_ICache_Type_L2D

/* Type_L2 */
#define ti_sysbios_hal_CacheNull_Type_L2 ti_sysbios_interfaces_ICache_Type_L2

/* Type_ALLP */
#define ti_sysbios_hal_CacheNull_Type_ALLP ti_sysbios_interfaces_ICache_Type_ALLP

/* Type_ALLD */
#define ti_sysbios_hal_CacheNull_Type_ALLD ti_sysbios_interfaces_ICache_Type_ALLD

/* Type_ALL */
#define ti_sysbios_hal_CacheNull_Type_ALL ti_sysbios_interfaces_ICache_Type_ALL


/*
 * ======== INTERNAL DEFINITIONS ========
 */


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sysbios_hal_CacheNull_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Module__diagsEnabled ti_sysbios_hal_CacheNull_Module__diagsEnabled__C;
#ifdef ti_sysbios_hal_CacheNull_Module__diagsEnabled__CR
#define ti_sysbios_hal_CacheNull_Module__diagsEnabled__C (*((CT__ti_sysbios_hal_CacheNull_Module__diagsEnabled*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Module__diagsEnabled__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Module__diagsEnabled (ti_sysbios_hal_CacheNull_Module__diagsEnabled__C)
#endif

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sysbios_hal_CacheNull_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Module__diagsIncluded ti_sysbios_hal_CacheNull_Module__diagsIncluded__C;
#ifdef ti_sysbios_hal_CacheNull_Module__diagsIncluded__CR
#define ti_sysbios_hal_CacheNull_Module__diagsIncluded__C (*((CT__ti_sysbios_hal_CacheNull_Module__diagsIncluded*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Module__diagsIncluded__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Module__diagsIncluded (ti_sysbios_hal_CacheNull_Module__diagsIncluded__C)
#endif

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_sysbios_hal_CacheNull_Module__diagsMask;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Module__diagsMask ti_sysbios_hal_CacheNull_Module__diagsMask__C;
#ifdef ti_sysbios_hal_CacheNull_Module__diagsMask__CR
#define ti_sysbios_hal_CacheNull_Module__diagsMask__C (*((CT__ti_sysbios_hal_CacheNull_Module__diagsMask*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Module__diagsMask__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Module__diagsMask (ti_sysbios_hal_CacheNull_Module__diagsMask__C)
#endif

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sysbios_hal_CacheNull_Module__gateObj;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Module__gateObj ti_sysbios_hal_CacheNull_Module__gateObj__C;
#ifdef ti_sysbios_hal_CacheNull_Module__gateObj__CR
#define ti_sysbios_hal_CacheNull_Module__gateObj__C (*((CT__ti_sysbios_hal_CacheNull_Module__gateObj*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Module__gateObj__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Module__gateObj (ti_sysbios_hal_CacheNull_Module__gateObj__C)
#endif

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sysbios_hal_CacheNull_Module__gatePrms;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Module__gatePrms ti_sysbios_hal_CacheNull_Module__gatePrms__C;
#ifdef ti_sysbios_hal_CacheNull_Module__gatePrms__CR
#define ti_sysbios_hal_CacheNull_Module__gatePrms__C (*((CT__ti_sysbios_hal_CacheNull_Module__gatePrms*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Module__gatePrms__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Module__gatePrms (ti_sysbios_hal_CacheNull_Module__gatePrms__C)
#endif

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sysbios_hal_CacheNull_Module__id;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Module__id ti_sysbios_hal_CacheNull_Module__id__C;
#ifdef ti_sysbios_hal_CacheNull_Module__id__CR
#define ti_sysbios_hal_CacheNull_Module__id__C (*((CT__ti_sysbios_hal_CacheNull_Module__id*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Module__id__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Module__id (ti_sysbios_hal_CacheNull_Module__id__C)
#endif

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sysbios_hal_CacheNull_Module__loggerDefined;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Module__loggerDefined ti_sysbios_hal_CacheNull_Module__loggerDefined__C;
#ifdef ti_sysbios_hal_CacheNull_Module__loggerDefined__CR
#define ti_sysbios_hal_CacheNull_Module__loggerDefined__C (*((CT__ti_sysbios_hal_CacheNull_Module__loggerDefined*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Module__loggerDefined__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Module__loggerDefined (ti_sysbios_hal_CacheNull_Module__loggerDefined__C)
#endif

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sysbios_hal_CacheNull_Module__loggerObj;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Module__loggerObj ti_sysbios_hal_CacheNull_Module__loggerObj__C;
#ifdef ti_sysbios_hal_CacheNull_Module__loggerObj__CR
#define ti_sysbios_hal_CacheNull_Module__loggerObj__C (*((CT__ti_sysbios_hal_CacheNull_Module__loggerObj*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Module__loggerObj__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Module__loggerObj (ti_sysbios_hal_CacheNull_Module__loggerObj__C)
#endif

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sysbios_hal_CacheNull_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Module__loggerFxn0 ti_sysbios_hal_CacheNull_Module__loggerFxn0__C;
#ifdef ti_sysbios_hal_CacheNull_Module__loggerFxn0__CR
#define ti_sysbios_hal_CacheNull_Module__loggerFxn0__C (*((CT__ti_sysbios_hal_CacheNull_Module__loggerFxn0*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Module__loggerFxn0__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Module__loggerFxn0 (ti_sysbios_hal_CacheNull_Module__loggerFxn0__C)
#endif

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sysbios_hal_CacheNull_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Module__loggerFxn1 ti_sysbios_hal_CacheNull_Module__loggerFxn1__C;
#ifdef ti_sysbios_hal_CacheNull_Module__loggerFxn1__CR
#define ti_sysbios_hal_CacheNull_Module__loggerFxn1__C (*((CT__ti_sysbios_hal_CacheNull_Module__loggerFxn1*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Module__loggerFxn1__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Module__loggerFxn1 (ti_sysbios_hal_CacheNull_Module__loggerFxn1__C)
#endif

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sysbios_hal_CacheNull_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Module__loggerFxn2 ti_sysbios_hal_CacheNull_Module__loggerFxn2__C;
#ifdef ti_sysbios_hal_CacheNull_Module__loggerFxn2__CR
#define ti_sysbios_hal_CacheNull_Module__loggerFxn2__C (*((CT__ti_sysbios_hal_CacheNull_Module__loggerFxn2*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Module__loggerFxn2__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Module__loggerFxn2 (ti_sysbios_hal_CacheNull_Module__loggerFxn2__C)
#endif

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sysbios_hal_CacheNull_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Module__loggerFxn4 ti_sysbios_hal_CacheNull_Module__loggerFxn4__C;
#ifdef ti_sysbios_hal_CacheNull_Module__loggerFxn4__CR
#define ti_sysbios_hal_CacheNull_Module__loggerFxn4__C (*((CT__ti_sysbios_hal_CacheNull_Module__loggerFxn4*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Module__loggerFxn4__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Module__loggerFxn4 (ti_sysbios_hal_CacheNull_Module__loggerFxn4__C)
#endif

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sysbios_hal_CacheNull_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Module__loggerFxn8 ti_sysbios_hal_CacheNull_Module__loggerFxn8__C;
#ifdef ti_sysbios_hal_CacheNull_Module__loggerFxn8__CR
#define ti_sysbios_hal_CacheNull_Module__loggerFxn8__C (*((CT__ti_sysbios_hal_CacheNull_Module__loggerFxn8*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Module__loggerFxn8__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Module__loggerFxn8 (ti_sysbios_hal_CacheNull_Module__loggerFxn8__C)
#endif

/* Object__count */
typedef xdc_Int CT__ti_sysbios_hal_CacheNull_Object__count;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Object__count ti_sysbios_hal_CacheNull_Object__count__C;
#ifdef ti_sysbios_hal_CacheNull_Object__count__CR
#define ti_sysbios_hal_CacheNull_Object__count__C (*((CT__ti_sysbios_hal_CacheNull_Object__count*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Object__count__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Object__count (ti_sysbios_hal_CacheNull_Object__count__C)
#endif

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sysbios_hal_CacheNull_Object__heap;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Object__heap ti_sysbios_hal_CacheNull_Object__heap__C;
#ifdef ti_sysbios_hal_CacheNull_Object__heap__CR
#define ti_sysbios_hal_CacheNull_Object__heap__C (*((CT__ti_sysbios_hal_CacheNull_Object__heap*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Object__heap__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Object__heap (ti_sysbios_hal_CacheNull_Object__heap__C)
#endif

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sysbios_hal_CacheNull_Object__sizeof;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Object__sizeof ti_sysbios_hal_CacheNull_Object__sizeof__C;
#ifdef ti_sysbios_hal_CacheNull_Object__sizeof__CR
#define ti_sysbios_hal_CacheNull_Object__sizeof__C (*((CT__ti_sysbios_hal_CacheNull_Object__sizeof*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Object__sizeof__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Object__sizeof (ti_sysbios_hal_CacheNull_Object__sizeof__C)
#endif

/* Object__table */
typedef xdc_Ptr CT__ti_sysbios_hal_CacheNull_Object__table;
__extern __FAR__ const CT__ti_sysbios_hal_CacheNull_Object__table ti_sysbios_hal_CacheNull_Object__table__C;
#ifdef ti_sysbios_hal_CacheNull_Object__table__CR
#define ti_sysbios_hal_CacheNull_Object__table__C (*((CT__ti_sysbios_hal_CacheNull_Object__table*)(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Object__table__C_offset)))
#else
#define ti_sysbios_hal_CacheNull_Object__table (ti_sysbios_hal_CacheNull_Object__table__C)
#endif


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sysbios_hal_CacheNull_Fxns__ {
    const xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Void (*enable)(xdc_Bits16 type);
    xdc_Void (*disable)(xdc_Bits16 type);
    xdc_Void (*inv)(xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait);
    xdc_Void (*wb)(xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait);
    xdc_Void (*wbInv)(xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait);
    xdc_Void (*wbAll)(void);
    xdc_Void (*wbInvAll)(void);
    xdc_Void (*wait)(void);
    xdc_runtime_Types_SysFxns2 __sfxns;
};
#ifndef ti_sysbios_hal_CacheNull_Module__FXNS__CR

/* Module__FXNS__C */
__extern const ti_sysbios_hal_CacheNull_Fxns__ ti_sysbios_hal_CacheNull_Module__FXNS__C;
#else
#define ti_sysbios_hal_CacheNull_Module__FXNS__C (*(xdcRomConstPtr + ti_sysbios_hal_CacheNull_Module__FXNS__C_offset))
#endif


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sysbios_hal_CacheNull_Module_startup( state ) (-1)

/* Module__startupDone__S */
xdc__CODESECT(ti_sysbios_hal_CacheNull_Module__startupDone__S, "ti_sysbios_hal_CacheNull_Module__startupDone__S")
__extern xdc_Bool ti_sysbios_hal_CacheNull_Module__startupDone__S( void);

/* enable__E */
#define ti_sysbios_hal_CacheNull_enable ti_sysbios_hal_CacheNull_enable__E
xdc__CODESECT(ti_sysbios_hal_CacheNull_enable__E, "ti_sysbios_hal_CacheNull_enable")
__extern xdc_Void ti_sysbios_hal_CacheNull_enable__E( xdc_Bits16 type);

/* disable__E */
#define ti_sysbios_hal_CacheNull_disable ti_sysbios_hal_CacheNull_disable__E
xdc__CODESECT(ti_sysbios_hal_CacheNull_disable__E, "ti_sysbios_hal_CacheNull_disable")
__extern xdc_Void ti_sysbios_hal_CacheNull_disable__E( xdc_Bits16 type);

/* inv__E */
#define ti_sysbios_hal_CacheNull_inv ti_sysbios_hal_CacheNull_inv__E
xdc__CODESECT(ti_sysbios_hal_CacheNull_inv__E, "ti_sysbios_hal_CacheNull_inv")
__extern xdc_Void ti_sysbios_hal_CacheNull_inv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait);

/* wb__E */
#define ti_sysbios_hal_CacheNull_wb ti_sysbios_hal_CacheNull_wb__E
xdc__CODESECT(ti_sysbios_hal_CacheNull_wb__E, "ti_sysbios_hal_CacheNull_wb")
__extern xdc_Void ti_sysbios_hal_CacheNull_wb__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait);

/* wbInv__E */
#define ti_sysbios_hal_CacheNull_wbInv ti_sysbios_hal_CacheNull_wbInv__E
xdc__CODESECT(ti_sysbios_hal_CacheNull_wbInv__E, "ti_sysbios_hal_CacheNull_wbInv")
__extern xdc_Void ti_sysbios_hal_CacheNull_wbInv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait);

/* wbAll__E */
#define ti_sysbios_hal_CacheNull_wbAll ti_sysbios_hal_CacheNull_wbAll__E
xdc__CODESECT(ti_sysbios_hal_CacheNull_wbAll__E, "ti_sysbios_hal_CacheNull_wbAll")
__extern xdc_Void ti_sysbios_hal_CacheNull_wbAll__E( void);

/* wbInvAll__E */
#define ti_sysbios_hal_CacheNull_wbInvAll ti_sysbios_hal_CacheNull_wbInvAll__E
xdc__CODESECT(ti_sysbios_hal_CacheNull_wbInvAll__E, "ti_sysbios_hal_CacheNull_wbInvAll")
__extern xdc_Void ti_sysbios_hal_CacheNull_wbInvAll__E( void);

/* wait__E */
#define ti_sysbios_hal_CacheNull_wait ti_sysbios_hal_CacheNull_wait__E
xdc__CODESECT(ti_sysbios_hal_CacheNull_wait__E, "ti_sysbios_hal_CacheNull_wait")
__extern xdc_Void ti_sysbios_hal_CacheNull_wait__E( void);


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline ti_sysbios_interfaces_ICache_Module ti_sysbios_hal_CacheNull_Module_upCast(void);
static inline ti_sysbios_interfaces_ICache_Module ti_sysbios_hal_CacheNull_Module_upCast(void)
{
    return (ti_sysbios_interfaces_ICache_Module)&ti_sysbios_hal_CacheNull_Module__FXNS__C;
}

/* Module_to_ti_sysbios_interfaces_ICache */
#define ti_sysbios_hal_CacheNull_Module_to_ti_sysbios_interfaces_ICache ti_sysbios_hal_CacheNull_Module_upCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sysbios_hal_CacheNull_Module_startupDone() ti_sysbios_hal_CacheNull_Module__startupDone__S()

/* Object_heap */
#define ti_sysbios_hal_CacheNull_Object_heap() ti_sysbios_hal_CacheNull_Object__heap__C

/* Module_heap */
#define ti_sysbios_hal_CacheNull_Module_heap() ti_sysbios_hal_CacheNull_Object__heap__C

/* Module_id */
static inline CT__ti_sysbios_hal_CacheNull_Module__id ti_sysbios_hal_CacheNull_Module_id(void);
static inline CT__ti_sysbios_hal_CacheNull_Module__id ti_sysbios_hal_CacheNull_Module_id( void ) 
{
    return ti_sysbios_hal_CacheNull_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sysbios_hal_CacheNull_Module_hasMask(void);
static inline xdc_Bool ti_sysbios_hal_CacheNull_Module_hasMask(void)
{
    return (xdc_Bool)(ti_sysbios_hal_CacheNull_Module__diagsMask__C != (CT__ti_sysbios_hal_CacheNull_Module__diagsMask)NULL);
}

/* Module_getMask */
static inline xdc_Bits16 ti_sysbios_hal_CacheNull_Module_getMask(void);
static inline xdc_Bits16 ti_sysbios_hal_CacheNull_Module_getMask(void)
{
    return (ti_sysbios_hal_CacheNull_Module__diagsMask__C != (CT__ti_sysbios_hal_CacheNull_Module__diagsMask)NULL) ? *ti_sysbios_hal_CacheNull_Module__diagsMask__C : (xdc_Bits16)0;
}

/* Module_setMask */
static inline xdc_Void ti_sysbios_hal_CacheNull_Module_setMask(xdc_Bits16 mask);
static inline xdc_Void ti_sysbios_hal_CacheNull_Module_setMask(xdc_Bits16 mask)
{
    if (ti_sysbios_hal_CacheNull_Module__diagsMask__C != (CT__ti_sysbios_hal_CacheNull_Module__diagsMask)NULL) {
        *ti_sysbios_hal_CacheNull_Module__diagsMask__C = mask;
    }
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sysbios_hal_CacheNull__top__
#undef __nested__
#endif

#endif /* ti_sysbios_hal_CacheNull__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sysbios_hal_CacheNull__internalaccess))

#ifndef ti_sysbios_hal_CacheNull__include_state
#define ti_sysbios_hal_CacheNull__include_state


#endif /* ti_sysbios_hal_CacheNull__include_state */

#endif

/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sysbios_hal_CacheNull__nolocalnames)

#ifndef ti_sysbios_hal_CacheNull__localnames__done
#define ti_sysbios_hal_CacheNull__localnames__done

/* module prefix */
#define CacheNull_Type ti_sysbios_hal_CacheNull_Type
#define CacheNull_Type_L1P ti_sysbios_hal_CacheNull_Type_L1P
#define CacheNull_Type_L1D ti_sysbios_hal_CacheNull_Type_L1D
#define CacheNull_Type_L1 ti_sysbios_hal_CacheNull_Type_L1
#define CacheNull_Type_L2P ti_sysbios_hal_CacheNull_Type_L2P
#define CacheNull_Type_L2D ti_sysbios_hal_CacheNull_Type_L2D
#define CacheNull_Type_L2 ti_sysbios_hal_CacheNull_Type_L2
#define CacheNull_Type_ALLP ti_sysbios_hal_CacheNull_Type_ALLP
#define CacheNull_Type_ALLD ti_sysbios_hal_CacheNull_Type_ALLD
#define CacheNull_Type_ALL ti_sysbios_hal_CacheNull_Type_ALL
#define CacheNull_enable ti_sysbios_hal_CacheNull_enable
#define CacheNull_disable ti_sysbios_hal_CacheNull_disable
#define CacheNull_inv ti_sysbios_hal_CacheNull_inv
#define CacheNull_wb ti_sysbios_hal_CacheNull_wb
#define CacheNull_wbInv ti_sysbios_hal_CacheNull_wbInv
#define CacheNull_wbAll ti_sysbios_hal_CacheNull_wbAll
#define CacheNull_wbInvAll ti_sysbios_hal_CacheNull_wbInvAll
#define CacheNull_wait ti_sysbios_hal_CacheNull_wait
#define CacheNull_Module_name ti_sysbios_hal_CacheNull_Module_name
#define CacheNull_Module_id ti_sysbios_hal_CacheNull_Module_id
#define CacheNull_Module_startup ti_sysbios_hal_CacheNull_Module_startup
#define CacheNull_Module_startupDone ti_sysbios_hal_CacheNull_Module_startupDone
#define CacheNull_Module_hasMask ti_sysbios_hal_CacheNull_Module_hasMask
#define CacheNull_Module_getMask ti_sysbios_hal_CacheNull_Module_getMask
#define CacheNull_Module_setMask ti_sysbios_hal_CacheNull_Module_setMask
#define CacheNull_Object_heap ti_sysbios_hal_CacheNull_Object_heap
#define CacheNull_Module_heap ti_sysbios_hal_CacheNull_Module_heap
#define CacheNull_Module_upCast ti_sysbios_hal_CacheNull_Module_upCast
#define CacheNull_Module_to_ti_sysbios_interfaces_ICache ti_sysbios_hal_CacheNull_Module_to_ti_sysbios_interfaces_ICache

#endif /* ti_sysbios_hal_CacheNull__localnames__done */
#endif
