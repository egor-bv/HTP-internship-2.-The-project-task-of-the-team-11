/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_SL_OffsetIndicator_r12_H_
#define	_SL_OffsetIndicator_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_OffsetIndicator_r12_PR {
	SL_OffsetIndicator_r12_PR_NOTHING,	/* No components present */
	SL_OffsetIndicator_r12_PR_small_r12,
	SL_OffsetIndicator_r12_PR_large_r12
} SL_OffsetIndicator_r12_PR;

/* SL-OffsetIndicator-r12 */
typedef struct SL_OffsetIndicator_r12 {
	SL_OffsetIndicator_r12_PR present;
	union SL_OffsetIndicator_r12_u {
		long	 small_r12;
		long	 large_r12;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_OffsetIndicator_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_OffsetIndicator_r12;
extern asn_CHOICE_specifics_t asn_SPC_SL_OffsetIndicator_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_OffsetIndicator_r12_1[2];
extern asn_per_constraints_t asn_PER_type_SL_OffsetIndicator_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_OffsetIndicator_r12_H_ */
#include <asn_internal.h>
