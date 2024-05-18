/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_RF_Parameters_v10i0_H_
#define	_RF_Parameters_v10i0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SupportedBandCombination_v10i0;

/* RF-Parameters-v10i0 */
typedef struct RF_Parameters_v10i0 {
	struct SupportedBandCombination_v10i0	*supportedBandCombination_v10i0	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_v10i0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v10i0;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v10i0_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_v10i0_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SupportedBandCombination-v10i0.h"

#endif	/* _RF_Parameters_v10i0_H_ */
#include <asn_internal.h>
