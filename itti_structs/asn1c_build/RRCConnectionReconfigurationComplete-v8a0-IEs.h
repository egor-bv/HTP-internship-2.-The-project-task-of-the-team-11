/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_RRCConnectionReconfigurationComplete_v8a0_IEs_H_
#define	_RRCConnectionReconfigurationComplete_v8a0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCConnectionReconfigurationComplete_v1020_IEs;

/* RRCConnectionReconfigurationComplete-v8a0-IEs */
typedef struct RRCConnectionReconfigurationComplete_v8a0_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct RRCConnectionReconfigurationComplete_v1020_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfigurationComplete_v8a0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfigurationComplete_v8a0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfigurationComplete_v8a0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfigurationComplete_v8a0_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionReconfigurationComplete-v1020-IEs.h"

#endif	/* _RRCConnectionReconfigurationComplete_v8a0_IEs_H_ */
#include <asn_internal.h>
