/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "PSCellToAddMod-v1440.h"

asn_TYPE_member_t asn_MBR_PSCellToAddMod_v1440_1[] = {
	{ ATF_POINTER, 1, offsetof(struct PSCellToAddMod_v1440, radioResourceConfigCommonPSCell_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigCommonPSCell_v1440,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigCommonPSCell-r14"
		},
};
static const int asn_MAP_PSCellToAddMod_v1440_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_PSCellToAddMod_v1440_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PSCellToAddMod_v1440_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* radioResourceConfigCommonPSCell-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_PSCellToAddMod_v1440_specs_1 = {
	sizeof(struct PSCellToAddMod_v1440),
	offsetof(struct PSCellToAddMod_v1440, _asn_ctx),
	asn_MAP_PSCellToAddMod_v1440_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_PSCellToAddMod_v1440_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PSCellToAddMod_v1440 = {
	"PSCellToAddMod-v1440",
	"PSCellToAddMod-v1440",
	&asn_OP_SEQUENCE,
	asn_DEF_PSCellToAddMod_v1440_tags_1,
	sizeof(asn_DEF_PSCellToAddMod_v1440_tags_1)
		/sizeof(asn_DEF_PSCellToAddMod_v1440_tags_1[0]), /* 1 */
	asn_DEF_PSCellToAddMod_v1440_tags_1,	/* Same as above */
	sizeof(asn_DEF_PSCellToAddMod_v1440_tags_1)
		/sizeof(asn_DEF_PSCellToAddMod_v1440_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PSCellToAddMod_v1440_1,
	1,	/* Elements count */
	&asn_SPC_PSCellToAddMod_v1440_specs_1	/* Additional specs */
};

