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
 *  nstd_psi_ie_pun.h
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  
 *
 * Author:
 * -------
 *  
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
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
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2002
*
*******************************************************************************
 *  FILENAME : nstd_psi_ie_pun.h
 *  SYNOPSIS : Functions for encoding/decoding.
 *
 *                      R E V I S I O N    H I S T O R Y
 *
 */
#ifdef MTK_PEER 
#define IMP __declspec(dllimport) 
#else 
#define IMP 
#endif 
#ifndef _NSTD_PSI_IE_PUN_H
#define _NSTD_PSI_IE_PUN_H

/* W1043 Suggest Add for RHR */
#include "kal_general_types.h"

IMP unsigned int remain_cell_para_struct_bits(void *);
IMP void remain_cell_para_struct_alloc(void *);
IMP void remain_cell_para_struct_dealloc(void *);
IMP unsigned int remain_cell_para_struct_pack(kal_uint8 *, void *, unsigned int);
IMP unsigned int remain_cell_para_struct_unpack(void *, kal_uint8 *, unsigned int, unsigned int, void *);

IMP unsigned int neighcellparastruct_bits(void *);
IMP void neighcellparastruct_alloc(void *);
IMP void neighcellparastruct_dealloc(void *);
IMP unsigned int neighcellparastruct_pack(kal_uint8 *, void *, unsigned int);
IMP unsigned int neighcellparastruct_unpack(void *, kal_uint8 *, unsigned int, unsigned int, void *);

#define remain_cell_para_struct2_size(x) 1
IMP unsigned int remain_cell_para_struct2_bits(void *);
IMP void remain_cell_para_struct2_alloc(void *);
IMP void remain_cell_para_struct2_dealloc(void *);
IMP unsigned int remain_cell_para_struct2_pack(kal_uint8 *, void *, unsigned int);
IMP unsigned int remain_cell_para_struct2_unpack(void *, kal_uint8 *, unsigned int, unsigned int, void *);

IMP unsigned int structure2_bits(void *);
IMP void structure2_alloc(void *);
IMP void structure2_dealloc(void *);
IMP unsigned int structure2_pack(kal_uint8 *, void *, unsigned int);
IMP unsigned int structure2_unpack(void *, kal_uint8 *, unsigned int, unsigned int, void *);

IMP unsigned int structure1_bits(void *);
IMP void structure1_alloc(void *);
IMP void structure1_dealloc(void *);
IMP unsigned int structure1_pack(kal_uint8 *, void *, unsigned int);
IMP unsigned int structure1_unpack(void *, kal_uint8 *, unsigned int, unsigned int, void *);

IMP unsigned int neighparasetstruct_bits(void *);
IMP void neighparasetstruct_alloc(void *);
IMP void neighparasetstruct_dealloc(void *);
IMP unsigned int neighparasetstruct_pack(kal_uint8 *, void *, unsigned int);
IMP unsigned int neighparasetstruct_unpack(void *, kal_uint8 *, unsigned int, unsigned int, void *);

IMP unsigned int neighcellpara2struct_bits(void *);
IMP void neighcellpara2struct_alloc(void *);
IMP void neighcellpara2struct_dealloc(void *);
IMP unsigned int neighcellpara2struct_pack(kal_uint8 *, void *, unsigned int);
IMP unsigned int neighcellpara2struct_unpack(void *, kal_uint8 *, unsigned int, unsigned int, void *);

#endif 


