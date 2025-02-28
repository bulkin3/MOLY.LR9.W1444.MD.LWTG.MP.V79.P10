#ifndef DRV_SAP_H
#define DRV_SAP_H

#include "sap_range.h"

MODULE_SAP_BEGIN(SAP_ID_DRV_CODE_BEGIN)
	AUDIO_SAP,
	BT_A2DP_SAP,
	BT_APP_SAP,
	BT_AVRCP_SAP,
	BT_BIP_SAP,
	BT_BPP_SAP,
	BT_HFG_SAP,
	BT_OBEX_SAP,
	BT_PBAP_SAP,
	BWCS_BT_SAP,	   
	BWCS_WMT_SAP,
	BWCS_WNDRV_SAP,
	CAL_SAP, 
	CAL_LOW_SAP=CAL_SAP,
    //CAL_SAP,      
	CMUX_UH_SAP,
	DRVTEST_TL1_SAP,
	DRVTEST_L4_SAP,
	FMR_SAP,
	FT_WNDRV_SAP,
	GPS_FT_SAP,
	GPS_MNL_SAP,
	HOSTAP_ABM_SAP,
	HOSTAP_WNDRV_SAP,
	IRCOMM_APP_SAP,
	IRDA_IRCOMM_SAP,
	IRDA_OBEX_SAP,
	MMI_NFC_SAP,
	NFC_APP_NFC_SAP,
	NFC_MMI_SAP,
	NFC_NFC_APP_SAP,
	NFC_NFC_READER_SAP,
	NFC_READER_NFC_SAP,
	RTC_GPS_SAP,
	WMT_BT_SAP,
	WMT_FMR_SAP,	   
	WMT_WMT_SAP,
	WMT_WNDRV_SAP,
	WNDRV_BT_SAP,
	WNDRV_MMI_SAP,	   
	WNDRV_SUPC_SAP,
	WNDRV_TCPIP_SAP,
	WNDRV_WNDRV_SAP,
	L1SP_LTECSR_SAP,
MODULE_SAP_END(SAP_ID_DRV_CODE_TAIL)
		
#endif /* DRV_SAP_H */
