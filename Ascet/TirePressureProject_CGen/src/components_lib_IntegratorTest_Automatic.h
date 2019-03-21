#ifndef _ASD_COMPONENTS_LIB_INTEGRATORTEST_AUTOMATIC_H_
#define _ASD_COMPONENTS_LIB_INTEGRATORTEST_AUTOMATIC_H_
/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_lib_IntegratorTest_Automatic.h
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    21.03.2019 13:39:24
*
* @brief   "components_lib_IntegratorTest>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#include "components_lib_Integrator_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_lib_IntegratorTest_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * ---------------------------------------------------------------------------*/
struct components_lib_IntegratorTest_Automatic_CAL_MEM_SUBSTRUCT {
   float32 integrate_dtVal;
   float32 integrate_inputVal;
   struct components_lib_Integrator_Automatic_CAL_MEM_SUBSTRUCT tester;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_lib_IntegratorTest_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_lib_IntegratorTest_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct components_lib_IntegratorTest_Automatic_RAM_SUBSTRUCT {
   float32 outVal_return;
   struct components_lib_Integrator_Automatic_RAM_SUBSTRUCT tester;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_lib_IntegratorTest_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_lib_IntegratorTest_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct components_lib_IntegratorTest_Automatic {
   struct components_lib_Integrator_Automatic tester;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_lib_IntegratorTest_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ....components_lib_IntegratorTest_Automatic */
#define _components_lib_IntegratorTest_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'components_lib_IntegratorTest_CAL_MEM' */
/* containing 'CAL_MEM' memory class tree */
extern struct components_lib_IntegratorTest_Automatic_CAL_MEM_SUBSTRUCT components_lib_IntegratorTest_CAL_MEM;

/* forward declaration of substruct variable 'components_lib_IntegratorTest_RAM' */
/* containing 'RAM' memory class tree */
extern struct components_lib_IntegratorTest_Automatic_RAM_SUBSTRUCT components_lib_IntegratorTest_RAM;

/* forward declaration of component variable 'components_lib_IntegratorTest' */
/* containing 'ROM' memory class tree */
extern const struct components_lib_IntegratorTest_Automatic components_lib_IntegratorTest;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module components_lib_IntegratorTest_Automatic
 ******************************************************************************/
extern void components_lib_IntegratorTest_Automatic_integrate (void);
extern void components_lib_IntegratorTest_Automatic_outVal (void);



#endif /* _ASD_COMPONENTS_LIB_INTEGRATORTEST_AUTOMATIC_H_ */
