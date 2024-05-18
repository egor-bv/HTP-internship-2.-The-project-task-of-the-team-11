/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_SL_CBR_PSSCH_TxConfig_r14_H_
#define	_SL_CBR_PSSCH_TxConfig_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "SL-PSSCH-TxParameters-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-CBR-PSSCH-TxConfig-r14 */
typedef struct SL_CBR_PSSCH_TxConfig_r14 {
	long	 cr_Limit_r14;
	SL_PSSCH_TxParameters_r14_t	 tx_Parameters_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_CBR_PSSCH_TxConfig_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_CBR_PSSCH_TxConfig_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_CBR_PSSCH_TxConfig_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_CBR_PSSCH_TxConfig_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_CBR_PSSCH_TxConfig_r14_H_ */
#include <asn_internal.h>
