/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "CIOT-OptimisationPLMN-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_up_CIoT_EPS_Optimisation_r13_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_up_CIoT_EPS_Optimisation_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_cp_CIoT_EPS_Optimisation_r13_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cp_CIoT_EPS_Optimisation_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_attachWithoutPDN_Connectivity_r13_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_attachWithoutPDN_Connectivity_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_up_CIoT_EPS_Optimisation_r13_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_up_CIoT_EPS_Optimisation_r13_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_up_CIoT_EPS_Optimisation_r13_specs_2 = {
	asn_MAP_up_CIoT_EPS_Optimisation_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_up_CIoT_EPS_Optimisation_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_up_CIoT_EPS_Optimisation_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_up_CIoT_EPS_Optimisation_r13_2 = {
	"up-CIoT-EPS-Optimisation-r13",
	"up-CIoT-EPS-Optimisation-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_up_CIoT_EPS_Optimisation_r13_tags_2,
	sizeof(asn_DEF_up_CIoT_EPS_Optimisation_r13_tags_2)
		/sizeof(asn_DEF_up_CIoT_EPS_Optimisation_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_up_CIoT_EPS_Optimisation_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_up_CIoT_EPS_Optimisation_r13_tags_2)
		/sizeof(asn_DEF_up_CIoT_EPS_Optimisation_r13_tags_2[0]), /* 2 */
	{ &asn_OER_type_up_CIoT_EPS_Optimisation_r13_constr_2, &asn_PER_type_up_CIoT_EPS_Optimisation_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_up_CIoT_EPS_Optimisation_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cp_CIoT_EPS_Optimisation_r13_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_cp_CIoT_EPS_Optimisation_r13_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_cp_CIoT_EPS_Optimisation_r13_specs_4 = {
	asn_MAP_cp_CIoT_EPS_Optimisation_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_cp_CIoT_EPS_Optimisation_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cp_CIoT_EPS_Optimisation_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cp_CIoT_EPS_Optimisation_r13_4 = {
	"cp-CIoT-EPS-Optimisation-r13",
	"cp-CIoT-EPS-Optimisation-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_cp_CIoT_EPS_Optimisation_r13_tags_4,
	sizeof(asn_DEF_cp_CIoT_EPS_Optimisation_r13_tags_4)
		/sizeof(asn_DEF_cp_CIoT_EPS_Optimisation_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_cp_CIoT_EPS_Optimisation_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_cp_CIoT_EPS_Optimisation_r13_tags_4)
		/sizeof(asn_DEF_cp_CIoT_EPS_Optimisation_r13_tags_4[0]), /* 2 */
	{ &asn_OER_type_cp_CIoT_EPS_Optimisation_r13_constr_4, &asn_PER_type_cp_CIoT_EPS_Optimisation_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cp_CIoT_EPS_Optimisation_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_attachWithoutPDN_Connectivity_r13_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_attachWithoutPDN_Connectivity_r13_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_attachWithoutPDN_Connectivity_r13_specs_6 = {
	asn_MAP_attachWithoutPDN_Connectivity_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_attachWithoutPDN_Connectivity_r13_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_attachWithoutPDN_Connectivity_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_attachWithoutPDN_Connectivity_r13_6 = {
	"attachWithoutPDN-Connectivity-r13",
	"attachWithoutPDN-Connectivity-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_attachWithoutPDN_Connectivity_r13_tags_6,
	sizeof(asn_DEF_attachWithoutPDN_Connectivity_r13_tags_6)
		/sizeof(asn_DEF_attachWithoutPDN_Connectivity_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_attachWithoutPDN_Connectivity_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_attachWithoutPDN_Connectivity_r13_tags_6)
		/sizeof(asn_DEF_attachWithoutPDN_Connectivity_r13_tags_6[0]), /* 2 */
	{ &asn_OER_type_attachWithoutPDN_Connectivity_r13_constr_6, &asn_PER_type_attachWithoutPDN_Connectivity_r13_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_attachWithoutPDN_Connectivity_r13_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CIOT_OptimisationPLMN_r13_1[] = {
	{ ATF_POINTER, 3, offsetof(struct CIOT_OptimisationPLMN_r13, up_CIoT_EPS_Optimisation_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_up_CIoT_EPS_Optimisation_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"up-CIoT-EPS-Optimisation-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct CIOT_OptimisationPLMN_r13, cp_CIoT_EPS_Optimisation_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cp_CIoT_EPS_Optimisation_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cp-CIoT-EPS-Optimisation-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct CIOT_OptimisationPLMN_r13, attachWithoutPDN_Connectivity_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_attachWithoutPDN_Connectivity_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"attachWithoutPDN-Connectivity-r13"
		},
};
static const int asn_MAP_CIOT_OptimisationPLMN_r13_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_CIOT_OptimisationPLMN_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CIOT_OptimisationPLMN_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* up-CIoT-EPS-Optimisation-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cp-CIoT-EPS-Optimisation-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* attachWithoutPDN-Connectivity-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_CIOT_OptimisationPLMN_r13_specs_1 = {
	sizeof(struct CIOT_OptimisationPLMN_r13),
	offsetof(struct CIOT_OptimisationPLMN_r13, _asn_ctx),
	asn_MAP_CIOT_OptimisationPLMN_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CIOT_OptimisationPLMN_r13_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CIOT_OptimisationPLMN_r13 = {
	"CIOT-OptimisationPLMN-r13",
	"CIOT-OptimisationPLMN-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_CIOT_OptimisationPLMN_r13_tags_1,
	sizeof(asn_DEF_CIOT_OptimisationPLMN_r13_tags_1)
		/sizeof(asn_DEF_CIOT_OptimisationPLMN_r13_tags_1[0]), /* 1 */
	asn_DEF_CIOT_OptimisationPLMN_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_CIOT_OptimisationPLMN_r13_tags_1)
		/sizeof(asn_DEF_CIOT_OptimisationPLMN_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CIOT_OptimisationPLMN_r13_1,
	3,	/* Elements count */
	&asn_SPC_CIOT_OptimisationPLMN_r13_specs_1	/* Additional specs */
};

