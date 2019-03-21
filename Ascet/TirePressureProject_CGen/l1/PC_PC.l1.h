#ifndef _STRUCTURE_ASD_L1_PC_PC
#define _STRUCTURE_ASD_L1_PC_PC
/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    PC_PC.l1.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Declarations for L1 node: PC_PC
 *
 **/
#include "a_basdef.h"
#include "components_lib_IntegratorTest_Automatic.l1.h"
#include "components_lib_diffCheck_Automatic.l1.h"
#include "components_Component_Automatic.l1.h"
#include "components_veloCar_Automatic.l1.h"
#include "components_distanceCar_Automatic.l1.h"
#include "components_diffWheel_Automatic.l1.h"
#include "components_pressureError_Automatic.l1.h"
#include "components_lib_statemaschine_Automatic.l1.h"

/**
 * local variables object structure 
 **/
struct L1_PC_PC_Obj {
	ASDObjectHeader objectHeader;
};

/**
 * static variables object structure 
 **/
typedef struct {
	ASDObjectHeader objectHeader;
	struct L1_components_lib_IntegratorTest_Automatic_Obj* components_lib_IntegratorTest_Automatic;
	struct L1_components_lib_diffCheck_Automatic_Obj* components_lib_diffCheck_Automatic;
	struct L1_components_Component_Automatic_Obj* components_Component_Automatic;
	struct L1_components_veloCar_Automatic_Obj* components_veloCar_Automatic;
	struct L1_components_distanceCar_Automatic_Obj* components_distanceCar_Automatic;
	struct L1_components_diffWheel_Automatic_Obj* components_diffWheel_Automatic;
	struct L1_components_pressureError_Automatic_Obj* components_pressureError_Automatic;
	struct L1_components_lib_statemaschine_Automatic_Obj* components_lib_statemaschine_Automatic;
} L1_PC_PC_Class;

extern L1_PC_PC_Class L1_PC_PC_ClassObj;

/**
 * external functions 
 **/
extern void initClass_L1_PC_PC (L1_PC_PC_Class* _ASCET_class);
extern struct L1_PC_PC_Obj* initInstance_L1_PC_PC(void);
#endif /* _STRUCTURE_ASD_L1_PC_PC */