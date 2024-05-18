/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_PSCellToAddMod_r12_H_
#define	_PSCellToAddMod_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SCellIndex-r10.h"
#include "SCellIndex-r13.h"
#include "PhysCellId.h"
#include "ARFCN-ValueEUTRA-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RadioResourceConfigCommonPSCell_r12;
struct RadioResourceConfigDedicatedPSCell_r12;
struct AntennaInfoDedicated_v10i0;
struct RadioResourceConfigDedicatedPSCell_v1370;

/* PSCellToAddMod-r12 */
typedef struct PSCellToAddMod_r12 {
	SCellIndex_r10_t	 sCellIndex_r12;
	struct PSCellToAddMod_r12__cellIdentification_r12 {
		PhysCellId_t	 physCellId_r12;
		ARFCN_ValueEUTRA_r9_t	 dl_CarrierFreq_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellIdentification_r12;
	struct RadioResourceConfigCommonPSCell_r12	*radioResourceConfigCommonPSCell_r12	/* OPTIONAL */;
	struct RadioResourceConfigDedicatedPSCell_r12	*radioResourceConfigDedicatedPSCell_r12	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct AntennaInfoDedicated_v10i0	*antennaInfoDedicatedPSCell_v1280	/* OPTIONAL */;
	SCellIndex_r13_t	*sCellIndex_r13	/* OPTIONAL */;
	struct RadioResourceConfigDedicatedPSCell_v1370	*radioResourceConfigDedicatedPSCell_v1370	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PSCellToAddMod_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PSCellToAddMod_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_PSCellToAddMod_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_PSCellToAddMod_r12_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RadioResourceConfigCommonPSCell-r12.h"
#include "RadioResourceConfigDedicatedPSCell-r12.h"
#include "AntennaInfoDedicated-v10i0.h"
#include "RadioResourceConfigDedicatedPSCell-v1370.h"

#endif	/* _PSCellToAddMod_r12_H_ */
#include <asn_internal.h>
