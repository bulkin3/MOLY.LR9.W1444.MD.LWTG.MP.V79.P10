/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 * ephy_rf_custom_error_check.c
 *
 * Project:
 * --------
 * MT6290
 *
 * Description:
 * ------------
 * EL1 RF Custom Data
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*===============================================================================*/

//#include "kal_general_types.h"
//#include "kal_public_api.h"

//#include "el1_rf_public.h"
//#include "el1_rf_common.h"

#include "ephy_rf_custom_data.h"
#include "lte_custom_mipi.h"
#include "lte_custom_rf.h"

/*===============================================================================*/
#define MAX(X,Y) (((X) < (Y)) ? (Y) : (X))

#define LTE_TDD_T2R_MARGIN US2OFFCNT(20)

#if (defined(LTE_FDD_MIPI_ASM_TX_OFF0) || defined(LTE_FDD_MIPI_ASM_TX_OFF1))
   #error"FDD mode should not turn off TX ASM"
#endif

#define LTE_TDD_ASM_MAX_RXON_OFFSET   MAX(LTE_TDD_MIPI_ASM_RX_ON0,LTE_TDD_MIPI_ASM_RX_ON1)
#define LTE_TDD_ASM_MAX_TXOFF_OFFSET  MAX(LTE_TDD_MIPI_ASM_TX_OFF0,LTE_TDD_MIPI_ASM_TX_OFF1)

#if ((LTE_TDD_ASM_MAX_RXON_OFFSET + LTE_TDD_ASM_MAX_TXOFF_OFFSET) > LTE_TDD_T2R_MARGIN)
   #error"TDD ASM Rx ON may overlap with Tx ON"
#endif

#if (defined(LTE_FDD_MIPI_ASM_RX_ON0) && (LTE_FDD_MIPI_ASM_RX_ON0<0))
   #error"LTE_FDD_MIPI_ASM_RX_ON0 Should NOT be negative!"
#endif

#if (defined(LTE_FDD_MIPI_ASM_RX_ON1) && (LTE_FDD_MIPI_ASM_RX_ON1<0))
   #error"LTE_FDD_MIPI_ASM_RX_ON1 Should NOT be negative!"
#endif

#if (defined(LTE_FDD_MIPI_ASM_RX_ON2) && (LTE_FDD_MIPI_ASM_RX_ON2<0))
   #error"LTE_FDD_MIPI_ASM_RX_ON2 Should NOT be negative!"
#endif

#if (defined(LTE_FDD_MIPI_ASM_RX_OFF0) && (LTE_FDD_MIPI_ASM_RX_OFF0<0))
   #error"LTE_FDD_MIPI_ASM_RX_OFF0 Should NOT be negative!"
#endif

#if (defined(LTE_FDD_MIPI_ASM_RX_OFF1) && (LTE_FDD_MIPI_ASM_RX_OFF1<0))
   #error"LTE_FDD_MIPI_ASM_RX_OFF1 Should NOT be negative!"
#endif

#if (defined(LTE_FDD_MIPI_ASM_RX_OFF2) && (LTE_FDD_MIPI_ASM_RX_OFF2<0))
   #error"LTE_FDD_MIPI_ASM_RX_OFF2 Should NOT be negative!"
#endif

#if (defined(LTE_TDD_MIPI_ASM_RX_ON0) && (LTE_TDD_MIPI_ASM_RX_ON0<0))
   #error"LTE_TDD_MIPI_ASM_RX_ON0 Should NOT be negative!"
#endif

#if (defined(LTE_TDD_MIPI_ASM_RX_ON1) && (LTE_TDD_MIPI_ASM_RX_ON1<0))
   #error"LTE_TDD_MIPI_ASM_RX_ON1 Should NOT be negative!"
#endif

#if (defined(LTE_TDD_MIPI_ASM_RX_ON2) && (LTE_TDD_MIPI_ASM_RX_ON2<0))
   #error"LTE_TDD_MIPI_ASM_RX_ON2 Should NOT be negative!"
#endif

#if (defined(LTE_TDD_MIPI_ASM_RX_OFF0) && (LTE_TDD_MIPI_ASM_RX_OFF0<0))
   #error"LTE_TDD_MIPI_ASM_RX_OFF0 Should NOT be negative!"
#endif

#if (defined(LTE_TDD_MIPI_ASM_RX_OFF1) && (LTE_TDD_MIPI_ASM_RX_OFF1<0))
   #error"LTE_TDD_MIPI_ASM_RX_OFF1 Should NOT be negative!"
#endif

#if (defined(LTE_TDD_MIPI_ASM_RX_OFF2) && (LTE_TDD_MIPI_ASM_RX_OFF2<0))
   #error"LTE_TDD_MIPI_ASM_RX_OFF2 Should NOT be negative!"
#endif

#if (defined(LTE_FDD_MIPI_ASM_TX_ON0) && (LTE_FDD_MIPI_ASM_TX_ON0<0))
   #error"LTE_FDD_MIPI_ASM_TX_ON0 Should NOT be negative!"
#endif

#if (defined(LTE_FDD_MIPI_ASM_TX_ON1) && (LTE_FDD_MIPI_ASM_TX_ON1<0))
   #error"LTE_FDD_MIPI_ASM_TX_ON1 Should NOT be negative!"
#endif

#if (defined(LTE_FDD_MIPI_ASM_TX_ON2) && (LTE_FDD_MIPI_ASM_TX_ON2<0))
   #error"LTE_FDD_MIPI_ASM_TX_ON2 Should NOT be negative!"
#endif

#if (defined(LTE_TDD_MIPI_ASM_TX_OFF0) && (LTE_TDD_MIPI_ASM_TX_OFF0<0))
   #error"LTE_TDD_MIPI_ASM_TX_OFF0 Should NOT be negative!"
#endif

#if (defined(LTE_TDD_MIPI_ASM_TX_OFF1) && (LTE_TDD_MIPI_ASM_TX_OFF1<0))
   #error"LTE_TDD_MIPI_ASM_TX_OFF1 Should NOT be negative!"
#endif

#if (defined(LTE_TDD_MIPI_ASM_TX_OFF2) && (LTE_TDD_MIPI_ASM_TX_OFF2<0))
   #error"LTE_TDD_MIPI_ASM_TX_OFF2 Should NOT be negative!"
#endif

#if (defined(LTE_FDD_MIPI_PA_TX_ON0) && (LTE_FDD_MIPI_PA_TX_ON0<0))
   #error"LTE_FDD_MIPI_PA_TX_ON0 Should NOT be negative!"
#endif

#if (defined(LTE_FDD_MIPI_PA_TX_ON1) && (LTE_FDD_MIPI_PA_TX_ON1<0))
   #error"LTE_FDD_MIPI_PA_TX_ON1 Should NOT be negative!"
#endif

#if (defined(LTE_FDD_MIPI_PA_TX_ON2) && (LTE_FDD_MIPI_PA_TX_ON2<0))
   #error"LTE_FDD_MIPI_PA_TX_ON2 Should NOT be negative!"
#endif

#if (defined(LTE_FDD_MIPI_PA_TX_OFF0) && (LTE_FDD_MIPI_PA_TX_OFF0<0))
   #error"LTE_FDD_MIPI_PA_TX_OFF0 Should NOT be negative!"
#endif

#if (defined(LTE_FDD_MIPI_PA_TX_OFF1) && (LTE_FDD_MIPI_PA_TX_OFF1<0))
   #error"LTE_FDD_MIPI_PA_TX_OFF1 Should NOT be negative!"
#endif

#if (defined(LTE_FDD_MIPI_PA_TX_OFF2) && (LTE_FDD_MIPI_PA_TX_OFF2<0))
   #error"LTE_FDD_MIPI_PA_TX_OFF2 Should NOT be negative!"
#endif

#if (defined(LTE_TDD_MIPI_PA_TX_ON0) && (LTE_TDD_MIPI_PA_TX_ON0<0))
   #error"LTE_TDD_MIPI_PA_TX_ON0 Should NOT be negative!"
#endif

#if (defined(LTE_TDD_MIPI_PA_TX_ON1) && (LTE_TDD_MIPI_PA_TX_ON1<0))
   #error"LTE_TDD_MIPI_PA_TX_ON1 Should NOT be negative!"
#endif

#if (defined(LTE_TDD_MIPI_PA_TX_ON2) && (LTE_TDD_MIPI_PA_TX_ON2<0))
   #error"LTE_TDD_MIPI_PA_TX_ON2 Should NOT be negative!"
#endif

#if (defined(LTE_TDD_MIPI_PA_TX_OFF0) && (LTE_TDD_MIPI_PA_TX_OFF0<0))
   #error"LTE_TDD_MIPI_PA_TX_OFF0 Should NOT be negative!"
#endif

#if (defined(LTE_TDD_MIPI_PA_TX_OFF1) && (LTE_TDD_MIPI_PA_TX_OFF1<0))
   #error"LTE_TDD_MIPI_PA_TX_OFF1 Should NOT be negative!"
#endif

#if (defined(LTE_TDD_MIPI_PA_TX_OFF2) && (LTE_TDD_MIPI_PA_TX_OFF2<0))
   #error"LTE_TDD_MIPI_PA_TX_OFF2 Should NOT be negative!"
#endif



#if  ( (LTE_PDATA_PT3(BAND_INDICATOR1)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR1)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR1)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR1)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR2)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR2)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR2)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR2)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR3)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR3)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR3)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR3)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR4)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR4)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR4)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR4)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR5)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR5)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR5)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR5)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR6)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR6)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR6)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR6)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR7)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR7)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR7)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR7)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR8)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR8)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR8)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR8)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR9)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR9)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR9)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR9)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR10)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR10)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR10)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR10)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR11)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR11)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR11)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR11)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR12)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR12)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR12)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR12)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR13)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR13)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR13)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR13)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR14)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR14)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR14)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR14)) should be zero!"
#endif


/*===============================================================================*/
