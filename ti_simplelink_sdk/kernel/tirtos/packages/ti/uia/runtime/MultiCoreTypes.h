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
 *     FUNCTION DECLARATIONS
 *     SYSTEM FUNCTIONS
 *
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_uia_runtime_MultiCoreTypes__include
#define ti_uia_runtime_MultiCoreTypes__include

#ifndef __nested__
#define __nested__
#define ti_uia_runtime_MultiCoreTypes__top__
#endif

#ifndef __extern
#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif
#endif

#define ti_uia_runtime_MultiCoreTypes___VERS 200


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <ti/uia/runtime/package/package.defs.h>

#include <xdc/runtime/Assert.h>
#include <xdc/runtime/IModule.h>
#include <ti/uia/runtime/UIAPacket.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* ServiceHdr */
typedef xdc_Char __T1_ti_uia_runtime_MultiCoreTypes_ServiceHdr__msgHdr;
typedef xdc_Char ARRAY1_ti_uia_runtime_MultiCoreTypes_ServiceHdr__msgHdr[32];
typedef xdc_Char CARRAY1_ti_uia_runtime_MultiCoreTypes_ServiceHdr__msgHdr[32];
typedef CARRAY1_ti_uia_runtime_MultiCoreTypes_ServiceHdr__msgHdr __TA_ti_uia_runtime_MultiCoreTypes_ServiceHdr__msgHdr;
struct ti_uia_runtime_MultiCoreTypes_ServiceHdr {
    __TA_ti_uia_runtime_MultiCoreTypes_ServiceHdr__msgHdr msgHdr;
    ti_uia_runtime_UIAPacket_Hdr packet;
};

/* Action */
enum ti_uia_runtime_MultiCoreTypes_Action {
    ti_uia_runtime_MultiCoreTypes_Action_TOHOST = 0,
    ti_uia_runtime_MultiCoreTypes_Action_FROMHOST,
    ti_uia_runtime_MultiCoreTypes_Action_REGISTER,
    ti_uia_runtime_MultiCoreTypes_Action_STOP,
    ti_uia_runtime_MultiCoreTypes_Action_STOPACK
};
typedef enum ti_uia_runtime_MultiCoreTypes_Action ti_uia_runtime_MultiCoreTypes_Action;

/* SLAVENAME */
#define ti_uia_runtime_MultiCoreTypes_SLAVENAME ("uiaSlave")

/* MASTERNAME */
#define ti_uia_runtime_MultiCoreTypes_MASTERNAME ("uiaMaster")

/* MASTERSTARTED */
#define ti_uia_runtime_MultiCoreTypes_MASTERSTARTED ("uiaStarted")

/* RegisterMsg */
typedef xdc_Char __T1_ti_uia_runtime_MultiCoreTypes_RegisterMsg__msgHdr;
typedef xdc_Char ARRAY1_ti_uia_runtime_MultiCoreTypes_RegisterMsg__msgHdr[32];
typedef xdc_Char CARRAY1_ti_uia_runtime_MultiCoreTypes_RegisterMsg__msgHdr[32];
typedef CARRAY1_ti_uia_runtime_MultiCoreTypes_RegisterMsg__msgHdr __TA_ti_uia_runtime_MultiCoreTypes_RegisterMsg__msgHdr;
struct ti_uia_runtime_MultiCoreTypes_RegisterMsg {
    __TA_ti_uia_runtime_MultiCoreTypes_RegisterMsg__msgHdr msgHdr;
    xdc_UInt32 remoteMQ;
};


/*
 * ======== INTERNAL DEFINITIONS ========
 */


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_uia_runtime_MultiCoreTypes_Module__diagsEnabled;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Module__diagsEnabled ti_uia_runtime_MultiCoreTypes_Module__diagsEnabled__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Module__diagsEnabled__CR
#define ti_uia_runtime_MultiCoreTypes_Module__diagsEnabled__C (*((CT__ti_uia_runtime_MultiCoreTypes_Module__diagsEnabled*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Module__diagsEnabled__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Module__diagsEnabled (ti_uia_runtime_MultiCoreTypes_Module__diagsEnabled__C)
#endif

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_uia_runtime_MultiCoreTypes_Module__diagsIncluded;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Module__diagsIncluded ti_uia_runtime_MultiCoreTypes_Module__diagsIncluded__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Module__diagsIncluded__CR
#define ti_uia_runtime_MultiCoreTypes_Module__diagsIncluded__C (*((CT__ti_uia_runtime_MultiCoreTypes_Module__diagsIncluded*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Module__diagsIncluded__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Module__diagsIncluded (ti_uia_runtime_MultiCoreTypes_Module__diagsIncluded__C)
#endif

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_uia_runtime_MultiCoreTypes_Module__diagsMask;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Module__diagsMask ti_uia_runtime_MultiCoreTypes_Module__diagsMask__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Module__diagsMask__CR
#define ti_uia_runtime_MultiCoreTypes_Module__diagsMask__C (*((CT__ti_uia_runtime_MultiCoreTypes_Module__diagsMask*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Module__diagsMask__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Module__diagsMask (ti_uia_runtime_MultiCoreTypes_Module__diagsMask__C)
#endif

/* Module__gateObj */
typedef xdc_Ptr CT__ti_uia_runtime_MultiCoreTypes_Module__gateObj;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Module__gateObj ti_uia_runtime_MultiCoreTypes_Module__gateObj__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Module__gateObj__CR
#define ti_uia_runtime_MultiCoreTypes_Module__gateObj__C (*((CT__ti_uia_runtime_MultiCoreTypes_Module__gateObj*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Module__gateObj__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Module__gateObj (ti_uia_runtime_MultiCoreTypes_Module__gateObj__C)
#endif

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_uia_runtime_MultiCoreTypes_Module__gatePrms;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Module__gatePrms ti_uia_runtime_MultiCoreTypes_Module__gatePrms__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Module__gatePrms__CR
#define ti_uia_runtime_MultiCoreTypes_Module__gatePrms__C (*((CT__ti_uia_runtime_MultiCoreTypes_Module__gatePrms*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Module__gatePrms__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Module__gatePrms (ti_uia_runtime_MultiCoreTypes_Module__gatePrms__C)
#endif

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_uia_runtime_MultiCoreTypes_Module__id;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Module__id ti_uia_runtime_MultiCoreTypes_Module__id__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Module__id__CR
#define ti_uia_runtime_MultiCoreTypes_Module__id__C (*((CT__ti_uia_runtime_MultiCoreTypes_Module__id*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Module__id__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Module__id (ti_uia_runtime_MultiCoreTypes_Module__id__C)
#endif

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_uia_runtime_MultiCoreTypes_Module__loggerDefined;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Module__loggerDefined ti_uia_runtime_MultiCoreTypes_Module__loggerDefined__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Module__loggerDefined__CR
#define ti_uia_runtime_MultiCoreTypes_Module__loggerDefined__C (*((CT__ti_uia_runtime_MultiCoreTypes_Module__loggerDefined*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Module__loggerDefined__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Module__loggerDefined (ti_uia_runtime_MultiCoreTypes_Module__loggerDefined__C)
#endif

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_uia_runtime_MultiCoreTypes_Module__loggerObj;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Module__loggerObj ti_uia_runtime_MultiCoreTypes_Module__loggerObj__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Module__loggerObj__CR
#define ti_uia_runtime_MultiCoreTypes_Module__loggerObj__C (*((CT__ti_uia_runtime_MultiCoreTypes_Module__loggerObj*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Module__loggerObj__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Module__loggerObj (ti_uia_runtime_MultiCoreTypes_Module__loggerObj__C)
#endif

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_uia_runtime_MultiCoreTypes_Module__loggerFxn0;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Module__loggerFxn0 ti_uia_runtime_MultiCoreTypes_Module__loggerFxn0__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Module__loggerFxn0__CR
#define ti_uia_runtime_MultiCoreTypes_Module__loggerFxn0__C (*((CT__ti_uia_runtime_MultiCoreTypes_Module__loggerFxn0*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Module__loggerFxn0__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Module__loggerFxn0 (ti_uia_runtime_MultiCoreTypes_Module__loggerFxn0__C)
#endif

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_uia_runtime_MultiCoreTypes_Module__loggerFxn1;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Module__loggerFxn1 ti_uia_runtime_MultiCoreTypes_Module__loggerFxn1__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Module__loggerFxn1__CR
#define ti_uia_runtime_MultiCoreTypes_Module__loggerFxn1__C (*((CT__ti_uia_runtime_MultiCoreTypes_Module__loggerFxn1*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Module__loggerFxn1__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Module__loggerFxn1 (ti_uia_runtime_MultiCoreTypes_Module__loggerFxn1__C)
#endif

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_uia_runtime_MultiCoreTypes_Module__loggerFxn2;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Module__loggerFxn2 ti_uia_runtime_MultiCoreTypes_Module__loggerFxn2__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Module__loggerFxn2__CR
#define ti_uia_runtime_MultiCoreTypes_Module__loggerFxn2__C (*((CT__ti_uia_runtime_MultiCoreTypes_Module__loggerFxn2*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Module__loggerFxn2__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Module__loggerFxn2 (ti_uia_runtime_MultiCoreTypes_Module__loggerFxn2__C)
#endif

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_uia_runtime_MultiCoreTypes_Module__loggerFxn4;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Module__loggerFxn4 ti_uia_runtime_MultiCoreTypes_Module__loggerFxn4__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Module__loggerFxn4__CR
#define ti_uia_runtime_MultiCoreTypes_Module__loggerFxn4__C (*((CT__ti_uia_runtime_MultiCoreTypes_Module__loggerFxn4*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Module__loggerFxn4__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Module__loggerFxn4 (ti_uia_runtime_MultiCoreTypes_Module__loggerFxn4__C)
#endif

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_uia_runtime_MultiCoreTypes_Module__loggerFxn8;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Module__loggerFxn8 ti_uia_runtime_MultiCoreTypes_Module__loggerFxn8__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Module__loggerFxn8__CR
#define ti_uia_runtime_MultiCoreTypes_Module__loggerFxn8__C (*((CT__ti_uia_runtime_MultiCoreTypes_Module__loggerFxn8*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Module__loggerFxn8__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Module__loggerFxn8 (ti_uia_runtime_MultiCoreTypes_Module__loggerFxn8__C)
#endif

/* Object__count */
typedef xdc_Int CT__ti_uia_runtime_MultiCoreTypes_Object__count;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Object__count ti_uia_runtime_MultiCoreTypes_Object__count__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Object__count__CR
#define ti_uia_runtime_MultiCoreTypes_Object__count__C (*((CT__ti_uia_runtime_MultiCoreTypes_Object__count*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Object__count__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Object__count (ti_uia_runtime_MultiCoreTypes_Object__count__C)
#endif

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_uia_runtime_MultiCoreTypes_Object__heap;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Object__heap ti_uia_runtime_MultiCoreTypes_Object__heap__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Object__heap__CR
#define ti_uia_runtime_MultiCoreTypes_Object__heap__C (*((CT__ti_uia_runtime_MultiCoreTypes_Object__heap*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Object__heap__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Object__heap (ti_uia_runtime_MultiCoreTypes_Object__heap__C)
#endif

/* Object__sizeof */
typedef xdc_SizeT CT__ti_uia_runtime_MultiCoreTypes_Object__sizeof;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Object__sizeof ti_uia_runtime_MultiCoreTypes_Object__sizeof__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Object__sizeof__CR
#define ti_uia_runtime_MultiCoreTypes_Object__sizeof__C (*((CT__ti_uia_runtime_MultiCoreTypes_Object__sizeof*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Object__sizeof__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Object__sizeof (ti_uia_runtime_MultiCoreTypes_Object__sizeof__C)
#endif

/* Object__table */
typedef xdc_Ptr CT__ti_uia_runtime_MultiCoreTypes_Object__table;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_Object__table ti_uia_runtime_MultiCoreTypes_Object__table__C;
#ifdef ti_uia_runtime_MultiCoreTypes_Object__table__CR
#define ti_uia_runtime_MultiCoreTypes_Object__table__C (*((CT__ti_uia_runtime_MultiCoreTypes_Object__table*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_Object__table__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_Object__table (ti_uia_runtime_MultiCoreTypes_Object__table__C)
#endif

/* A_ipcFailed */
typedef xdc_runtime_Assert_Id CT__ti_uia_runtime_MultiCoreTypes_A_ipcFailed;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_A_ipcFailed ti_uia_runtime_MultiCoreTypes_A_ipcFailed__C;
#ifdef ti_uia_runtime_MultiCoreTypes_A_ipcFailed__CR
#define ti_uia_runtime_MultiCoreTypes_A_ipcFailed (*((CT__ti_uia_runtime_MultiCoreTypes_A_ipcFailed*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_A_ipcFailed__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_A_ipcFailed (ti_uia_runtime_MultiCoreTypes_A_ipcFailed__C)
#endif

/* A_invalidHdrType */
typedef xdc_runtime_Assert_Id CT__ti_uia_runtime_MultiCoreTypes_A_invalidHdrType;
__extern __FAR__ const CT__ti_uia_runtime_MultiCoreTypes_A_invalidHdrType ti_uia_runtime_MultiCoreTypes_A_invalidHdrType__C;
#ifdef ti_uia_runtime_MultiCoreTypes_A_invalidHdrType__CR
#define ti_uia_runtime_MultiCoreTypes_A_invalidHdrType (*((CT__ti_uia_runtime_MultiCoreTypes_A_invalidHdrType*)(xdcRomConstPtr + ti_uia_runtime_MultiCoreTypes_A_invalidHdrType__C_offset)))
#else
#define ti_uia_runtime_MultiCoreTypes_A_invalidHdrType (ti_uia_runtime_MultiCoreTypes_A_invalidHdrType__C)
#endif


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_uia_runtime_MultiCoreTypes_Module_startup( state ) (-1)

/* Module__startupDone__S */
xdc__CODESECT(ti_uia_runtime_MultiCoreTypes_Module__startupDone__S, "ti_uia_runtime_MultiCoreTypes_Module__startupDone__S")
__extern xdc_Bool ti_uia_runtime_MultiCoreTypes_Module__startupDone__S( void);


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_uia_runtime_MultiCoreTypes_Module_startupDone() ti_uia_runtime_MultiCoreTypes_Module__startupDone__S()

/* Object_heap */
#define ti_uia_runtime_MultiCoreTypes_Object_heap() ti_uia_runtime_MultiCoreTypes_Object__heap__C

/* Module_heap */
#define ti_uia_runtime_MultiCoreTypes_Module_heap() ti_uia_runtime_MultiCoreTypes_Object__heap__C

/* Module_id */
static inline CT__ti_uia_runtime_MultiCoreTypes_Module__id ti_uia_runtime_MultiCoreTypes_Module_id(void);
static inline CT__ti_uia_runtime_MultiCoreTypes_Module__id ti_uia_runtime_MultiCoreTypes_Module_id( void ) 
{
    return ti_uia_runtime_MultiCoreTypes_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_uia_runtime_MultiCoreTypes_Module_hasMask(void);
static inline xdc_Bool ti_uia_runtime_MultiCoreTypes_Module_hasMask(void)
{
    return (xdc_Bool)(ti_uia_runtime_MultiCoreTypes_Module__diagsMask__C != (CT__ti_uia_runtime_MultiCoreTypes_Module__diagsMask)NULL);
}

/* Module_getMask */
static inline xdc_Bits16 ti_uia_runtime_MultiCoreTypes_Module_getMask(void);
static inline xdc_Bits16 ti_uia_runtime_MultiCoreTypes_Module_getMask(void)
{
    return (ti_uia_runtime_MultiCoreTypes_Module__diagsMask__C != (CT__ti_uia_runtime_MultiCoreTypes_Module__diagsMask)NULL) ? *ti_uia_runtime_MultiCoreTypes_Module__diagsMask__C : (xdc_Bits16)0;
}

/* Module_setMask */
static inline xdc_Void ti_uia_runtime_MultiCoreTypes_Module_setMask(xdc_Bits16 mask);
static inline xdc_Void ti_uia_runtime_MultiCoreTypes_Module_setMask(xdc_Bits16 mask)
{
    if (ti_uia_runtime_MultiCoreTypes_Module__diagsMask__C != (CT__ti_uia_runtime_MultiCoreTypes_Module__diagsMask)NULL) {
        *ti_uia_runtime_MultiCoreTypes_Module__diagsMask__C = mask;
    }
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_uia_runtime_MultiCoreTypes__top__
#undef __nested__
#endif

#endif /* ti_uia_runtime_MultiCoreTypes__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_uia_runtime_MultiCoreTypes__internalaccess))

#ifndef ti_uia_runtime_MultiCoreTypes__include_state
#define ti_uia_runtime_MultiCoreTypes__include_state


#endif /* ti_uia_runtime_MultiCoreTypes__include_state */

#endif

/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_uia_runtime_MultiCoreTypes__nolocalnames)

#ifndef ti_uia_runtime_MultiCoreTypes__localnames__done
#define ti_uia_runtime_MultiCoreTypes__localnames__done

/* module prefix */
#define MultiCoreTypes_ServiceHdr ti_uia_runtime_MultiCoreTypes_ServiceHdr
#define MultiCoreTypes_Action ti_uia_runtime_MultiCoreTypes_Action
#define MultiCoreTypes_SLAVENAME ti_uia_runtime_MultiCoreTypes_SLAVENAME
#define MultiCoreTypes_MASTERNAME ti_uia_runtime_MultiCoreTypes_MASTERNAME
#define MultiCoreTypes_MASTERSTARTED ti_uia_runtime_MultiCoreTypes_MASTERSTARTED
#define MultiCoreTypes_RegisterMsg ti_uia_runtime_MultiCoreTypes_RegisterMsg
#define MultiCoreTypes_Action_TOHOST ti_uia_runtime_MultiCoreTypes_Action_TOHOST
#define MultiCoreTypes_Action_FROMHOST ti_uia_runtime_MultiCoreTypes_Action_FROMHOST
#define MultiCoreTypes_Action_REGISTER ti_uia_runtime_MultiCoreTypes_Action_REGISTER
#define MultiCoreTypes_Action_STOP ti_uia_runtime_MultiCoreTypes_Action_STOP
#define MultiCoreTypes_Action_STOPACK ti_uia_runtime_MultiCoreTypes_Action_STOPACK
#define MultiCoreTypes_A_ipcFailed ti_uia_runtime_MultiCoreTypes_A_ipcFailed
#define MultiCoreTypes_A_invalidHdrType ti_uia_runtime_MultiCoreTypes_A_invalidHdrType
#define MultiCoreTypes_Module_name ti_uia_runtime_MultiCoreTypes_Module_name
#define MultiCoreTypes_Module_id ti_uia_runtime_MultiCoreTypes_Module_id
#define MultiCoreTypes_Module_startup ti_uia_runtime_MultiCoreTypes_Module_startup
#define MultiCoreTypes_Module_startupDone ti_uia_runtime_MultiCoreTypes_Module_startupDone
#define MultiCoreTypes_Module_hasMask ti_uia_runtime_MultiCoreTypes_Module_hasMask
#define MultiCoreTypes_Module_getMask ti_uia_runtime_MultiCoreTypes_Module_getMask
#define MultiCoreTypes_Module_setMask ti_uia_runtime_MultiCoreTypes_Module_setMask
#define MultiCoreTypes_Object_heap ti_uia_runtime_MultiCoreTypes_Object_heap
#define MultiCoreTypes_Module_heap ti_uia_runtime_MultiCoreTypes_Module_heap

#endif /* ti_uia_runtime_MultiCoreTypes__localnames__done */
#endif
