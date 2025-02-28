/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 * Filename:
 * ------------
 *   sdm_msgid.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines the identities of the messages received by SDM.
 * 
 *
 * Author:
 * -----------
 * -------
 *
 *===========================================================
 * $Log$
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * introduce AT+EIMSWFC into SDM. If WFC switch off, ingore WIFI_ONLY restriction. IMSP(SDM) part
 *
 * removed!
 * removed!
 * SMS over SGs preference configuration per operator country variant - SDM part.
 *
 * removed!
 * removed!
 * CL1: Interfaces
 *
 * removed!
 * removed!
 * 	interface - SAP part.
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *****************************************************************************/

#ifndef SDM_MSGID_H
#define SDM_MSGID_H

#include "module_msg_range.h"


MODULE_MSG_BEGIN( MSG_ID_SDM_CODE_BEGIN )

/****************************************************************************
 *                          IMSP -> SDM
 ****************************************************************************/
MSG_ID_SDM_IMSP_CMD_SEND_SMS_IND                    = MSG_ID_SDM_CODE_BEGIN,
MSG_ID_SDM_IMSP_CMD_SEND_DELIVER_REPORT_IND,
MSG_ID_SDM_IMSP_CMD_SEND_MEM_AVL_NOTIF_IND,
MSG_ID_SDM_IMSP_CMD_WFC_PROFILE_IND,
MSG_ID_SDM_IMSP_CMD_WFC_SWITCH_IND,
MSG_ID_SDM_IMSP_CS_SMS_SUBMIT_REPORT_ACK,
MSG_ID_SDM_IMSP_CS_SMS_SUBMIT_REPORT_NACK,
MSG_ID_SDM_IMSP_IMSI_GET_CNF,
MSG_ID_SDM_IMSP_CMD_STK_SMS_IND,
MSG_ID_SDM_IMSP_STK_SMS_QUERY_CNF,
MSG_ID_SDM_IMSP_CS_STK_SMS_CNF,

MSG_ID_SDM_IMSP_CMD_SEND_COMMAND_IND,
MSG_ID_SDM_IMSP_SMS_OVER_IP_CONFIG_IND,
MSG_ID_SDM_IMSP_IMS_REG_STATUS_IND,
MSG_ID_SDM_IMSP_SMS_OVER_SGS_CONFIG_IND,
MSG_ID_SDM_IMSP_NAS_PS_REG_STATUS_IND,


/****************************************************************************
 *                          IMCSMS -> SDM
 ****************************************************************************/
MSG_ID_SDM_IMCSMS_SUBMIT_REPORT_ACK,
MSG_ID_SDM_IMCSMS_SUBMIT_REPORT_NACK,
MSG_ID_SDM_IMCSMS_STK_SUBMIT_REPORT_ACK,
MSG_ID_SDM_IMCSMS_STK_SUBMIT_REPORT_NACK,
MSG_ID_SDM_IMCSMS_DELIVER,
MSG_ID_SDM_IMCSMS_STATUS_REPORT,
MSG_ID_SDM_IMCSMS_MEM_AVL_NOTIF_CNF,
MSG_ID_SDM_CODE_END = MSG_ID_SDM_IMCSMS_MEM_AVL_NOTIF_CNF,

MODULE_MSG_END( MSG_ID_SDM_CODE_TAIL )


#endif // SDM_MSGID_H

