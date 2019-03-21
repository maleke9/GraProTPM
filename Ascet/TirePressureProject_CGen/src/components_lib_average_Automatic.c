/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_lib_average_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    21.03.2019 14:54:08
*
* @brief   "components_lib_average>>Automatic (module code)"
*
*/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_lib_average_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a single instance class
 ******************************************************************************/


/******************************************************************************
 * DEFINITION OF COMPONENT VARIABLE OMITTED
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'average_instance'
 * reason:.......................................no local elements
 * ---------------------------------------------------------------------------*/







/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_lib_average_Automatic_calc'
 * ----------------------------------------------------------------------------
 * model name:...................................'calc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 components_lib_average_Automatic_calc (
   /* IN    */ const float32 arg,
   /* IN    */ const float32 arg_2,
   /* IN    */ const float32 arg_3,
   /* IN    */ const float32 arg_4
   )
{
   return (arg + arg_2 + arg_3 + arg_4) * 0.25F;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_lib_average_Automatic_calc'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



