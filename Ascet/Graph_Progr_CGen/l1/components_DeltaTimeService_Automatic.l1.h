#ifndef _STRUCTURE_ASD_L1_components_DeltaTimeService_Automatic
#define _STRUCTURE_ASD_L1_components_DeltaTimeService_Automatic
/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_DeltaTimeService_Automatic.l1.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Declarations for L1 node: components_DeltaTimeService_Automatic
 *
 **/
#include "a_basdef.h"
#include "components_DeltaTimeService_Automatic.h"

/**
 * local variables object structure 
 **/
struct L1_components_DeltaTimeService_Automatic_Obj {
	ASDObjectHeader objectHeader;
};

/**
 * static variables object structure 
 **/
typedef struct {
	ASDObjectHeader objectHeader;
} L1_components_DeltaTimeService_Automatic_Class;

extern L1_components_DeltaTimeService_Automatic_Class L1_components_DeltaTimeService_Automatic_ClassObj;

/**
 * external functions 
 **/
extern void initClass_L1_components_DeltaTimeService_Automatic (L1_components_DeltaTimeService_Automatic_Class* _ASCET_class);
extern struct L1_components_DeltaTimeService_Automatic_Obj* initInstance_L1_components_DeltaTimeService_Automatic(void);
#endif /* _STRUCTURE_ASD_L1_components_DeltaTimeService_Automatic */
