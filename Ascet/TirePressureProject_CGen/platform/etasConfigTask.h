/* This is an automatically generated file */
/* DO NOT EDIT THIS FILE */
/* File generated for project "conf" */
/* Last edited 'unknown' */
/* File generated 'Thu Mar 21 14:54:10 2019' */
/* Target variant 'MinGW' */

/* The file must only be included for the implementation of code for TASK(etasConfigTask) */

#ifndef OS_TASK_etasConfigTask
#define OS_TASK_etasConfigTask

#define OS_HEAVYWEIGHT
#include "osekcomn.h"

#ifdef OS_FILE_INCLUDED
 #error Multiple File Inclusion
#else /* OS_FILE_INCLUDED */
 #define OS_FILE_INCLUDED
#endif /* OS_FILE_INCLUDED */

#define etasConfigTask_default_profile (0)	/* Profile */
#define OSALARM_alarm_Task0 (0)	/* Alarm */

DeclareResource(RES_SCHEDULER);
#define GetResource_RES_SCHEDULER() GetResource(RES_SCHEDULER)
#define ReleaseResource_RES_SCHEDULER() ReleaseResource(RES_SCHEDULER)
#define ActivateTask_etasConfigTask() ActivateTask(etasConfigTask)
#define ChainTask_etasConfigTask() ChainTask(etasConfigTask)
#define ActivateTask_etasL1Task() ActivateTask(etasL1Task)
#define ChainTask_etasL1Task() ChainTask(etasL1Task)
#define ActivateTask_Task0() ActivateTask(Task0)
#define ChainTask_Task0() ChainTask(Task0)

#endif /* OS_TASK_etasConfigTask */
