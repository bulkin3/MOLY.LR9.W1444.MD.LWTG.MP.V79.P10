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
 * phb_sim_access.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   
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
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 * removed!
 *
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _PHB_SIM_ACCESS_H_
#define _PHB_SIM_ACCESS_H_

//#include "stack_ltlcom.h"
#include "phb_control_block.h"
#include "kal_general_types.h"
#include "sim_common_enums.h"
#include "phb_context.h"
#include "kal_public_api.h"

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

    /* Header files should be include before this one */
#ifndef _STACK_LTLCOM_H
//#error "stack_ltlcom.h should be included"
#endif 

    extern kal_bool phb_sim_file_info(control_block_type *control_block, sim_info_type_enum info_type);
    
#ifdef __SIM_SEARCH_RECORD_SUPPORT__
    extern kal_bool phb_sim_search_record(control_block_type *control_block, data_desc_enum type);
#endif
    
    extern kal_bool phb_IO_sim_read(phb_IO_cntx* cntx);
    extern kal_bool phb_IO_sim_write(phb_IO_cntx* cntx);
    extern kal_bool phb_IO_sim_delete(phb_IO_cntx* cntx);

#if !defined(__PHB_NO_CALL_LOG__)
    extern void phb_read_ln_from_sim(control_block_type *control_block);
    extern void phb_write_ln_to_sim(control_block_type *control_block);
#endif /* !defined(__PHB_NO_CALL_LOG__) */
    extern kal_bool phb_sim_write_first_record(
                        control_block_type *control_block,
                        /* data_desc_enum type, */ kal_uint8 chained_id);

#ifdef __PHB_ACCESS_SIM_LN__
    extern kal_bool phb_sim_write_ln(control_block_type *control_block);
    extern kal_bool phb_sim_read_ln(control_block_type *control_block);
    extern kal_bool phb_sim_delete_ln(control_block_type* control_block);
#endif /* __PHB_ACCESS_SIM_LN__ */
#ifdef __cplusplus
}
#endif 

#endif /* _PHB_SIM_ACCESS_H_ */ 

