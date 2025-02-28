// SAP info define macros for use in MSC composer
#ifdef GEN_FOR_CPARSER
#define BEGIN_SAP_INFO \
    typedef enum {
#define SAP_INFO(_SAP,_MODA,_MODB) \
        _SAP##__##_MODA##__##_MODB,
#define END_SAP_INFO \
    } sap_info;
#else
#define BEGIN_SAP_INFO
#define SAP_INFO(_SAP,_MODA,_MODB)
#define END_SAP_INFO
#endif

/* SAP info is used by MSC composer to infer the SAP for messages between modules.
 * For example, 
 * SAP_INFO(RRM_RMPC_SAP,MOD_RRM,MOD_RMC) 
 *  declares messages between MOD_RRM and MOD_RMC modules belong to RRM_RMPC_SAP.
 
 * Syntax rules for SAP_INFO:
 * 1. ANY is used to match any modules 
 * 2. a SAP can exist between more than one pair of modules
 * 3. INVALID_SAP is the default SAP between two modules if there is no matching SAP_INFO(...)
 * 4. SAP can be directional if both SAP_INFO(SAP_A_B,MOD_A,MOD_B) and SAP_INFO(SAP_B_A,MOD_B,MOD_A) exist.
 * 5. SAP and module names should not begin or end with '_'.
 * 6. SAP info search priority for messages from MOD_A to MOD_B
 *    1) MOD_A MOD_B
 *    2) MOD_B MOD_A
 *    3) MOD_A ANY
 *    4) ANY MOD_A
 *    5) ANY MOD_B
 *    6) MOD_B ANY
 *    7) INVALID_SAP (default) 
 */ 
BEGIN_SAP_INFO
	SAP_INFO(GMMREG_SAP,MOD_MM,MOD_RAC)
	SAP_INFO(MM_SMS_SAP,MOD_MM,MOD_SMS)
	SAP_INFO(MM_CC_SAP,MOD_MM,MOD_CC)
	SAP_INFO(MM_SS_SAP,MOD_MM,MOD_CISS)
	SAP_INFO(MM_AS_SAP,MOD_MM,MOD_AS)
	SAP_INFO(MM_AS_SAP,MOD_MM,MOD_RRM)
	SAP_INFO(MM_SIM_SAP,MOD_MM,MOD_SIM)
	SAP_INFO(GMM_SM_SAP,MOD_MM,MOD_SM)
	SAP_INFO(MNCC_SAP,MOD_CC,MOD_CSM)
	SAP_INFO(MNSMS_SAP,MOD_SMS,MOD_SMSAL)
	SAP_INFO(MNSS_SAP,MOD_CISS,MOD_CSM)
	SAP_INFO(CISS_CISS_SAP,MOD_CISS,MOD_CISS)
	SAP_INFO(CSM_TDT_SAP,MOD_CSM,MOD_TDT)
	SAP_INFO(CSM_L2R_SAP,MOD_CSM,MOD_L2R)
	SAP_INFO(CSM_SIM_SAP,MOD_CSM,MOD_SIM)
	SAP_INFO(CSM_L4C_SAP,MOD_CSM,MOD_L4C)
	SAP_INFO(CSM_VT_SAP,MOD_CSM,MOD_VT)
	#ifdef __TC7__CS__SUPPORT__
	SAP_INFO(CSM_RRCE_SAP,MOD_CSM,MOD_RRCE)
	#endif
	SAP_INFO(SMSAL_L4C_SAP,MOD_SMSAL,MOD_L4C)
	SAP_INFO(UEM_L4C_SAP,MOD_UEM,MOD_L4C)
	SAP_INFO(PHB_L4C_SAP,MOD_PHB,MOD_L4C)
	SAP_INFO(SMU_L4C_SAP,MOD_SMU,MOD_L4C)
	SAP_INFO(L4C_RAT_TCM_SAP,MOD_L4C,MOD_RAT_TCM)
	SAP_INFO(L4C_RAT_TCM_SAP,MOD_RAT_TCM,MOD_L4C)
	SAP_INFO(RAT_TCM_TCM_SAP,MOD_RAT_TCM,MOD_TCM)
	SAP_INFO(RAT_TCM_TCM_SAP,MOD_TCM,MOD_RAT_TCM)
	SAP_INFO(RAC_L4C_SAP,MOD_L4C,MOD_RAC)
	SAP_INFO(UART_L4C_SAP,MOD_UART,MOD_L4C)
	SAP_INFO(L4C_SM_SAP,MOD_SM,MOD_L4C)
	SAP_INFO(L4C_SM_SAP,MOD_L4C,MOD_SM)
	SAP_INFO(L4C_SAP,MOD_L4C,MOD_L4C_2)
	SAP_INFO(RRM_RMPC_SAP,MOD_RRM,MOD_RMC)
	SAP_INFO(RRM_RMPC_SAP,MOD_RRM,MOD_RMPC)
	SAP_INFO(RRM_RMPC_SAP,MOD_RRM,MOD_AS)
	SAP_INFO(RMC_LAPDM_SAP,MOD_RMC,MOD_LAPDM)
	SAP_INFO(LAPDM_MPAL_SAP,MOD_LAPDM,MOD_MPAL)
	SAP_INFO(RLC_MAC_SAP,MOD_RLC,MOD_MAC)
	SAP_INFO(RLC_RMPC_SAP,MOD_RLC,MOD_RMPC)
	SAP_INFO(RLC_MPAL_SAP,MOD_RLC,MOD_MPAL)
	SAP_INFO(RLC_REASM_SAP,MOD_RLC,MOD_REASM)
	SAP_INFO(MAC_RMPC_SAP,MOD_MAC,MOD_RMPC)
	SAP_INFO(RRM_MPAL_SAP,MOD_RRM,MOD_MPAL)
	SAP_INFO(RMPC_MPAL_SAP,MOD_RMPC,MOD_MPAL)
	SAP_INFO(RMPC_MPAL_SAP,MOD_RMC,MOD_MPAL)
	SAP_INFO(RMPC_MPAL_SAP,MOD_AS,MOD_MPAL)
	SAP_INFO(MAC_MPAL_SAP,MOD_MAC,MOD_MPAL)
	SAP_INFO(MMI_AS_SAP,MOD_RAC,MOD_AS)
	SAP_INFO(SMSAL_AS_SAP,MOD_SMS,MOD_AS)
	SAP_INFO(LLC_GMM_SAP,MOD_LLC,MOD_MM)
	SAP_INFO(LLC_RLC_SAP,MOD_LLC,MOD_RLC)
	SAP_INFO(LLC_SNDCP_SAP,MOD_LLC,MOD_SNDCP)
	SAP_INFO(LLC_SMS_SAP,MOD_LLC,MOD_SMS)
	SAP_INFO(GMM_RLC_SAP,MOD_MM,MOD_RLC)
	SAP_INFO(SNDCP_REG_SAP,MOD_SNDCP,MOD_TCM)
	SAP_INFO(SM_SNDCP_SAP,MOD_SM,MOD_SNDCP)
	SAP_INFO(SMREG_SAP,MOD_SM,MOD_TCM)
	SAP_INFO(PPP_L4C_SAP,MOD_PPP,MOD_L4C)
	SAP_INFO(PPP_RAT_TCM_SAP,MOD_PPP,MOD_RAT_TCM)
	SAP_INFO(PPP_RAT_TCM_SAP,MOD_RAT_TCM,MOD_PPP)
	SAP_INFO(L2R_RLP_SAP,MOD_L2R,MOD_RLP)
	SAP_INFO(RLP_RA_SAP,MOD_RLP,MOD_L1)
	SAP_INFO(SNDCP_PPP_SAP,MOD_SNDCP,MOD_PPP)
	SAP_INFO(DATA_MPAL_SAP,MOD_RLP,MOD_MPAL)
	SAP_INFO(PS_NVRAM_SAP,MOD_NVRAM,ANY)
	SAP_INFO(PS_SIM_SAP,MOD_SIM,MOD_SMU)
	SAP_INFO(PS_SIM_SAP,MOD_SIM,MOD_L4C)
	SAP_INFO(PS_SIM_SAP,MOD_SIM,MOD_AS)
	SAP_INFO(PS_SIM_SAP,MOD_SIM,MOD_RRM)
	SAP_INFO(PS_SIM_SAP,MOD_SIM,MOD_MM)
	SAP_INFO(PS_SIM_SAP,MOD_SIM,MOD_NWSEL)
	SAP_INFO(PS_SIM_SAP,MOD_SIM,MOD_GMSS)
	SAP_INFO(PS_SIM_SAP,MOD_SIM,MOD_EVAL)
	SAP_INFO(PS_SIM_SAP,MOD_SIM,MOD_USIME)
	SAP_INFO(PS_SIM_SAP,MOD_SIM,MOD_MEME)
	SAP_INFO(PS_SIM_SAP,MOD_SIM,MOD_SMSAL)
	SAP_INFO(PS_SIM_SAP,MOD_SIM,MOD_CSM)
	SAP_INFO(PS_SIM_SAP,MOD_SIM,MOD_BT)
	SAP_INFO(PS_SIM_SAP,MOD_SIM,MOD_PHB)
	SAP_INFO(SIM_SIM_SAP,MOD_SIM,MOD_SIM)
	SAP_INFO(SIM_SIM_SAP,MOD_SIM,MOD_SIM_2)	
	SAP_INFO(MED_SAP,MOD_MED,ANY)
	SAP_INFO(MMI_L4C_SAP,MOD_MMI,MOD_L4C)
	SAP_INFO(ABM_SOC_SAP,MOD_ABM,MOD_SOC)
	SAP_INFO(L4C_ABM_SAP,MOD_L4C,MOD_ABM)
	SAP_INFO(TCPIP_SOC_SAP,MOD_TCPIP,MOD_SOC)
	SAP_INFO(WAP_MMI_SAP,MOD_MMI,MOD_WAP)
	SAP_INFO(TDT_PPP_SAP,MOD_TDT,MOD_PPP)
	SAP_INFO(L2R_PPP_SAP,MOD_L2R,MOD_PPP)
	SAP_INFO(PPP_TCPIP_SAP,MOD_PPP,MOD_TCPIP)
	SAP_INFO(TCM_TCPIP_SAP,MOD_TCM,MOD_TCPIP)
	SAP_INFO(SOC_APP_SAP,MOD_SOC,ANY)
	SAP_INFO(SMSAL_SOC_SAP,MOD_SMSAL,MOD_SOC)
	SAP_INFO(EM_PS_SAP,MOD_DHL,ANY)
	SAP_INFO(MPAL_L1_SAP,MOD_MPAL,MOD_L1)
	SAP_INFO(MAC_L1_SAP,MOD_MAC,MOD_L1)
	SAP_INFO(RMC_LAPDM_SAP,MOD_AS,MOD_LAPDM)
	SAP_INFO(MAC_RRM_SAP,MOD_MAC,MOD_AS)
	SAP_INFO(MAC_RMPC_SAP,MOD_MAC,MOD_AS)
	SAP_INFO(UL1_MAL1_SAP,MOD_MAL1,MOD_UL1)
	SAP_INFO(RATCM_RRCE_SAP,MOD_RATCM,MOD_RRCE)
	SAP_INFO(RATCM_RRCE_SAP,MOD_RATCM_2,MOD_RRCE_2)
	SAP_INFO(RATCM_SLCE_SAP,MOD_RATCM,MOD_SLCE)
	SAP_INFO(RATCM_SLCE_SAP,MOD_RATCM_2,MOD_SLCE_2)
	SAP_INFO(RATCM_CSCE_SAP,MOD_RATCM,MOD_CSCE)
	SAP_INFO(RATCM_CSCE_SAP,MOD_RATCM_2,MOD_CSCE_2)
	SAP_INFO(RATCM_CSE_SAP,MOD_RATCM,MOD_CSE)
	SAP_INFO(RATCM_CSE_SAP,MOD_RATCM_2,MOD_CSE_2)
	SAP_INFO(RATCM_USIME_SAP,MOD_RATCM,MOD_USIME)
	SAP_INFO(RATCM_CSR_SAP,MOD_RATCM,MOD_CSR)
	SAP_INFO(RATCM_BMC_SAP,MOD_RATCM,MOD_BMC)
	SAP_INFO(RATCM_BMC_SAP,MOD_RATCM_2,MOD_BMC_2)
	SAP_INFO(RATCM_URLC_SAP,MOD_RATCM,MOD_URLC)
	SAP_INFO(RATCM_URLC_SAP,MOD_RATCM_2,MOD_URLC_2)
	SAP_INFO(UAS_GAS_SAP,MOD_UAS,MOD_GAS)
	SAP_INFO(SLCE_URLC_SAP,MOD_SLCE,MOD_URLC)
	SAP_INFO(SLCE_URLC_SAP,MOD_SLCE_2,MOD_URLC_2)
	SAP_INFO(RRCE_URLC_SAP,MOD_RRCE,MOD_URLC)
	SAP_INFO(RRCE_URLC_SAP,MOD_RRCE_2,MOD_URLC_2)
	SAP_INFO(URR_SAP,MOD_DRLC,MOD_URR)
	SAP_INFO(URR_SAP,MOD_DRLC_2,MOD_URR_2)
	SAP_INFO(URR_SAP,MOD_URR,MOD_RRCE)
	SAP_INFO(URR_SAP,MOD_URR_2,MOD_RRCE_2)
	SAP_INFO(CSR_DRLC_SAP,MOD_CSR,MOD_DRLC)
	SAP_INFO(CSR_DRLC_SAP,MOD_CSR,MOD_DRLC_2)
	SAP_INFO(BMC_DRLC_SAP,MOD_BMC,MOD_DRLC)
	SAP_INFO(BMC_DRLC_SAP,MOD_BMC_2,MOD_DRLC_2)
	SAP_INFO(PDCP_DRLC_SAP,MOD_PDCP,MOD_DRLC)
	SAP_INFO(PDCP_DRLC_SAP,MOD_PDCP,MOD_DRLC_2)
	SAP_INFO(PDCP_URLC_SAP,MOD_PDCP,MOD_URLC)
	SAP_INFO(PDCP_URLC_SAP,MOD_PDCP,MOD_URLC_2)
	SAP_INFO(RRCE_DRLC_SAP,MOD_RRCE,MOD_DRLC)
	SAP_INFO(RRCE_DRLC_SAP,MOD_RRCE_2,MOD_DRLC_2)
	SAP_INFO(MEME_DRLC_SAP,MOD_MEME,MOD_DRLC)
	SAP_INFO(MEME_DRLC_SAP,MOD_MEME_2,MOD_DRLC_2)
	SAP_INFO(ADR_DRLC_SAP,MOD_ADR,MOD_DRLC)
	SAP_INFO(ADR_DRLC_SAP,MOD_ADR_2,MOD_DRLC_2)
	SAP_INFO(DRLC_URLC_SAP,MOD_DRLC,MOD_URLC)
	SAP_INFO(DRLC_URLC_SAP,MOD_DRLC_2,MOD_URLC_2)
	SAP_INFO(SLCE_PDCP_SAP,MOD_SLCE,MOD_PDCP)
	SAP_INFO(SLCE_PDCP_SAP,MOD_SLCE_2,MOD_PDCP)
	SAP_INFO(PDCP_RABM_SAP,MOD_PDCP,MOD_RABM)
	SAP_INFO(SLCE_BMC_SAP,MOD_SLCE,MOD_BMC)
	SAP_INFO(SLCE_BMC_SAP,MOD_SLCE_2,MOD_BMC_2)
	SAP_INFO(RRCE_BMC_SAP,MOD_RRCE,MOD_BMC)
	SAP_INFO(RRCE_BMC_SAP,MOD_RRCE_2,MOD_BMC_2)
	SAP_INFO(SLCE_RABM_SAP,MOD_SLCE,MOD_RABM)
	SAP_INFO(SLCE_RABM_SAP,MOD_SLCE_2,MOD_RABM)
	SAP_INFO(SLCE_CSR_SAP,MOD_SLCE,MOD_CSR)
	SAP_INFO(SLCE_CSR_SAP,MOD_SLCE_2,MOD_CSR)
	SAP_INFO(SLCE_UMAC_SAP,MOD_SLCE,MOD_UMAC)
	SAP_INFO(SLCE_UMAC_SAP,MOD_SLCE_2,MOD_UMAC_2)
	SAP_INFO(RRCE_UMAC_SAP,MOD_RRCE,MOD_UMAC)
	SAP_INFO(RRCE_UMAC_SAP,MOD_RRCE_2,MOD_UMAC_2)
	SAP_INFO(MEME_UMAC_SAP,MOD_MEME,MOD_UMAC)
	SAP_INFO(MEME_UMAC_SAP,MOD_MEME_2,MOD_UMAC_2)
	SAP_INFO(URLC_UMAC_SAP,MOD_URLC,MOD_UMAC)
	SAP_INFO(URLC_UMAC_SAP,MOD_URLC_2,MOD_UMAC_2)
	SAP_INFO(URLC_URLC_SAP,MOD_URLC,MOD_URLC)
	SAP_INFO(URLC_URLC_SAP,MOD_URLC_2,MOD_URLC_2)
	SAP_INFO(CSR_UMAC_SAP,MOD_CSR,MOD_UMAC)
	SAP_INFO(CSR_UMAC_SAP,MOD_CSR,MOD_UMAC_2)
	SAP_INFO(RRCE_CSCE_SAP,MOD_RRCE,MOD_CSCE)
	SAP_INFO(RRCE_CSCE_SAP,MOD_RRCE_2,MOD_CSCE_2)
	SAP_INFO(RRCE_MEME_SAP,MOD_RRCE,MOD_MEME)
	SAP_INFO(RRCE_MEME_SAP,MOD_RRCE_2,MOD_MEME_2)
	SAP_INFO(RRCE_RRCE_SAP,MOD_RRCE,MOD_RRCE)
	SAP_INFO(RRCE_RRCE_SAP,MOD_RRCE_2,MOD_RRCE_2)
	SAP_INFO(CSCE_MEME_SAP,MOD_CSCE,MOD_MEME)
	SAP_INFO(CSCE_MEME_SAP,MOD_CSCE_2,MOD_MEME_2)
	SAP_INFO(CSE_MEME_SAP,MOD_CSE,MOD_MEME)
	SAP_INFO(CSE_MEME_SAP,MOD_CSE_2,MOD_MEME_2)
	SAP_INFO(CSCE_SLCE_SAP,MOD_CSCE,MOD_SLCE)
	SAP_INFO(CSCE_SLCE_SAP,MOD_CSCE_2,MOD_SLCE_2)
	SAP_INFO(RRCE_SLCE_SAP,MOD_RRCE,MOD_SLCE)
	SAP_INFO(RRCE_SLCE_SAP,MOD_RRCE_2,MOD_SLCE_2)
	SAP_INFO(SIBE_SLCE_SAP,MOD_SIBE,MOD_SLCE)
	SAP_INFO(SIBE_SLCE_SAP,MOD_SIBE_2,MOD_SLCE_2)
	SAP_INFO(MEME_SLCE_SAP,MOD_MEME,MOD_SLCE)
	SAP_INFO(MEME_SLCE_SAP,MOD_MEME_2,MOD_SLCE_2)
	SAP_INFO(CSE_SLCE_SAP,MOD_CSE,MOD_SLCE)
	SAP_INFO(CSE_SLCE_SAP,MOD_CSE_2,MOD_SLCE_2)
	SAP_INFO(SLCE_SLCE_SAP,MOD_SLCE,MOD_SLCE)
	SAP_INFO(SLCE_SLCE_SAP,MOD_SLCE_2,MOD_SLCE_2)
	SAP_INFO(CSCE_CSE_SAP,MOD_CSCE,MOD_CSE)
	SAP_INFO(CSCE_CSE_SAP,MOD_CSCE_2,MOD_CSE_2)
	SAP_INFO(CSCE_SIBE_SAP,MOD_CSCE,MOD_SIBE)
	SAP_INFO(CSCE_SIBE_SAP,MOD_CSCE_2,MOD_SIBE_2)
	SAP_INFO(CSCE_USIME_SAP,MOD_CSCE,MOD_USIME)
	SAP_INFO(CSCE_USIME_SAP,MOD_CSCE_2,MOD_USIME_2)
	SAP_INFO(CSE_SIBE_SAP,MOD_CSE,MOD_SIBE)
	SAP_INFO(CSE_SIBE_SAP,MOD_CSE_2,MOD_SIBE_2)
	SAP_INFO(RRCE_SIBE_SAP,MOD_RRCE,MOD_SIBE)
	SAP_INFO(RRCE_SIBE_SAP,MOD_RRCE_2,MOD_SIBE_2)
	SAP_INFO(MEME_SIBE_SAP,MOD_MEME,MOD_SIBE)
	SAP_INFO(RRCE_USIME_SAP,MOD_RRCE,MOD_USIME)
	SAP_INFO(RRCE_USIME_SAP,MOD_RRCE_2,MOD_USIME_2)
	SAP_INFO(SLCE_UL1_SAP,MOD_SLCE,MOD_UL1)
	SAP_INFO(SLCE_UL1_SAP,MOD_SLCE_2,MOD_UL1_2)
	SAP_INFO(MEME_UL1_SAP,MOD_MEME,MOD_UL1)
	SAP_INFO(RRCE_UL1_SAP,MOD_RRCE,MOD_UL1)
	SAP_INFO(RRCE_UL1_SAP,MOD_RRCE_2,MOD_UL1_2)
	SAP_INFO(CSE_UL1_SAP,MOD_CSE,MOD_UL1)
	SAP_INFO(CSE_UL1_SAP,MOD_CSE_2,MOD_UL1_2)
	SAP_INFO(UMAC_UL1_SAP,MOD_UMAC,MOD_UL1)
	SAP_INFO(UMAC_UL1_SAP,MOD_UMAC_2,MOD_UL1_2)
	SAP_INFO(MM_RATCM_SAP,MOD_MM,MOD_RATCM)
	SAP_INFO(SM_RATCM_SAP,MOD_SM,MOD_RATCM)
	SAP_INFO(SMSAL_RATCM_SAP,MOD_SMSAL,MOD_RATCM)
	SAP_INFO(RATCM_LLC_SAP,MOD_RATCM,MOD_LLC)
	SAP_INFO(RATCM_GAS_SAP,MOD_RATCM,MOD_GAS)
	SAP_INFO(RATCM_GAS_SAP,MOD_RATCM,MOD_RRM)
	SAP_INFO(RATCM_RLC_SAP,MOD_RATCM,MOD_RLC)
	SAP_INFO(GAS_CSCE_SAP,MOD_GAS,MOD_CSCE)
	SAP_INFO(GAS_CSCE_SAP,MOD_GAS_2,MOD_CSCE_2)
	SAP_INFO(GAS_CSCE_SAP,MOD_RRM,MOD_CSCE)
	SAP_INFO(GAS_CSCE_SAP,MOD_RRM_2,MOD_CSCE_2)
	SAP_INFO(GAS_MEME_SAP,MOD_GAS,MOD_MEME)
	SAP_INFO(GAS_MEME_SAP,MOD_RRM,MOD_MEME)
	SAP_INFO(GAS_RRCE_SAP,MOD_GAS,MOD_RRCE)
	SAP_INFO(GAS_RRCE_SAP,MOD_GAS_2,MOD_RRCE_2)
	SAP_INFO(GAS_RRCE_SAP,MOD_RRM,MOD_RRCE)
	SAP_INFO(SIP_APP_SAP,MOD_SIP,ANY)
	SAP_INFO(UMAC_UMAC_SAP,MOD_UMAC,MOD_UMAC)
	SAP_INFO(UMAC_UMAC_SAP,MOD_UMAC_2,MOD_UMAC_2)
	SAP_INFO(DRLC_UMAC_SAP,MOD_DRLC,MOD_UMAC)
	SAP_INFO(DRLC_UMAC_SAP,MOD_DRLC_2,MOD_UMAC_2)
	SAP_INFO(GMMREG_SAP,MOD_MM_2,MOD_RAC_2)
	SAP_INFO(MM_SMS_SAP,MOD_MM_2,MOD_SMS_2)
	SAP_INFO(MM_CC_SAP,MOD_MM_2,MOD_CC_2)
	SAP_INFO(MM_SS_SAP,MOD_MM_2,MOD_CISS_2)
	SAP_INFO(MM_AS_SAP,MOD_MM_2,MOD_AS_2)
	SAP_INFO(MM_AS_SAP,MOD_MM_2,MOD_RRM_2)
	SAP_INFO(MM_SIM_SAP,MOD_MM_2,MOD_SIM_2)
	SAP_INFO(GMM_SM_SAP,MOD_MM_2,MOD_SM_2)
	SAP_INFO(MNCC_SAP,MOD_CC_2,MOD_CSM_2)
	SAP_INFO(MNSMS_SAP,MOD_SMS_2,MOD_SMSAL_2)
	SAP_INFO(MNSS_SAP,MOD_CISS_2,MOD_CSM_2)
	SAP_INFO(CSM_TDT_SAP,MOD_CSM_2,MOD_TDT_2)
	SAP_INFO(CSM_L2R_SAP,MOD_CSM_2,MOD_L2R_2)
	SAP_INFO(CSM_SIM_SAP,MOD_CSM_2,MOD_SIM_2)
	SAP_INFO(CSM_L4C_SAP,MOD_CSM_2,MOD_L4C_2)
	SAP_INFO(SMSAL_L4C_SAP,MOD_SMSAL_2,MOD_L4C_2)
	SAP_INFO(UEM_L4C_SAP,MOD_UEM,MOD_L4C_2)
	SAP_INFO(PHB_L4C_SAP,MOD_PHB_2,MOD_L4C_2)
	SAP_INFO(SMU_L4C_SAP,MOD_SMU_2,MOD_L4C_2)
	SAP_INFO(L4C_RAT_TCM_SAP,MOD_L4C_2,MOD_RAT_TCM_2)
	SAP_INFO(L4C_RAT_TCM_SAP,MOD_RAT_TCM_2,MOD_L4C_2)
	SAP_INFO(RAT_TCM_TCM_SAP,MOD_RAT_TCM_2,MOD_TCM_2)
	SAP_INFO(RAT_TCM_TCM_SAP,MOD_TCM_2,MOD_RAT_TCM_2)
	#ifdef __SGLTE__
	SAP_INFO(RAT_TCM_SAP,MOD_RAT_TCM,MOD_RAT_TCM_2)
	SAP_INFO(RAT_TCM_SAP,MOD_RAT_TCM_2,MOD_RAT_TCM)
	SAP_INFO(TCM_SAP,MOD_TCM,MOD_TCM_2)
	SAP_INFO(TCM_SAP,MOD_TCM_2,MOD_TCM)
	//SAP_INFO(RAT_TCM_TCM_SAP,MOD_RAT_TCM,MOD_RAT_TCM_2)
	//SAP_INFO(RAT_TCM_TCM_SAP,MOD_RAT_TCM_2,MOD_RAT_TCM)
	//SAP_INFO(RAT_TCM_TCM_SAP,MOD_TCM,MOD_TCM_2)
	//SAP_INFO(RAT_TCM_TCM_SAP,MOD_TCM_2,MOD_TCM)
	#endif /* __SGLTE__ */
	SAP_INFO(RAC_L4C_SAP,MOD_L4C_2,MOD_RAC_2)
	SAP_INFO(UART_L4C_SAP,MOD_UART,MOD_L4C_2)
	SAP_INFO(RRM_RMPC_SAP,MOD_RRM_2,MOD_RMC_2)
	SAP_INFO(RRM_RMPC_SAP,MOD_RRM_2,MOD_RMPC_2)
	SAP_INFO(RRM_RMPC_SAP,MOD_RRM_2,MOD_AS_2)
	SAP_INFO(RMC_LAPDM_SAP,MOD_RMC_2,MOD_LAPDM_2)
	SAP_INFO(LAPDM_MPAL_SAP,MOD_LAPDM_2,MOD_MPAL_2)
	SAP_INFO(RLC_MAC_SAP,MOD_RLC_2,MOD_MAC_2)
	SAP_INFO(RLC_RMPC_SAP,MOD_RLC_2,MOD_RMPC_2)
	SAP_INFO(RLC_MPAL_SAP,MOD_RLC_2,MOD_MPAL_2)
	SAP_INFO(RLC_REASM_SAP,MOD_RLC_2,MOD_REASM_2)
	SAP_INFO(MAC_RMPC_SAP,MOD_MAC_2,MOD_RMPC_2)
	SAP_INFO(RRM_MPAL_SAP,MOD_RRM_2,MOD_MPAL_2)
	SAP_INFO(RMPC_MPAL_SAP,MOD_RMPC_2,MOD_MPAL_2)
	SAP_INFO(RMPC_MPAL_SAP,MOD_RMC_2,MOD_MPAL_2)
	SAP_INFO(RMPC_MPAL_SAP,MOD_AS_2,MOD_MPAL_2)
	SAP_INFO(MAC_MPAL_SAP,MOD_MAC_2,MOD_MPAL_2)
	SAP_INFO(MMI_AS_SAP,MOD_RAC_2,MOD_AS_2)
	SAP_INFO(SMSAL_AS_SAP,MOD_SMS_2,MOD_AS_2)
	SAP_INFO(LLC_GMM_SAP,MOD_LLC_2,MOD_MM_2)
	SAP_INFO(LLC_RLC_SAP,MOD_LLC_2,MOD_RLC_2)
	SAP_INFO(LLC_SNDCP_SAP,MOD_LLC_2,MOD_SNDCP_2)
	SAP_INFO(LLC_SMS_SAP,MOD_LLC_2,MOD_SMS_2)
	SAP_INFO(GMM_RLC_SAP,MOD_MM_2,MOD_RLC_2)
	SAP_INFO(SNDCP_REG_SAP,MOD_SNDCP_2,MOD_TCM_2)
	SAP_INFO(SM_SNDCP_SAP,MOD_SM_2,MOD_SNDCP_2)
	SAP_INFO(SMREG_SAP,MOD_SM_2,MOD_TCM_2)
	SAP_INFO(PPP_L4C_SAP,MOD_PPP,MOD_L4C_2)
	SAP_INFO(PPP_RAT_TCM_SAP,MOD_PPP,MOD_RAT_TCM_2)
	SAP_INFO(PPP_RAT_TCM_SAP,MOD_RAT_TCM_2,MOD_PPP)
	SAP_INFO(L2R_RLP_SAP,MOD_L2R_2,MOD_RLP_2)
	SAP_INFO(RLP_RA_SAP,MOD_RLP_2,MOD_L1_2)
	SAP_INFO(SNDCP_PPP_SAP,MOD_SNDCP_2,MOD_PPP)
	SAP_INFO(DATA_MPAL_SAP,MOD_RLP_2,MOD_MPAL_2)
	SAP_INFO(PS_SIM_SAP,MOD_SIM_2,MOD_SMU_2)
	SAP_INFO(PS_SIM_SAP,MOD_SIM_2,MOD_L4C_2)
	SAP_INFO(PS_SIM_SAP,MOD_SIM_2,MOD_AS_2)
	SAP_INFO(PS_SIM_SAP,MOD_SIM_2,MOD_RRM_2)
	SAP_INFO(PS_SIM_SAP,MOD_SIM_2,MOD_MM_2)
	SAP_INFO(PS_SIM_SAP,MOD_SIM_2,MOD_NWSEL_2)
	SAP_INFO(PS_SIM_SAP,MOD_SIM_2,MOD_GMSS_2)
	SAP_INFO(PS_SIM_SAP,MOD_SIM_2,MOD_EVAL_2)
	SAP_INFO(PS_SIM_SAP,MOD_SIM_2,MOD_USIME_2)
        SAP_INFO(PS_SIM_SAP,MOD_SIM_2,MOD_MEME_2)
	SAP_INFO(PS_SIM_SAP,MOD_SIM_2,MOD_SMSAL_2)
	SAP_INFO(PS_SIM_SAP,MOD_SIM_2,MOD_CSM_2)
	SAP_INFO(PS_SIM_SAP,MOD_SIM_2,MOD_BT_2)
	SAP_INFO(PS_SIM_SAP,MOD_SIM_2,MOD_PHB_2)
	SAP_INFO(SIM_SIM_SAP,MOD_SIM_2,MOD_SIM_2)
	SAP_INFO(SIM_SIM_SAP,MOD_SIM_2,MOD_SIM)
	SAP_INFO(MMI_L4C_SAP,MOD_MMI,MOD_L4C_2)
	SAP_INFO(L4C_ABM_SAP,MOD_L4C_2,MOD_ABM)
	SAP_INFO(TDT_PPP_SAP,MOD_TDT_2,MOD_PPP)
	SAP_INFO(L2R_PPP_SAP,MOD_L2R_2,MOD_PPP)
	SAP_INFO(TCM_TCPIP_SAP,MOD_TCM_2,MOD_TCPIP)
	SAP_INFO(SMSAL_SOC_SAP,MOD_SMSAL_2,MOD_SOC)
	SAP_INFO(MPAL_L1_SAP,MOD_MPAL_2,MOD_L1_2)
	SAP_INFO(MAC_L1_SAP,MOD_MAC_2,MOD_L1_2)
	SAP_INFO(RMC_LAPDM_SAP,MOD_AS_2,MOD_LAPDM_2)
	SAP_INFO(MAC_RMPC_SAP,MOD_MAC_2,MOD_AS_2)
	SAP_INFO(RR_PRR_SAP,MOD_AS,MOD_AS_2)
	SAP_INFO(J2ME_MMI_SAP,MOD_J2ME,MOD_MMI)
	SAP_INFO(MMI_J2ME_SAP,MOD_MMI,MOD_J2ME)
	SAP_INFO(RRM_LAPDM_SAP,MOD_RRM,MOD_LAPDM)
	SAP_INFO(GPS_SUPL_SAP,MOD_GPS,MOD_SUPL)
	SAP_INFO(GPS_LCSP_SAP,MOD_RRLP,MOD_GPS)
	SAP_INFO(RR_RRLP_SAP,MOD_AS,MOD_RRLP)
	SAP_INFO(RR_PRR_SAP,MOD_RRM,MOD_RRM_2)
	SAP_INFO(ADR_UL1_SAP,MOD_ADR,MOD_UL1)
	SAP_INFO(TCPIP_ABM_SAP,MOD_TCPIP,MOD_ABM)
	SAP_INFO(ABM_APP_SAP,MOD_ABM,ANY)
	SAP_INFO(MM_RATDM_SAP,MOD_MM,MOD_RATDM)
	SAP_INFO(SM_RATDM_SAP,MOD_SM,MOD_RATDM)
	SAP_INFO(TCM_RATDM_SAP,MOD_TCM,MOD_RATDM)
	SAP_INFO(RATCM_RATDM_SAP,MOD_RATCM,MOD_RATDM)
	SAP_INFO(RATDM_RATDM_SAP,MOD_RATDM,MOD_RATDM)
	SAP_INFO(RATDM_RABM_SAP,MOD_RATDM,MOD_RABM)
	SAP_INFO(RATDM_SNDCP_SAP,MOD_RATDM,MOD_SNDCP)
	SAP_INFO(RATDM_URLC_SAP,MOD_RATDM,MOD_URLC)
	SAP_INFO(RATDM_URLC_SAP,MOD_RATDM_2,MOD_URLC_2)
	SAP_INFO(UMAC_SEQ_SAP,MOD_UMAC,MOD_SEQ)
	SAP_INFO(UMAC_SEQ_SAP,MOD_UMAC_2,MOD_SEQ)
	SAP_INFO(URLC_SEQ_SAP,MOD_URLC,MOD_SEQ)
	SAP_INFO(URLC_SEQ_SAP,MOD_URLC_2,MOD_SEQ)
	SAP_INFO(SEQ_SEQ_SAP,MOD_SEQ,MOD_SEQ)
	SAP_INFO(TL1_MAL1_SAP,MOD_MAL1,MOD_TL1)
	SAP_INFO(SLCE_TL1_SAP,MOD_SLCE,MOD_TL1)
	SAP_INFO(MEME_TL1_SAP,MOD_MEME,MOD_TL1)
	SAP_INFO(RRCE_TL1_SAP,MOD_RRCE,MOD_TL1)
	SAP_INFO(CSE_TL1_SAP,MOD_CSE,MOD_TL1)
	SAP_INFO(UMAC_TL1_SAP,MOD_UMAC,MOD_TL1)
	SAP_INFO(ADR_TL1_SAP,MOD_ADR,MOD_TL1)
	SAP_INFO(URLC_UL2ACCRXHISR_SAP,MOD_URLC,MOD_UL2ACCRXHISR)
	SAP_INFO(URLC_UL2ACCRXHISR_SAP,MOD_URLC_2,MOD_UL2ACCRXHISR)
	SAP_INFO(UMAC_UL2ACCRXHISR_SAP,MOD_UMAC,MOD_UL2ACCRXHISR)
	SAP_INFO(UMAC_UL2ACCRXHISR_SAP,MOD_UMAC_2,MOD_UL2ACCRXHISR)
	SAP_INFO(SLCE_UL2SEQ_SAP,MOD_SLCE,MOD_SEQ)
	SAP_INFO(SLCE_UL2SEQ_SAP,MOD_SLCE_2,MOD_SEQ)
	SAP_INFO(CMUX_UH_SAP,MOD_CMUX,MOD_CMUXUH)
	SAP_INFO(CMUX_SAP,MOD_CMUX,MOD_CMUX)
	SAP_INFO(UPS_SAP,MOD_UPS,MOD_UPS)
	SAP_INFO(UPS_SAP,MOD_UPS,MOD_TCM)
	SAP_INFO(EEM_EEM_SAP,MOD_EEM,MOD_EEM)
	SAP_INFO(EEM_HISR_SAP,MOD_EEM,MOD_DRV_HISR)
	SAP_INFO(EEM_HISR_SAP,MOD_DRV_HISR,MOD_EEM)
	SAP_INFO(MMI_MMI_SAP,MOD_MMI,MOD_MMI)
	SAP_INFO(MAC_RRM_SAP,MOD_MAC,MOD_RRM)
	SAP_INFO(MAC_RRM_SAP,MOD_MAC_2,MOD_RRM_2)
	/* ETC related SAP INFO */
  SAP_INFO(UPCM_ETC_SAP, MOD_UPCM, MOD_ETC)
  SAP_INFO(ETC_EMM_SAP, MOD_ETC, MOD_EMM)	
	 /* EVAL related SAP INFO */
  SAP_INFO(NWSEL_EVAL_SAP, MOD_NWSEL, MOD_EVAL)
  SAP_INFO(RAC_EVAL_SAP, MOD_RAC, MOD_EVAL)
  SAP_INFO(TCM_EVAL_SAP, MOD_TCM, MOD_EVAL)
  SAP_INFO(L4C_EVAL_SAP, MOD_L4C, MOD_EVAL)
  SAP_INFO(SMS_EVAL_SAP, MOD_SMS, MOD_EVAL)
  SAP_INFO(SMSAL_EVAL_SAP, MOD_SMSAL, MOD_EVAL)
  SAP_INFO(CISS_EVAL_SAP, MOD_CISS, MOD_EVAL)
  SAP_INFO(EVAL_EMM_SAP, MOD_EVAL, MOD_EMM)
  SAP_INFO(EVAL_ESM_SAP, MOD_EVAL, MOD_ESM)
  SAP_INFO(EVAL_ERRC_SAP, MOD_EVAL, MOD_ERRC)
  /* ERRC ineternal module SAP INFO */
	SAP_INFO(EVTH_ALL_SAP, MOD_ERRC_EVTH, MOD_ERRC_CEL)
	SAP_INFO(EVTH_ALL_SAP, MOD_ERRC_EVTH, MOD_ERRC_CHM)
	SAP_INFO(EVTH_ALL_SAP, MOD_ERRC_EVTH, MOD_ERRC_CONN)
	SAP_INFO(EVTH_ALL_SAP, MOD_ERRC_EVTH, MOD_ERRC_MOB)
	SAP_INFO(EVTH_ALL_SAP, MOD_ERRC_EVTH, MOD_ERRC_SPV)
	SAP_INFO(EVTH_ALL_SAP, MOD_ERRC_EVTH, MOD_ERRC_SYS)
	SAP_INFO(EVTH_ALL_SAP, MOD_ERRC_EVTH, MOD_ERRC_RCM)
	SAP_INFO(EVTH_ALL_SAP, MOD_ERRC_EVTH, MOD_ERRC_EVTH)	
	SAP_INFO(RCM_CONN_SAP, MOD_ERRC_RCM,  MOD_ERRC_CONN)
	SAP_INFO(RCM_MOB_SAP,  MOD_ERRC_RCM,  MOD_ERRC_MOB)
	SAP_INFO(RCM_SPV_SAP,  MOD_ERRC_RCM,  MOD_ERRC_SPV)
	SAP_INFO(CEL_CHM_SAP,  MOD_ERRC_CEL,  MOD_ERRC_CHM)
	SAP_INFO(CEL_CONN_SAP, MOD_ERRC_CEL,  MOD_ERRC_CONN)
	SAP_INFO(CEL_MOB_SAP,  MOD_ERRC_CEL,  MOD_ERRC_MOB)
	SAP_INFO(CEL_SPV_SAP,  MOD_ERRC_CEL,  MOD_ERRC_SPV)
	SAP_INFO(CEL_SYS_SAP,  MOD_ERRC_CEL,  MOD_ERRC_SYS)
	SAP_INFO(CHM_CONN_SAP, MOD_ERRC_CHM,  MOD_ERRC_CONN)
	SAP_INFO(CHM_MOB_SAP,  MOD_ERRC_CHM,  MOD_ERRC_MOB)
	SAP_INFO(CHM_SYS_SAP,  MOD_ERRC_CHM,  MOD_ERRC_SYS)
	SAP_INFO(CONN_MOB_SAP, MOD_ERRC_CONN, MOD_ERRC_MOB)
	SAP_INFO(CONN_SPV_SAP, MOD_ERRC_CONN, MOD_ERRC_SPV)
	SAP_INFO(MOB_SPV_SAP,  MOD_ERRC_MOB,  MOD_ERRC_SPV)
		SAP_INFO(ERRC_CEL_SAP,  MOD_ERRC_CEL,  MOD_ERRC_CEL)
		SAP_INFO(ERRC_CHM_SAP,  MOD_ERRC_CHM,  MOD_ERRC_CHM)
		SAP_INFO(ERRC_CONN_SAP,  MOD_ERRC_CONN,  MOD_ERRC_CONN)
		SAP_INFO(ERRC_MOB_SAP,  MOD_ERRC_MOB,  MOD_ERRC_MOB)
		SAP_INFO(ERRC_RCM_SAP,  MOD_ERRC_RCM,  MOD_ERRC_RCM)
		SAP_INFO(ERRC_SPV_SAP,  MOD_ERRC_SPV,  MOD_ERRC_SPV)
		SAP_INFO(ERRC_SYS_SAP,  MOD_ERRC_SYS,  MOD_ERRC_SYS)

    SAP_INFO(EMM_CALL_CONN_SAP, MOD_EMM_CALL, MOD_EMM_CONN)
    SAP_INFO(EMM_CALL_ERRCIF_SAP, MOD_EMM_CALL, MOD_EMM_ERRCIF)
    SAP_INFO(EMM_CALL_ESMIF_SAP, MOD_EMM_CALL, MOD_EMM_ESMIF)
    SAP_INFO(EMM_CALL_EVALIF_SAP, MOD_EMM_CALL, MOD_EMM_EVALIF)
    SAP_INFO(EMM_CALL_EVTCTRL_SAP, MOD_EMM_CALL, MOD_EMM_EVTCTRL)
    SAP_INFO(EMM_CALL_MMIF_SAP, MOD_EMM_CALL, MOD_EMM_MMIF)
    SAP_INFO(EMM_CALL_NASMSG_SAP, MOD_EMM_CALL, MOD_EMM_NASMSG)
    SAP_INFO(EMM_CALL_PLMNSEL_SAP, MOD_EMM_CALL, MOD_EMM_PLMNSEL)
    SAP_INFO(EMM_CALL_RATCHG_SAP, MOD_EMM_CALL, MOD_EMM_RATCHG)
    SAP_INFO(EMM_CALL_REG_SAP, MOD_EMM_CALL, MOD_EMM_REG)
    SAP_INFO(EMM_CALL_SEC_SAP, MOD_EMM_CALL, MOD_EMM_SEC)
    SAP_INFO(EMM_CALL_SV_SAP, MOD_EMM_CALL, MOD_EMM_SV)
    SAP_INFO(EMM_CALL_TIMERIF_SAP, MOD_EMM_CALL, MOD_EMM_TIMERIF)
    SAP_INFO(EMM_CMNPROC_ERRCIF_SAP, MOD_EMM_CMNPROC, MOD_EMM_ERRCIF)
    SAP_INFO(EMM_CMNPROC_EVALIF_SAP, MOD_EMM_CMNPROC, MOD_EMM_EVALIF)
    SAP_INFO(EMM_CMNPROC_NASMSG_SAP, MOD_EMM_CMNPROC, MOD_EMM_NASMSG)
    SAP_INFO(EMM_CMNPROC_PLMNSEL_SAP, MOD_EMM_CMNPROC, MOD_EMM_PLMNSEL)
    SAP_INFO(EMM_CMNPROC_REG_SAP, MOD_EMM_CMNPROC, MOD_EMM_REG)
    SAP_INFO(EMM_CONN_ERRCIF_SAP, MOD_EMM_CONN, MOD_EMM_ERRCIF)
    SAP_INFO(EMM_CONN_ESMIF_SAP, MOD_EMM_CONN, MOD_EMM_ESMIF)
    SAP_INFO(EMM_CONN_ETCIF_SAP, MOD_EMM_CONN, MOD_EMM_ETCIF)
    SAP_INFO(EMM_CONN_EVALIF_SAP, MOD_EMM_CONN, MOD_EMM_EVALIF)
    SAP_INFO(EMM_CONN_NASMSG_SAP, MOD_EMM_CONN, MOD_EMM_NASMSG)
    SAP_INFO(EMM_CONN_PLMNSEL_SAP, MOD_EMM_CONN, MOD_EMM_PLMNSEL)
    SAP_INFO(EMM_CONN_RATBAND_SAP, MOD_EMM_CONN, MOD_EMM_RATBAND)
    SAP_INFO(EMM_CONN_RATCHG_SAP, MOD_EMM_CONN, MOD_EMM_RATCHG)
    SAP_INFO(EMM_CONN_REG_SAP, MOD_EMM_CONN, MOD_EMM_REG)
    SAP_INFO(EMM_CONN_SEC_SAP, MOD_EMM_CONN, MOD_EMM_SEC)
    SAP_INFO(EMM_CONN_TIMERIF_SAP, MOD_EMM_CONN, MOD_EMM_TIMERIF)
    SAP_INFO(EMM_ERRCIF_ESMIF_SAP, MOD_EMM_ERRCIF, MOD_EMM_ESMIF)
    SAP_INFO(EMM_ERRCIF_ETCIF_SAP, MOD_EMM_ERRCIF, MOD_EMM_ETCIF)
    SAP_INFO(EMM_ERRCIF_NASMSG_SAP, MOD_EMM_ERRCIF, MOD_EMM_NASMSG)
    SAP_INFO(EMM_ERRCIF_PLMNSEL_SAP, MOD_EMM_ERRCIF, MOD_EMM_PLMNSEL)
    SAP_INFO(EMM_ERRCIF_RATBAND_SAP, MOD_EMM_ERRCIF, MOD_EMM_RATBAND)
    SAP_INFO(EMM_ERRCIF_RATCHG_SAP, MOD_EMM_ERRCIF, MOD_EMM_RATCHG)
    SAP_INFO(EMM_ERRCIF_REG_SAP, MOD_EMM_ERRCIF, MOD_EMM_REG)
    SAP_INFO(EMM_ERRCIF_SEC_SAP, MOD_EMM_ERRCIF, MOD_EMM_SEC)
    SAP_INFO(EMM_ERRCIF_SV_SAP, MOD_EMM_ERRCIF, MOD_EMM_SV)
    SAP_INFO(EMM_ESMIF_NASMSG_SAP, MOD_EMM_ESMIF, MOD_EMM_NASMSG)
    SAP_INFO(EMM_ESMIF_RATCHG_SAP, MOD_EMM_ESMIF, MOD_EMM_RATCHG)
    SAP_INFO(EMM_ESMIF_REG_SAP, MOD_EMM_ESMIF, MOD_EMM_REG)
    SAP_INFO(EMM_ESMIF_SEC_SAP, MOD_EMM_ESMIF, MOD_EMM_SEC)
    SAP_INFO(EMM_ESMIF_SV_SAP, MOD_EMM_ESMIF, MOD_EMM_SV)
    SAP_INFO(EMM_ESMIF_SV_SAP, MOD_EMM_ESMIF, MOD_EMM_PLMNSEL)
    SAP_INFO(EMM_ETCIF_NASMSG_SAP, MOD_EMM_ETCIF, MOD_EMM_NASMSG)
    SAP_INFO(EMM_ETCIF_REG_SAP, MOD_EMM_ETCIF, MOD_EMM_REG)
    SAP_INFO(EMM_ETCIF_SV_SAP, MOD_EMM_ETCIF, MOD_EMM_SV)
    SAP_INFO(EMM_EVALIF_NASMSG_SAP, MOD_EMM_EVALIF, MOD_EMM_NASMSG)
    SAP_INFO(EMM_EVALIF_PLMNSEL_SAP, MOD_EMM_EVALIF, MOD_EMM_PLMNSEL)
    SAP_INFO(EMM_EVALIF_RATBAND_SAP, MOD_EMM_EVALIF, MOD_EMM_RATBAND)
    SAP_INFO(EMM_EVALIF_RATCHG_SAP, MOD_EMM_EVALIF, MOD_EMM_RATCHG)
    SAP_INFO(EMM_EVALIF_REG_SAP, MOD_EMM_EVALIF, MOD_EMM_REG)
    SAP_INFO(EMM_EVALIF_SEC_SAP, MOD_EMM_EVALIF, MOD_EMM_SEC)
    SAP_INFO(EMM_EVALIF_SV_SAP, MOD_EMM_EVALIF, MOD_EMM_SV)
    SAP_INFO(EMM_EVTCTRL_PLMNSEL_SAP, MOD_EMM_EVTCTRL, MOD_EMM_PLMNSEL)
    SAP_INFO(EMM_EVTCTRL_RATBAND_SAP, MOD_EMM_EVTCTRL, MOD_EMM_RATBAND)
    SAP_INFO(EMM_EVTCTRL_RATCHG_SAP, MOD_EMM_EVTCTRL, MOD_EMM_RATCHG)
    SAP_INFO(EMM_EVTCTRL_REG_SAP, MOD_EMM_EVTCTRL, MOD_EMM_REG)
    SAP_INFO(EMM_EVTCTRL_SV_SAP, MOD_EMM_EVTCTRL, MOD_EMM_SV)
    SAP_INFO(EMM_MMIF_RATCHG_SAP, MOD_EMM_MMIF, MOD_EMM_RATCHG)
    SAP_INFO(EMM_MMIF_REG_SAP, MOD_EMM_MMIF, MOD_EMM_REG)
    SAP_INFO(EMM_NASMSG_PLMNSEL_SAP, MOD_EMM_NASMSG, MOD_EMM_PLMNSEL)
    SAP_INFO(EMM_NASMSG_REG_SAP, MOD_EMM_NASMSG, MOD_EMM_REG)
    SAP_INFO(EMM_NASMSG_SEC_SAP, MOD_EMM_NASMSG, MOD_EMM_SEC)
    SAP_INFO(EMM_PLMNSEL_RATCHG_SAP, MOD_EMM_PLMNSEL, MOD_EMM_RATCHG)
    SAP_INFO(EMM_PLMNSEL_REG_SAP, MOD_EMM_PLMNSEL, MOD_EMM_REG)
    SAP_INFO(EMM_PLMNSEL_SEC_SAP, MOD_EMM_PLMNSEL, MOD_EMM_SEC)
    SAP_INFO(EMM_PLMNSEL_SV_SAP, MOD_EMM_PLMNSEL, MOD_EMM_SV)
    SAP_INFO(EMM_PLMNSEL_TIMERIF_SAP, MOD_EMM_PLMNSEL, MOD_EMM_TIMERIF)
    SAP_INFO(EMM_RATBAND_RATCHG_SAP, MOD_EMM_RATBAND, MOD_EMM_RATCHG)
    SAP_INFO(EMM_RATBAND_REG_SAP, MOD_EMM_RATBAND, MOD_EMM_REG)
    SAP_INFO(EMM_RATBAND_SV_SAP, MOD_EMM_RATBAND, MOD_EMM_SV)
    SAP_INFO(EMM_RATBAND_TIMERIF_SAP, MOD_EMM_RATBAND, MOD_EMM_TIMERIF)
    SAP_INFO(EMM_RATCHG_REG_SAP, MOD_EMM_RATCHG, MOD_EMM_REG)
    SAP_INFO(EMM_RATCHG_SEC_SAP, MOD_EMM_RATCHG, MOD_EMM_SEC)
    SAP_INFO(EMM_RATCHG_SV_SAP, MOD_EMM_RATCHG, MOD_EMM_SV)
    SAP_INFO(EMM_RATCHG_TIMERIF_SAP, MOD_EMM_RATCHG, MOD_EMM_TIMERIF)
    SAP_INFO(EMM_REG_SEC_SAP, MOD_EMM_REG, MOD_EMM_SEC)
    SAP_INFO(EMM_REG_SV_SAP, MOD_EMM_REG, MOD_EMM_SV)
    SAP_INFO(EMM_REG_TIMERIF_SAP, MOD_EMM_REG, MOD_EMM_TIMERIF)
    SAP_INFO(EMM_SEC_SV_SAP, MOD_EMM_SEC, MOD_EMM_SV)
    SAP_INFO(EMM_SEC_TIMERIF_SAP, MOD_EMM_SEC, MOD_EMM_TIMERIF)
    SAP_INFO(EMM_SV_TIMERIF_SAP, MOD_EMM_SV, MOD_EMM_TIMERIF)

    SAP_INFO(MM_EMM_SAP, MOD_MM, MOD_EMM)
	  SAP_INFO(EMM_ERRC_SAP, MOD_ERRC, MOD_EMM)
	  
	  
	  /* ESM SAP INFO */
    SAP_INFO(SM_ESM_SAP, MOD_SM, MOD_ESM)
    SAP_INFO(SM_ESM_SAP, MOD_SM_2, MOD_ESM)
    SAP_INFO(NIL_ESM_SAP, MOD_NIL, MOD_ESM)
    SAP_INFO(ESM_LTM_SAP, MOD_ESM, MOD_LTM)
    SAP_INFO(ESM_EMM_SAP, MOD_ESM, MOD_EMM)
    
    SAP_INFO(LTM_SAP, MOD_LTM, ANY)
    SAP_INFO(UPCM_SAP, MOD_UPCM, ANY)

    SAP_INFO(ERRC_EL1_SAP, MOD_ERRC, MOD_EL1)
    SAP_INFO(EMAC_EL1_SAP, MOD_EMAC, MOD_EL1)
    SAP_INFO(EL1_EL1_SAP, MOD_EL1, MOD_EL1)
    SAP_INFO(EMAC_EL1TX_SAP, MOD_EMAC, MOD_EL1TX)
    SAP_INFO(EL1_EL1TX_SAP, MOD_EL1, MOD_EL1TX)

    /* EPDCP SAP */
    SAP_INFO(ERRC_EPDCP_SAP, MOD_ERRC, MOD_EPDCP)
    SAP_INFO(EPDCP_EPDCP_SAP, MOD_EPDCP, MOD_EPDCP)
    
    /* ERLC SAP */
    SAP_INFO(ERRC_ERLCUL_SAP, MOD_ERRC, MOD_ERLCUL)
    SAP_INFO(ERRC_ERLCDL_SAP, MOD_ERRC, MOD_ERLCDL)
    SAP_INFO(EPDCP_ERLCUL_SAP, MOD_EPDCP, MOD_ERLCUL)
    SAP_INFO(EPDCP_ERLCDL_SAP, MOD_EPDCP, MOD_ERLCDL)
    SAP_INFO(ERLCUL_ERLCDL_SAP, MOD_ERLCUL, MOD_ERLCDL)
    
    /* EMAC SAP */
    SAP_INFO(EMAC_INT_EMAC_SAP, MOD_EMAC_INT, MOD_EMAC)
    SAP_INFO(ERRC_EMAC_SAP, MOD_ERRC, MOD_EMAC)    
    SAP_INFO(EMAC_ERLCUL_SAP, MOD_EMAC, MOD_ERLCUL)
    SAP_INFO(ERLCUL_EMAC_SAP, MOD_ERLCUL, MOD_EMAC)
    SAP_INFO(EMAC_ERLCDL_SAP, MOD_EMAC, MOD_ERLCDL)
    SAP_INFO(LTM_EMAC_SAP, MOD_LTM, MOD_EMAC)
    SAP_INFO(EMAC_EMAC_SAP, MOD_EMAC, MOD_EMAC)
    
    SAP_INFO(LTE_DYN_SAP, MOD_EL2TASK, ANY)
    SAP_INFO(LTE_TIMER_SAP, MOD_LTE_TIMER, ANY)
    
    /* LTE test mode SAP */
    SAP_INFO(DHL_ETSTM_SAP, MOD_DHL, MOD_ETSTM)
    SAP_INFO(ETSTM_DHL_SAP, MOD_ETSTM, MOD_DHL)
    
#ifdef UNIT_TEST
	SAP_INFO(DS_DR_SAP, MOD_DHLSIM, MOD_DHL_READER)
#endif	
	SAP_INFO(SYSTEM_DR_SAP, MOD_SYSTEM, MOD_DHL_READER)
	
    SAP_INFO(TFTLIB_SAP, MOD_TFTLIB, ANY)
    SAP_INFO(TFTLIB_SAP, ANY, MOD_TFTLIB)
#if defined(__SGLTE__)
    SAP_INFO(TFTLIB2_SAP, MOD_TFTLIB_2, ANY)
    SAP_INFO(TFTLIB2_SAP, ANY, MOD_TFTLIB_2)
#endif

    SAP_INFO(NWSEL_MM_SAP, MOD_NWSEL, MOD_MM)
    SAP_INFO(NWSEL_RATCM_SAP, MOD_NWSEL, MOD_RATCM)

    /* GMSS SAP */
    SAP_INFO(RAC_GMSS_SAP, MOD_RAC, MOD_GMSS)
    SAP_INFO(GMSS_NWSEL_SAP, MOD_GMSS, MOD_NWSEL)
    SAP_INFO(TCM_GMSS_SAP, MOD_TCM, MOD_GMSS)

    SAP_INFO(MRS_RAC_SAP, MOD_MRS, MOD_RAC)
    SAP_INFO(MRS_RAC_SAP, MOD_MRS_2, MOD_RAC_2)
    SAP_INFO(MRS_RAC_SAP, MOD_MRS_3, MOD_RAC_3)
    SAP_INFO(MRS_RRM_SAP, MOD_MRS, MOD_RRM)
    SAP_INFO(MRS_RRM_SAP, MOD_MRS_2, MOD_RRM_2)
    SAP_INFO(MRS_CSCE_SAP, MOD_MRS, MOD_CSCE)
    SAP_INFO(MRS_CSCE_SAP, MOD_MRS_2, MOD_CSCE_2)
    SAP_INFO(MRS_RRCE_SAP, MOD_MRS, MOD_RRCE)
    SAP_INFO(MRS_RRCE_SAP, MOD_MRS, MOD_RRCE_2)
    SAP_INFO(MRS_USIME_SAP, MOD_MRS, MOD_USIME)
    SAP_INFO(MRS_SIM_SAP, MOD_MRS, MOD_SIM)
    SAP_INFO(MRS_EAS_SAP, MOD_MRS, MOD_EAS)
    SAP_INFO(MRS_EAS_SAP, MOD_ERRC, MOD_MRS)

    SAP_INFO(GAS_EAS_SAP, MOD_ERRC, MOD_RRM)
    SAP_INFO(GAS_EAS_SAP, MOD_RRM, MOD_EAS)
    
    SAP_INFO(EAS_CSCE_SAP, MOD_ERRC, MOD_CSCE)
    SAP_INFO(EAS_RRCE_SAP, MOD_ERRC, MOD_RRCE)
    SAP_INFO(EAS_MEME_SAP, MOD_ERRC, MOD_MEME)
    SAP_INFO(EAS_RSVAE_SAP, MOD_ERRC, MOD_RSVAE)
    
    SAP_INFO(ADR_ADR_SAP, MOD_ADR, MOD_ADR)
    SAP_INFO(ADR_ADR_SAP, MOD_ADR_2, MOD_ADR_2)
    SAP_INFO(SM_SM_SAP, MOD_SM, MOD_SM_2)
    SAP_INFO(SM_SM_SAP, MOD_SM, MOD_SM)
    SAP_INFO(SM_SM_SAP, MOD_SM_2, MOD_SM)
    /*for MMDC TYPE2 single load*/
    SAP_INFO(MM_EMM_SAP, MOD_MM_2, MOD_EMM)
    SAP_INFO(MM_MM_SAP, MOD_MM_2, MOD_MM)
    SAP_INFO(NWSEL_MM_SAP, MOD_NWSEL_2, MOD_MM_2)
    SAP_INFO(NWSEL_RATCM_SAP, MOD_NWSEL_2, MOD_RATCM_2)
    /* GMSS SAP */
    SAP_INFO(RAC_GMSS_SAP, MOD_RAC_2, MOD_GMSS_2)
    SAP_INFO(GMSS_NWSEL_SAP, MOD_GMSS_2, MOD_NWSEL_2)
    SAP_INFO(TCM_GMSS_SAP, MOD_TCM_2, MOD_GMSS_2)

    /* RSVA SAP */
    SAP_INFO(RSVAS_SAP, MOD_RSVAS, ANY)
    SAP_INFO(RSVAS_NIL_SAP, MOD_RSVAS, MOD_NIL)
    SAP_INFO(RSVAS_RSVAU_SAP, MOD_RSVAS, MOD_RSVAU)
    SAP_INFO(RSVAS_RSVAU_SAP, MOD_RSVAS, MOD_RSVAU_2)
    SAP_INFO(RSVAS_L4C_SAP, MOD_RSVAS, MOD_L4C)
    SAP_INFO(RSVAS_L4C_SAP, MOD_RSVAS, MOD_L4C_2)
    SAP_INFO(RSVAS_MRS_SAP, MOD_RSVAS, MOD_MRS)
    SAP_INFO(RSVAS_MRS_SAP, MOD_RSVAS, MOD_MRS_2)
    SAP_INFO(RSVAS_URR_SAP, MOD_RSVAS, MOD_URR)
    SAP_INFO(RSVAS_URR_SAP, MOD_RSVAS, MOD_URR_2)
    SAP_INFO(RSVAS_RRCE_SAP, MOD_RSVAS, MOD_RRCE)
    SAP_INFO(RSVAS_RRCE_SAP, MOD_RSVAS, MOD_RRCE_2)
    SAP_INFO(RSVAS_CSCE_SAP, MOD_RSVAS, MOD_CSCE)
    SAP_INFO(RSVAS_CSCE_SAP, MOD_RSVAS, MOD_CSCE_2)
    SAP_INFO(RSVAS_UL2_SAP, MOD_RSVAS, MOD_UL2)
    SAP_INFO(RSVAS_UL2_SAP, MOD_RSVAS, MOD_UL2_2)
    SAP_INFO(RSVAS_UL2D_SAP, MOD_RSVAS, MOD_UL2D)
    SAP_INFO(RSVAS_UL2D_SAP, MOD_RSVAS, MOD_UL2D_2)
    SAP_INFO(RSVAS_RRM_SAP, MOD_RSVAS, MOD_RRM)
    SAP_INFO(RSVAS_RRM_SAP, MOD_RSVAS, MOD_RRM_2)
    SAP_INFO(RSVAS_RRM_SAP, MOD_RSVAS, MOD_RRM_3)
    SAP_INFO(RSVAS_RRM_SAP, MOD_RSVAS, MOD_RRM_4)
    SAP_INFO(RSVAS_MPAL_SAP, MOD_RSVAS, MOD_MPAL)
    SAP_INFO(RSVAS_MPAL_SAP, MOD_RSVAS, MOD_MPAL_2)
    SAP_INFO(RSVAS_MPAL_SAP, MOD_RSVAS, MOD_MPAL_3)
    SAP_INFO(RSVAS_MPAL_SAP, MOD_RSVAS, MOD_MPAL_4)
    SAP_INFO(RSVAS_ERRC_SAP, MOD_RSVAS, MOD_ERRC)
    SAP_INFO(RSVAS_EL2TASK_SAP, MOD_RSVAS, MOD_EL2TASK)
    SAP_INFO(RSVAS_UL1_SAP, MOD_RSVAS, MOD_UL1)
    SAP_INFO(RSVAS_UL1_SAP, MOD_RSVAS, MOD_UL1_2)
    SAP_INFO(RSVAS_TL1_SAP, MOD_RSVAS, MOD_TL1)
    SAP_INFO(RSVAS_L1_SAP, MOD_RSVAS, MOD_L1)
    SAP_INFO(RSVAS_L1_SAP, MOD_RSVAS, MOD_L1_2)
    SAP_INFO(RSVAS_L1_SAP, MOD_RSVAS, MOD_L1_3)
    SAP_INFO(RSVAS_L1_SAP, MOD_RSVAS, MOD_L1_4)
    SAP_INFO(RSVAS_LL1_SAP, MOD_RSVAS, MOD_MLL1)
    SAP_INFO(RSVAS_EL1_SAP, MOD_RSVAS, MOD_EL1)
    SAP_INFO(SLCE_RSVAU_SAP, MOD_SLCE, MOD_RSVAU)
    SAP_INFO(SLCE_RSVAU_SAP, MOD_SLCE_2, MOD_RSVAU)
    SAP_INFO(RSVAU_UL1_SAP, MOD_RSVAU, MOD_UL1)
    SAP_INFO(RSVAU_UL1_SAP, MOD_RSVAU, MOD_UL1_2)
    SAP_INFO(CSE_RSVAU_SAP, MOD_CSE, MOD_RSVAU)
    SAP_INFO(CSE_RSVAU_SAP, MOD_CSE_2, MOD_RSVAU)

    /* IMC */
    SAP_INFO(DHL_IMC_SAP, ANY, MOD_IMC)
    SAP_INFO(DHL_IMC_SAP, MOD_IMC, ANY)
    SAP_INFO(IMC_IMC_SAP, MOD_IMC, MOD_IMC)
    SAP_INFO(IMSP_IMC_SAP, MOD_IMSP, MOD_IMC)
    SAP_INFO(IMSP_IMC_SAP, MOD_IMC, MOD_IMSP)
    SAP_INFO(IMC_LTECSR_SAP, MOD_LTECSR, MOD_IMC)
    SAP_INFO(IMC_LTECSR_SAP, MOD_IMC, MOD_LTECSR)
    SAP_INFO(IMCB_IMC_SAP, MOD_IMC, MOD_IMCB)
    SAP_INFO(IMCB_IMC_SAP, MOD_IMCB, MOD_IMC)
    SAP_INFO(IMC_UPCM_SAP, MOD_IMC, MOD_UPCM)
    SAP_INFO(IMC_UPCM_SAP, MOD_UPCM, MOD_IMC)

    /* SDM */
    SAP_INFO(SDM_IMSP_SAP, MOD_SDM, MOD_IMSP)
    SAP_INFO(SDM_IMC_SAP, MOD_SDM, MOD_IMC)
    SAP_INFO(SDM_IMC_SAP, MOD_SDM, MOD_IMCSMS)

    /* VDM */
    SAP_INFO(VDM_IMSP_SAP, MOD_VDM, MOD_IMSP)
    SAP_INFO(VDM_IMC_SAP, MOD_VDM, MOD_IMC)
    SAP_INFO(VDM_CTRL_TRK_SAP, MOD_VDM_CTRL, MOD_VDM_TRK)
    SAP_INFO(VDM_CTRL_ADS_SAP, MOD_VDM_CTRL, MOD_VDM_ADS)
    SAP_INFO(VDM_CTRL_VCC_SAP, MOD_VDM_CTRL, MOD_VDM_VCC)
    SAP_INFO(VDM_TRK_ADS_SAP, MOD_VDM_TRK, MOD_VDM_ADS)
    SAP_INFO(VDM_TRK_VCC_SAP, MOD_VDM_TRK, MOD_VDM_VCC)
    SAP_INFO(VDM_ADS_VCC_SAP, MOD_VDM_ADS, MOD_VDM_VCC)


    // IMCSMS
    SAP_INFO(IMCSMS_IMC_SAP, MOD_IMCSMS, MOD_IMC)
    SAP_INFO(IMSP_IMC_SAP, MOD_IMSP, MOD_IMCSMS)

    SAP_INFO(PROXY_ATCI_SAP, MOD_ATCI, MOD_IMSP)
    SAP_INFO(PROXY_ATCI_SAP, MOD_ATCI_2, MOD_IMSP_2)
    SAP_INFO(PROXY_ATCI_SAP, MOD_ATCI_3, MOD_IMSP_3)
    SAP_INFO(PROXY_ATCI_SAP, MOD_ATCI_4, MOD_IMSP_4)

    SAP_INFO(SMSAL_SMSAL_SAP,MOD_SMSAL,MOD_SMSAL)
    SAP_INFO(SMSAL_SMSAL_SAP,MOD_SMSAL_2,MOD_SMSAL_2)
    SAP_INFO(SMSAL_SMSAL_SAP,MOD_SMSAL_3,MOD_SMSAL_3)
    SAP_INFO(SMSAL_SMSAL_SAP,MOD_SMSAL_4,MOD_SMSAL_4)
    
    /* GNSS */
    SAP_INFO(LCSP_GNSS_SAP,MOD_RRLP,MOD_GPS)
    SAP_INFO(LCSP_GNSS_SAP,MOD_UAGPS_CP,MOD_GPS)
    SAP_INFO(LCSP_GNSS_SAP,MOD_LPP,MOD_GPS)
    
    /* LPP */
    SAP_INFO(LPP_EVAL_SAP,MOD_LPP,MOD_EVAL)
    SAP_INFO(LPP_ERRC_SAP,MOD_LPP,MOD_ERRC)
    SAP_INFO(LPP_EL1_SAP,MOD_LPP,MOD_EL1)
    SAP_INFO(LPP_L4C_SAP,MOD_LPP,MOD_L4C)
    SAP_INFO(LPP_LBS_SAP,MOD_LPP,MOD_LBS)

END_SAP_INFO
