/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_SC_MTCH_InfoList_BR_r14_H_
#define	_SC_MTCH_InfoList_BR_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SC_MTCH_Info_BR_r14;

/* SC-MTCH-InfoList-BR-r14 */
typedef struct SC_MTCH_InfoList_BR_r14 {
	A_SEQUENCE_OF(struct SC_MTCH_Info_BR_r14) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SC_MTCH_InfoList_BR_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SC_MTCH_InfoList_BR_r14;
extern asn_SET_OF_specifics_t asn_SPC_SC_MTCH_InfoList_BR_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SC_MTCH_InfoList_BR_r14_1[1];
extern asn_per_constraints_t asn_PER_type_SC_MTCH_InfoList_BR_r14_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SC-MTCH-Info-BR-r14.h"

#endif	/* _SC_MTCH_InfoList_BR_r14_H_ */
#include <asn_internal.h>
