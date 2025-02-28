#ifndef __BSICTRL_APB2_H__
#define __BSICTRL_APB2_H__

#include "reg_base.h"

#if defined(MT6290)
#define	BASE_ADDR_PERISYS_PFBSI_APB2			0xB6F21000
#elif defined(MT6595) || defined(MT6752) || defined(MT6735)
#define	BASE_ADDR_PERISYS_PFBSI_APB2			PF_BSI_APB2_BASE
#endif
#define BASE_ADDR_BSI_DSPIO_IND				0x00000000

#define REG_PERISYS_PFBSI_APB2_IMM_CTRL			(BASE_ADDR_PERISYS_PFBSI_APB2 +0x0)
#define REG_PERISYS_PFBSI_APB2_IMM_WDATA		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x4)
#define REG_PERISYS_PFBSI_APB2_RDINT			(BASE_ADDR_PERISYS_PFBSI_APB2 +0x8)
#define REG_PERISYS_PFBSI_APB2_IMM_RDATA_3100		(BASE_ADDR_PERISYS_PFBSI_APB2 +0xC)
#define REG_PERISYS_PFBSI_APB2_IMM_RDATA_3532		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x10)
#define REG_PERISYS_PFBSI_APB2_SCH_CTRL			(BASE_ADDR_PERISYS_PFBSI_APB2 +0x14)
#define REG_PERISYS_PFBSI_APB2_SCH_RDATA0_3100		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x18)
#define REG_PERISYS_PFBSI_APB2_SCH_RDATA0_3532		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x1C)
#define REG_PERISYS_PFBSI_APB2_SCH_RDATA1_3100		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x20)
#define REG_PERISYS_PFBSI_APB2_SCH_RDATA1_3532		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x24)
#define REG_PERISYS_PFBSI_APB2_TX_GLO_OS0		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x28)
#define REG_PERISYS_PFBSI_APB2_RX_GLO_OS0		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x2C)
#define REG_PERISYS_PFBSI_APB2_TX_GLO_OS1		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x30)
#define REG_PERISYS_PFBSI_APB2_RX_GLO_OS1		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x34)
#define REG_PERISYS_PFBSI_APB2_SCH_START_3100		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x38)
#define REG_PERISYS_PFBSI_APB2_SCH_START_6332		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x3C)
#define REG_PERISYS_PFBSI_APB2_SCH_STOP_3100		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x40)
#define REG_PERISYS_PFBSI_APB2_SCH_STOP_6332		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x44)
#define REG_PERISYS_PFBSI_APB2_SCH_STATUS_3100		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x48)
#define REG_PERISYS_PFBSI_APB2_SCH_STATUS_6332		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x4C)
#define REG_PERISYS_PFBSI_APB2_IND_ADDR			(BASE_ADDR_PERISYS_PFBSI_APB2 +0x50)
#define REG_PERISYS_PFBSI_APB2_IND_DATA			(BASE_ADDR_PERISYS_PFBSI_APB2 +0x54)
#define REG_PERISYS_PFBSI_APB2_IND_RD			(BASE_ADDR_PERISYS_PFBSI_APB2 +0x58)
#define REG_PERISYS_PFBSI_APB2_CLSNINT_CTRL		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x5C)
#define REG_PERISYS_PFBSI_APB2_CLSNINT_SCH3100		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x60)
#define REG_PERISYS_PFBSI_APB2_CLSNINT_SCH6332		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x64)
#define REG_PERISYS_PFBSI_APB2_SRAM_DELSEL		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x68)
#define REG_PERISYS_PFBSI_APB2_MBIST_BACKGROUND		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x6C)
#define REG_PERISYS_PFBSI_APB2_POR_EN			(BASE_ADDR_PERISYS_PFBSI_APB2 +0x70)
#define REG_PERISYS_PFBSI_APB2_IDC_DATA_CNT		(BASE_ADDR_PERISYS_PFBSI_APB2 +0x74)
#define REG_PERISYS_PFBSI_APB2_IDC_DATA_CNT_CTRL	(BASE_ADDR_PERISYS_PFBSI_APB2 +0x78)

#endif
