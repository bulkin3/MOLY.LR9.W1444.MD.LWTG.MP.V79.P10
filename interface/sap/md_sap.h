
#include "sap_range.h"

#ifndef MD_SAP_H
#define MD_SAP_H

MODULE_SAP_BEGIN(SAP_ID_MD_CODE_BEGIN)
    L1_L4C_SAP,
    L4C_L1_SAP,
    L4C_UL1_SAP,
    ADR_DRLC_SAP,
    ADR_TL1_SAP,
    ADR_UL1_SAP,
    ADR_ADR_SAP,
    AS_L4C_SAP,
    ATCI_SAP,
    PROXY_ATCI_SAP,
    BMC_DRLC_SAP,
    CISS_CISS_SAP,
    CSCE_CSE_SAP,
    CSCE_MEME_SAP,
    CSCE_SIBE_SAP,
    CSCE_SLCE_SAP,
    CSCE_TL1_SAP,
    CSCE_UL1_SAP,
    CSCE_USIME_SAP,
    CSE_MEME_SAP,
    CSE_RSVAU_SAP,
    CSE_SIBE_SAP,
    CSE_SLCE_SAP,
    CSE_TL1_SAP,
    CSE_UL1_SAP,
    CSM_L2R_SAP,
    CSM_L4C_SAP,
    CSM_SIM_SAP,
    CSM_T30_SAP,
    CSM_TDT_SAP,
    CSR_DRLC_SAP,
    CSR_L1AUD_SAP,
    CSR_UMAC_SAP,
    DRIVER_L1_SAP,
    DRLC_UMAC_SAP,
    DRLC_URLC_SAP,
    DT_L4C_SAP,
    EM_L1_SAP,
    EM_PS_SAP,
    EXTMODEM_L4C_SAP,
    FA_RA_SAP,
    FT_UL1TST_SAP,
    GAS_COMMON_SAP,
    GAS_CSCE_SAP, 
    EAS_CSCE_SAP, 
    GAS_MEME_SAP,
    EAS_MEME_SAP,
    GAS_MEME_MEAS_REPORT_SAP,
    GAS_RRCE_SAP,
    EAS_RRCE_SAP,
    GAS_RSVAG_SAP,
    GAS_UL2_SAP,
    GAS_UL2D_SAP,
    GAS_USIME_SAP,
    GAS_EAS_SAP,
    GMM_RLC_SAP,
    GMM_SM_SAP,
    GMMREG_SAP,
    GPS_L1_SAP,
    GPS_SUPL_SAP,
    GPS_UL1_SAP,
    L1_AS_SAP,
    L1_EM_SAP,
    L1_GAS_SAP,
    L1_L1_SAP,
    L1_LAPDM_SAP,
    L1_MPAL_SAP,
    L1_UAS_SAP,
    L1HISR_AS_SAP,
    L1HISR_GAS_SAP,
    L2R_RLP_SAP,
    L2R_SMU_SAP,
    L4_AUD_SAP,
    L4C_MEME_SAP,
    L4C_RRCE_SAP,
    L4C_RATDM_SAP,
    L4C_RRLP_SAP, //agps_up_cp_conflict
    L4C_SAP,
    PSDM_L4C_SAP,
    LAPDM_MPAL_SAP,
    LLC_GMM_SAP,
    LLC_RLC_SAP,
    LLC_SMS_SAP,
    LLC_SNDCP_SAP,
    MAC_L1_SAP,
    MAC_MPAL_SAP,
    MAC_RRM_SAP,
    MEME_DRLC_SAP,
    MEME_SIBE_SAP,
    MEME_SLCE_SAP,
    MEME_TL1_SAP,
    MEME_TL1_MEAS_REPORT_SAP,
    MEME_UL1_SAP,
    MEME_UMAC_SAP,
    MM_AS_SAP,
    MM_CC_SAP,
    MM_RATCM_SAP,
    MM_RATDM_SAP,
    MM_SIM_SAP,
    MM_SMS_SAP,
    MM_SS_SAP,
    MMREG_SAP,
    MNCC_SAP,
    MNSMS_SAP,
    MNSS_SAP,
    MPAL_L1_SAP,
    MPAL_UL1_SAP,
    PDCP_DRLC_SAP,
    PDCP_RABM_SAP,
    PDCP_URLC_SAP,
    PHB_L4C_SAP,
    PS_SIM_SAP,
    PSDM_SAP,
    RAC_L4C_SAP,
    RAC_MEME_SAP,
    RATCM_BMC_SAP,
    RATCM_CSCE_SAP,
    RATCM_CSE_SAP,
    RATCM_CSR_SAP,
    RATCM_GAS_SAP,
    RATCM_L4C_SAP, 
    RATCM_LLC_SAP,
    RATCM_RATDM_SAP,
    RATCM_RLC_SAP,
    RATCM_RRCE_SAP,
    RATCM_SLCE_SAP,
    RATCM_URLC_SAP,
    RATCM_USIME_SAP,
    RATDM_RABM_SAP,
    RATDM_RATDM_SAP,
    RATDM_SNDCP_SAP,
    RATDM_URLC_SAP,
    RATDM_PDCP_SAP,
    RLC_MAC_SAP,
    RLC_MPAL_SAP,
    RLC_REASM_SAP,
    RLC_RRM_SAP,
    RLP_RA_SAP,
    RR_PRR_SAP,
    RR_RRLP_SAP,
    RRCE_BMC_SAP,
    RRCE_CSCE_SAP,
    RRCE_DRLC_SAP,
    RRCE_MEME_SAP,
    RRCE_PDCP_SAP,
    RRCE_RABM_SAP,
    RRCE_RRCE_SAP,
    RRCE_SIBE_SAP,
    RRCE_SLCE_SAP,
    RRCE_TL1_SAP,
    RRCE_UL1_SAP,
    RRCE_UMAC_SAP,
    RRCE_URLC_SAP,
    RRCE_USIME_SAP,
    RRLP_GAS_SAP, 
    RRLP_RATCM_SAP, 
    RRM_LAPDM_SAP,
    RRM_MPAL_SAP,
    RSVAK_SAP,
    RSVAU_UL1_SAP,
    SEQ_SEQ_SAP,
    SEQ_UL1_SAP,
    SIBE_SLCE_SAP,
    SIBE_TL1_SAP,
    SIBE_UL1_SAP,
    SLCE_BMC_SAP,
    SLCE_CSR_SAP,
    SLCE_PDCP_SAP,
    SLCE_RABM_SAP,
    SLCE_RSVAU_SAP,
    SLCE_SLCE_SAP,
    SLCE_TL1_SAP,
    SLCE_UL1_SAP,
    SLCE_UL2SEQ_SAP,
    SLCE_UMAC_SAP,
    SLCE_URLC_SAP,
    SM_RATDM_SAP,
    SM_SNDCP_SAP,
    SME_TIMER_SAP,
    SMREG_SAP,
    SMSAL_AS_SAP,
    SMSAL_L4C_SAP,
    SMSAL_RATCM_SAP,
    SMU_L4C_SAP,
    SNDCP_REG_SAP,
    T30_FA_SAP,
    T30_L4C_SAP,
    L4C_RAT_TCM_SAP,
    RAT_TCM_TCM_SAP,
    TCM_RATDM_SAP,
    TL1_FTA_SAP,
    TL1_LL1_SAP,
    TL1_TL1_SAP,
    TL1_TL1DATA_SAP,
    TL1_TL1HISR_SAP,
    UAGPS_CP_CSCE_SAP,
    UAGPS_CP_L4C_SAP,
    UAGPS_CP_MEME_SAP,
    UAGPS_CP_RATCM_SAP,
    UAGPS_CP_SIBE_SAP,
    UAS_GAS_SAP,
    UAS_L1_SAP,
    UEM_L4C_SAP,
    UL1_L1_SAP,
    UL1_L4C_SAP,
    UL1_MPAL_SAP,
    UL1_UL1_SAP,
    UL1_UL1DATA_SAP,
    UL1C_SAP,
    UL1HISR_UL1_SAP,
    UL1SM_SAP,
    UL1TST_FT_SAP,
    UMAC_SEQ_SAP,
    UMAC_TL1_SAP,
    UMAC_TL1DATA_SAP,
    UMAC_UL1_SAP,
    UMAC_UL2ACCRXHISR_SAP,
    UMAC_UMAC_SAP,
    URLC_SEQ_SAP,
    URLC_UL1_SAP,
    URLC_UL2ACCRXHISR_SAP,   
    URLC_UMAC_SAP,
    URLC_URLC_SAP,
    URR_RSVAU_SAP,
    URR_SAP, 
    EAS_SAP,
    EAS_RSVAE_SAP,
    WISE_L4C_SAP,
    DRLC_L2HWREASSIM_SAP,
    UL2_L2HWACCSIM_SAP, 
    UL2_L2HWREASMSIM_SAP,
    L1SIM_MAIN_TASK_SAP,
    PROCCPU_TASK_SAP,
    HAPLUS_TASK_SAP,
    UEGW_L4C_SAP,
    VMMI_L4C_SAP,
    /* Add by LTE SS for LTE related */
    CLDMACORE_EL1_SAP,
    ERRC_EL1_SAP,
    EMAC_EL1_SAP,
    EL1HISR_EL1_SAP,
    EL1_EL1_SAP,
    EL1_EL1_LOW_PRIO_SAP,
    EL1_EL2_SAP,
    EMAC_EL1TX_SAP,
    EL1_EL1TX_SAP,
    LTE_DYN_SAP,
    L1_MLL1_SAP, /* for MM LL1 sap*/
    MLL1_L1_SAP,
    UL1_MLL1_SAP,
    MLL1_UL1_SAP,
    TL1_MLL1_SAP,
    MLL1_TL1_SAP,
    EL1_MLL1_SAP,
    MLL1_EL1_SAP,
    LTE_TIMER_SAP,
    UPCM_SAP,
    UPCM_IMS_SAP,
    UPCM_DESC_SAP,
    LTM_SAP,
    LTM_EPDCP_SAP,
    LTM_EMAC_SAP,
    HISR_EMAC_SAP,
    SIM_SIM_SAP,
    L4C_SM_SAP,

    /* TFTLIB */
    TFTLIB_SAP,
    TFTLIB2_SAP,
    
    /* NWSEL */
    RAC_NWSEL_SAP,
    NWSEL_MM_SAP,
    NWSEL_RATCM_SAP,
    
    /** ESM related SAP **/
    SM_ESM_SAP, 
    ESM_LTM_SAP, 
    NIL_ESM_SAP,
    
    /** ETC related SAP **/
    UPCM_ETC_SAP,
    ETC_EMM_SAP,
         
    /** EVAL related SAP **/
    NWSEL_EVAL_SAP,
    RAC_EVAL_SAP,
    TCM_EVAL_SAP,
    L4C_EVAL_SAP,
    SMS_EVAL_SAP,
    SMSAL_EVAL_SAP,
    CISS_EVAL_SAP,
    EVAL_EMM_SAP,
    EVAL_ESM_SAP,
    EVAL_ETC_SAP,
    EVAL_ERRC_SAP,
    
    /* EMM External Related SAP (by layer order) */
    EMM_ERRC_SAP,
    ESM_EMM_SAP,
    MM_EMM_SAP,
    
    /* EMM Internal Related SAP (by alphabetical order) */
    EMM_CALL_CONN_SAP,
    EMM_CALL_ERRCIF_SAP,
    EMM_CALL_ESMIF_SAP,
    EMM_CALL_EVALIF_SAP,
    EMM_CALL_EVTCTRL_SAP,
    EMM_CALL_MMIF_SAP,
    EMM_CALL_NASMSG_SAP,
    EMM_CALL_PLMNSEL_SAP,
    EMM_CALL_RATCHG_SAP,
    EMM_CALL_REG_SAP,
    EMM_CALL_SEC_SAP,
    EMM_CALL_SV_SAP,
    EMM_CALL_TIMERIF_SAP,
    EMM_CMNPROC_ERRCIF_SAP,
    EMM_CMNPROC_EVALIF_SAP,
    EMM_CMNPROC_NASMSG_SAP,
    EMM_CMNPROC_PLMNSEL_SAP,
    EMM_CMNPROC_REG_SAP,
    EMM_CONN_ERRCIF_SAP,
    EMM_CONN_ESMIF_SAP,
    EMM_CONN_ETCIF_SAP,
    EMM_CONN_EVALIF_SAP,
    EMM_CONN_NASMSG_SAP,
    EMM_CONN_PLMNSEL_SAP,
    EMM_CONN_RATBAND_SAP,
    EMM_CONN_RATCHG_SAP,
    EMM_CONN_REG_SAP,
    EMM_CONN_SEC_SAP,
    EMM_CONN_TIMERIF_SAP,
    EMM_ERRCIF_ESMIF_SAP,
    EMM_ERRCIF_ETCIF_SAP,
    EMM_ERRCIF_NASMSG_SAP,
    EMM_ERRCIF_PLMNSEL_SAP,
    EMM_ERRCIF_RATBAND_SAP,
    EMM_ERRCIF_RATCHG_SAP,
    EMM_ERRCIF_REG_SAP,
    EMM_ERRCIF_SEC_SAP,
    EMM_ERRCIF_SV_SAP,
    EMM_ESMIF_NASMSG_SAP,
    EMM_ESMIF_RATCHG_SAP,
    EMM_ESMIF_REG_SAP,
    EMM_ESMIF_SV_SAP,
    EMM_ESMIF_PLMNSEL_SAP, // for IMS
    EMM_ESMIF_SEC_SAP, // for IMS
    EMM_ETCIF_NASMSG_SAP,
    EMM_ETCIF_REG_SAP,
    EMM_ETCIF_SV_SAP,
    EMM_EVALIF_NASMSG_SAP,
    EMM_EVALIF_PLMNSEL_SAP,
    EMM_EVALIF_RATBAND_SAP,
    EMM_EVALIF_RATCHG_SAP,
    EMM_EVALIF_REG_SAP,
    EMM_EVALIF_SEC_SAP,
    EMM_EVALIF_SV_SAP,
    EMM_EVTCTRL_PLMNSEL_SAP,
    EMM_EVTCTRL_RATBAND_SAP,
    EMM_EVTCTRL_RATCHG_SAP,
    EMM_EVTCTRL_REG_SAP,
    EMM_EVTCTRL_SV_SAP,
    EMM_EVTCTRL_TIMERIF_SAP,
    EMM_MMIF_RATCHG_SAP,
    EMM_MMIF_REG_SAP,
    EMM_NASMSG_PLMNSEL_SAP,
    EMM_NASMSG_REG_SAP,
    EMM_NASMSG_SEC_SAP,
    EMM_PLMNSEL_RATCHG_SAP,
    EMM_PLMNSEL_REG_SAP,
    EMM_PLMNSEL_SEC_SAP,
    EMM_PLMNSEL_SV_SAP,
    EMM_PLMNSEL_TIMERIF_SAP,
    EMM_RATBAND_RATCHG_SAP,
    EMM_RATBAND_REG_SAP,
    EMM_RATBAND_SV_SAP,
    EMM_RATBAND_TIMERIF_SAP,
    EMM_RATCHG_REG_SAP,
    EMM_RATCHG_SEC_SAP,
    EMM_RATCHG_SV_SAP,
    EMM_RATCHG_TIMERIF_SAP,
    EMM_REG_SEC_SAP,
    EMM_REG_SV_SAP,
    EMM_REG_TIMERIF_SAP,
    EMM_SEC_SV_SAP,
    EMM_SEC_TIMERIF_SAP,
    EMM_SV_TIMERIF_SAP,

    /** ERRC related SAP **/
    //internal event use
    EVTH_ALL_SAP,
    RCM_CONN_SAP,
    RCM_MOB_SAP,
    RCM_SPV_SAP,
    RCM_CEL_SAP,
    CEL_CHM_SAP,
    CEL_CONN_SAP,
    CEL_MOB_SAP,
    CEL_SPV_SAP,
    CEL_SYS_SAP,
    CHM_CONN_SAP,
    CHM_MOB_SAP,
    CHM_SPV_SAP,
    CHM_SYS_SAP,
    CONN_MOB_SAP,
    CONN_SPV_SAP,
    MOB_SPV_SAP,
    SPV_SYS_SAP,
    ERRC_CEL_SAP,    
    ERRC_CHM_SAP,        
    ERRC_CONN_SAP,    
    ERRC_MOB_SAP,    
    ERRC_RCM_SAP,        
    ERRC_SPV_SAP,    
    ERRC_SYS_SAP,

    /* LTE L2 */
    ERLCUL_ERLCDL_SAP,
    ERLCUL_EMAC_SAP,
    ERLCDL_EMAC_SAP,
    EPDCP_ERLCDL_SAP,
    EPDCP_ERLCUL_SAP,
    EPDCP_EMAC_SAP,
    EPDCP_EPDCP_SAP,
    EMAC_EMAC_SAP,
    ERRC_EMAC_SAP,
    ERRC_ERLCUL_SAP,
    ERRC_ERLCDL_SAP,
    ERRC_EPDCP_SAP,

    /* MRS */
    MRS_RAC_SAP,
    MRS_RRM_SAP,
    MRS_CSCE_SAP,
    MRS_RRCE_SAP,
    MRS_USIME_SAP,
    MRS_SIM_SAP,
    MRS_EAS_SAP,
    
    /* RSVAS */
    RSVAS_SAP,
    RSVAS_NIL_SAP,
    RSVAS_RSVAU_SAP,
    RSVAS_L4C_SAP,
    RSVAS_MRS_SAP,
    RSVAS_URR_SAP,
    RSVAS_RRCE_SAP,
    RSVAS_CSCE_SAP,
    RSVAS_UL2_SAP,
    RSVAS_UL2D_SAP,
    RSVAS_RRM_SAP,
    RSVAS_MPAL_SAP,
    RSVAS_ERRC_SAP,
    RSVAS_EL2TASK_SAP,
    RSVAS_UL1_SAP,
    RSVAS_TL1_SAP,
    RSVAS_L1_SAP,
    RSVAS_LL1_SAP,
    RSVAS_EL1_SAP,

    /* EM SAP */
    EM_EL2_SAP,
    EM_EL1_SAP,
    SM_SM_SAP,
		MM_MM_SAP,

	/*RAC GAS SAP for MMDS_DC*/
	RAC_GAS_SAP,

    RAT_TCM_SAP,
    TCM_SAP,
    GAS_TL1_SAP,
    GAS_EL1_SAP,
    
    /* IMC */
    IMC_IMC_SAP,
    IMSP_IMC_SAP,
    IMC_LTECSR_SAP,
    IMCB_IMC_SAP,
    DHL_IMC_SAP,
    IMC_UPCM_SAP,

    /* LTECSR */
    LTECSR_ERRC_SAP,

    /* SDM */
    SDM_IMSP_SAP,
    SDM_IMC_SAP,

    /* VDM */
    VDM_IMSP_SAP,
    VDM_IMC_SAP,
    VDM_CTRL_TRK_SAP,
    VDM_CTRL_ADS_SAP,
    VDM_CTRL_VCC_SAP,
    VDM_TRK_ADS_SAP,
    VDM_TRK_VCC_SAP,
    VDM_ADS_VCC_SAP,

    /* IMCSMS */
    IMCSMS_IMC_SAP,

    SMSAL_SMSAL_SAP,

    /* LPP SAP */
    LCSP_GNSS_SAP,
    LPP_EVAL_SAP,
    LPP_ERRC_SAP,
    LPP_EL1_SAP,
    LPP_L4C_SAP,
    LPP_LBS_SAP,
    L4C_LBS_SAP,
    ATCI_LBS_SAP,

    /* GMSS SAP */
    RAC_GMSS_SAP,
    GMSS_NWSEL_SAP,

	/* CSM SAP */
	CSM_RRCE_SAP,
    TCM_GMSS_SAP,

    /* dynamic SBP switch */
    L4C_ME_SAP,
MODULE_SAP_END(SAP_ID_MD_CODE_TAIL)

#endif /* MD_SAP_H */
