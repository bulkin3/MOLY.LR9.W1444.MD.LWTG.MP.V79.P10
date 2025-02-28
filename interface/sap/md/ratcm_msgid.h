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

/*******************************************************************************
 * Filename:
 * ---------
 *   ratcm_sap.h
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 ******************************************************************************/
#include "module_msg_range.h"

#ifndef _RATCM_MSG_H
#define _RATCM_MSG_H

MODULE_MSG_BEGIN( MSG_ID_RATCM_CODE_BEGIN )
//UDC
MSG_ID_RATCM_RRCE_CONN_EST_CNF = MSG_ID_RATCM_CODE_BEGIN,
MSG_ID_RATCM_RRCE_CONN_REL_CNF,
MSG_ID_RATCM_RRCE_CONN_REL_IND,
MSG_ID_RATCM_RRCE_DATA_TRANSFER_IND,
MSG_ID_RATCM_RRCE_DATA_TRANSFER_CNF,
MSG_ID_RATCM_RRCE_SECURITY_MODE_COMPLETE_IND,
MSG_ID_RATCM_RRCE_SECURITY_MODE_CHANGE_IND,
MSG_ID_RATCM_RRCE_CONN_LOSS_IND,
MSG_ID_RATCM_RRCE_RESET_KEYS_IND,
MSG_ID_RATCM_RRCE_RB_RE_ESTABLISHMENT_IND,
MSG_ID_RATCM_RRCE_END_PS_DATA_SESSION_CNF,  /* MAUI_02852442, __NO_PSDATA_SEND_SCRI__ */
//UNT
MSG_ID_RATCM_RRCE_PAGE_IND,
MSG_ID_RATCM_RRCE_LOCAL_RELEASE_IND, /* solve local release status asynchronization between UE and NW */
MSG_ID_RATCM_RRCE_RRC_STATE_IND,
//UGC
MSG_ID_RATCM_UAS_SYS_INFO_IND,
MSG_ID_RATCM_UAS_UPDATE_CAPABILITY_IND,
MSG_ID_RATCM_CSCE_INIT_CNF,
MSG_ID_RATCM_CSCE_PLMN_SEARCH_CNF,
MSG_ID_RATCM_CSCE_PLMN_LOSS_IND,
MSG_ID_RATCM_CSE_PLMN_LIST_CNF,
MSG_ID_RATCM_CSE_PLMN_LIST_UPDATE_IND,
MSG_ID_RATCM_CSE_PLMN_LIST_STOP_CNF, 
MSG_ID_RATCM_CSE_CSG_LIST_CNF,
MSG_ID_RATCM_CSE_CSG_LIST_STOP_CNF,
MSG_ID_RATCM_CSCE_RRC_DEACTIVATE_CNF,
MSG_ID_RAC_UAS_CELL_POWER_LEVEL_IND,
MSG_ID_RATCM_RRCE_CELL_CHANGE_START_IND,
MSG_ID_RATCM_RRCE_CELL_CHANGE_FINISH_IND,
MSG_ID_RATCM_CSCE_START_TIMER_OUT_OF_SERVICE_IND,
MSG_ID_RATCM_CSCE_RFON_CNF,
MSG_ID_RATCM_CSCE_RFOFF_CNF,
MSG_ID_RATCM_UAS_SIGNAL_APPEAR_IND,
MSG_ID_RATCM_CSCE_SET_RAT_MODE_CNF,
MSG_ID_RATCM_CSCE_IDLE_OUT_OF_SERVICE_IND, /* __OOS_EARLY_IND__ */
MSG_ID_RATCM_CSE_PLMN_FOUND_IND,

//SLCE
MSG_ID_RATCM_SLCE_MONITORING_CLOSE_LOOP_CNF,
MSG_ID_RATCM_SLCE_MONITORING_CLOSE_LOOP_IND,
MSG_ID_RATCM_SLCE_RAB_ESTABLISHMENT_IND,
MSG_ID_RATCM_SLCE_RAB_MODIFY_IND,
MSG_ID_RATCM_SLCE_RAB_RELEASE_IND,

/* RATCM - LLC */
MSG_ID_RATCM_LLC_STATUS_IND,
MSG_ID_RATCM_LLC_UNITDATA_IND,
MSG_ID_RATCM_LLC_AS_NAS_DATA_CNF,
#ifdef __PS_HO__
MSG_ID_RATCM_LLC_PSHO_IND,
#endif

/* RATCM - URLC */
MSG_ID_RATCM_URLC_UTEST_OPEN_LOOP_CNF,
MSG_ID_RATCM_URLC_UTEST_CLOSE_LOOP_M1_CNF,
MSG_ID_RATCM_URLC_UTEST_CLOSE_LOOP_M2_CNF,

/* RATCM - BMC */
MSG_ID_RATCM_BMC_DATA_IND,
MSG_ID_RATCM_BMC_CB_GS_CHANGE_IND, //MAUI_01995874

/* RATCM - GAS */
MSG_ID_RATCM_GAS_CELL_CHANGE_START_IND,
MSG_ID_RATCM_GAS_CELL_CHANGE_FINISH_IND,
MSG_ID_RATCM_GAS_CONN_ABORT_IND,
MSG_ID_RATCM_GAS_CONN_LOSS_IND,
MSG_ID_RATCM_GAS_CONN_EST_CNF,
MSG_ID_RATCM_GAS_CONN_EST_IND,
MSG_ID_RATCM_GAS_CONN_REL_CNF,
MSG_ID_RATCM_GAS_CONN_REL_IND,
MSG_ID_RATCM_GAS_DATA_CNF,
MSG_ID_RATCM_GAS_DATA_IND,
MSG_ID_RATCM_GAS_DEACTIVATE_CNF,
MSG_ID_RATCM_GAS_INIT_CNF,
MSG_ID_RATCM_GAS_PLMN_LIST_CNF,
MSG_ID_RATCM_GAS_PLMN_LIST_STOP_CNF,
MSG_ID_RATCM_GAS_PLMN_LOSS_IND,
MSG_ID_RATCM_GAS_PAGE_IND,
MSG_ID_RATCM_GAS_PLMN_SEARCH_CNF,
MSG_ID_RATCM_GAS_READY_TIMER_UPDATE_IND,
MSG_ID_RATCM_GAS_RFOFF_CNF,
MSG_ID_RATCM_GAS_RFON_CNF,
MSG_ID_RATCM_GAS_SET_RAT_MODE_CNF,
MSG_ID_RATCM_GAS_STOP_TEST_MODE_IND,
MSG_ID_RATCM_GAS_SYNC_IND,
MSG_ID_RATCM_GAS_SYS_INFO_IND,
MSG_ID_RATCM_GAS_CELL_GLOBAL_IDENTITY_INFO_IND,
MSG_ID_RATCM_GAS_PS_HO_SUCCESS_IND,
MSG_ID_RATCM_GAS_CB_PAGE_IND,
MSG_ID_RATCM_GAS_T3122_TIMEOUT_IND,
/*Byron: 2007/05/08: Add for notify MM CCO activation time timer timeout that can do access now*/
MSG_ID_RATCM_GAS_CCO_ACTIVATION_TIME_TIMEOUT_IND,
MSG_ID_RATCM_GAS_CB_GS_CHANGE_IND,
MSG_ID_RATCM_GAS_SIGNAL_APPEAR_IND,
MSG_ID_RATCM_GAS_IDLE_OUT_OF_SERVICE_IND, /* __OOS_EARLY_IND__ */
#ifdef __GEMINI__
MSG_ID_RATCM_GAS_PS_SESSION_START_CNF,
MSG_ID_RATCM_GAS_PS_SESSION_STOP_CNF,
MSG_ID_RATCM_GAS_SUSPEND_IND,
MSG_ID_RATCM_GAS_RESUME_IND, //MAUI_02877191
MSG_ID_RATCM_GAS_VIRTUAL_MODE_IND,  /* MAUI_02865693, __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */
#endif /* __GEMINI__ */
MSG_ID_RATCM_GAS_PLMN_FOUND_IND,

/* RATCM - RRLP */
/* __AGPS_CONTROL_PLANE__ */
MSG_ID_RATCM_RRLP_LCS_PROC_START_IND,
MSG_ID_RATCM_RRLP_LCS_PROC_END_IND,
MSG_ID_RATCM_GAS_AGPS_RESET_POSITIONING_IND,
/* __AGPS_CONTROL_PLANE__ */

/* RATCM - UAGPS_CP */
MSG_ID_RATCM_UAGPS_CP_LCS_PROC_START_IND, //__UAGPS_CP_SUPPORT__
MSG_ID_RATCM_UAGPS_CP_LCS_PROC_END_IND,

/* SMSAL -> RATCM */
MSG_ID_SMSAL_RATCM_CBCH_REQ,
MSG_ID_SMSAL_RATCM_CB_UPDATE_REQ,

/* RATDM -> RATCM */
MSG_ID_RATCM_RATDM_RAT_CHANGE_CNF,

/* NWSEL -> RATCM */
MSG_ID_NWSEL_RATCM_EQ_PLMN_LIST_UPDATE_REQ,
MSG_ID_NWSEL_RATCM_RPLMN_EQ_PLMN_LIST_UPDATE_REQ,

/* MM -> RATCM */
MSG_ID_MM_RATCM_SET_RAT_MODE_REQ,
MSG_ID_MM_RATCM_INIT_REQ,
MSG_ID_MM_RATCM_SIM_INFO_RESET_REQ,
MSG_ID_MM_RATCM_RFOFF_REQ,
MSG_ID_MM_RATCM_PLMN_SEARCH_REQ,
MSG_ID_MM_RATCM_EQ_PLMN_LIST_UPDATE_REQ,
MSG_ID_MM_RATCM_HPLMN_INFO_UPDATE_REQ,
MSG_ID_MM_RATCM_ADD_FORBIDDEN_LA_REQ,
MSG_ID_MM_RATCM_DEL_FORBIDDEN_LA_REQ,
MSG_ID_MM_RATCM_PLMN_LIST_REQ,
MSG_ID_MM_RATCM_PLMN_LIST_STOP_REQ,
MSG_ID_MM_RATCM_PLMN_LIST_ABORT_REQ,
MSG_ID_MM_RATCM_UPDATE_ALLOWED_CSG_LIST_REQ,
MSG_ID_MM_RATCM_CSG_LIST_REQ,
MSG_ID_MM_RATCM_CSG_LIST_STOP_REQ,
MSG_ID_MM_RATCM_TLLI_ASSIGN_REQ,
MSG_ID_MM_RATCM_PAGING_PARAM_ASSIGN_REQ,
MSG_ID_MM_RATCM_SECURITY_MODE_REQ,
MSG_ID_MM_RATCM_CONN_EST_REQ,
MSG_ID_MM_RATCM_CONN_ABORT_REQ, 
MSG_ID_MM_RATCM_CONN_REL_REQ,
MSG_ID_MM_RATCM_REGN_STATUS_UPDATE_REQ,
#ifdef __UMTS_RAT__
MSG_ID_MM_RATCM_STOP_TEST_MODE_REQ,
#endif
MSG_ID_MM_RATCM_CELL_UPDATED_REQ,
MSG_ID_MM_RATCM_CB_LOC_UPDATE_REQ, /* MAUI_03101878, [Silver Clam][CV][SilverClam-94]Pre-CV-CMAS: GPRS failed due to timeout */
MSG_ID_MM_RATCM_READY_TIMER_UPDATE_REQ,
MSG_ID_MM_RATCM_SERVICE_CHANGE_REQ,
MSG_ID_MM_RATCM_CS_DATA_REQ,
MSG_ID_MM_RATCM_PS_DATA_REQ,
MSG_ID_MM_RATCM_LLC_ASSIGN_REQ,
MSG_ID_MM_RATCM_LLC_RESUME_REQ,
MSG_ID_MM_RATCM_LLC_SUSPEND_REQ,
MSG_ID_MM_RATCM_LLC_TRIGGER_REQ,
#if defined(__GEMINI__) || defined(__SGLTE__)
MSG_ID_MM_RATCM_SIM_STATUS_UPDATE_REQ, 
#endif
#ifdef __GEMINI__
MSG_ID_MM_RATCM_PS_SESSION_START_REQ,
MSG_ID_MM_RATCM_PS_SESSION_STOP_REQ,
MSG_ID_MM_RATCM_NO_IR_SIG_PROC_REQ,
#endif

MSG_ID_MM_RATCM_SET_GPRS_TRANSFER_PREFERENCE_REQ, //__MONITOR_PAGE_DURING_TRANSFER__ 
MSG_ID_MM_RATCM_SET_PREFERRED_BAND_REQ,   /* MAUI_01972920, __DYNAMIC_BAND_SEL__ */
MSG_ID_MM_RATCM_END_PS_DATA_SESSION_REQ,  /* MAUI_02852442, __NO_PSDATA_SEND_SCRI__ */
MSG_ID_MM_RATCM_RESET_CS_DATA_QUEUE_REQ,

//Add for LTE multimode: __LTE_RAT__
MSG_ID_MM_RATCM_DEACTIVATE_REQ,
MSG_ID_MM_RATCM_EUTRAN_CAP_UPDATE_REQ,
MSG_ID_MM_RATCM_RAT_CHANGE_REQ,
MSG_ID_MM_RATCM_RAT_CHANGE_RSP,
MSG_ID_MM_RATCM_PAGE_REQ,

#if defined(__LTE_RAT__) && (defined(__GSM_RAT__) || defined(__UMTS_RAT__))  /* dual or multi mode including LTE */
#if (defined(__OP01__)) && (!defined(__SGLTE__))
MSG_ID_MM_RATCM_PLMN_SEARCH_ABORT_REQ,
#endif
#endif

/* RATCM - GAS */
MSG_ID_RATCM_GAS_RAT_CHANGE_IND,
MSG_ID_RATCM_GAS_RAT_CHANGE_CNF,
MSG_ID_RATCM_GAS_EUTRAN_CAP_UPDATE_CNF,
/* RATCM - UAS */
MSG_ID_RATCM_UAS_RAT_CHANGE_IND,
MSG_ID_RATCM_UAS_RAT_CHANGE_CNF,
MSG_ID_RATCM_CSCE_EUTRAN_CAP_UPDATE_CNF,
//End of LTE multimode: __LTE_RAT__

MSG_ID_MM_RATCM_START_TEST_MODE_REQ,
#ifdef __UMTS_TDD128_MODE__
MSG_ID_MM_RATCM_FORCE_REL_REQ,   /*For TDD call clearing optimization*/
#endif

MSG_ID_MM_RATCM_ARAL_UPDATE_REQ,

MSG_ID_SMSAL_RATCM_CB_MSG_REMOVAL_REQ,

MSG_ID_RATCM_CODE_END = MSG_ID_SMSAL_RATCM_CB_MSG_REMOVAL_REQ,
//MSG_ID_RATCM_CODE_END,
MODULE_MSG_END( MSG_ID_RATCM_CODE_TAIL )

#endif  //_RATCM_MSG_H
