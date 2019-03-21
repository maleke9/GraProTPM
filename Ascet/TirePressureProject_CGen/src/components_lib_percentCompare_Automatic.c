/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_lib_percentCompare_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    21.03.2019 15:16:58
*
* @brief   "components_lib_percentCompare>>Automatic (module code)"
*
*/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_lib_percentCompare_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/





/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_lib_percentCompare_Automatic_calc'
 * ----------------------------------------------------------------------------
 * model name:...................................'calc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

float32 components_lib_percentCompare_Automatic_calc (
   /* IN    */ const float32 value,
   /* IN    */ const float32 avg
   )
{
   /* temp. variables */
   float32 _t1real32;

   _t1real32 = value - avg;
   return ((avg == 0.0F) ? _t1real32 : (_t1real32 / avg));
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_lib_percentCompare_Automatic_calc'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



