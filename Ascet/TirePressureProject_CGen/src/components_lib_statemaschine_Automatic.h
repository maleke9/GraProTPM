#ifndef _ASD_COMPONENTS_LIB_STATEMASCHINE_AUTOMATIC_H_
#define _ASD_COMPONENTS_LIB_STATEMASCHINE_AUTOMATIC_H_
/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_lib_statemaschine_Automatic.h
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    21.03.2019 15:16:58
*
* @brief   "components_lib_statemaschine>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#include "components_SoundOutStateMaschine_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_lib_statemaschine_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct components_lib_statemaschine_Automatic_RAM_SUBSTRUCT {
   struct components_SoundOutStateMaschine_Automatic_RAM_SUBSTRUCT SoundOutStateMaschine_instance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'components_lib_statemaschine_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_lib_statemaschine_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct components_lib_statemaschine_Automatic {
   struct components_SoundOutStateMaschine_Automatic SoundOutStateMaschine_instance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR MODULE 'components_lib_statemaschine_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: .....components_lib_statemaschine_Automatic */
#define _components_lib_statemaschine_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'components_lib_statemaschine_RAM' */
/* containing 'RAM' memory class tree */
extern struct components_lib_statemaschine_Automatic_RAM_SUBSTRUCT components_lib_statemaschine_RAM;

/* forward declaration of component variable 'components_lib_statemaschine' */
/* containing 'ROM' memory class tree */
extern const struct components_lib_statemaschine_Automatic components_lib_statemaschine;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module components_lib_statemaschine_Automatic
 ******************************************************************************/
extern void components_lib_statemaschine_Automatic_calc (void);



#endif /* _ASD_COMPONENTS_LIB_STATEMASCHINE_AUTOMATIC_H_ */
