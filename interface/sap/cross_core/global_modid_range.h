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
 *   global_modid_range.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   This file provides the task index and module index configuration.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef GLOBAL_MODID_RANGE_H
#define GLOBAL_MODID_RANGE_H

#define MOD_ID_GLOBAL_END 130

typedef enum {
	
    MOD_ID_GLOBAL_BEGIN = 0, MOD_ID_GLOBAL_NIL_CHECK_TAIL = MOD_ID_GLOBAL_BEGIN,
    MOD_ID_GLOBAL_MD1_BEGIN, MOD_ID_GLOBAL_MD1_TAIL = MOD_ID_GLOBAL_MD1_BEGIN + 63,
    MOD_ID_GLOBAL_MD2_BEGIN, MOD_ID_GLOBAL_MD2_TAIL = MOD_ID_GLOBAL_MD2_BEGIN + 31,
    MOD_ID_GLOBAL_MD3_BEGIN, MOD_ID_GLOBAL_MD3_TAIL = MOD_ID_GLOBAL_MD3_BEGIN + 31,
    MOD_ID_GLOBAL_TAIL,
	
}GLOBAL_MODULE_ID_TYPE;

typedef unsigned int module_global_id_boundary_check1[MOD_ID_GLOBAL_END - MOD_ID_GLOBAL_TAIL];

/**************************************************************
**********  Should not change the following MACROS defines  *************
**********  Should not define MODULE ID with "MOD_TAG_"     *************
***************************************************************/
#ifdef GEN_FOR_PC
    #define MODULE_MOD_BEGIN(BEGIN_POS)  typedef enum __cgen_module_type_id_##BEGIN_POS{MODULE_TAG_##BEGIN_POS = BEGIN_POS,
    #define MODULE_MOD_END(END_POS) MODULE_ID_CGEN_PARSE_LAST_ID=END_POS }_cgen_module_type_id_##END_POS;
#else
    #define MODULE_MOD_BEGIN(BEGIN_POS)   enum { MODULE_TAG_##BEGIN_POS = BEGIN_POS,
    #define MODULE_MOD_END(END_POS)     };    
#endif /* GEN_FOR_PC */

#endif /* GLOBAL_MODID_RANGE_H */
