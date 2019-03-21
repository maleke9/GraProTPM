/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_lib_diffCheck_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    21.03.2019 13:39:24
*
* @brief   "components_lib_diffCheck>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_lib_diffCheck_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'components_lib_diffCheck_CAL_MEM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * model name:...................................'components_lib_diffCheck'
 * data set:.....................................'COMPONENTS_LIB_DIFFCHECK_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct components_lib_diffCheck_Automatic_CAL_MEM_SUBSTRUCT components_lib_diffCheck_CAL_MEM = {
   /* struct element:'components_lib_diffCheck_CAL_MEM.border' (modeled as:'border.components_lib_diffCheck') */
   0.005F
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'components_lib_diffCheck_CAL_MEM'
 ******************************************************************************/

/******************************************************************************
 * DEFINITION OF COMPONENT VARIABLE OMITTED
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'components_lib_diffCheck'
 * reason:.......................................no local elements
 * ---------------------------------------------------------------------------*/





#define border_VAL (components_lib_diffCheck_CAL_MEM.border)


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_lib_diffCheck_Automatic_calc'
 * ----------------------------------------------------------------------------
 * model name:...................................'calc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

uint8 components_lib_diffCheck_Automatic_calc (/* IN    */ const float32 arg)
{
   return (((arg > 0.0F) ? arg : -arg)) >= border_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_lib_diffCheck_Automatic_calc'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



