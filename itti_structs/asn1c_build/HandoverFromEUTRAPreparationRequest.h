/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_HandoverFromEUTRAPreparationRequest_H_
#define	_HandoverFromEUTRAPreparationRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "HandoverFromEUTRAPreparationRequest-r8-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverFromEUTRAPreparationRequest__criticalExtensions_PR {
	HandoverFromEUTRAPreparationRequest__criticalExtensions_PR_NOTHING,	/* No components present */
	HandoverFromEUTRAPreparationRequest__criticalExtensions_PR_c1,
	HandoverFromEUTRAPreparationRequest__criticalExtensions_PR_criticalExtensionsFuture
} HandoverFromEUTRAPreparationRequest__criticalExtensions_PR;
typedef enum HandoverFromEUTRAPreparationRequest__criticalExtensions__c1_PR {
	HandoverFromEUTRAPreparationRequest__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	HandoverFromEUTRAPreparationRequest__criticalExtensions__c1_PR_handoverFromEUTRAPreparationRequest_r8,
	HandoverFromEUTRAPreparationRequest__criticalExtensions__c1_PR_spare3,
	HandoverFromEUTRAPreparationRequest__criticalExtensions__c1_PR_spare2,
	HandoverFromEUTRAPreparationRequest__criticalExtensions__c1_PR_spare1
} HandoverFromEUTRAPreparationRequest__criticalExtensions__c1_PR;

/* HandoverFromEUTRAPreparationRequest */
typedef struct HandoverFromEUTRAPreparationRequest {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct HandoverFromEUTRAPreparationRequest__criticalExtensions {
		HandoverFromEUTRAPreparationRequest__criticalExtensions_PR present;
		union HandoverFromEUTRAPreparationRequest__criticalExtensions_u {
			struct HandoverFromEUTRAPreparationRequest__criticalExtensions__c1 {
				HandoverFromEUTRAPreparationRequest__criticalExtensions__c1_PR present;
				union HandoverFromEUTRAPreparationRequest__criticalExtensions__c1_u {
					HandoverFromEUTRAPreparationRequest_r8_IEs_t	 handoverFromEUTRAPreparationRequest_r8;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct HandoverFromEUTRAPreparationRequest__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverFromEUTRAPreparationRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverFromEUTRAPreparationRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_HandoverFromEUTRAPreparationRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverFromEUTRAPreparationRequest_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverFromEUTRAPreparationRequest_H_ */
#include <asn_internal.h>
