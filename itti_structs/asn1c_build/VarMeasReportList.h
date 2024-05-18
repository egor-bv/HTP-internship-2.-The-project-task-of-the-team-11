/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_VarMeasReportList_H_
#define	_VarMeasReportList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VarMeasReport;

/* VarMeasReportList */
typedef struct VarMeasReportList {
	A_SEQUENCE_OF(struct VarMeasReport) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarMeasReportList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarMeasReportList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VarMeasReport.h"

#endif	/* _VarMeasReportList_H_ */
#include <asn_internal.h>
