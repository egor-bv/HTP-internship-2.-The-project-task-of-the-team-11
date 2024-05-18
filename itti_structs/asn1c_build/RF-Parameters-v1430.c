/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "RF-Parameters-v1430.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_diffFallbackCombReport_r14_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_diffFallbackCombReport_r14_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_eNB_RequestedParameters_v1430_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RF_Parameters_v1430__eNB_RequestedParameters_v1430, requestedDiffFallbackCombList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandCombinationList_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestedDiffFallbackCombList-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_eNB_RequestedParameters_v1430_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_eNB_RequestedParameters_v1430_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* requestedDiffFallbackCombList-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_eNB_RequestedParameters_v1430_specs_5 = {
	sizeof(struct RF_Parameters_v1430__eNB_RequestedParameters_v1430),
	offsetof(struct RF_Parameters_v1430__eNB_RequestedParameters_v1430, _asn_ctx),
	asn_MAP_eNB_RequestedParameters_v1430_tag2el_5,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eNB_RequestedParameters_v1430_5 = {
	"eNB-RequestedParameters-v1430",
	"eNB-RequestedParameters-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_eNB_RequestedParameters_v1430_tags_5,
	sizeof(asn_DEF_eNB_RequestedParameters_v1430_tags_5)
		/sizeof(asn_DEF_eNB_RequestedParameters_v1430_tags_5[0]) - 1, /* 1 */
	asn_DEF_eNB_RequestedParameters_v1430_tags_5,	/* Same as above */
	sizeof(asn_DEF_eNB_RequestedParameters_v1430_tags_5)
		/sizeof(asn_DEF_eNB_RequestedParameters_v1430_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_eNB_RequestedParameters_v1430_5,
	1,	/* Elements count */
	&asn_SPC_eNB_RequestedParameters_v1430_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_diffFallbackCombReport_r14_value2enum_7[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_diffFallbackCombReport_r14_enum2value_7[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_diffFallbackCombReport_r14_specs_7 = {
	asn_MAP_diffFallbackCombReport_r14_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_diffFallbackCombReport_r14_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_diffFallbackCombReport_r14_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_diffFallbackCombReport_r14_7 = {
	"diffFallbackCombReport-r14",
	"diffFallbackCombReport-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_diffFallbackCombReport_r14_tags_7,
	sizeof(asn_DEF_diffFallbackCombReport_r14_tags_7)
		/sizeof(asn_DEF_diffFallbackCombReport_r14_tags_7[0]) - 1, /* 1 */
	asn_DEF_diffFallbackCombReport_r14_tags_7,	/* Same as above */
	sizeof(asn_DEF_diffFallbackCombReport_r14_tags_7)
		/sizeof(asn_DEF_diffFallbackCombReport_r14_tags_7[0]), /* 2 */
	{ &asn_OER_type_diffFallbackCombReport_r14_constr_7, &asn_PER_type_diffFallbackCombReport_r14_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_diffFallbackCombReport_r14_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RF_Parameters_v1430_1[] = {
	{ ATF_POINTER, 5, offsetof(struct RF_Parameters_v1430, supportedBandCombination_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandCombination_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombination-v1430"
		},
	{ ATF_POINTER, 4, offsetof(struct RF_Parameters_v1430, supportedBandCombinationAdd_v1430),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandCombinationAdd_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationAdd-v1430"
		},
	{ ATF_POINTER, 3, offsetof(struct RF_Parameters_v1430, supportedBandCombinationReduced_v1430),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandCombinationReduced_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandCombinationReduced-v1430"
		},
	{ ATF_POINTER, 2, offsetof(struct RF_Parameters_v1430, eNB_RequestedParameters_v1430),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_eNB_RequestedParameters_v1430_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eNB-RequestedParameters-v1430"
		},
	{ ATF_POINTER, 1, offsetof(struct RF_Parameters_v1430, diffFallbackCombReport_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_diffFallbackCombReport_r14_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"diffFallbackCombReport-r14"
		},
};
static const int asn_MAP_RF_Parameters_v1430_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RF_Parameters_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RF_Parameters_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedBandCombination-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* supportedBandCombinationAdd-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* supportedBandCombinationReduced-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* eNB-RequestedParameters-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* diffFallbackCombReport-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1430_specs_1 = {
	sizeof(struct RF_Parameters_v1430),
	offsetof(struct RF_Parameters_v1430, _asn_ctx),
	asn_MAP_RF_Parameters_v1430_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RF_Parameters_v1430_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1430 = {
	"RF-Parameters-v1430",
	"RF-Parameters-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_RF_Parameters_v1430_tags_1,
	sizeof(asn_DEF_RF_Parameters_v1430_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v1430_tags_1[0]), /* 1 */
	asn_DEF_RF_Parameters_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_RF_Parameters_v1430_tags_1)
		/sizeof(asn_DEF_RF_Parameters_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RF_Parameters_v1430_1,
	5,	/* Elements count */
	&asn_SPC_RF_Parameters_v1430_specs_1	/* Additional specs */
};

