#ifndef _STRUCTURE_ASD_L1_components_diffWheel_Automatic
#define _STRUCTURE_ASD_L1_components_diffWheel_Automatic
/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_diffWheel_Automatic.l1.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Declarations for L1 node: components_diffWheel_Automatic
 *
 **/
#include "a_basdef.h"
#include "components_diffWheel_Automatic.h"

/**
 * local variables object structure 
 **/
struct L1_components_diffWheel_Automatic_Obj {
	ASDObjectHeader objectHeader;
};

/**
 * static variables object structure 
 **/
typedef struct {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* diffFl;
	scalarWrapper_Obj* diffFr;
	scalarWrapper_Obj* diffRl;
	scalarWrapper_Obj* diffRr;
} L1_components_diffWheel_Automatic_Class;

extern L1_components_diffWheel_Automatic_Class L1_components_diffWheel_Automatic_ClassObj;

/**
 * external functions 
 **/
extern void initClass_L1_components_diffWheel_Automatic (L1_components_diffWheel_Automatic_Class* _ASCET_class);
extern struct L1_components_diffWheel_Automatic_Obj* initInstance_L1_components_diffWheel_Automatic(void);
#endif /* _STRUCTURE_ASD_L1_components_diffWheel_Automatic */