#ifndef _STRUCTURE_ASD_L1_components_lib_NoiseGenerator_Automatic
#define _STRUCTURE_ASD_L1_components_lib_NoiseGenerator_Automatic
/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_lib_NoiseGenerator_Automatic.l1.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Declarations for L1 node: components_lib_NoiseGenerator_Automatic
 *
 **/
#include "a_basdef.h"
#include "components_lib_NoiseGenerator_Automatic.h"

/**
 * local variables object structure 
 **/
struct L1_components_lib_NoiseGenerator_Automatic_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* mem;
};

/**
 * static variables object structure 
 **/
typedef struct {
	ASDObjectHeader objectHeader;
} L1_components_lib_NoiseGenerator_Automatic_Class;

extern L1_components_lib_NoiseGenerator_Automatic_Class L1_components_lib_NoiseGenerator_Automatic_ClassObj;

/**
 * external functions 
 **/
extern void initClass_L1_components_lib_NoiseGenerator_Automatic (L1_components_lib_NoiseGenerator_Automatic_Class* _ASCET_class);
extern struct L1_components_lib_NoiseGenerator_Automatic_Obj* initInstance_L1_components_lib_NoiseGenerator_Automatic(const struct components_lib_NoiseGenerator_Automatic* self);
#endif /* _STRUCTURE_ASD_L1_components_lib_NoiseGenerator_Automatic */
