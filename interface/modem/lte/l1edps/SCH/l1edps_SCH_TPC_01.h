/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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

/*******************************************************************************
 * Filename:
 * ---------
 *  l1edps_SCH_TPC_01.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *  Parameters define value between SS and UE
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * removed!
 * removed!
 * 	make TX power not reach Pcmax, match test case design priciple
 *
 * removed!
 * removed!
 * Update L1S from DEV branch.
 *
 * removed!
 * removed!
 * l1edps common parameter define change and TPC releated header define change for init power
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * Rollback //MOLY/TRUNK/MOLY/mcu/interface/modem/lte/l1edps/SCH/l1edps_SCH_TPC_01.h to revision 2
 *
 * removed!
 * removed!
 * sch_tpc_01 change to band 2 , EARFCN=900
 *
 * removed!
 * removed!
 * add LTE l1edps common header files
 ****************************************************************************/



#ifndef _L1EDPS_SCH_TPC_01_H
#define _L1EDPS_SCH_TPC_01_H

#include "l1edps_common_parameters.h"

#undef DL_EARFCN_BTS1
#undef MIB_DL_BANDWIDTH_BTS1
#undef SIB2_UL_BANDWIDTH_BTS1 
#undef SIB2_REFERENCE_SIGNAL_POWER_BTS1
#undef RRC_RECONFIG_REFERENCE_SIGNAL_POWER_BTS1
#undef SIB2_P0_NOMINAL_PUSCH_BTS1
#undef RRC_RECONFIG_P0_NOMINAL_PUSCH_BTS1
#undef SIB2_P0_NOMINAL_PUCCH_BTS1
#undef RRC_RECONFIG_P0_NOMINAL_PUCCH

#define DL_EARFCN_BTS1 900
#define MIB_DL_BANDWIDTH_BTS1 BW_100_RB
#define SIB2_UL_BANDWIDTH_BTS1 BW_100_RB

#define SIB2_REFERENCE_SIGNAL_POWER_BTS1 -10                    /*-60..50*/
#define RRC_RECONFIG_REFERENCE_SIGNAL_POWER_BTS1 -10 				/*-60..50*/

#define SIB2_P0_NOMINAL_PUSCH_BTS1 -105 					   /*-126..24*/
#define RRC_RECONFIG_P0_NOMINAL_PUSCH_BTS1 -110						/*-126..24*/

#define SIB2_P0_NOMINAL_PUCCH_BTS1 -97						/*-127..-96*/
#define RRC_RECONFIG_P0_NOMINAL_PUCCH -96						/*-127..-96*/


#undef  RRC_SETUP_TPC_PDCCH_CONFIG_PUCCH_SETUP_BTS1
#define RRC_SETUP_TPC_PDCCH_CONFIG_PUCCH_SETUP_BTS1 L1S_SETUP

#undef  RRC_SETUP_TPC_PDCCH_CONFIG_PUSCH_SETUP_BTS1
#define RRC_SETUP_TPC_PDCCH_CONFIG_PUSCH_SETUP_BTS1 L1S_SETUP

#undef  RRC_RECONFIG_TPC_PDCCH_CONFIG_PUCCH_SETUP_BTS1
#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUCCH_SETUP_BTS1 L1S_SETUP

#undef  RRC_RECONFIG_TPC_PDCCH_CONFIG_PUSCH_SETUP_BTS1
#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUSCH_SETUP_BTS1 L1S_SETUP


/*default value of SIB2_PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_BTS1 is applied*/

#endif

