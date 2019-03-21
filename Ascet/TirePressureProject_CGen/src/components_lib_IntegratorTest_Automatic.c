/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_lib_IntegratorTest_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    21.03.2019 15:16:58
*
* @brief   "components_lib_IntegratorTest>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_lib_IntegratorTest_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'components_lib_IntegratorTest_CAL_MEM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * model name:...................................'components_lib_IntegratorTest'
 * data set:.....................................'COMPONENTS_LIB_INTEGRATORTEST_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct components_lib_IntegratorTest_Automatic_CAL_MEM_SUBSTRUCT components_lib_IntegratorTest_CAL_MEM = {
   /* struct element:'components_lib_IntegratorTest_CAL_MEM.integrate_dtVal' (modeled as:'integrate_dtVal.components_lib_IntegratorTest') */
   0.0F,
   /* struct element:'components_lib_IntegratorTest_CAL_MEM.integrate_inputVal' (modeled as:'integrate_inputVal.components_lib_IntegratorTest') */
   0.0F,
   /* substruct: components_lib_IntegratorTest_CAL_MEM.tester (modeled as:'tester.components_lib_IntegratorTest') */
   {
      /* struct element:'components_lib_IntegratorTest_CAL_MEM.tester.kI' (modeled as:'kI.tester.components_lib_IntegratorTest') */
      4.0F
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'components_lib_IntegratorTest_CAL_MEM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'components_lib_IntegratorTest_RAM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * model name:...................................'components_lib_IntegratorTest'
 * data set:.....................................'COMPONENTS_LIB_INTEGRATORTEST_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct components_lib_IntegratorTest_Automatic_RAM_SUBSTRUCT components_lib_IntegratorTest_RAM = {
   /* struct element:'components_lib_IntegratorTest_RAM.outVal_return' (modeled as:'outVal_return.components_lib_IntegratorTest') */
   0.0F,
   /* substruct: components_lib_IntegratorTest_RAM.tester (modeled as:'tester.components_lib_IntegratorTest') */
   {
      /* struct element:'components_lib_IntegratorTest_RAM.tester.memory' (modeled as:'memory.tester.components_lib_IntegratorTest') */
      0.0F
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'components_lib_IntegratorTest_RAM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF COMPONENT VARIABLE 'components_lib_IntegratorTest'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'components_lib_IntegratorTest'
 * data set:.....................................'COMPONENTS_LIB_INTEGRATORTEST_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
const struct components_lib_IntegratorTest_Automatic components_lib_IntegratorTest = {
   /* substruct: components_lib_IntegratorTest.tester (modeled as:'tester.components_lib_IntegratorTest') */
   {
      /* type descriptor pointer 'components_lib_Integrator_Automatic_CAL_MEM' for memory class substruct for 'CAL_MEM' */
      &components_lib_IntegratorTest_CAL_MEM.tester,
      /* type descriptor pointer 'components_lib_Integrator_Automatic_RAM' for memory class substruct for 'RAM' */
      &components_lib_IntegratorTest_RAM.tester
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF COMPONENT VARIABLE 'components_lib_IntegratorTest'
 ******************************************************************************/





#define integrate_dtVal_VAL (components_lib_IntegratorTest_CAL_MEM.integrate_dtVal)
#define integrate_inputVal_VAL (components_lib_IntegratorTest_CAL_MEM.integrate_inputVal)
#define outVal_return_VAL (components_lib_IntegratorTest_RAM.outVal_return)
#define tester_REF (&(components_lib_IntegratorTest.tester))


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF PROCESS 'components_lib_IntegratorTest_Automatic_integrate'
 * ----------------------------------------------------------------------------
 * model name:...................................'integrate'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void components_lib_IntegratorTest_Automatic_integrate (void)
{
   components_lib_Integrator_Automatic_integrate(tester_REF, integrate_inputVal_VAL, integrate_dtVal_VAL);
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF PROCESS 'components_lib_IntegratorTest_Automatic_integrate'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF PROCESS 'components_lib_IntegratorTest_Automatic_outVal'
 * ----------------------------------------------------------------------------
 * model name:...................................'outVal'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void components_lib_IntegratorTest_Automatic_outVal (void)
{
   outVal_return_VAL = components_lib_Integrator_Automatic_outVal(tester_REF);
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF PROCESS 'components_lib_IntegratorTest_Automatic_outVal'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



