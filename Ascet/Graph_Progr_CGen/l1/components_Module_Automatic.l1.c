/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_Module_Automatic.l1.c
 *
 * @author  Generated by ASCET
 *
 * @brief   Definitions for L1 node: components_Module_Automatic
 *
 **/
#include "components_Module_Automatic.l1.h"
#include "components_Module_Automatic_private.h"

/**
 * Class initialization 
 **/
void initClass_L1_components_Module_Automatic (L1_components_Module_Automatic_Class* _ASCET_class)
{
}


static MethodList _ObjectMethodList = {
    ((void *)0)
};

static MethodList _ClassMethodList = {
    ((void *)0)
};

/**
 * Global objects 
 **/
struct L1_components_Module_Automatic_Obj* L1_components_Module_AutomaticInstance = NULL;

static ASDClassHeader L1_components_Module_Automatic_ClassHeader = {
	0, 0, 8, 0, &_ObjectMethodList, &_ClassMethodList
};

L1_components_Module_Automatic_Class L1_components_Module_Automatic_ClassObj = {{1, {&L1_components_Module_Automatic_ClassHeader}, {0}}};

bool initialized_components_Module_Automatic = false;

/**
 * Initialize this L1 component 
 **/
struct L1_components_Module_Automatic_Obj* initInstance_L1_components_Module_Automatic(void)
{
    struct L1_components_Module_Automatic_Obj* L1_Instance = NULL;
    if (!initialized_components_Module_Automatic) {
        /* for first time also static class data shall be initialized */
        initialized_components_Module_Automatic = true;
        initClass_L1_components_Module_Automatic(&L1_components_Module_Automatic_ClassObj);
    }

    /* create L1 object and initialize it */
    CREATE_OBJECT (L1_Instance, L1_components_Module_Automatic);
    L1_Instance->Component_instance = initInstance_L1_components_Component_Automatic(&Component_instance_VAL);
    L1_Instance->ACC_instance = initInstance_L1_components_ACC_Automatic(&ACC_instance_VAL);
    L1_Instance->ACC_instance_3 = initInstance_L1_components_ACC_Automatic(&ACC_instance_3_VAL);
    L1_Instance->trackPosition = initInstance_scalarWrapper((uint32)&trackPosition_VAL, sizeof(float32), ASD_VARIABLE);
    L1_Instance->dh = initInstance_scalarWrapper((uint32)&dh_VAL, sizeof(float32), ASD_VARIABLE);
    L1_Instance->v = initInstance_scalarWrapper((uint32)&v_VAL, sizeof(float32), ASD_VARIABLE);
    L1_Instance->totalDistance = initInstance_scalarWrapper((uint32)&totalDistance_VAL, sizeof(float32), ASD_VARIABLE);
    L1_Instance->dtime = initInstance_scalarWrapper((uint32)&dtime_VAL, sizeof(float32), ASD_VARIABLE);
    L1_components_Module_AutomaticInstance = L1_Instance;

    return L1_Instance;
}