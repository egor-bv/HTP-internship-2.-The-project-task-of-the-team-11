/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_BCCH_DL_SCH_Message_NB_H_
#define	_BCCH_DL_SCH_Message_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BCCH-DL-SCH-MessageType-NB.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BCCH-DL-SCH-Message-NB */
typedef struct BCCH_DL_SCH_Message_NB {
	BCCH_DL_SCH_MessageType_NB_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BCCH_DL_SCH_Message_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BCCH_DL_SCH_Message_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _BCCH_DL_SCH_Message_NB_H_ */
#include <asn_internal.h>
