/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_PhyLayerParameters_v1310_H_
#define	_PhyLayerParameters_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhyLayerParameters_v1310__crossCarrierScheduling_B5C_r13 {
	PhyLayerParameters_v1310__crossCarrierScheduling_B5C_r13_supported	= 0
} e_PhyLayerParameters_v1310__crossCarrierScheduling_B5C_r13;
typedef enum PhyLayerParameters_v1310__fdd_HARQ_TimingTDD_r13 {
	PhyLayerParameters_v1310__fdd_HARQ_TimingTDD_r13_supported	= 0
} e_PhyLayerParameters_v1310__fdd_HARQ_TimingTDD_r13;
typedef enum PhyLayerParameters_v1310__pucch_Format4_r13 {
	PhyLayerParameters_v1310__pucch_Format4_r13_supported	= 0
} e_PhyLayerParameters_v1310__pucch_Format4_r13;
typedef enum PhyLayerParameters_v1310__pucch_Format5_r13 {
	PhyLayerParameters_v1310__pucch_Format5_r13_supported	= 0
} e_PhyLayerParameters_v1310__pucch_Format5_r13;
typedef enum PhyLayerParameters_v1310__pucch_SCell_r13 {
	PhyLayerParameters_v1310__pucch_SCell_r13_supported	= 0
} e_PhyLayerParameters_v1310__pucch_SCell_r13;
typedef enum PhyLayerParameters_v1310__spatialBundling_HARQ_ACK_r13 {
	PhyLayerParameters_v1310__spatialBundling_HARQ_ACK_r13_supported	= 0
} e_PhyLayerParameters_v1310__spatialBundling_HARQ_ACK_r13;
typedef enum PhyLayerParameters_v1310__supportedBlindDecoding_r13__pdcch_CandidateReductions_r13 {
	PhyLayerParameters_v1310__supportedBlindDecoding_r13__pdcch_CandidateReductions_r13_supported	= 0
} e_PhyLayerParameters_v1310__supportedBlindDecoding_r13__pdcch_CandidateReductions_r13;
typedef enum PhyLayerParameters_v1310__supportedBlindDecoding_r13__skipMonitoringDCI_Format0_1A_r13 {
	PhyLayerParameters_v1310__supportedBlindDecoding_r13__skipMonitoringDCI_Format0_1A_r13_supported	= 0
} e_PhyLayerParameters_v1310__supportedBlindDecoding_r13__skipMonitoringDCI_Format0_1A_r13;
typedef enum PhyLayerParameters_v1310__uci_PUSCH_Ext_r13 {
	PhyLayerParameters_v1310__uci_PUSCH_Ext_r13_supported	= 0
} e_PhyLayerParameters_v1310__uci_PUSCH_Ext_r13;
typedef enum PhyLayerParameters_v1310__crs_InterfMitigationTM10_r13 {
	PhyLayerParameters_v1310__crs_InterfMitigationTM10_r13_supported	= 0
} e_PhyLayerParameters_v1310__crs_InterfMitigationTM10_r13;
typedef enum PhyLayerParameters_v1310__pdsch_CollisionHandling_r13 {
	PhyLayerParameters_v1310__pdsch_CollisionHandling_r13_supported	= 0
} e_PhyLayerParameters_v1310__pdsch_CollisionHandling_r13;

/* PhyLayerParameters-v1310 */
typedef struct PhyLayerParameters_v1310 {
	BIT_STRING_t	*aperiodicCSI_Reporting_r13	/* OPTIONAL */;
	BIT_STRING_t	*codebook_HARQ_ACK_r13	/* OPTIONAL */;
	long	*crossCarrierScheduling_B5C_r13	/* OPTIONAL */;
	long	*fdd_HARQ_TimingTDD_r13	/* OPTIONAL */;
	long	*maxNumberUpdatedCSI_Proc_r13	/* OPTIONAL */;
	long	*pucch_Format4_r13	/* OPTIONAL */;
	long	*pucch_Format5_r13	/* OPTIONAL */;
	long	*pucch_SCell_r13	/* OPTIONAL */;
	long	*spatialBundling_HARQ_ACK_r13	/* OPTIONAL */;
	struct PhyLayerParameters_v1310__supportedBlindDecoding_r13 {
		long	*maxNumberDecoding_r13	/* OPTIONAL */;
		long	*pdcch_CandidateReductions_r13	/* OPTIONAL */;
		long	*skipMonitoringDCI_Format0_1A_r13	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *supportedBlindDecoding_r13;
	long	*uci_PUSCH_Ext_r13	/* OPTIONAL */;
	long	*crs_InterfMitigationTM10_r13	/* OPTIONAL */;
	long	*pdsch_CollisionHandling_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_crossCarrierScheduling_B5C_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_fdd_HARQ_TimingTDD_r13_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pucch_Format4_r13_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pucch_Format5_r13_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pucch_SCell_r13_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_spatialBundling_HARQ_ACK_r13_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdcch_CandidateReductions_r13_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_skipMonitoringDCI_Format0_1A_r13_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_uci_PUSCH_Ext_r13_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_InterfMitigationTM10_r13_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdsch_CollisionHandling_r13_27;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_PhyLayerParameters_v1310_1[13];

#ifdef __cplusplus
}
#endif

#endif	/* _PhyLayerParameters_v1310_H_ */
#include <asn_internal.h>
