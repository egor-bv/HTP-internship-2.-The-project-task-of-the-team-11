/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "UE-EUTRA-Capability-v1330-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ue_CategoryDL_v1330_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 18 && value <= 19)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_ue_CE_NeedULGaps_r13_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ue_CE_NeedULGaps_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ue_CategoryDL_v1330_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (18..19) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ue_CategoryDL_v1330_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  18,  19 }	/* (18..19) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ue_CE_NeedULGaps_r13_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_ue_CE_NeedULGaps_r13_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_CE_NeedULGaps_r13_specs_4 = {
	asn_MAP_ue_CE_NeedULGaps_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_CE_NeedULGaps_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_CE_NeedULGaps_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_CE_NeedULGaps_r13_4 = {
	"ue-CE-NeedULGaps-r13",
	"ue-CE-NeedULGaps-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_CE_NeedULGaps_r13_tags_4,
	sizeof(asn_DEF_ue_CE_NeedULGaps_r13_tags_4)
		/sizeof(asn_DEF_ue_CE_NeedULGaps_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_ue_CE_NeedULGaps_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_ue_CE_NeedULGaps_r13_tags_4)
		/sizeof(asn_DEF_ue_CE_NeedULGaps_r13_tags_4[0]), /* 2 */
	{ &asn_OER_type_ue_CE_NeedULGaps_r13_constr_4, &asn_PER_type_ue_CE_NeedULGaps_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_CE_NeedULGaps_r13_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1330_IEs_1[] = {
	{ ATF_POINTER, 4, offsetof(struct UE_EUTRA_Capability_v1330_IEs, ue_CategoryDL_v1330),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ue_CategoryDL_v1330_constr_2, &asn_PER_memb_ue_CategoryDL_v1330_constr_2,  memb_ue_CategoryDL_v1330_constraint_1 },
		0, 0, /* No default value */
		"ue-CategoryDL-v1330"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability_v1330_IEs, phyLayerParameters_v1330),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_v1330,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-v1330"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1330_IEs, ue_CE_NeedULGaps_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_CE_NeedULGaps_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-CE-NeedULGaps-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1330_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v1340_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_EUTRA_Capability_v1330_IEs_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v1330_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v1330_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-CategoryDL-v1330 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* phyLayerParameters-v1330 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ue-CE-NeedULGaps-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1330_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v1330_IEs),
	offsetof(struct UE_EUTRA_Capability_v1330_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v1330_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v1330_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1330_IEs = {
	"UE-EUTRA-Capability-v1330-IEs",
	"UE-EUTRA-Capability-v1330-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_Capability_v1330_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v1330_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1330_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v1330_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v1330_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1330_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_Capability_v1330_IEs_1,
	4,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v1330_IEs_specs_1	/* Additional specs */
};

