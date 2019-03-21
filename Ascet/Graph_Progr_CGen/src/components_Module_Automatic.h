#ifndef _ASD_COMPONENTS_MODULE_AUTOMATIC_H_
#define _ASD_COMPONENTS_MODULE_AUTOMATIC_H_
/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_Module_Automatic.h
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    21.03.2019 13:29:25
*
* @brief   "components_Module>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#include "chartab.h"
#include "components_ACC_Automatic.h"
#include "components_Component_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_Module_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * ---------------------------------------------------------------------------*/
struct components_Module_Automatic_CAL_MEM_SUBSTRUCT {
   struct components_Component_Automatic_CAL_MEM_SUBSTRUCT Component_instance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_Module_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_Module_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct components_Module_Automatic_RAM_SUBSTRUCT {
   float32 dh;
   float32 dtime;
   float32 totalDistance;
   float32 trackPosition;
   float32 v;
   struct components_ACC_Automatic_RAM_SUBSTRUCT ACC_instance;
   struct components_ACC_Automatic_RAM_SUBSTRUCT ACC_instance_3;
   struct components_Component_Automatic_RAM_SUBSTRUCT Component_instance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_Module_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_Module_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct components_Module_Automatic {
   struct components_ACC_Automatic ACC_instance;
   struct components_ACC_Automatic ACC_instance_3;
   struct components_Component_Automatic Component_instance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_Module_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ................components_Module_Automatic */
#define _components_Module_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'components_Module_CAL_MEM' */
/* containing 'CAL_MEM' memory class tree */
extern struct components_Module_Automatic_CAL_MEM_SUBSTRUCT components_Module_CAL_MEM;

/* forward declaration of substruct variable 'components_Module_RAM' */
/* containing 'RAM' memory class tree */
extern struct components_Module_Automatic_RAM_SUBSTRUCT components_Module_RAM;

/* forward declaration of component variable 'components_Module' */
/* containing 'ROM' memory class tree */
extern const struct components_Module_Automatic components_Module;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module components_Module_Automatic
 ******************************************************************************/
extern void components_Module_Automatic_calc (void);



#endif /* _ASD_COMPONENTS_MODULE_AUTOMATIC_H_ */
