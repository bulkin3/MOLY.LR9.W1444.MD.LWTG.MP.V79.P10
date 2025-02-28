/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
 *     dcl_pmic6328_init.c
 *
 * Project:
 * --------
 *     MOLY Software
 *
 * Description:
 * ------------
 *     This file is for PMIC 6328
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 * HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "init.h"
#include "dcl.h"

extern DCL_UINT32 DRV_Read_PMIC_Data(DCL_UINT32 pmic_addr);
extern void DRV_Write_PMIC_Data(DCL_UINT32 pmic_addr, DCL_UINT32 value);

void PMIC_DRV_SetData(DCL_UINT32 addr, DCL_UINT32 bitmask, DCL_UINT16 value, DCL_UINT32 bank)
{
   DCL_UINT32 temp;
   addr |= (bank << 31);
   temp = (~(bitmask)) & DRV_Read_PMIC_Data(addr);
   temp |= ((value) & (bitmask));
   DRV_Write_PMIC_Data(addr,temp);
}

// MT6328 ECO_E1
void dcl_pmic6328_modem_only_init(void)
{
	// RG_EN_DRVSEL[4:4] = 0x1 => Ricky
	PMIC_DRV_SetData(0x4       , 0x10      , 0x10      , 0x0);

	// DDUVLO_DEB_EN[0:0] = 0x1 => Ricky
	PMIC_DRV_SetData(0xA       , 0x1       , 0x1       , 0x0);

	// VPROC_PG_H2L_EN[0:0] = 0x1 => Ricky
	PMIC_DRV_SetData(0xC       , 0x1       , 0x1       , 0x0);

	// VAUX18_PG_H2L_EN[1:1] = 0x1 => Ricky
	PMIC_DRV_SetData(0xC       , 0x2       , 0x2       , 0x0);

	// VCORE1_PG_H2L_EN[4:4] = 0x1 => Ricky
	PMIC_DRV_SetData(0xC       , 0x10      , 0x10      , 0x0);

	// VSYS22_PG_H2L_EN[5:5] = 0x1 => Ricky
	PMIC_DRV_SetData(0xC       , 0x20      , 0x20      , 0x0);

	// VLTE_PG_H2L_EN[6:6] = 0x1 => Ricky
	PMIC_DRV_SetData(0xC       , 0x40      , 0x40      , 0x0);

	// VIO18_PG_H2L_EN[7:7] = 0x1 => Ricky
	PMIC_DRV_SetData(0xC       , 0x80      , 0x80      , 0x0);

	// VAUD28_PG_H2L_EN[8:8] = 0x1 => Ricky
	PMIC_DRV_SetData(0xC       , 0x100     , 0x100     , 0x0);

	// VTCXO_PG_H2L_EN[9:9] = 0x1 => Ricky
	PMIC_DRV_SetData(0xC       , 0x200     , 0x200     , 0x0);

	// VUSB_PG_H2L_EN[10:10] = 0x1 => Ricky
	PMIC_DRV_SetData(0xC       , 0x400     , 0x400     , 0x0);

	// VSRAM_PG_H2L_EN[11:11] = 0x1 => Ricky
	PMIC_DRV_SetData(0xC       , 0x800     , 0x800     , 0x0);

	// VIO28_PG_H2L_EN[12:12] = 0x1 => Ricky
	PMIC_DRV_SetData(0xC       , 0x1000    , 0x1000    , 0x0);

	// VM_PG_H2L_EN[13:13] = 0x1 => Ricky
	PMIC_DRV_SetData(0xC       , 0x2000    , 0x2000    , 0x0);

	// UVLO_L2H_DEB_EN[5:5] = 0x1 => Ricky
	PMIC_DRV_SetData(0x10      , 0x20      , 0x20      , 0x0);

	// STRUP_PWROFF_SEQ_EN[0:0] = 0x1 => Ricky
	PMIC_DRV_SetData(0x16      , 0x1       , 0x1       , 0x0);

	// STRUP_PWROFF_PREOFF_EN[1:1] = 0x1 => Ricky
	PMIC_DRV_SetData(0x16      , 0x2       , 0x2       , 0x0);

	// RG_TESTMODE_SWEN[11:11] = 0x0 => CC: Test mode, first command
	PMIC_DRV_SetData(0x1E      , 0x800     , 0x0       , 0x0);

	// RG_RST_DRVSEL[12:12] = 0x1 => Ricky
	PMIC_DRV_SetData(0x40      , 0x1000    , 0x1000    , 0x0);

	// RG_SRCLKEN_IN0_HW_MODE[4:4] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x204     , 0x10      , 0x10      , 0x0);

	// RG_SRCLKEN_IN1_HW_MODE[5:5] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x204     , 0x20      , 0x20      , 0x0);

	// RG_OSC_SEL_HW_MODE[6:6] = 0x1 => Juinn-Ting: E1 only
	PMIC_DRV_SetData(0x204     , 0x40      , 0x40      , 0x0);

	// RG_SMT_WDTRSTB_IN[0:0] = 0x1 => Ricky
	PMIC_DRV_SetData(0x226     , 0x1       , 0x1       , 0x0);

	// RG_SMT_SRCLKEN_IN0[2:2] = 0x1 => Ricky
	PMIC_DRV_SetData(0x226     , 0x4       , 0x4       , 0x0);

	// RG_SMT_SRCLKEN_IN1[3:3] = 0x1 => Ricky
	PMIC_DRV_SetData(0x226     , 0x8       , 0x8       , 0x0);

	// RG_RTC_75K_CK_PDN[2:2] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x242     , 0x4       , 0x4       , 0x0);

	// RG_RTCDET_CK_PDN[3:3] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x242     , 0x8       , 0x8       , 0x0);

	// RG_RTC_EOSC32_CK_PDN[13:13] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x248     , 0x2000    , 0x2000    , 0x0);

	// RG_TRIM_75K_CK_PDN[14:14] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x248     , 0x4000    , 0x4000    , 0x0);

	// RG_75K_32K_SEL[9:9] = 0x1 => Angela
	PMIC_DRV_SetData(0x25A     , 0x200     , 0x200     , 0x0);

	// RG_AUXADC_26M_CK_PDN_HWEN[10:10] = 0x1 => ZF
	PMIC_DRV_SetData(0x278     , 0x400     , 0x400     , 0x0);

	// RG_AUXADC_CK_CKSEL_HWEN[11:11] = 0x1 => ZF
	PMIC_DRV_SetData(0x278     , 0x800     , 0x800     , 0x0);

	// VPROC_VOSEL_CTRL[1:1] = 0x1 => ShangYing
	PMIC_DRV_SetData(0x482     , 0x2       , 0x2       , 0x0);

	// VPROC_SFCHG_FRATE[6:0] = 0x11 => Johnson
	PMIC_DRV_SetData(0x488     , 0x7F      , 0x11      , 0x0);

	// VPROC_SFCHG_RRATE[14:8] = 0x4 => Johnson
	PMIC_DRV_SetData(0x488     , 0x7F00    , 0x400     , 0x0);

	// VPROC_TRANS_TD[1:0] = 0x3 => ShangYing
	PMIC_DRV_SetData(0x498     , 0x3       , 0x3       , 0x0);

	// VPROC_TRANS_CTRL[5:4] = 0x1 => ShangYing
	PMIC_DRV_SetData(0x498     , 0x30      , 0x10      , 0x0);

	// VSRAM_SFCHG_FRATE[6:0] = 0x11 => ShangYing
	PMIC_DRV_SetData(0x4B0     , 0x7F      , 0x11      , 0x0);

	// VSRAM_SFCHG_RRATE[14:8] = 0x4 => ShangYing
	PMIC_DRV_SetData(0x4B0     , 0x7F00    , 0x400     , 0x0);

	// VCORE1_VOSEL_CTRL[1:1] = 0x1 => ShangYing
	PMIC_DRV_SetData(0x60E     , 0x2       , 0x2       , 0x0);

	// VCORE1_SFCHG_FRATE[6:0] = 0x11 => Johnson
	PMIC_DRV_SetData(0x614     , 0x7F      , 0x11      , 0x0);

	// VCORE1_SFCHG_RRATE[14:8] = 0x4 => Johnson
	PMIC_DRV_SetData(0x614     , 0x7F00    , 0x400     , 0x0);

	// VCORE1_VOSEL_SLEEP[6:0] = 0x10 => ShangYing: 0.7V
	PMIC_DRV_SetData(0x61A     , 0x7F      , 0x10      , 0x0);

	// VPA_SFCHG_FRATE[6:0] = 0x4 => Chihao
	PMIC_DRV_SetData(0x664     , 0x7F      , 0x4       , 0x0);

	// VPA_SFCHG_FEN[7:7] = 0x0 => Chihao
	PMIC_DRV_SetData(0x664     , 0x80      , 0x0       , 0x0);

	// VPA_SFCHG_RRATE[14:8] = 0x4 => Chihao
	PMIC_DRV_SetData(0x664     , 0x7F00    , 0x400     , 0x0);

	// VPA_SFCHG_REN[15:15] = 0x0 => Chihao
	PMIC_DRV_SetData(0x664     , 0x8000    , 0x0       , 0x0);

	// VPA_DVS_TRANS_CTRL[5:4] = 0x3 => Chihao
	PMIC_DRV_SetData(0x67E     , 0x30      , 0x30      , 0x0);

	// RG_VEFUSE_MODE_SET[0:0] = 0x0 => Fandy:Disable VEFUSE
	PMIC_DRV_SetData(0xA30     , 0x1       , 0x0       , 0x0);

	// QI_VM_STB[14:14] = 0x0 => Fandy, disable
	PMIC_DRV_SetData(0xA46     , 0x4000    , 0x0       , 0x0);

	// RG_SKIP_OTP_OUT[0:0] = 0x1 => Fandy: for CORE power(VDVFS1x, VCOREx, VSRAM_DVFS) max voltage limitation.
	PMIC_DRV_SetData(0xC14     , 0x1       , 0x1       , 0x0);

	// FG_SLP_EN[8:8] = 0x1 => Ricky
	PMIC_DRV_SetData(0xCBC     , 0x100     , 0x100     , 0x0);

	// FG_ZCV_DET_EN[9:9] = 0x1 => Ricky
	PMIC_DRV_SetData(0xCBC     , 0x200     , 0x200     , 0x0);

	// RG_FG_AUXADC_R[10:10] = 0x1 => Ricky
	PMIC_DRV_SetData(0xCBC     , 0x400     , 0x400     , 0x0);

	// FG_SLP_CUR_TH[15:0] = 0x24 => Ricky
	PMIC_DRV_SetData(0xCC0     , 0xFFFF    , 0x24      , 0x0);

	// FG_SLP_TIME[7:0] = 0x14 => Ricky
	PMIC_DRV_SetData(0xCC2     , 0xFF      , 0x14      , 0x0);

	// FG_DET_TIME[15:8] = 0xFF => Ricky
	PMIC_DRV_SetData(0xCC4     , 0xFF00    , 0xFF00    , 0x0);

	// AUXADC_CK_AON_GPS[13:13] = 0x0 => YP Niou, sync with golden setting
	PMIC_DRV_SetData(0xE94     , 0x2000    , 0x0       , 0x0);

	// AUXADC_CK_AON_MD[14:14] = 0x0 => YP Niou, sync with golden setting
	PMIC_DRV_SetData(0xE94     , 0x4000    , 0x0       , 0x0);

	// AUXADC_CK_AON[15:15] = 0x0 => YP Niou, sync with golden setting
	PMIC_DRV_SetData(0xE94     , 0x8000    , 0x0       , 0x0);

	// AUXADC_TRIM_CH2_SEL[5:4] = 0x1 => Ricky
	PMIC_DRV_SetData(0xEA4     , 0x30      , 0x10      , 0x0);

	// AUXADC_TRIM_CH3_SEL[7:6] = 0x1 => Ricky
	PMIC_DRV_SetData(0xEA4     , 0xC0      , 0x40      , 0x0);

	// AUXADC_TRIM_CH4_SEL[9:8] = 0x1 => Ricky
	PMIC_DRV_SetData(0xEA4     , 0x300     , 0x100     , 0x0);

	// AUXADC_TRIM_CH5_SEL[11:10] = 0x1 => Ricky
	PMIC_DRV_SetData(0xEA4     , 0xC00     , 0x400     , 0x0);

	// AUXADC_TRIM_CH6_SEL[13:12] = 0x1 => Ricky
	PMIC_DRV_SetData(0xEA4     , 0x3000    , 0x1000    , 0x0);

	// AUXADC_TRIM_CH7_SEL[15:14] = 0x2 => Ricky
	PMIC_DRV_SetData(0xEA4     , 0xC000    , 0x8000    , 0x0);

	// AUXADC_TRIM_CH8_SEL[1:0] = 0x1 => Ricky
	PMIC_DRV_SetData(0xEA6     , 0x3       , 0x1       , 0x0);

	// AUXADC_TRIM_CH9_SEL[3:2] = 0x1 => Ricky
	PMIC_DRV_SetData(0xEA6     , 0xC       , 0x4       , 0x0);

	// AUXADC_TRIM_CH10_SEL[5:4] = 0x1 => Ricky
	PMIC_DRV_SetData(0xEA6     , 0x30      , 0x10      , 0x0);

	// AUXADC_TRIM_CH11_SEL[7:6] = 0x1 => Ricky
	PMIC_DRV_SetData(0xEA6     , 0xC0      , 0x40      , 0x0);

	// RG_VCDT_HV_VTH[7:4] = 0xB => Tim:VCDT_HV_th=7V
	PMIC_DRV_SetData(0xF4A     , 0xF0      , 0xB0      , 0x0);

	// RG_VBAT_OV_VTH[3:1] = 0x0 => Tim:for 4.35 battery
	PMIC_DRV_SetData(0xF54     , 0xE       , 0x0       , 0x0);

	// RG_CHRWDT_TD[3:0] = 0x3 => Tim:WDT=32s
	PMIC_DRV_SetData(0xF62     , 0xF       , 0x3       , 0x0);

	// RG_LBAT_INT_VTH[4:0] = 0x2 => Ricky: E1 only
	PMIC_DRV_SetData(0xF6C     , 0x1F      , 0x2       , 0x0);

	// RG_BC11_RST[1:1] = 0x1 => Tim:Disable BC1.1 timer
	PMIC_DRV_SetData(0xF70     , 0x2       , 0x2       , 0x0);

	// RG_CSDAC_STP_DEC[6:4] = 0x0 => Tim:Reduce ICHG current ripple (align 6323)
	PMIC_DRV_SetData(0xF74     , 0x70      , 0x0       , 0x0);

	// RG_CSDAC_MODE[2:2] = 0x1 => Tim:Align 6323
	PMIC_DRV_SetData(0xF7A     , 0x4       , 0x4       , 0x0);

	// RG_HWCV_EN[6:6] = 0x1 => Tim:Align 6323
	PMIC_DRV_SetData(0xF7A     , 0x40      , 0x40      , 0x0);

	// RG_ULC_DET_EN[7:7] = 0x1 => Tim:Align 6323
	PMIC_DRV_SetData(0xF7A     , 0x80      , 0x80      , 0x0);

}
