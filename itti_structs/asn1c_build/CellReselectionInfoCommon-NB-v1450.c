/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "CellReselectionInfoCommon-NB-v1450.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_s_SearchDeltaP_r14_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_s_SearchDeltaP_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_s_SearchDeltaP_r14_value2enum_2[] = {
	{ 0,	3,	"dB6" },
	{ 1,	3,	"dB9" },
	{ 2,	4,	"dB12" },
	{ 3,	4,	"dB15" }
};
static const unsigned int asn_MAP_s_SearchDeltaP_r14_enum2value_2[] = {
	2,	/* dB12(2) */
	3,	/* dB15(3) */
	0,	/* dB6(0) */
	1	/* dB9(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_s_SearchDeltaP_r14_specs_2 = {
	asn_MAP_s_SearchDeltaP_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_s_SearchDeltaP_r14_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_s_SearchDeltaP_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_s_SearchDeltaP_r14_2 = {
	"s-SearchDeltaP-r14",
	"s-SearchDeltaP-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_s_SearchDeltaP_r14_tags_2,
	sizeof(asn_DEF_s_SearchDeltaP_r14_tags_2)
		/sizeof(asn_DEF_s_SearchDeltaP_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_s_SearchDeltaP_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_s_SearchDeltaP_r14_tags_2)
		/sizeof(asn_DEF_s_SearchDeltaP_r14_tags_2[0]), /* 2 */
	{ &asn_OER_type_s_SearchDeltaP_r14_constr_2, &asn_PER_type_s_SearchDeltaP_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_s_SearchDeltaP_r14_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CellReselectionInfoCommon_NB_v1450_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellReselectionInfoCommon_NB_v1450, s_SearchDeltaP_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_s_SearchDeltaP_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-SearchDeltaP-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_CellReselectionInfoCommon_NB_v1450_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellReselectionInfoCommon_NB_v1450_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* s-SearchDeltaP-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_CellReselectionInfoCommon_NB_v1450_specs_1 = {
	sizeof(struct CellReselectionInfoCommon_NB_v1450),
	offsetof(struct CellReselectionInfoCommon_NB_v1450, _asn_ctx),
	asn_MAP_CellReselectionInfoCommon_NB_v1450_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellReselectionInfoCommon_NB_v1450 = {
	"CellReselectionInfoCommon-NB-v1450",
	"CellReselectionInfoCommon-NB-v1450",
	&asn_OP_SEQUENCE,
	asn_DEF_CellReselectionInfoCommon_NB_v1450_tags_1,
	sizeof(asn_DEF_CellReselectionInfoCommon_NB_v1450_tags_1)
		/sizeof(asn_DEF_CellReselectionInfoCommon_NB_v1450_tags_1[0]), /* 1 */
	asn_DEF_CellReselectionInfoCommon_NB_v1450_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellReselectionInfoCommon_NB_v1450_tags_1)
		/sizeof(asn_DEF_CellReselectionInfoCommon_NB_v1450_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CellReselectionInfoCommon_NB_v1450_1,
	1,	/* Elements count */
	&asn_SPC_CellReselectionInfoCommon_NB_v1450_specs_1	/* Additional specs */
};

