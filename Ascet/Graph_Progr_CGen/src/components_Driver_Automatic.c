/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_Driver_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    21.03.2019 13:29:25
*
* @brief   "components_Driver>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Defines
 *----------------------------------------------------------------------------*/

#define __ASD_REQUIRES_OS_INFACE

/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_Driver_Automatic.h"
#include "components_accMessage_Automatic.h"
#include "components_accStateChange_Automatic.h"
#include "components_breakpedMessage_Automatic.h"
#include "components_gaspedMessage_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'components_Driver_CAL_MEM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * model name:...................................'components_Driver'
 * data set:.....................................'COMPONENTS_DRIVER_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct components_Driver_Automatic_CAL_MEM_SUBSTRUCT components_Driver_CAL_MEM = {
   /* struct element:'components_Driver_CAL_MEM.accTargetSpeed' (modeled as:'accTargetSpeed.components_Driver') */
   0.0F,
   /* struct element:'components_Driver_CAL_MEM.inBreakpedPosition' (modeled as:'inBreakpedPosition.components_Driver') */
   0.0F,
   /* struct element:'components_Driver_CAL_MEM.inGaspedPosition' (modeled as:'inGaspedPosition.components_Driver') */
   0.0F,
   /* struct element:'components_Driver_CAL_MEM.accIsActive' (modeled as:'accIsActive.components_Driver') */
   false
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'components_Driver_CAL_MEM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'components_Driver_RAM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * model name:...................................'components_Driver'
 * data set:.....................................'COMPONENTS_DRIVER_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct components_Driver_Automatic_RAM_SUBSTRUCT components_Driver_RAM = {
   /* struct element:'components_Driver_RAM.accState' (modeled as:'accState.components_Driver') */
   false,
   /* struct element:'components_Driver_RAM.newState' (modeled as:'newState.components_Driver') */
   false,
   /* struct element:'components_Driver_RAM.turnAccOff' (modeled as:'turnAccOff.components_Driver') */
   false,
   /* struct element:'components_Driver_RAM.turnAccOn' (modeled as:'turnAccOn.components_Driver') */
   false
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'components_Driver_RAM'
 ******************************************************************************/

/******************************************************************************
 * DEFINITION OF COMPONENT VARIABLE OMITTED
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'components_Driver'
 * reason:.......................................no local elements
 * ---------------------------------------------------------------------------*/





#define accIsActive_VAL (components_Driver_CAL_MEM.accIsActive)
#define accState_VAL (components_Driver_RAM.accState)
#define accTargetSpeed_VAL (components_Driver_CAL_MEM.accTargetSpeed)
#define inBreakpedPosition_VAL (components_Driver_CAL_MEM.inBreakpedPosition)
#define inGaspedPosition_VAL (components_Driver_CAL_MEM.inGaspedPosition)
#define newState_VAL (components_Driver_RAM.newState)
#define turnAccOff_VAL (components_Driver_RAM.turnAccOff)
#define turnAccOn_VAL (components_Driver_RAM.turnAccOn)


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF PROCESS 'components_Driver_Automatic_drive'
 * ----------------------------------------------------------------------------
 * model name:...................................'drive'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/
/* messages used by this process */


void components_Driver_Automatic_drive (void)
{
   /* define local message copies */
   uint8 components_accMessage_accIsActive__components_Driver_Automatic_drive;
   float32 components_accMessage_accTargetSpeed__components_Driver_Automatic_drive;
   uint8 components_accStateChange_newState__components_Driver_Automatic_drive;
   float32 components_breakpedMessage_breakpedPosition__components_Driver_Automatic_drive;
   float32 components_gaspedMessage_gaspedPosition__components_Driver_Automatic_drive;
   /* receive messages implicitly */
   {
      DisableAllInterrupts();
      components_accMessage_accIsActive__components_Driver_Automatic_drive = components_accMessage_accIsActive;
      components_accMessage_accTargetSpeed__components_Driver_Automatic_drive = components_accMessage_accTargetSpeed;
      components_accStateChange_newState__components_Driver_Automatic_drive = components_accStateChange_newState;
      components_breakpedMessage_breakpedPosition__components_Driver_Automatic_drive = components_breakpedMessage_breakpedPosition;
      components_gaspedMessage_gaspedPosition__components_Driver_Automatic_drive = components_gaspedMessage_gaspedPosition;
      EnableAllInterrupts();
   }
   components_gaspedMessage_gaspedPosition__components_Driver_Automatic_drive = inGaspedPosition_VAL;
   components_breakpedMessage_breakpedPosition__components_Driver_Automatic_drive = inBreakpedPosition_VAL;
   components_accStateChange_newState__components_Driver_Automatic_drive = newState_VAL;
   components_Driver_Automatic_setAcc();
   components_accMessage_accIsActive__components_Driver_Automatic_drive = accIsActive_VAL;
   components_accMessage_accTargetSpeed__components_Driver_Automatic_drive = accTargetSpeed_VAL;
   /* send messages implicitly */
   {
      DisableAllInterrupts();
      components_accMessage_accIsActive = components_accMessage_accIsActive__components_Driver_Automatic_drive;
      components_accMessage_accTargetSpeed = components_accMessage_accTargetSpeed__components_Driver_Automatic_drive;
      components_accStateChange_newState = components_accStateChange_newState__components_Driver_Automatic_drive;
      components_breakpedMessage_breakpedPosition = components_breakpedMessage_breakpedPosition__components_Driver_Automatic_drive;
      components_gaspedMessage_gaspedPosition = components_gaspedMessage_gaspedPosition__components_Driver_Automatic_drive;
      EnableAllInterrupts();
   }
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF PROCESS 'components_Driver_Automatic_drive'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_Driver_Automatic_setAcc'
 * ----------------------------------------------------------------------------
 * model name:...................................'setAcc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void components_Driver_Automatic_setAcc (void)
{
   newState_VAL = false;
   if ((turnAccOn_VAL) && (!accState_VAL))
   {
      accState_VAL = turnAccOn_VAL;
      turnAccOn_VAL = false;
   } /* end if */
   if ((turnAccOff_VAL) && (accState_VAL))
   {
      newState_VAL = true;
      turnAccOff_VAL = false;
      accState_VAL = turnAccOff_VAL;
   } /* end if */
   if ((turnAccOn_VAL) && (turnAccOff_VAL))
   {
      accState_VAL = false;
   } /* end if */
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_Driver_Automatic_setAcc'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



