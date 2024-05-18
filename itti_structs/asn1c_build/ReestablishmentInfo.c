/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "ReestablishmentInfo.h"

asn_TYPE_member_t asn_MBR_ReestablishmentInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReestablishmentInfo, sourcePhysCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourcePhysCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReestablishmentInfo, targetCellShortMAC_I),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ShortMAC_I,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetCellShortMAC-I"
		},
	{ ATF_POINTER, 1, offsetof(struct ReestablishmentInfo, additionalReestabInfoList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalReestabInfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalReestabInfoList"
		},
};
static const int asn_MAP_ReestablishmentInfo_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_ReestablishmentInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReestablishmentInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourcePhysCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* targetCellShortMAC-I */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* additionalReestabInfoList */
};
asn_SEQUENCE_specifics_t asn_SPC_ReestablishmentInfo_specs_1 = {
	sizeof(struct ReestablishmentInfo),
	offsetof(struct ReestablishmentInfo, _asn_ctx),
	asn_MAP_ReestablishmentInfo_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ReestablishmentInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReestablishmentInfo = {
	"ReestablishmentInfo",
	"ReestablishmentInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_ReestablishmentInfo_tags_1,
	sizeof(asn_DEF_ReestablishmentInfo_tags_1)
		/sizeof(asn_DEF_ReestablishmentInfo_tags_1[0]), /* 1 */
	asn_DEF_ReestablishmentInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReestablishmentInfo_tags_1)
		/sizeof(asn_DEF_ReestablishmentInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReestablishmentInfo_1,
	3,	/* Elements count */
	&asn_SPC_ReestablishmentInfo_specs_1	/* Additional specs */
};

