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
 *  l1edps_IDLE_MEASUREMENT_07.h
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
 * L1S Integration change.
 *
 * removed!
 * removed!
 * modify L1S meas header files
 *
 * removed!
 * removed!
 * l1s test case header file update
 *
 * removed!
 * removed!
 * [L1S] Modify parameters for L1S MEAS related test cases
 *
 * removed!
 * removed!
 ****************************************************************************/



#ifndef _L1SS_SCH_MEASUREMENT_07_H
#define _L1SS_SCH_MEASUREMENT_07_H

#include "l1edps_common_parameters.h"

#undef PHYS_CELL_ID_BTS1
#undef PHYS_CELL_ID_BTS2
#undef PHYS_CELL_ID_BTS3
#undef PHYS_CELL_ID_BTS4
#undef PHYS_CELL_ID_BTS5
#undef PHYS_CELL_ID_BTS6

#undef MIB_DL_BANDWIDTH_BTS1
#undef MIB_DL_BANDWIDTH_BTS2
#undef MIB_DL_BANDWIDTH_BTS3
#undef MIB_DL_BANDWIDTH_BTS4
#undef MIB_DL_BANDWIDTH_BTS5
#undef MIB_DL_BANDWIDTH_BTS6

#undef SIB2_UL_BANDWIDTH_BTS1
#undef SIB2_UL_BANDWIDTH_BTS2
#undef SIB2_UL_BANDWIDTH_BTS3
#undef SIB2_UL_BANDWIDTH_BTS4
#undef SIB2_UL_BANDWIDTH_BTS5
#undef SIB2_UL_BANDWIDTH_BTS6

#undef DL_EARFCN_BTS1
#undef DL_EARFCN_BTS2
#undef DL_EARFCN_BTS3
#undef DL_EARFCN_BTS4
#undef DL_EARFCN_BTS5
#undef DL_EARFCN_BTS6

#define PHYS_CELL_ID_BTS1 1
#define PHYS_CELL_ID_BTS2 2
#define PHYS_CELL_ID_BTS3 3
#define PHYS_CELL_ID_BTS4 4
#define PHYS_CELL_ID_BTS5 5
#define PHYS_CELL_ID_BTS6 6

#define MIB_DL_BANDWIDTH_BTS1 BW_50_RB
#define MIB_DL_BANDWIDTH_BTS2 BW_50_RB
#define MIB_DL_BANDWIDTH_BTS3 BW_50_RB
#define MIB_DL_BANDWIDTH_BTS4 BW_50_RB
#define MIB_DL_BANDWIDTH_BTS5 BW_50_RB
#define MIB_DL_BANDWIDTH_BTS6 BW_50_RB

#define SIB2_UL_BANDWIDTH_BTS1 BW_50_RB
#define SIB2_UL_BANDWIDTH_BTS2 BW_50_RB
#define SIB2_UL_BANDWIDTH_BTS3 BW_50_RB
#define SIB2_UL_BANDWIDTH_BTS4 BW_50_RB
#define SIB2_UL_BANDWIDTH_BTS5 BW_50_RB
#define SIB2_UL_BANDWIDTH_BTS6 BW_50_RB

#define DL_EARFCN_BTS1 0
#define DL_EARFCN_BTS2 0
#define DL_EARFCN_BTS3 100
#define DL_EARFCN_BTS4 200
#define DL_EARFCN_BTS5 36100
#define DL_EARFCN_BTS6 36200

#endif



