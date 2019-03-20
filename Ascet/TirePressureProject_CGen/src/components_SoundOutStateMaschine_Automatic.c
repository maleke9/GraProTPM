/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_SoundOutStateMaschine_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    20.03.2019 15:16:27
*
* @brief   "components_SoundOutStateMaschine>>Automatic (module code)"
*
*/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_SoundOutStateMaschine_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/



#define countLong_VAL (self->components_SoundOutStateMaschine_Automatic_RAM->countLong)
#define countShort_VAL (self->components_SoundOutStateMaschine_Automatic_RAM->countShort)
#define deltaTime_VAL (self->components_SoundOutStateMaschine_Automatic_RAM->deltaTime)
#define lampOn_VAL (self->components_SoundOutStateMaschine_Automatic_RAM->lampOn)
#define sm_VAL (self->components_SoundOutStateMaschine_Automatic_RAM->sm)
#define time_VAL (self->components_SoundOutStateMaschine_Automatic_RAM->time)

/*-----------------------------------------------------------------------------
 *    Defines
 *----------------------------------------------------------------------------*/

#define off 1U
#define stateLampLong 2U
#define stateLampOff 3U
#define stateLampShort 4U
#define waitstate 0U



/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_SoundOutStateMaschine_Automatic_esdl_getState'
 * ----------------------------------------------------------------------------
 * model name:...................................'esdl_getState'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

uint8 components_SoundOutStateMaschine_Automatic_esdl_getState ( const struct components_SoundOutStateMaschine_Automatic * self)
{
   return sm_VAL;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_SoundOutStateMaschine_Automatic_esdl_getState'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_SoundOutStateMaschine_Automatic_soundOutStateMaschineStatemachineTrigger'
 * ----------------------------------------------------------------------------
 * model name:...................................'soundOutStateMaschineStatemachineTrigger'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void components_SoundOutStateMaschine_Automatic_soundOutStateMaschineStatemachineTrigger ( const struct components_SoundOutStateMaschine_Automatic * self)
{
   /* temp. variables */
   uint8 _t1uint8;

   switch (sm_VAL)
   {
      case off:
         break;
      case stateLampLong:
         if (time_VAL > 1.6F)
         {
            lampOn_VAL = false;
            countLong_VAL
               = ((countLong_VAL <= 2147483646L) ? (countLong_VAL + 1) : 2147483647L);
            if (countLong_VAL == 3)
            {
               countShort_VAL = 0;
            } /* end if */
            time_VAL = 0.0F;
            sm_VAL = stateLampOff;
            break;
         } /* end if */
         time_VAL = time_VAL + deltaTime_VAL;
         break;
      case stateLampOff:
         _t1uint8 = countShort_VAL == 3;
         if ((time_VAL > 0.8F) && _t1uint8 && (countLong_VAL < 3))
         {
            time_VAL = 0.0F;
            lampOn_VAL = true;
            sm_VAL = stateLampLong;
            break;
         } /* end if */
         if (_t1uint8 && (countLong_VAL == 3))
         {
            sm_VAL = off;
            break;
         } /* end if */
         if ((time_VAL > 0.8F) && (countShort_VAL < 3))
         {
            time_VAL = 0.0F;
            lampOn_VAL = true;
            sm_VAL = stateLampShort;
            break;
         } /* end if */
         time_VAL = time_VAL + deltaTime_VAL;
         break;
      case stateLampShort:
         if (time_VAL > 0.8F)
         {
            lampOn_VAL = false;
            countShort_VAL
               = ((countShort_VAL <= 2147483646L) ? (countShort_VAL + 1) : 2147483647L);
            time_VAL = 0.0F;
            sm_VAL = stateLampOff;
            break;
         } /* end if */
         time_VAL = time_VAL + deltaTime_VAL;
         break;
      case waitstate:
      default:
         if (time_VAL > 1.0F)
         {
            time_VAL = 0.0F;
            lampOn_VAL = true;
            sm_VAL = stateLampShort;
            break;
         } /* end if */
         time_VAL = time_VAL + deltaTime_VAL;
         break;
   } /* end switch */
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_SoundOutStateMaschine_Automatic_soundOutStateMaschineStatemachineTrigger'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



