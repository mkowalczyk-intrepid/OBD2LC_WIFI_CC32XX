/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-I11
 */

#ifndef ti_sysbios_heaps_HeapMem__INTERNAL__
#define ti_sysbios_heaps_HeapMem__INTERNAL__

#ifndef ti_sysbios_heaps_HeapMem__internalaccess
#define ti_sysbios_heaps_HeapMem__internalaccess
#endif

#include <ti/sysbios/heaps/HeapMem.h>

#undef xdc_FILE__
#ifndef xdc_FILE
#define xdc_FILE__ NULL
#else
#define xdc_FILE__ xdc_FILE
#endif

/* enter */
#undef ti_sysbios_heaps_HeapMem_enter
#define ti_sysbios_heaps_HeapMem_enter ti_sysbios_heaps_HeapMem_enter__E

/* leave */
#undef ti_sysbios_heaps_HeapMem_leave
#define ti_sysbios_heaps_HeapMem_leave ti_sysbios_heaps_HeapMem_leave__E

/* alloc */
#undef ti_sysbios_heaps_HeapMem_alloc
#define ti_sysbios_heaps_HeapMem_alloc ti_sysbios_heaps_HeapMem_alloc__E

/* allocUnprotected */
#undef ti_sysbios_heaps_HeapMem_allocUnprotected
#define ti_sysbios_heaps_HeapMem_allocUnprotected ti_sysbios_heaps_HeapMem_allocUnprotected__E

/* free */
#undef ti_sysbios_heaps_HeapMem_free
#define ti_sysbios_heaps_HeapMem_free ti_sysbios_heaps_HeapMem_free__E

/* freeUnprotected */
#undef ti_sysbios_heaps_HeapMem_freeUnprotected
#define ti_sysbios_heaps_HeapMem_freeUnprotected ti_sysbios_heaps_HeapMem_freeUnprotected__E

/* isBlocking */
#undef ti_sysbios_heaps_HeapMem_isBlocking
#define ti_sysbios_heaps_HeapMem_isBlocking ti_sysbios_heaps_HeapMem_isBlocking__E

/* getStats */
#undef ti_sysbios_heaps_HeapMem_getStats
#define ti_sysbios_heaps_HeapMem_getStats ti_sysbios_heaps_HeapMem_getStats__E

/* restore */
#undef ti_sysbios_heaps_HeapMem_restore
#define ti_sysbios_heaps_HeapMem_restore ti_sysbios_heaps_HeapMem_restore__E

/* getExtendedStats */
#undef ti_sysbios_heaps_HeapMem_getExtendedStats
#define ti_sysbios_heaps_HeapMem_getExtendedStats ti_sysbios_heaps_HeapMem_getExtendedStats__E

/* init */
#define HeapMem_init ti_sysbios_heaps_HeapMem_init__I

/* initPrimary */
#define HeapMem_initPrimary ti_sysbios_heaps_HeapMem_initPrimary__I

/* Module_startup */
#undef ti_sysbios_heaps_HeapMem_Module_startup
#define ti_sysbios_heaps_HeapMem_Module_startup ti_sysbios_heaps_HeapMem_Module_startup__E

/* Instance_init */
#undef ti_sysbios_heaps_HeapMem_Instance_init
#define ti_sysbios_heaps_HeapMem_Instance_init ti_sysbios_heaps_HeapMem_Instance_init__E

/* Instance_finalize */
#undef ti_sysbios_heaps_HeapMem_Instance_finalize
#define ti_sysbios_heaps_HeapMem_Instance_finalize ti_sysbios_heaps_HeapMem_Instance_finalize__E

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_heaps_HeapMem_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_heaps_HeapMem_Module__id *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_heaps_HeapMem_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_heaps_HeapMem_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_heaps_HeapMem_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_heaps_HeapMem_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_heaps_HeapMem_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_heaps_HeapMem_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Object__sizingError */
#line 1 "Error_inconsistent_object_size_in_ti.sysbios.heaps.HeapMem"
typedef char ti_sysbios_heaps_HeapMem_Object__sizingError[(sizeof(ti_sysbios_heaps_HeapMem_Object) > sizeof(ti_sysbios_heaps_HeapMem_Struct)) ? -1 : 1];


#endif /* ti_sysbios_heaps_HeapMem__INTERNAL____ */
