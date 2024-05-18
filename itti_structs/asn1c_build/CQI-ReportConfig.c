/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "CQI-ReportConfig.h"

static int
memb_nomPDSCH_RS_EPRE_Offset_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_nomPDSCH_RS_EPRE_Offset_constr_3 CC_NOTUSED = {
	{ 1, 0 }	/* (-1..6) */,
	-1};
static asn_per_constraints_t asn_PER_memb_nomPDSCH_RS_EPRE_Offset_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3, -1,  6 }	/* (-1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_CQI_ReportConfig_1[] = {
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportConfig, cqi_ReportModeAperiodic),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportModeAperiodic,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportModeAperiodic"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig, nomPDSCH_RS_EPRE_Offset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_nomPDSCH_RS_EPRE_Offset_constr_3, &asn_PER_memb_nomPDSCH_RS_EPRE_Offset_constr_3,  memb_nomPDSCH_RS_EPRE_Offset_constraint_1 },
		0, 0, /* No default value */
		"nomPDSCH-RS-EPRE-Offset"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportConfig, cqi_ReportPeriodic),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CQI_ReportPeriodic,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportPeriodic"
		},
};
static const int asn_MAP_CQI_ReportConfig_oms_1[] = { 0, 2 };
static const ber_tlv_tag_t asn_DEF_CQI_ReportConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CQI_ReportConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cqi-ReportModeAperiodic */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nomPDSCH-RS-EPRE-Offset */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cqi-ReportPeriodic */
};
asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportConfig_specs_1 = {
	sizeof(struct CQI_ReportConfig),
	offsetof(struct CQI_ReportConfig, _asn_ctx),
	asn_MAP_CQI_ReportConfig_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CQI_ReportConfig_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig = {
	"CQI-ReportConfig",
	"CQI-ReportConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_CQI_ReportConfig_tags_1,
	sizeof(asn_DEF_CQI_ReportConfig_tags_1)
		/sizeof(asn_DEF_CQI_ReportConfig_tags_1[0]), /* 1 */
	asn_DEF_CQI_ReportConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_CQI_ReportConfig_tags_1)
		/sizeof(asn_DEF_CQI_ReportConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CQI_ReportConfig_1,
	3,	/* Elements count */
	&asn_SPC_CQI_ReportConfig_specs_1	/* Additional specs */
};
