#ifndef _ASD_COMPONENTS_LIB_INTEGRATOR_AUTOMATIC_H_
#define _ASD_COMPONENTS_LIB_INTEGRATOR_AUTOMATIC_H_
/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_lib_Integrator_Automatic.h
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    20.03.2019 15:16:27
*
* @brief   "components_lib_Integrator>>Automatic (module code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'components_lib_Integrator_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * ---------------------------------------------------------------------------*/
struct components_lib_Integrator_Automatic_CAL_MEM_SUBSTRUCT {
   float32 kI;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'components_lib_Integrator_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'components_lib_Integrator_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct components_lib_Integrator_Automatic_RAM_SUBSTRUCT {
   float32 memory;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'components_lib_Integrator_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR CLASS 'components_lib_Integrator_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct components_lib_Integrator_Automatic {
   struct components_lib_Integrator_Automatic_CAL_MEM_SUBSTRUCT * components_lib_Integrator_Automatic_CAL_MEM;
   struct components_lib_Integrator_Automatic_RAM_SUBSTRUCT * components_lib_Integrator_Automatic_RAM;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR CLASS 'components_lib_Integrator_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ........components_lib_Integrator_Automatic */
#define _components_lib_Integrator_Automatic_TYPE_DEF_




/******************************************************************************
 * BEGIN: declaration of global C functions defined by class components_lib_Integrator_Automatic
 ******************************************************************************/
extern void components_lib_Integrator_Automatic_integrate (
               const struct components_lib_Integrator_Automatic * self,
   /* IN    */ const float32                                      inputVal,
   /* IN    */ const float32                                      dtVal
   );
extern float32 components_lib_Integrator_Automatic_outVal ( const struct components_lib_Integrator_Automatic * self);



#endif /* _ASD_COMPONENTS_LIB_INTEGRATOR_AUTOMATIC_H_ */
