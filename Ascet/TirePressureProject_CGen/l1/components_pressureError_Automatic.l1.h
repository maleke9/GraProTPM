#ifndef _STRUCTURE_ASD_L1_components_pressureError_Automatic
#define _STRUCTURE_ASD_L1_components_pressureError_Automatic
/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_pressureError_Automatic.l1.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Declarations for L1 node: components_pressureError_Automatic
 *
 **/
#include "a_basdef.h"
#include "components_pressureError_Automatic.h"

/**
 * local variables object structure 
 **/
struct L1_components_pressureError_Automatic_Obj {
	ASDObjectHeader objectHeader;
};

/**
 * static variables object structure 
 **/
typedef struct {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* errFl;
	scalarWrapper_Obj* errFr;
	scalarWrapper_Obj* errRl;
	scalarWrapper_Obj* errRr;
	scalarWrapper_Obj* err;
} L1_components_pressureError_Automatic_Class;

extern L1_components_pressureError_Automatic_Class L1_components_pressureError_Automatic_ClassObj;

/**
 * external functions 
 **/
extern void initClass_L1_components_pressureError_Automatic (L1_components_pressureError_Automatic_Class* _ASCET_class);
extern struct L1_components_pressureError_Automatic_Obj* initInstance_L1_components_pressureError_Automatic(void);
#endif /* _STRUCTURE_ASD_L1_components_pressureError_Automatic */
