/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "DRB-CountInfo.h"

static int
count_Uplink_3_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static int
count_Downlink_4_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static int
memb_count_Uplink_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

static int
memb_count_Downlink_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

static asn_oer_constraints_t asn_OER_type_count_Uplink_constr_3 CC_NOTUSED = {
	{ 4, 1 }	/* (0..4294967295) */,
	-1};
static asn_per_constraints_t asn_PER_type_count_Uplink_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_count_Downlink_constr_4 CC_NOTUSED = {
	{ 4, 1 }	/* (0..4294967295) */,
	-1};
static asn_per_constraints_t asn_PER_type_count_Downlink_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_count_Uplink_constr_3 CC_NOTUSED = {
	{ 4, 1 }	/* (0..4294967295) */,
	-1};
static asn_per_constraints_t asn_PER_memb_count_Uplink_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_count_Downlink_constr_4 CC_NOTUSED = {
	{ 4, 1 }	/* (0..4294967295) */,
	-1};
static asn_per_constraints_t asn_PER_memb_count_Downlink_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_specifics_t asn_SPC_count_Uplink_specs_3 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static const ber_tlv_tag_t asn_DEF_count_Uplink_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_count_Uplink_3 = {
	"count-Uplink",
	"count-Uplink",
	&asn_OP_NativeInteger,
	asn_DEF_count_Uplink_tags_3,
	sizeof(asn_DEF_count_Uplink_tags_3)
		/sizeof(asn_DEF_count_Uplink_tags_3[0]) - 1, /* 1 */
	asn_DEF_count_Uplink_tags_3,	/* Same as above */
	sizeof(asn_DEF_count_Uplink_tags_3)
		/sizeof(asn_DEF_count_Uplink_tags_3[0]), /* 2 */
	{ &asn_OER_type_count_Uplink_constr_3, &asn_PER_type_count_Uplink_constr_3, count_Uplink_3_constraint },
	0, 0,	/* No members */
	&asn_SPC_count_Uplink_specs_3	/* Additional specs */
};

static const asn_INTEGER_specifics_t asn_SPC_count_Downlink_specs_4 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static const ber_tlv_tag_t asn_DEF_count_Downlink_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_count_Downlink_4 = {
	"count-Downlink",
	"count-Downlink",
	&asn_OP_NativeInteger,
	asn_DEF_count_Downlink_tags_4,
	sizeof(asn_DEF_count_Downlink_tags_4)
		/sizeof(asn_DEF_count_Downlink_tags_4[0]) - 1, /* 1 */
	asn_DEF_count_Downlink_tags_4,	/* Same as above */
	sizeof(asn_DEF_count_Downlink_tags_4)
		/sizeof(asn_DEF_count_Downlink_tags_4[0]), /* 2 */
	{ &asn_OER_type_count_Downlink_constr_4, &asn_PER_type_count_Downlink_constr_4, count_Downlink_4_constraint },
	0, 0,	/* No members */
	&asn_SPC_count_Downlink_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DRB_CountInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_CountInfo, drb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_CountInfo, count_Uplink),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_count_Uplink_3,
		0,
		{ &asn_OER_memb_count_Uplink_constr_3, &asn_PER_memb_count_Uplink_constr_3,  memb_count_Uplink_constraint_1 },
		0, 0, /* No default value */
		"count-Uplink"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRB_CountInfo, count_Downlink),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_count_Downlink_4,
		0,
		{ &asn_OER_memb_count_Downlink_constr_4, &asn_PER_memb_count_Downlink_constr_4,  memb_count_Downlink_constraint_1 },
		0, 0, /* No default value */
		"count-Downlink"
		},
};
static const ber_tlv_tag_t asn_DEF_DRB_CountInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRB_CountInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drb-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* count-Uplink */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* count-Downlink */
};
asn_SEQUENCE_specifics_t asn_SPC_DRB_CountInfo_specs_1 = {
	sizeof(struct DRB_CountInfo),
	offsetof(struct DRB_CountInfo, _asn_ctx),
	asn_MAP_DRB_CountInfo_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DRB_CountInfo = {
	"DRB-CountInfo",
	"DRB-CountInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_DRB_CountInfo_tags_1,
	sizeof(asn_DEF_DRB_CountInfo_tags_1)
		/sizeof(asn_DEF_DRB_CountInfo_tags_1[0]), /* 1 */
	asn_DEF_DRB_CountInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRB_CountInfo_tags_1)
		/sizeof(asn_DEF_DRB_CountInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DRB_CountInfo_1,
	3,	/* Elements count */
	&asn_SPC_DRB_CountInfo_specs_1	/* Additional specs */
};

