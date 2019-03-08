/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_lib_IntegratorTest_Automatic.l1.c
 *
 * @author  Generated by ASCET
 *
 * @brief   Definitions for L1 node: components_lib_IntegratorTest_Automatic
 *
 **/
#include "components_lib_IntegratorTest_Automatic.l1.h"
#include "components_lib_IntegratorTest_Automatic_private.h"

/**
 * Class initialization 
 **/
void initClass_L1_components_lib_IntegratorTest_Automatic (L1_components_lib_IntegratorTest_Automatic_Class* _ASCET_class)
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
struct L1_components_lib_IntegratorTest_Automatic_Obj* L1_components_lib_IntegratorTest_AutomaticInstance = NULL;

static ASDClassHeader L1_components_lib_IntegratorTest_Automatic_ClassHeader = {
	0, 0, 4, 0, &_ObjectMethodList, &_ClassMethodList
};

L1_components_lib_IntegratorTest_Automatic_Class L1_components_lib_IntegratorTest_Automatic_ClassObj = {{1, {&L1_components_lib_IntegratorTest_Automatic_ClassHeader}, {0}}};

bool initialized_components_lib_IntegratorTest_Automatic = false;

/**
 * Initialize this L1 component 
 **/
struct L1_components_lib_IntegratorTest_Automatic_Obj* initInstance_L1_components_lib_IntegratorTest_Automatic(void)
{
    struct L1_components_lib_IntegratorTest_Automatic_Obj* L1_Instance = NULL;
    if (!initialized_components_lib_IntegratorTest_Automatic) {
        /* for first time also static class data shall be initialized */
        initialized_components_lib_IntegratorTest_Automatic = true;
        initClass_L1_components_lib_IntegratorTest_Automatic(&L1_components_lib_IntegratorTest_Automatic_ClassObj);
    }

    /* create L1 object and initialize it */
    CREATE_OBJECT (L1_Instance, L1_components_lib_IntegratorTest_Automatic);
    L1_Instance->tester = initInstance_L1_components_lib_Integrator_Automatic(&tester_VAL);
    L1_Instance->integrate_inputVal = initInstance_scalarWrapper((uint32)&integrate_inputVal_VAL, sizeof(float32), ASD_PARAMETER);
    L1_Instance->integrate_dtVal = initInstance_scalarWrapper((uint32)&integrate_dtVal_VAL, sizeof(float32), ASD_PARAMETER);
    L1_Instance->outVal_return = initInstance_scalarWrapper((uint32)&outVal_return_VAL, sizeof(float32), ASD_VARIABLE);
    L1_components_lib_IntegratorTest_AutomaticInstance = L1_Instance;

    return L1_Instance;
}
