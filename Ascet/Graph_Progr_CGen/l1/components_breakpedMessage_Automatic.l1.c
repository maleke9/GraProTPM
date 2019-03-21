/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_breakpedMessage_Automatic.l1.c
 *
 * @author  Generated by ASCET
 *
 * @brief   Definitions for L1 node: components_breakpedMessage_Automatic
 *
 **/
#include "components_breakpedMessage_Automatic.l1.h"
#include "components_breakpedMessage_Automatic_private.h"

/**
 * Class initialization 
 **/
void initClass_L1_components_breakpedMessage_Automatic (L1_components_breakpedMessage_Automatic_Class* _ASCET_class)
{
    _ASCET_class->breakpedPosition = initInstance_scalarWrapper((uint32)&components_breakpedMessage_breakpedPosition_VAL, sizeof(float32), ASD_VARIABLE);
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
struct L1_components_breakpedMessage_Automatic_Obj* L1_components_breakpedMessage_AutomaticInstance = NULL;

static ASDClassHeader L1_components_breakpedMessage_Automatic_ClassHeader = {
	0, 0, 0, 1, &_ObjectMethodList, &_ClassMethodList
};

L1_components_breakpedMessage_Automatic_Class L1_components_breakpedMessage_Automatic_ClassObj = {{1, {&L1_components_breakpedMessage_Automatic_ClassHeader}, {0}}};

bool initialized_components_breakpedMessage_Automatic = false;

/**
 * Initialize this L1 component 
 **/
struct L1_components_breakpedMessage_Automatic_Obj* initInstance_L1_components_breakpedMessage_Automatic(void)
{
    struct L1_components_breakpedMessage_Automatic_Obj* L1_Instance = NULL;
    if (!initialized_components_breakpedMessage_Automatic) {
        /* for first time also static class data shall be initialized */
        initialized_components_breakpedMessage_Automatic = true;
        initClass_L1_components_breakpedMessage_Automatic(&L1_components_breakpedMessage_Automatic_ClassObj);
    }

    /* create L1 object and initialize it */
    CREATE_OBJECT (L1_Instance, L1_components_breakpedMessage_Automatic);
    L1_components_breakpedMessage_AutomaticInstance = L1_Instance;

    return L1_Instance;
}
