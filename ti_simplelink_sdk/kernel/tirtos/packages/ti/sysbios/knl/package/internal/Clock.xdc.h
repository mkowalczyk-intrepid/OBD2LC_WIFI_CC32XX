/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-I11
 */

#ifndef ti_sysbios_knl_Clock__INTERNAL__
#define ti_sysbios_knl_Clock__INTERNAL__

#ifndef ti_sysbios_knl_Clock__internalaccess
#define ti_sysbios_knl_Clock__internalaccess
#endif

#include <ti/sysbios/knl/Clock.h>

#undef xdc_FILE__
#ifndef xdc_FILE
#define xdc_FILE__ NULL
#else
#define xdc_FILE__ xdc_FILE
#endif

/* getTicks */
#undef ti_sysbios_knl_Clock_getTicks
#define ti_sysbios_knl_Clock_getTicks ti_sysbios_knl_Clock_getTicks__E

/* getTimerHandle */
#undef ti_sysbios_knl_Clock_getTimerHandle
#define ti_sysbios_knl_Clock_getTimerHandle ti_sysbios_knl_Clock_getTimerHandle__E

/* setTicks */
#undef ti_sysbios_knl_Clock_setTicks
#define ti_sysbios_knl_Clock_setTicks ti_sysbios_knl_Clock_setTicks__E

/* tickStop */
#undef ti_sysbios_knl_Clock_tickStop
#define ti_sysbios_knl_Clock_tickStop ti_sysbios_knl_Clock_tickStop__E

/* tickReconfig */
#undef ti_sysbios_knl_Clock_tickReconfig
#define ti_sysbios_knl_Clock_tickReconfig ti_sysbios_knl_Clock_tickReconfig__E

/* tickStart */
#undef ti_sysbios_knl_Clock_tickStart
#define ti_sysbios_knl_Clock_tickStart ti_sysbios_knl_Clock_tickStart__E

/* tick */
#undef ti_sysbios_knl_Clock_tick
#define ti_sysbios_knl_Clock_tick ti_sysbios_knl_Clock_tick__E

/* workFunc */
#undef ti_sysbios_knl_Clock_workFunc
#define ti_sysbios_knl_Clock_workFunc ti_sysbios_knl_Clock_workFunc__E

/* workFuncDynamic */
#undef ti_sysbios_knl_Clock_workFuncDynamic
#define ti_sysbios_knl_Clock_workFuncDynamic ti_sysbios_knl_Clock_workFuncDynamic__E

/* logTick */
#undef ti_sysbios_knl_Clock_logTick
#define ti_sysbios_knl_Clock_logTick ti_sysbios_knl_Clock_logTick__E

/* getCompletedTicks */
#undef ti_sysbios_knl_Clock_getCompletedTicks
#define ti_sysbios_knl_Clock_getCompletedTicks ti_sysbios_knl_Clock_getCompletedTicks__E

/* getTickPeriod */
#undef ti_sysbios_knl_Clock_getTickPeriod
#define ti_sysbios_knl_Clock_getTickPeriod ti_sysbios_knl_Clock_getTickPeriod__E

/* getTicksUntilInterrupt */
#undef ti_sysbios_knl_Clock_getTicksUntilInterrupt
#define ti_sysbios_knl_Clock_getTicksUntilInterrupt ti_sysbios_knl_Clock_getTicksUntilInterrupt__E

/* getTicksUntilTimeout */
#undef ti_sysbios_knl_Clock_getTicksUntilTimeout
#define ti_sysbios_knl_Clock_getTicksUntilTimeout ti_sysbios_knl_Clock_getTicksUntilTimeout__E

/* walkQueueDynamic */
#undef ti_sysbios_knl_Clock_walkQueueDynamic
#define ti_sysbios_knl_Clock_walkQueueDynamic ti_sysbios_knl_Clock_walkQueueDynamic__E

/* walkQueuePeriodic */
#undef ti_sysbios_knl_Clock_walkQueuePeriodic
#define ti_sysbios_knl_Clock_walkQueuePeriodic ti_sysbios_knl_Clock_walkQueuePeriodic__E

/* scheduleNextTick */
#undef ti_sysbios_knl_Clock_scheduleNextTick
#define ti_sysbios_knl_Clock_scheduleNextTick ti_sysbios_knl_Clock_scheduleNextTick__E

/* addI */
#undef ti_sysbios_knl_Clock_addI
#define ti_sysbios_knl_Clock_addI ti_sysbios_knl_Clock_addI__E

/* removeI */
#undef ti_sysbios_knl_Clock_removeI
#define ti_sysbios_knl_Clock_removeI ti_sysbios_knl_Clock_removeI__E

/* start */
#undef ti_sysbios_knl_Clock_start
#define ti_sysbios_knl_Clock_start ti_sysbios_knl_Clock_start__E

/* startI */
#undef ti_sysbios_knl_Clock_startI
#define ti_sysbios_knl_Clock_startI ti_sysbios_knl_Clock_startI__E

/* stop */
#undef ti_sysbios_knl_Clock_stop
#define ti_sysbios_knl_Clock_stop ti_sysbios_knl_Clock_stop__E

/* setPeriod */
#undef ti_sysbios_knl_Clock_setPeriod
#define ti_sysbios_knl_Clock_setPeriod ti_sysbios_knl_Clock_setPeriod__E

/* setTimeout */
#undef ti_sysbios_knl_Clock_setTimeout
#define ti_sysbios_knl_Clock_setTimeout ti_sysbios_knl_Clock_setTimeout__E

/* setFunc */
#undef ti_sysbios_knl_Clock_setFunc
#define ti_sysbios_knl_Clock_setFunc ti_sysbios_knl_Clock_setFunc__E

/* getPeriod */
#undef ti_sysbios_knl_Clock_getPeriod
#define ti_sysbios_knl_Clock_getPeriod ti_sysbios_knl_Clock_getPeriod__E

/* getTimeout */
#undef ti_sysbios_knl_Clock_getTimeout
#define ti_sysbios_knl_Clock_getTimeout ti_sysbios_knl_Clock_getTimeout__E

/* isActive */
#undef ti_sysbios_knl_Clock_isActive
#define ti_sysbios_knl_Clock_isActive ti_sysbios_knl_Clock_isActive__E

/* doTick */
#define Clock_doTick ti_sysbios_knl_Clock_doTick__I

/* triggerFunc */
#define Clock_triggerFunc ti_sysbios_knl_Clock_triggerFunc__I

/* Module_startup */
#undef ti_sysbios_knl_Clock_Module_startup
#define ti_sysbios_knl_Clock_Module_startup ti_sysbios_knl_Clock_Module_startup__E

/* Instance_init */
#undef ti_sysbios_knl_Clock_Instance_init
#define ti_sysbios_knl_Clock_Instance_init ti_sysbios_knl_Clock_Instance_init__E

/* Instance_finalize */
#undef ti_sysbios_knl_Clock_Instance_finalize
#define ti_sysbios_knl_Clock_Instance_finalize ti_sysbios_knl_Clock_Instance_finalize__E

/* module */
#ifdef ti_sysbios_knl_Clock_Module__state__VR
#define Clock_module ((ti_sysbios_knl_Clock_Module_State *)(xdcRomStatePtr + ti_sysbios_knl_Clock_Module__state__V_offset))
#define module ((ti_sysbios_knl_Clock_Module_State *)(xdcRomStatePtr + ti_sysbios_knl_Clock_Module__state__V_offset))
#else
#define Clock_module ((ti_sysbios_knl_Clock_Module_State *)(xdc__MODOBJADDR__(ti_sysbios_knl_Clock_Module__state__V)))
#if !defined(__cplusplus) ||!defined(ti_sysbios_knl_Clock__cplusplus)
#define module ((ti_sysbios_knl_Clock_Module_State *)(xdc__MODOBJADDR__(ti_sysbios_knl_Clock_Module__state__V)))
#endif
#endif

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Clock_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Clock_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Clock_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Clock_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Clock_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Clock_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Clock_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Clock_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Clock_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Clock_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Clock_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Clock_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Clock_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Clock_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Clock_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Clock_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Object__sizingError */
#line 1 "Error_inconsistent_object_size_in_ti.sysbios.knl.Clock"
typedef char ti_sysbios_knl_Clock_Object__sizingError[(sizeof(ti_sysbios_knl_Clock_Object) > sizeof(ti_sysbios_knl_Clock_Struct)) ? -1 : 1];


#endif /* ti_sysbios_knl_Clock__INTERNAL____ */
