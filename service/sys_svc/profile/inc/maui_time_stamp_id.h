/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2010
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
 *   maui_time_stamp_id.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Time stamp measurement id (MAUI Only)
 *
 * Author:
 * -------
 * -------
 *
 ****************************************************************************/
#ifndef __MAUI_TIME_STAMP_ID_H__
#define __MAUI_TIME_STAMP_ID_H__

#ifdef __cplusplus
extern "C" {
#endif

//==============================================================================
// TimeStamp Measurement ID
//==============================================================================

typedef enum {
 
     TSID_INIT_TOTAL
    ,TSID_INIT_READY_TO_DISPLAY
    ,TSID_INIT_ASM
    ,TSID_INIT_APPINIT
    ,TSID_INIT_CLIB1
    ,TSID_INIT_CCCI
    ,TSID_INIT_CCCIHS1
    ,TSID_INIT_MDCIHS1
    ,TSID_INIT_TSIDMODE
    ,TSID_INIT_SYSTEMINIT
    ,TSID_INIT_NVRAM
    ,TSID_INIT_HWDINIT
    ,TSID_INIT_OSTD
    ,TSID_INIT_PREFOTA
    ,TSID_INIT_THIRDROM
    ,TSID_INIT_LOADSECMAUI
    ,TSID_INIT_DEMP
    ,TSID_INIT_DRV2_START
    ,TSID_INIT_RESINIT
    ,TSID_INIT_CHECKMSGID
    ,TSID_INIT_CLIB2
    ,TSID_INIT_MAINP
    ,TSID_INIT_CCCIHS2
    ,TSID_INIT_MDCIHS2
    ,TSID_INIT_DMDSP2

    ,TSID_NUM

    ,TSID_END = (U8)255    // max 255 records     
    ,TSID_NONE = TSID_END

} TSID;

#ifdef __cplusplus
}
#endif

#endif

