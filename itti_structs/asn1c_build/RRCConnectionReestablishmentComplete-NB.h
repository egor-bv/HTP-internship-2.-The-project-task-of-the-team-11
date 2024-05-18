/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_RRCConnectionReestablishmentComplete_NB_H_
#define	_RRCConnectionReestablishmentComplete_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "RRCConnectionReestablishmentComplete-NB-r13-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReestablishmentComplete_NB__criticalExtensions_PR {
	RRCConnectionReestablishmentComplete_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionReestablishmentComplete_NB__criticalExtensions_PR_rrcConnectionReestablishmentComplete_r13,
	RRCConnectionReestablishmentComplete_NB__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionReestablishmentComplete_NB__criticalExtensions_PR;

/* RRCConnectionReestablishmentComplete-NB */
typedef struct RRCConnectionReestablishmentComplete_NB {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCConnectionReestablishmentComplete_NB__criticalExtensions {
		RRCConnectionReestablishmentComplete_NB__criticalExtensions_PR present;
		union RRCConnectionReestablishmentComplete_NB__criticalExtensions_u {
			RRCConnectionReestablishmentComplete_NB_r13_IEs_t	 rrcConnectionReestablishmentComplete_r13;
			struct RRCConnectionReestablishmentComplete_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishmentComplete_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentComplete_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReestablishmentComplete_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReestablishmentComplete_NB_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReestablishmentComplete_NB_H_ */
#include <asn_internal.h>
