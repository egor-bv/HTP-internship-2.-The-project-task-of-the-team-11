/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_VarMeasConfig_H_
#define	_VarMeasConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasScaleFactor-r12.h"
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <NULL.h>
#include "MobilityStateParameters.h"
#include "SpeedStateScaleFactors.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VarMeasConfig__speedStatePars_PR {
	VarMeasConfig__speedStatePars_PR_NOTHING,	/* No components present */
	VarMeasConfig__speedStatePars_PR_release,
	VarMeasConfig__speedStatePars_PR_setup
} VarMeasConfig__speedStatePars_PR;

/* Forward declarations */
struct MeasIdToAddModList;
struct MeasIdToAddModListExt_r12;
struct MeasIdToAddModList_v1310;
struct MeasIdToAddModListExt_v1310;
struct MeasObjectToAddModList;
struct MeasObjectToAddModListExt_r13;
struct MeasObjectToAddModList_v9e0;
struct ReportConfigToAddModList;
struct QuantityConfig;

/* VarMeasConfig */
typedef struct VarMeasConfig {
	struct MeasIdToAddModList	*measIdList	/* OPTIONAL */;
	struct MeasIdToAddModListExt_r12	*measIdListExt_r12	/* OPTIONAL */;
	struct MeasIdToAddModList_v1310	*measIdList_v1310	/* OPTIONAL */;
	struct MeasIdToAddModListExt_v1310	*measIdListExt_v1310	/* OPTIONAL */;
	struct MeasObjectToAddModList	*measObjectList	/* OPTIONAL */;
	struct MeasObjectToAddModListExt_r13	*measObjectListExt_r13	/* OPTIONAL */;
	struct MeasObjectToAddModList_v9e0	*measObjectList_v9i0	/* OPTIONAL */;
	struct ReportConfigToAddModList	*reportConfigList	/* OPTIONAL */;
	struct QuantityConfig	*quantityConfig	/* OPTIONAL */;
	MeasScaleFactor_r12_t	*measScaleFactor_r12	/* OPTIONAL */;
	long	*s_Measure	/* OPTIONAL */;
	struct VarMeasConfig__speedStatePars {
		VarMeasConfig__speedStatePars_PR present;
		union VarMeasConfig__speedStatePars_u {
			NULL_t	 release;
			struct VarMeasConfig__speedStatePars__setup {
				MobilityStateParameters_t	 mobilityStateParameters;
				SpeedStateScaleFactors_t	 timeToTrigger_SF;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *speedStatePars;
	BOOLEAN_t	*allowInterruptions_r11	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarMeasConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarMeasConfig;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasIdToAddModList.h"
#include "MeasIdToAddModListExt-r12.h"
#include "MeasIdToAddModList-v1310.h"
#include "MeasIdToAddModListExt-v1310.h"
#include "MeasObjectToAddModList.h"
#include "MeasObjectToAddModListExt-r13.h"
#include "MeasObjectToAddModList-v9e0.h"
#include "ReportConfigToAddModList.h"
#include "QuantityConfig.h"

#endif	/* _VarMeasConfig_H_ */
#include <asn_internal.h>