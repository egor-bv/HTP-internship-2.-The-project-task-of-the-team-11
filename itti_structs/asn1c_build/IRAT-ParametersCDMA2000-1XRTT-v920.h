/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_IRAT_ParametersCDMA2000_1XRTT_v920_H_
#define	_IRAT_ParametersCDMA2000_1XRTT_v920_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IRAT_ParametersCDMA2000_1XRTT_v920__e_CSFB_1XRTT_r9 {
	IRAT_ParametersCDMA2000_1XRTT_v920__e_CSFB_1XRTT_r9_supported	= 0
} e_IRAT_ParametersCDMA2000_1XRTT_v920__e_CSFB_1XRTT_r9;
typedef enum IRAT_ParametersCDMA2000_1XRTT_v920__e_CSFB_ConcPS_Mob1XRTT_r9 {
	IRAT_ParametersCDMA2000_1XRTT_v920__e_CSFB_ConcPS_Mob1XRTT_r9_supported	= 0
} e_IRAT_ParametersCDMA2000_1XRTT_v920__e_CSFB_ConcPS_Mob1XRTT_r9;

/* IRAT-ParametersCDMA2000-1XRTT-v920 */
typedef struct IRAT_ParametersCDMA2000_1XRTT_v920 {
	long	 e_CSFB_1XRTT_r9;
	long	*e_CSFB_ConcPS_Mob1XRTT_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersCDMA2000_1XRTT_v920_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_e_CSFB_1XRTT_r9_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_e_CSFB_ConcPS_Mob1XRTT_r9_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersCDMA2000_1XRTT_v920;
extern asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersCDMA2000_1XRTT_v920_specs_1;
extern asn_TYPE_member_t asn_MBR_IRAT_ParametersCDMA2000_1XRTT_v920_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersCDMA2000_1XRTT_v920_H_ */
#include <asn_internal.h>
