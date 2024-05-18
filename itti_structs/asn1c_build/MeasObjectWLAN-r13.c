/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "MeasObjectWLAN-r13.h"

static int
memb_bandIndicatorListWLAN_r13_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_carrierInfoListWLAN_r13_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_bandIndicatorListWLAN_r13_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_bandIndicatorListWLAN_r13_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_carrierInfoListWLAN_r13_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_carrierInfoListWLAN_r13_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_bandIndicatorListWLAN_r13_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_bandIndicatorListWLAN_r13_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_carrierInfoListWLAN_r13_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_carrierInfoListWLAN_r13_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_carrierFreq_r13_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_carrierFreq_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_bandIndicatorListWLAN_r13_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_WLAN_BandIndicator_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_bandIndicatorListWLAN_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_bandIndicatorListWLAN_r13_specs_3 = {
	sizeof(struct MeasObjectWLAN_r13__carrierFreq_r13__bandIndicatorListWLAN_r13),
	offsetof(struct MeasObjectWLAN_r13__carrierFreq_r13__bandIndicatorListWLAN_r13, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bandIndicatorListWLAN_r13_3 = {
	"bandIndicatorListWLAN-r13",
	"bandIndicatorListWLAN-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_bandIndicatorListWLAN_r13_tags_3,
	sizeof(asn_DEF_bandIndicatorListWLAN_r13_tags_3)
		/sizeof(asn_DEF_bandIndicatorListWLAN_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_bandIndicatorListWLAN_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_bandIndicatorListWLAN_r13_tags_3)
		/sizeof(asn_DEF_bandIndicatorListWLAN_r13_tags_3[0]), /* 2 */
	{ &asn_OER_type_bandIndicatorListWLAN_r13_constr_3, &asn_PER_type_bandIndicatorListWLAN_r13_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_bandIndicatorListWLAN_r13_3,
	1,	/* Single element */
	&asn_SPC_bandIndicatorListWLAN_r13_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_carrierInfoListWLAN_r13_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_WLAN_CarrierInfo_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_carrierInfoListWLAN_r13_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_carrierInfoListWLAN_r13_specs_5 = {
	sizeof(struct MeasObjectWLAN_r13__carrierFreq_r13__carrierInfoListWLAN_r13),
	offsetof(struct MeasObjectWLAN_r13__carrierFreq_r13__carrierInfoListWLAN_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_carrierInfoListWLAN_r13_5 = {
	"carrierInfoListWLAN-r13",
	"carrierInfoListWLAN-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_carrierInfoListWLAN_r13_tags_5,
	sizeof(asn_DEF_carrierInfoListWLAN_r13_tags_5)
		/sizeof(asn_DEF_carrierInfoListWLAN_r13_tags_5[0]) - 1, /* 1 */
	asn_DEF_carrierInfoListWLAN_r13_tags_5,	/* Same as above */
	sizeof(asn_DEF_carrierInfoListWLAN_r13_tags_5)
		/sizeof(asn_DEF_carrierInfoListWLAN_r13_tags_5[0]), /* 2 */
	{ &asn_OER_type_carrierInfoListWLAN_r13_constr_5, &asn_PER_type_carrierInfoListWLAN_r13_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_carrierInfoListWLAN_r13_5,
	1,	/* Single element */
	&asn_SPC_carrierInfoListWLAN_r13_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_carrierFreq_r13_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectWLAN_r13__carrierFreq_r13, choice.bandIndicatorListWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_bandIndicatorListWLAN_r13_3,
		0,
		{ &asn_OER_memb_bandIndicatorListWLAN_r13_constr_3, &asn_PER_memb_bandIndicatorListWLAN_r13_constr_3,  memb_bandIndicatorListWLAN_r13_constraint_2 },
		0, 0, /* No default value */
		"bandIndicatorListWLAN-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectWLAN_r13__carrierFreq_r13, choice.carrierInfoListWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_carrierInfoListWLAN_r13_5,
		0,
		{ &asn_OER_memb_carrierInfoListWLAN_r13_constr_5, &asn_PER_memb_carrierInfoListWLAN_r13_constr_5,  memb_carrierInfoListWLAN_r13_constraint_2 },
		0, 0, /* No default value */
		"carrierInfoListWLAN-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_carrierFreq_r13_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandIndicatorListWLAN-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* carrierInfoListWLAN-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_carrierFreq_r13_specs_2 = {
	sizeof(struct MeasObjectWLAN_r13__carrierFreq_r13),
	offsetof(struct MeasObjectWLAN_r13__carrierFreq_r13, _asn_ctx),
	offsetof(struct MeasObjectWLAN_r13__carrierFreq_r13, present),
	sizeof(((struct MeasObjectWLAN_r13__carrierFreq_r13 *)0)->present),
	asn_MAP_carrierFreq_r13_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_carrierFreq_r13_2 = {
	"carrierFreq-r13",
	"carrierFreq-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_carrierFreq_r13_constr_2, &asn_PER_type_carrierFreq_r13_constr_2, CHOICE_constraint },
	asn_MBR_carrierFreq_r13_2,
	2,	/* Elements count */
	&asn_SPC_carrierFreq_r13_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasObjectWLAN_r13_1[] = {
	{ ATF_POINTER, 3, offsetof(struct MeasObjectWLAN_r13, carrierFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_carrierFreq_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectWLAN_r13, wlan_ToAddModList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_Id_List_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wlan-ToAddModList-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectWLAN_r13, wlan_ToRemoveList_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_Id_List_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wlan-ToRemoveList-r13"
		},
};
static const int asn_MAP_MeasObjectWLAN_r13_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_MeasObjectWLAN_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasObjectWLAN_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* wlan-ToAddModList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* wlan-ToRemoveList-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasObjectWLAN_r13_specs_1 = {
	sizeof(struct MeasObjectWLAN_r13),
	offsetof(struct MeasObjectWLAN_r13, _asn_ctx),
	asn_MAP_MeasObjectWLAN_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasObjectWLAN_r13_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectWLAN_r13 = {
	"MeasObjectWLAN-r13",
	"MeasObjectWLAN-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasObjectWLAN_r13_tags_1,
	sizeof(asn_DEF_MeasObjectWLAN_r13_tags_1)
		/sizeof(asn_DEF_MeasObjectWLAN_r13_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectWLAN_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectWLAN_r13_tags_1)
		/sizeof(asn_DEF_MeasObjectWLAN_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasObjectWLAN_r13_1,
	3,	/* Elements count */
	&asn_SPC_MeasObjectWLAN_r13_specs_1	/* Additional specs */
};

