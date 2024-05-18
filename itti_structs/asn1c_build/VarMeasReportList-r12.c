/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "VarMeasReportList-r12.h"

static asn_oer_constraints_t asn_OER_type_VarMeasReportList_r12_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..64)) */};
static asn_per_constraints_t asn_PER_type_VarMeasReportList_r12_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_VarMeasReportList_r12_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_VarMeasReport,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_VarMeasReportList_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_VarMeasReportList_r12_specs_1 = {
	sizeof(struct VarMeasReportList_r12),
	offsetof(struct VarMeasReportList_r12, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_VarMeasReportList_r12 = {
	"VarMeasReportList-r12",
	"VarMeasReportList-r12",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_VarMeasReportList_r12_tags_1,
	sizeof(asn_DEF_VarMeasReportList_r12_tags_1)
		/sizeof(asn_DEF_VarMeasReportList_r12_tags_1[0]), /* 1 */
	asn_DEF_VarMeasReportList_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_VarMeasReportList_r12_tags_1)
		/sizeof(asn_DEF_VarMeasReportList_r12_tags_1[0]), /* 1 */
	{ &asn_OER_type_VarMeasReportList_r12_constr_1, &asn_PER_type_VarMeasReportList_r12_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_VarMeasReportList_r12_1,
	1,	/* Single element */
	&asn_SPC_VarMeasReportList_r12_specs_1	/* Additional specs */
};

