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

#ifndef ti_sysbios_knl_Swi__include
#define ti_sysbios_knl_Swi__include

#ifndef __nested__
#define __nested__
#define ti_sysbios_knl_Swi__top__
#endif

#ifndef __extern
#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif
#endif

#define ti_sysbios_knl_Swi___VERS 200


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sysbios/knl/package/package.defs.h>

#include <xdc/runtime/Error.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Types.h>
#include <ti/sysbios/knl/Queue.h>
#include <xdc/runtime/IModule.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* FuncPtr */
typedef xdc_Void (*ti_sysbios_knl_Swi_FuncPtr)(xdc_UArg arg1, xdc_UArg arg2);

/* HookSet */
struct ti_sysbios_knl_Swi_HookSet {
    xdc_Void (*registerFxn)(xdc_Int arg1);
    xdc_Void (*createFxn)(ti_sysbios_knl_Swi_Handle arg1, xdc_runtime_Error_Block* arg2);
    xdc_Void (*readyFxn)(ti_sysbios_knl_Swi_Handle arg1);
    xdc_Void (*beginFxn)(ti_sysbios_knl_Swi_Handle arg1);
    xdc_Void (*endFxn)(ti_sysbios_knl_Swi_Handle arg1);
    xdc_Void (*deleteFxn)(ti_sysbios_knl_Swi_Handle arg1);
};

/* Struct2__ */
typedef xdc_Ptr __T1_ti_sysbios_knl_Swi_Struct2____hookEnv;
typedef xdc_Ptr *ARRAY1_ti_sysbios_knl_Swi_Struct2____hookEnv;
typedef const xdc_Ptr *CARRAY1_ti_sysbios_knl_Swi_Struct2____hookEnv;
typedef CARRAY1_ti_sysbios_knl_Swi_Struct2____hookEnv __TA_ti_sysbios_knl_Swi_Struct2____hookEnv;
struct ti_sysbios_knl_Swi_Struct2__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Struct2____hookEnv hookEnv;
    xdc_runtime_Types_CordAddr name;
};

/* Struct2 */
typedef ti_sysbios_knl_Swi_Struct2__ ti_sysbios_knl_Swi_Struct2;


/*
 * ======== CREATE ARGS ========
 */

/* Args__create */
typedef struct ti_sysbios_knl_Swi_Args__create {
    ti_sysbios_knl_Swi_FuncPtr swiFxn;
} ti_sysbios_knl_Swi_Args__create;


/*
 * ======== INTERNAL DEFINITIONS ========
 */

/* Instance_State */
typedef xdc_Ptr __T1_ti_sysbios_knl_Swi_Instance_State__hookEnv;
typedef xdc_Ptr *ARRAY1_ti_sysbios_knl_Swi_Instance_State__hookEnv;
typedef const xdc_Ptr *CARRAY1_ti_sysbios_knl_Swi_Instance_State__hookEnv;
typedef ARRAY1_ti_sysbios_knl_Swi_Instance_State__hookEnv __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv;

/* Module_State */
typedef ti_sysbios_knl_Queue_Object __T1_ti_sysbios_knl_Swi_Module_State__readyQ;
typedef ti_sysbios_knl_Queue_Object *ARRAY1_ti_sysbios_knl_Swi_Module_State__readyQ;
typedef const ti_sysbios_knl_Queue_Object *CARRAY1_ti_sysbios_knl_Swi_Module_State__readyQ;
typedef ARRAY1_ti_sysbios_knl_Swi_Module_State__readyQ __TA_ti_sysbios_knl_Swi_Module_State__readyQ;
typedef ti_sysbios_knl_Swi_Handle __T1_ti_sysbios_knl_Swi_Module_State__constructedSwis;
typedef ti_sysbios_knl_Swi_Handle *ARRAY1_ti_sysbios_knl_Swi_Module_State__constructedSwis;
typedef const ti_sysbios_knl_Swi_Handle *CARRAY1_ti_sysbios_knl_Swi_Module_State__constructedSwis;
typedef ARRAY1_ti_sysbios_knl_Swi_Module_State__constructedSwis __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis;


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sysbios_knl_Swi_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C;
#ifdef ti_sysbios_knl_Swi_Module__diagsEnabled__CR
#define ti_sysbios_knl_Swi_Module__diagsEnabled__C (*((CT__ti_sysbios_knl_Swi_Module__diagsEnabled*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__diagsEnabled__C_offset)))
#else
#define ti_sysbios_knl_Swi_Module__diagsEnabled (ti_sysbios_knl_Swi_Module__diagsEnabled__C)
#endif

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sysbios_knl_Swi_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C;
#ifdef ti_sysbios_knl_Swi_Module__diagsIncluded__CR
#define ti_sysbios_knl_Swi_Module__diagsIncluded__C (*((CT__ti_sysbios_knl_Swi_Module__diagsIncluded*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__diagsIncluded__C_offset)))
#else
#define ti_sysbios_knl_Swi_Module__diagsIncluded (ti_sysbios_knl_Swi_Module__diagsIncluded__C)
#endif

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_sysbios_knl_Swi_Module__diagsMask;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C;
#ifdef ti_sysbios_knl_Swi_Module__diagsMask__CR
#define ti_sysbios_knl_Swi_Module__diagsMask__C (*((CT__ti_sysbios_knl_Swi_Module__diagsMask*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__diagsMask__C_offset)))
#else
#define ti_sysbios_knl_Swi_Module__diagsMask (ti_sysbios_knl_Swi_Module__diagsMask__C)
#endif

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sysbios_knl_Swi_Module__gateObj;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C;
#ifdef ti_sysbios_knl_Swi_Module__gateObj__CR
#define ti_sysbios_knl_Swi_Module__gateObj__C (*((CT__ti_sysbios_knl_Swi_Module__gateObj*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__gateObj__C_offset)))
#else
#define ti_sysbios_knl_Swi_Module__gateObj (ti_sysbios_knl_Swi_Module__gateObj__C)
#endif

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sysbios_knl_Swi_Module__gatePrms;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C;
#ifdef ti_sysbios_knl_Swi_Module__gatePrms__CR
#define ti_sysbios_knl_Swi_Module__gatePrms__C (*((CT__ti_sysbios_knl_Swi_Module__gatePrms*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__gatePrms__C_offset)))
#else
#define ti_sysbios_knl_Swi_Module__gatePrms (ti_sysbios_knl_Swi_Module__gatePrms__C)
#endif

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sysbios_knl_Swi_Module__id;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C;
#ifdef ti_sysbios_knl_Swi_Module__id__CR
#define ti_sysbios_knl_Swi_Module__id__C (*((CT__ti_sysbios_knl_Swi_Module__id*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__id__C_offset)))
#else
#define ti_sysbios_knl_Swi_Module__id (ti_sysbios_knl_Swi_Module__id__C)
#endif

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sysbios_knl_Swi_Module__loggerDefined;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C;
#ifdef ti_sysbios_knl_Swi_Module__loggerDefined__CR
#define ti_sysbios_knl_Swi_Module__loggerDefined__C (*((CT__ti_sysbios_knl_Swi_Module__loggerDefined*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerDefined__C_offset)))
#else
#define ti_sysbios_knl_Swi_Module__loggerDefined (ti_sysbios_knl_Swi_Module__loggerDefined__C)
#endif

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sysbios_knl_Swi_Module__loggerObj;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C;
#ifdef ti_sysbios_knl_Swi_Module__loggerObj__CR
#define ti_sysbios_knl_Swi_Module__loggerObj__C (*((CT__ti_sysbios_knl_Swi_Module__loggerObj*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerObj__C_offset)))
#else
#define ti_sysbios_knl_Swi_Module__loggerObj (ti_sysbios_knl_Swi_Module__loggerObj__C)
#endif

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sysbios_knl_Swi_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C;
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn0__CR
#define ti_sysbios_knl_Swi_Module__loggerFxn0__C (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn0*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn0__C_offset)))
#else
#define ti_sysbios_knl_Swi_Module__loggerFxn0 (ti_sysbios_knl_Swi_Module__loggerFxn0__C)
#endif

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sysbios_knl_Swi_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C;
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn1__CR
#define ti_sysbios_knl_Swi_Module__loggerFxn1__C (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn1*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn1__C_offset)))
#else
#define ti_sysbios_knl_Swi_Module__loggerFxn1 (ti_sysbios_knl_Swi_Module__loggerFxn1__C)
#endif

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sysbios_knl_Swi_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C;
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn2__CR
#define ti_sysbios_knl_Swi_Module__loggerFxn2__C (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn2*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn2__C_offset)))
#else
#define ti_sysbios_knl_Swi_Module__loggerFxn2 (ti_sysbios_knl_Swi_Module__loggerFxn2__C)
#endif

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sysbios_knl_Swi_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C;
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn4__CR
#define ti_sysbios_knl_Swi_Module__loggerFxn4__C (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn4*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn4__C_offset)))
#else
#define ti_sysbios_knl_Swi_Module__loggerFxn4 (ti_sysbios_knl_Swi_Module__loggerFxn4__C)
#endif

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sysbios_knl_Swi_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C;
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn8__CR
#define ti_sysbios_knl_Swi_Module__loggerFxn8__C (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn8*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn8__C_offset)))
#else
#define ti_sysbios_knl_Swi_Module__loggerFxn8 (ti_sysbios_knl_Swi_Module__loggerFxn8__C)
#endif

/* Object__count */
typedef xdc_Int CT__ti_sysbios_knl_Swi_Object__count;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C;
#ifdef ti_sysbios_knl_Swi_Object__count__CR
#define ti_sysbios_knl_Swi_Object__count__C (*((CT__ti_sysbios_knl_Swi_Object__count*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Object__count__C_offset)))
#else
#define ti_sysbios_knl_Swi_Object__count (ti_sysbios_knl_Swi_Object__count__C)
#endif

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sysbios_knl_Swi_Object__heap;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C;
#ifdef ti_sysbios_knl_Swi_Object__heap__CR
#define ti_sysbios_knl_Swi_Object__heap__C (*((CT__ti_sysbios_knl_Swi_Object__heap*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Object__heap__C_offset)))
#else
#define ti_sysbios_knl_Swi_Object__heap (ti_sysbios_knl_Swi_Object__heap__C)
#endif

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sysbios_knl_Swi_Object__sizeof;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C;
#ifdef ti_sysbios_knl_Swi_Object__sizeof__CR
#define ti_sysbios_knl_Swi_Object__sizeof__C (*((CT__ti_sysbios_knl_Swi_Object__sizeof*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Object__sizeof__C_offset)))
#else
#define ti_sysbios_knl_Swi_Object__sizeof (ti_sysbios_knl_Swi_Object__sizeof__C)
#endif

/* Object__table */
typedef xdc_Ptr CT__ti_sysbios_knl_Swi_Object__table;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C;
#ifdef ti_sysbios_knl_Swi_Object__table__CR
#define ti_sysbios_knl_Swi_Object__table__C (*((CT__ti_sysbios_knl_Swi_Object__table*)(xdcRomConstPtr + ti_sysbios_knl_Swi_Object__table__C_offset)))
#else
#define ti_sysbios_knl_Swi_Object__table (ti_sysbios_knl_Swi_Object__table__C)
#endif

/* LM_begin */
typedef xdc_runtime_Log_Event CT__ti_sysbios_knl_Swi_LM_begin;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C;
#ifdef ti_sysbios_knl_Swi_LM_begin__CR
#define ti_sysbios_knl_Swi_LM_begin (*((CT__ti_sysbios_knl_Swi_LM_begin*)(xdcRomConstPtr + ti_sysbios_knl_Swi_LM_begin__C_offset)))
#else
#define ti_sysbios_knl_Swi_LM_begin (ti_sysbios_knl_Swi_LM_begin__C)
#endif

/* LD_end */
typedef xdc_runtime_Log_Event CT__ti_sysbios_knl_Swi_LD_end;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C;
#ifdef ti_sysbios_knl_Swi_LD_end__CR
#define ti_sysbios_knl_Swi_LD_end (*((CT__ti_sysbios_knl_Swi_LD_end*)(xdcRomConstPtr + ti_sysbios_knl_Swi_LD_end__C_offset)))
#else
#define ti_sysbios_knl_Swi_LD_end (ti_sysbios_knl_Swi_LD_end__C)
#endif

/* LM_post */
typedef xdc_runtime_Log_Event CT__ti_sysbios_knl_Swi_LM_post;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C;
#ifdef ti_sysbios_knl_Swi_LM_post__CR
#define ti_sysbios_knl_Swi_LM_post (*((CT__ti_sysbios_knl_Swi_LM_post*)(xdcRomConstPtr + ti_sysbios_knl_Swi_LM_post__C_offset)))
#else
#define ti_sysbios_knl_Swi_LM_post (ti_sysbios_knl_Swi_LM_post__C)
#endif

/* A_swiDisabled */
typedef xdc_runtime_Assert_Id CT__ti_sysbios_knl_Swi_A_swiDisabled;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C;
#ifdef ti_sysbios_knl_Swi_A_swiDisabled__CR
#define ti_sysbios_knl_Swi_A_swiDisabled (*((CT__ti_sysbios_knl_Swi_A_swiDisabled*)(xdcRomConstPtr + ti_sysbios_knl_Swi_A_swiDisabled__C_offset)))
#else
#define ti_sysbios_knl_Swi_A_swiDisabled (ti_sysbios_knl_Swi_A_swiDisabled__C)
#endif

/* A_badPriority */
typedef xdc_runtime_Assert_Id CT__ti_sysbios_knl_Swi_A_badPriority;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C;
#ifdef ti_sysbios_knl_Swi_A_badPriority__CR
#define ti_sysbios_knl_Swi_A_badPriority (*((CT__ti_sysbios_knl_Swi_A_badPriority*)(xdcRomConstPtr + ti_sysbios_knl_Swi_A_badPriority__C_offset)))
#else
#define ti_sysbios_knl_Swi_A_badPriority (ti_sysbios_knl_Swi_A_badPriority__C)
#endif

/* numPriorities */
typedef xdc_UInt CT__ti_sysbios_knl_Swi_numPriorities;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C;
#ifdef ti_sysbios_knl_Swi_numPriorities__CR
#define ti_sysbios_knl_Swi_numPriorities (*((CT__ti_sysbios_knl_Swi_numPriorities*)(xdcRomConstPtr + ti_sysbios_knl_Swi_numPriorities__C_offset)))
#else
#ifdef ti_sysbios_knl_Swi_numPriorities__D
#define ti_sysbios_knl_Swi_numPriorities (ti_sysbios_knl_Swi_numPriorities__D)
#else
#define ti_sysbios_knl_Swi_numPriorities (ti_sysbios_knl_Swi_numPriorities__C)
#endif
#endif

/* hooks */
typedef ti_sysbios_knl_Swi_HookSet __T1_ti_sysbios_knl_Swi_hooks;
typedef struct { int length; ti_sysbios_knl_Swi_HookSet *elem; } ARRAY1_ti_sysbios_knl_Swi_hooks;
typedef struct { int length; ti_sysbios_knl_Swi_HookSet const *elem; } CARRAY1_ti_sysbios_knl_Swi_hooks;
typedef CARRAY1_ti_sysbios_knl_Swi_hooks __TA_ti_sysbios_knl_Swi_hooks;
typedef CARRAY1_ti_sysbios_knl_Swi_hooks CT__ti_sysbios_knl_Swi_hooks;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C;
#ifdef ti_sysbios_knl_Swi_hooks__CR
#define ti_sysbios_knl_Swi_hooks (*((CT__ti_sysbios_knl_Swi_hooks*)(xdcRomConstPtr + ti_sysbios_knl_Swi_hooks__C_offset)))
#else
#define ti_sysbios_knl_Swi_hooks (ti_sysbios_knl_Swi_hooks__C)
#endif

/* taskDisable */
typedef xdc_UInt (*CT__ti_sysbios_knl_Swi_taskDisable)(void);
__extern __FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C;
#ifdef ti_sysbios_knl_Swi_taskDisable__CR
#define ti_sysbios_knl_Swi_taskDisable (*((CT__ti_sysbios_knl_Swi_taskDisable*)(xdcRomConstPtr + ti_sysbios_knl_Swi_taskDisable__C_offset)))
#else
#define ti_sysbios_knl_Swi_taskDisable (ti_sysbios_knl_Swi_taskDisable__C)
#endif

/* taskRestore */
typedef xdc_Void (*CT__ti_sysbios_knl_Swi_taskRestore)(xdc_UInt arg1);
__extern __FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C;
#ifdef ti_sysbios_knl_Swi_taskRestore__CR
#define ti_sysbios_knl_Swi_taskRestore (*((CT__ti_sysbios_knl_Swi_taskRestore*)(xdcRomConstPtr + ti_sysbios_knl_Swi_taskRestore__C_offset)))
#else
#define ti_sysbios_knl_Swi_taskRestore (ti_sysbios_knl_Swi_taskRestore__C)
#endif

/* numConstructedSwis */
typedef xdc_UInt CT__ti_sysbios_knl_Swi_numConstructedSwis;
__extern __FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C;
#ifdef ti_sysbios_knl_Swi_numConstructedSwis__CR
#define ti_sysbios_knl_Swi_numConstructedSwis (*((CT__ti_sysbios_knl_Swi_numConstructedSwis*)(xdcRomConstPtr + ti_sysbios_knl_Swi_numConstructedSwis__C_offset)))
#else
#ifdef ti_sysbios_knl_Swi_numConstructedSwis__D
#define ti_sysbios_knl_Swi_numConstructedSwis (ti_sysbios_knl_Swi_numConstructedSwis__D)
#else
#define ti_sysbios_knl_Swi_numConstructedSwis (ti_sysbios_knl_Swi_numConstructedSwis__C)
#endif
#endif


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sysbios_knl_Swi_Params {
    size_t __size;
    const void *__self;
    void *__fxns;
    xdc_runtime_IInstance_Params *instance;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt trigger;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sysbios_knl_Swi_Struct {
    ti_sysbios_knl_Queue_Elem f0;
    ti_sysbios_knl_Swi_FuncPtr f1;
    xdc_UArg f2;
    xdc_UArg f3;
    xdc_UInt f4;
    xdc_UInt f5;
    xdc_Bool f6;
    xdc_UInt f7;
    xdc_UInt f8;
    ti_sysbios_knl_Queue_Handle f9;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv f10;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sysbios_knl_Swi_Module_startup ti_sysbios_knl_Swi_Module_startup__E
xdc__CODESECT(ti_sysbios_knl_Swi_Module_startup__E, "ti_sysbios_knl_Swi_Module_startup")
__extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E( xdc_Int state );
xdc__CODESECT(ti_sysbios_knl_Swi_Module_startup__F, "ti_sysbios_knl_Swi_Module_startup")
__extern xdc_Int ti_sysbios_knl_Swi_Module_startup__F( xdc_Int state );

/* Instance_init__E */
xdc__CODESECT(ti_sysbios_knl_Swi_Instance_init__E, "ti_sysbios_knl_Swi_Instance_init")
__extern xdc_Int ti_sysbios_knl_Swi_Instance_init__E(ti_sysbios_knl_Swi_Object *obj, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *prms, xdc_runtime_Error_Block *eb);

/* Instance_finalize__E */
xdc__CODESECT(ti_sysbios_knl_Swi_Instance_finalize__E, "ti_sysbios_knl_Swi_Instance_finalize")
__extern void ti_sysbios_knl_Swi_Instance_finalize__E(ti_sysbios_knl_Swi_Object *obj, int ec);

/* create */
xdc__CODESECT(ti_sysbios_knl_Swi_create, "ti_sysbios_knl_Swi_create")
__extern ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *prms, xdc_runtime_Error_Block *eb);

/* construct */
xdc__CODESECT(ti_sysbios_knl_Swi_construct, "ti_sysbios_knl_Swi_construct")
__extern void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *obj, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *prms, xdc_runtime_Error_Block *eb);

/* delete */
xdc__CODESECT(ti_sysbios_knl_Swi_delete, "ti_sysbios_knl_Swi_delete")
__extern void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp);

/* destruct */
xdc__CODESECT(ti_sysbios_knl_Swi_destruct, "ti_sysbios_knl_Swi_destruct")
__extern void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj);

/* Handle__label__S */
xdc__CODESECT(ti_sysbios_knl_Swi_Handle__label__S, "ti_sysbios_knl_Swi_Handle__label__S")
__extern xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label *lab);

/* Module__startupDone__S */
xdc__CODESECT(ti_sysbios_knl_Swi_Module__startupDone__S, "ti_sysbios_knl_Swi_Module__startupDone__S")
__extern xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void);

/* Object__create__S */
xdc__CODESECT(ti_sysbios_knl_Swi_Object__create__S, "ti_sysbios_knl_Swi_Object__create__S")
__extern xdc_Ptr ti_sysbios_knl_Swi_Object__create__S( xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb);

/* Object__delete__S */
xdc__CODESECT(ti_sysbios_knl_Swi_Object__delete__S, "ti_sysbios_knl_Swi_Object__delete__S")
__extern xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp);

/* Object__get__S */
xdc__CODESECT(ti_sysbios_knl_Swi_Object__get__S, "ti_sysbios_knl_Swi_Object__get__S")
__extern xdc_Ptr ti_sysbios_knl_Swi_Object__get__S( xdc_Ptr oarr, xdc_Int i);

/* Object__first__S */
xdc__CODESECT(ti_sysbios_knl_Swi_Object__first__S, "ti_sysbios_knl_Swi_Object__first__S")
__extern xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void);

/* Object__next__S */
xdc__CODESECT(ti_sysbios_knl_Swi_Object__next__S, "ti_sysbios_knl_Swi_Object__next__S")
__extern xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj);

/* Params__init__S */
xdc__CODESECT(ti_sysbios_knl_Swi_Params__init__S, "ti_sysbios_knl_Swi_Params__init__S")
__extern xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz);

/* construct2__E */
#define ti_sysbios_knl_Swi_construct2 ti_sysbios_knl_Swi_construct2__E
xdc__CODESECT(ti_sysbios_knl_Swi_construct2__E, "ti_sysbios_knl_Swi_construct2")
__extern ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_construct2__E( ti_sysbios_knl_Swi_Struct2 *swi, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *prms);

/* startup__E */
#define ti_sysbios_knl_Swi_startup ti_sysbios_knl_Swi_startup__E
xdc__CODESECT(ti_sysbios_knl_Swi_startup__E, "ti_sysbios_knl_Swi_startup")
__extern xdc_Void ti_sysbios_knl_Swi_startup__E( void);

/* enabled__E */
#define ti_sysbios_knl_Swi_enabled ti_sysbios_knl_Swi_enabled__E
xdc__CODESECT(ti_sysbios_knl_Swi_enabled__E, "ti_sysbios_knl_Swi_enabled")
__extern xdc_Bool ti_sysbios_knl_Swi_enabled__E( void);

/* unlockSched__E */
#define ti_sysbios_knl_Swi_unlockSched ti_sysbios_knl_Swi_unlockSched__E
xdc__CODESECT(ti_sysbios_knl_Swi_unlockSched__E, "ti_sysbios_knl_Swi_unlockSched")
__extern xdc_Void ti_sysbios_knl_Swi_unlockSched__E( void);

/* disable__E */
#define ti_sysbios_knl_Swi_disable ti_sysbios_knl_Swi_disable__E
xdc__CODESECT(ti_sysbios_knl_Swi_disable__E, "ti_sysbios_knl_Swi_disable")
__extern xdc_UInt ti_sysbios_knl_Swi_disable__E( void);

/* enable__E */
#define ti_sysbios_knl_Swi_enable ti_sysbios_knl_Swi_enable__E
xdc__CODESECT(ti_sysbios_knl_Swi_enable__E, "ti_sysbios_knl_Swi_enable")
__extern xdc_Void ti_sysbios_knl_Swi_enable__E( void);

/* restore__E */
#define ti_sysbios_knl_Swi_restore ti_sysbios_knl_Swi_restore__E
xdc__CODESECT(ti_sysbios_knl_Swi_restore__E, "ti_sysbios_knl_Swi_restore")
__extern xdc_Void ti_sysbios_knl_Swi_restore__E( xdc_UInt key);

/* restoreHwi__E */
#define ti_sysbios_knl_Swi_restoreHwi ti_sysbios_knl_Swi_restoreHwi__E
xdc__CODESECT(ti_sysbios_knl_Swi_restoreHwi__E, "ti_sysbios_knl_Swi_restoreHwi")
__extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E( xdc_UInt key);

/* self__E */
#define ti_sysbios_knl_Swi_self ti_sysbios_knl_Swi_self__E
xdc__CODESECT(ti_sysbios_knl_Swi_self__E, "ti_sysbios_knl_Swi_self")
__extern ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_self__E( void);

/* getTrigger__E */
#define ti_sysbios_knl_Swi_getTrigger ti_sysbios_knl_Swi_getTrigger__E
xdc__CODESECT(ti_sysbios_knl_Swi_getTrigger__E, "ti_sysbios_knl_Swi_getTrigger")
__extern xdc_UInt ti_sysbios_knl_Swi_getTrigger__E( void);

/* raisePri__E */
#define ti_sysbios_knl_Swi_raisePri ti_sysbios_knl_Swi_raisePri__E
xdc__CODESECT(ti_sysbios_knl_Swi_raisePri__E, "ti_sysbios_knl_Swi_raisePri")
__extern xdc_UInt ti_sysbios_knl_Swi_raisePri__E( xdc_UInt priority);

/* restorePri__E */
#define ti_sysbios_knl_Swi_restorePri ti_sysbios_knl_Swi_restorePri__E
xdc__CODESECT(ti_sysbios_knl_Swi_restorePri__E, "ti_sysbios_knl_Swi_restorePri")
__extern xdc_Void ti_sysbios_knl_Swi_restorePri__E( xdc_UInt key);

/* andn__E */
#define ti_sysbios_knl_Swi_andn ti_sysbios_knl_Swi_andn__E
xdc__CODESECT(ti_sysbios_knl_Swi_andn__E, "ti_sysbios_knl_Swi_andn")
__extern xdc_Void ti_sysbios_knl_Swi_andn__E( ti_sysbios_knl_Swi_Handle instp, xdc_UInt mask);

/* dec__E */
#define ti_sysbios_knl_Swi_dec ti_sysbios_knl_Swi_dec__E
xdc__CODESECT(ti_sysbios_knl_Swi_dec__E, "ti_sysbios_knl_Swi_dec")
__extern xdc_Void ti_sysbios_knl_Swi_dec__E( ti_sysbios_knl_Swi_Handle instp);

/* getHookContext__E */
#define ti_sysbios_knl_Swi_getHookContext ti_sysbios_knl_Swi_getHookContext__E
xdc__CODESECT(ti_sysbios_knl_Swi_getHookContext__E, "ti_sysbios_knl_Swi_getHookContext")
__extern xdc_Ptr ti_sysbios_knl_Swi_getHookContext__E( ti_sysbios_knl_Swi_Handle instp, xdc_Int id);

/* setHookContext__E */
#define ti_sysbios_knl_Swi_setHookContext ti_sysbios_knl_Swi_setHookContext__E
xdc__CODESECT(ti_sysbios_knl_Swi_setHookContext__E, "ti_sysbios_knl_Swi_setHookContext")
__extern xdc_Void ti_sysbios_knl_Swi_setHookContext__E( ti_sysbios_knl_Swi_Handle instp, xdc_Int id, xdc_Ptr hookContext);

/* getPri__E */
#define ti_sysbios_knl_Swi_getPri ti_sysbios_knl_Swi_getPri__E
xdc__CODESECT(ti_sysbios_knl_Swi_getPri__E, "ti_sysbios_knl_Swi_getPri")
__extern xdc_UInt ti_sysbios_knl_Swi_getPri__E( ti_sysbios_knl_Swi_Handle instp);

/* getFunc__E */
#define ti_sysbios_knl_Swi_getFunc ti_sysbios_knl_Swi_getFunc__E
xdc__CODESECT(ti_sysbios_knl_Swi_getFunc__E, "ti_sysbios_knl_Swi_getFunc")
__extern ti_sysbios_knl_Swi_FuncPtr ti_sysbios_knl_Swi_getFunc__E( ti_sysbios_knl_Swi_Handle instp, xdc_UArg *arg0, xdc_UArg *arg1);

/* getAttrs__E */
#define ti_sysbios_knl_Swi_getAttrs ti_sysbios_knl_Swi_getAttrs__E
xdc__CODESECT(ti_sysbios_knl_Swi_getAttrs__E, "ti_sysbios_knl_Swi_getAttrs")
__extern xdc_Void ti_sysbios_knl_Swi_getAttrs__E( ti_sysbios_knl_Swi_Handle instp, ti_sysbios_knl_Swi_FuncPtr *swiFxn, ti_sysbios_knl_Swi_Params *params);

/* setAttrs__E */
#define ti_sysbios_knl_Swi_setAttrs ti_sysbios_knl_Swi_setAttrs__E
xdc__CODESECT(ti_sysbios_knl_Swi_setAttrs__E, "ti_sysbios_knl_Swi_setAttrs")
__extern xdc_Void ti_sysbios_knl_Swi_setAttrs__E( ti_sysbios_knl_Swi_Handle instp, ti_sysbios_knl_Swi_FuncPtr swiFxn, ti_sysbios_knl_Swi_Params *params);

/* setPri__E */
#define ti_sysbios_knl_Swi_setPri ti_sysbios_knl_Swi_setPri__E
xdc__CODESECT(ti_sysbios_knl_Swi_setPri__E, "ti_sysbios_knl_Swi_setPri")
__extern xdc_Void ti_sysbios_knl_Swi_setPri__E( ti_sysbios_knl_Swi_Handle instp, xdc_UInt priority);

/* inc__E */
#define ti_sysbios_knl_Swi_inc ti_sysbios_knl_Swi_inc__E
xdc__CODESECT(ti_sysbios_knl_Swi_inc__E, "ti_sysbios_knl_Swi_inc")
__extern xdc_Void ti_sysbios_knl_Swi_inc__E( ti_sysbios_knl_Swi_Handle instp);

/* or__E */
#define ti_sysbios_knl_Swi_or ti_sysbios_knl_Swi_or__E
xdc__CODESECT(ti_sysbios_knl_Swi_or__E, "ti_sysbios_knl_Swi_or")
__extern xdc_Void ti_sysbios_knl_Swi_or__E( ti_sysbios_knl_Swi_Handle instp, xdc_UInt mask);

/* post__E */
#define ti_sysbios_knl_Swi_post ti_sysbios_knl_Swi_post__E
xdc__CODESECT(ti_sysbios_knl_Swi_post__E, "ti_sysbios_knl_Swi_post")
__extern xdc_Void ti_sysbios_knl_Swi_post__E( ti_sysbios_knl_Swi_Handle instp);

/* schedule__I */
#define ti_sysbios_knl_Swi_schedule ti_sysbios_knl_Swi_schedule__I
xdc__CODESECT(ti_sysbios_knl_Swi_schedule__I, "ti_sysbios_knl_Swi_schedule")
__extern xdc_Void ti_sysbios_knl_Swi_schedule__I( void);

/* runLoop__I */
#define ti_sysbios_knl_Swi_runLoop ti_sysbios_knl_Swi_runLoop__I
xdc__CODESECT(ti_sysbios_knl_Swi_runLoop__I, "ti_sysbios_knl_Swi_runLoop")
__extern xdc_Void ti_sysbios_knl_Swi_runLoop__I( void);

/* run__I */
#define ti_sysbios_knl_Swi_run ti_sysbios_knl_Swi_run__I
xdc__CODESECT(ti_sysbios_knl_Swi_run__I, "ti_sysbios_knl_Swi_run")
__extern xdc_Void ti_sysbios_knl_Swi_run__I( ti_sysbios_knl_Swi_Object *swi);

/* postInit__I */
#define ti_sysbios_knl_Swi_postInit ti_sysbios_knl_Swi_postInit__I
xdc__CODESECT(ti_sysbios_knl_Swi_postInit__I, "ti_sysbios_knl_Swi_postInit")
__extern xdc_Int ti_sysbios_knl_Swi_postInit__I( ti_sysbios_knl_Swi_Object *swi, xdc_runtime_Error_Block *eb);

/* restoreSMP__I */
#define ti_sysbios_knl_Swi_restoreSMP ti_sysbios_knl_Swi_restoreSMP__I
xdc__CODESECT(ti_sysbios_knl_Swi_restoreSMP__I, "ti_sysbios_knl_Swi_restoreSMP")
__extern xdc_Void ti_sysbios_knl_Swi_restoreSMP__I( void);


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sysbios_knl_Swi_Module_startupDone() ti_sysbios_knl_Swi_Module__startupDone__S()

/* Object_heap */
#define ti_sysbios_knl_Swi_Object_heap() ti_sysbios_knl_Swi_Object__heap__C

/* Module_heap */
#define ti_sysbios_knl_Swi_Module_heap() ti_sysbios_knl_Swi_Object__heap__C

/* Module_id */
static inline CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module_id(void);
static inline CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module_id( void ) 
{
    return ti_sysbios_knl_Swi_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sysbios_knl_Swi_Module_hasMask(void);
static inline xdc_Bool ti_sysbios_knl_Swi_Module_hasMask(void)
{
    return (xdc_Bool)(ti_sysbios_knl_Swi_Module__diagsMask__C != (CT__ti_sysbios_knl_Swi_Module__diagsMask)NULL);
}

/* Module_getMask */
static inline xdc_Bits16 ti_sysbios_knl_Swi_Module_getMask(void);
static inline xdc_Bits16 ti_sysbios_knl_Swi_Module_getMask(void)
{
    return (ti_sysbios_knl_Swi_Module__diagsMask__C != (CT__ti_sysbios_knl_Swi_Module__diagsMask)NULL) ? *ti_sysbios_knl_Swi_Module__diagsMask__C : (xdc_Bits16)0;
}

/* Module_setMask */
static inline xdc_Void ti_sysbios_knl_Swi_Module_setMask(xdc_Bits16 mask);
static inline xdc_Void ti_sysbios_knl_Swi_Module_setMask(xdc_Bits16 mask)
{
    if (ti_sysbios_knl_Swi_Module__diagsMask__C != (CT__ti_sysbios_knl_Swi_Module__diagsMask)NULL) {
        *ti_sysbios_knl_Swi_Module__diagsMask__C = mask;
    }
}

/* Params_init */
static inline void ti_sysbios_knl_Swi_Params_init(ti_sysbios_knl_Swi_Params *prms);
static inline void ti_sysbios_knl_Swi_Params_init( ti_sysbios_knl_Swi_Params *prms ) 
{
    if (prms != NULL) {
        ti_sysbios_knl_Swi_Params__init__S(prms, NULL, sizeof(ti_sysbios_knl_Swi_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sysbios_knl_Swi_Params_copy(ti_sysbios_knl_Swi_Params *dst, const ti_sysbios_knl_Swi_Params *src);
static inline void ti_sysbios_knl_Swi_Params_copy(ti_sysbios_knl_Swi_Params *dst, const ti_sysbios_knl_Swi_Params *src) 
{
    if (dst != NULL) {
        ti_sysbios_knl_Swi_Params__init__S(dst, (const void *)src, sizeof(ti_sysbios_knl_Swi_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Object_count */
#define ti_sysbios_knl_Swi_Object_count() ti_sysbios_knl_Swi_Object__count__C

/* Object_sizeof */
#define ti_sysbios_knl_Swi_Object_sizeof() ti_sysbios_knl_Swi_Object__sizeof__C

/* Object_get */
static inline ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_Object_get(ti_sysbios_knl_Swi_Object *oarr, int i);
static inline ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_Object_get(ti_sysbios_knl_Swi_Object *oarr, int i) 
{
    return (ti_sysbios_knl_Swi_Handle)ti_sysbios_knl_Swi_Object__get__S(oarr, i);
}

/* Object_first */
static inline ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_Object_first(void);
static inline ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_Object_first(void)
{
    return (ti_sysbios_knl_Swi_Handle)ti_sysbios_knl_Swi_Object__first__S();
}

/* Object_next */
static inline ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_Object_next(ti_sysbios_knl_Swi_Object *obj);
static inline ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_Object_next(ti_sysbios_knl_Swi_Object *obj)
{
    return (ti_sysbios_knl_Swi_Handle)ti_sysbios_knl_Swi_Object__next__S(obj);
}

/* Handle_label */
static inline xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle_label(ti_sysbios_knl_Swi_Handle inst, xdc_runtime_Types_Label *lab);
static inline xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle_label(ti_sysbios_knl_Swi_Handle inst, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_knl_Swi_Handle__label__S(inst, lab);
}

/* Handle_name */
static inline xdc_String ti_sysbios_knl_Swi_Handle_name(ti_sysbios_knl_Swi_Handle inst);
static inline xdc_String ti_sysbios_knl_Swi_Handle_name(ti_sysbios_knl_Swi_Handle inst)
{
    xdc_runtime_Types_Label lab;
    return ti_sysbios_knl_Swi_Handle__label__S(inst, &lab)->iname;
}

/* handle */
static inline ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_handle(ti_sysbios_knl_Swi_Struct *str);
static inline ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_handle(ti_sysbios_knl_Swi_Struct *str)
{
    return (ti_sysbios_knl_Swi_Handle)str;
}

/* struct */
static inline ti_sysbios_knl_Swi_Struct *ti_sysbios_knl_Swi_struct(ti_sysbios_knl_Swi_Handle inst);
static inline ti_sysbios_knl_Swi_Struct *ti_sysbios_knl_Swi_struct(ti_sysbios_knl_Swi_Handle inst)
{
    return (ti_sysbios_knl_Swi_Struct*)inst;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sysbios_knl_Swi__top__
#undef __nested__
#endif

#endif /* ti_sysbios_knl_Swi__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sysbios_knl_Swi__internalaccess))

#ifndef ti_sysbios_knl_Swi__include_state
#define ti_sysbios_knl_Swi__include_state

/* Module_State */
struct ti_sysbios_knl_Swi_Module_State {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
};

/* Module__state__V */
#ifndef ti_sysbios_knl_Swi_Module__state__VR
extern struct ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;
#else
#define ti_sysbios_knl_Swi_Module__state__V (*((struct ti_sysbios_knl_Swi_Module_State__*)(xdcRomStatePtr + ti_sysbios_knl_Swi_Module__state__V_offset)))
#endif

/* Object */
struct ti_sysbios_knl_Swi_Object {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
};

#endif /* ti_sysbios_knl_Swi__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sysbios_knl_Swi__nolocalnames)

#ifndef ti_sysbios_knl_Swi__localnames__done
#define ti_sysbios_knl_Swi__localnames__done

/* module prefix */
#define Swi_Instance ti_sysbios_knl_Swi_Instance
#define Swi_Handle ti_sysbios_knl_Swi_Handle
#define Swi_Module ti_sysbios_knl_Swi_Module
#define Swi_Object ti_sysbios_knl_Swi_Object
#define Swi_Struct ti_sysbios_knl_Swi_Struct
#define Swi_FuncPtr ti_sysbios_knl_Swi_FuncPtr
#define Swi_HookSet ti_sysbios_knl_Swi_HookSet
#define Swi_Struct2__ ti_sysbios_knl_Swi_Struct2__
#define Swi_Struct2 ti_sysbios_knl_Swi_Struct2
#define Swi_Instance_State ti_sysbios_knl_Swi_Instance_State
#define Swi_Module_State ti_sysbios_knl_Swi_Module_State
#define Swi_LM_begin ti_sysbios_knl_Swi_LM_begin
#define Swi_LD_end ti_sysbios_knl_Swi_LD_end
#define Swi_LM_post ti_sysbios_knl_Swi_LM_post
#define Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled
#define Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority
#define Swi_numPriorities ti_sysbios_knl_Swi_numPriorities
#define Swi_hooks ti_sysbios_knl_Swi_hooks
#define Swi_taskDisable ti_sysbios_knl_Swi_taskDisable
#define Swi_taskRestore ti_sysbios_knl_Swi_taskRestore
#define Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis
#define Swi_Params ti_sysbios_knl_Swi_Params
#define Swi_construct2 ti_sysbios_knl_Swi_construct2
#define Swi_startup ti_sysbios_knl_Swi_startup
#define Swi_enabled ti_sysbios_knl_Swi_enabled
#define Swi_unlockSched ti_sysbios_knl_Swi_unlockSched
#define Swi_disable ti_sysbios_knl_Swi_disable
#define Swi_enable ti_sysbios_knl_Swi_enable
#define Swi_restore ti_sysbios_knl_Swi_restore
#define Swi_restoreHwi ti_sysbios_knl_Swi_restoreHwi
#define Swi_self ti_sysbios_knl_Swi_self
#define Swi_getTrigger ti_sysbios_knl_Swi_getTrigger
#define Swi_raisePri ti_sysbios_knl_Swi_raisePri
#define Swi_restorePri ti_sysbios_knl_Swi_restorePri
#define Swi_andn ti_sysbios_knl_Swi_andn
#define Swi_dec ti_sysbios_knl_Swi_dec
#define Swi_getHookContext ti_sysbios_knl_Swi_getHookContext
#define Swi_setHookContext ti_sysbios_knl_Swi_setHookContext
#define Swi_getPri ti_sysbios_knl_Swi_getPri
#define Swi_getFunc ti_sysbios_knl_Swi_getFunc
#define Swi_getAttrs ti_sysbios_knl_Swi_getAttrs
#define Swi_setAttrs ti_sysbios_knl_Swi_setAttrs
#define Swi_setPri ti_sysbios_knl_Swi_setPri
#define Swi_inc ti_sysbios_knl_Swi_inc
#define Swi_or ti_sysbios_knl_Swi_or
#define Swi_post ti_sysbios_knl_Swi_post
#define Swi_Module_name ti_sysbios_knl_Swi_Module_name
#define Swi_Module_id ti_sysbios_knl_Swi_Module_id
#define Swi_Module_startup ti_sysbios_knl_Swi_Module_startup
#define Swi_Module_startupDone ti_sysbios_knl_Swi_Module_startupDone
#define Swi_Module_hasMask ti_sysbios_knl_Swi_Module_hasMask
#define Swi_Module_getMask ti_sysbios_knl_Swi_Module_getMask
#define Swi_Module_setMask ti_sysbios_knl_Swi_Module_setMask
#define Swi_Object_heap ti_sysbios_knl_Swi_Object_heap
#define Swi_Module_heap ti_sysbios_knl_Swi_Module_heap
#define Swi_construct ti_sysbios_knl_Swi_construct
#define Swi_create ti_sysbios_knl_Swi_create
#define Swi_handle ti_sysbios_knl_Swi_handle
#define Swi_struct ti_sysbios_knl_Swi_struct
#define Swi_Handle_label ti_sysbios_knl_Swi_Handle_label
#define Swi_Handle_name ti_sysbios_knl_Swi_Handle_name
#define Swi_Instance_init ti_sysbios_knl_Swi_Instance_init
#define Swi_Object_count ti_sysbios_knl_Swi_Object_count
#define Swi_Object_get ti_sysbios_knl_Swi_Object_get
#define Swi_Object_first ti_sysbios_knl_Swi_Object_first
#define Swi_Object_next ti_sysbios_knl_Swi_Object_next
#define Swi_Object_sizeof ti_sysbios_knl_Swi_Object_sizeof
#define Swi_Params_copy ti_sysbios_knl_Swi_Params_copy
#define Swi_Params_init ti_sysbios_knl_Swi_Params_init
#define Swi_Instance_finalize ti_sysbios_knl_Swi_Instance_finalize
#define Swi_delete ti_sysbios_knl_Swi_delete
#define Swi_destruct ti_sysbios_knl_Swi_destruct

#endif /* ti_sysbios_knl_Swi__localnames__done */
#endif
