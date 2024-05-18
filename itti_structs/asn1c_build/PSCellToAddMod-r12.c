/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "PSCellToAddMod-r12.h"

static asn_TYPE_member_t asn_MBR_cellIdentification_r12_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PSCellToAddMod_r12__cellIdentification_r12, physCellId_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PSCellToAddMod_r12__cellIdentification_r12, dl_CarrierFreq_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-CarrierFreq-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_cellIdentification_r12_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellIdentification_r12_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-CarrierFreq-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellIdentification_r12_specs_3 = {
	sizeof(struct PSCellToAddMod_r12__cellIdentification_r12),
	offsetof(struct PSCellToAddMod_r12__cellIdentification_r12, _asn_ctx),
	asn_MAP_cellIdentification_r12_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellIdentification_r12_3 = {
	"cellIdentification-r12",
	"cellIdentification-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_cellIdentification_r12_tags_3,
	sizeof(asn_DEF_cellIdentification_r12_tags_3)
		/sizeof(asn_DEF_cellIdentification_r12_tags_3[0]) - 1, /* 1 */
	asn_DEF_cellIdentification_r12_tags_3,	/* Same as above */
	sizeof(asn_DEF_cellIdentification_r12_tags_3)
		/sizeof(asn_DEF_cellIdentification_r12_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellIdentification_r12_3,
	2,	/* Elements count */
	&asn_SPC_cellIdentification_r12_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PSCellToAddMod_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PSCellToAddMod_r12, sCellIndex_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellIndex_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellIndex-r12"
		},
	{ ATF_POINTER, 6, offsetof(struct PSCellToAddMod_r12, cellIdentification_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cellIdentification_r12_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellIdentification-r12"
		},
	{ ATF_POINTER, 5, offsetof(struct PSCellToAddMod_r12, radioResourceConfigCommonPSCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigCommonPSCell_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigCommonPSCell-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct PSCellToAddMod_r12, radioResourceConfigDedicatedPSCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicatedPSCell_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigDedicatedPSCell-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct PSCellToAddMod_r12, antennaInfoDedicatedPSCell_v1280),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoDedicated_v10i0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaInfoDedicatedPSCell-v1280"
		},
	{ ATF_POINTER, 2, offsetof(struct PSCellToAddMod_r12, sCellIndex_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellIndex_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sCellIndex-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct PSCellToAddMod_r12, radioResourceConfigDedicatedPSCell_v1370),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicatedPSCell_v1370,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigDedicatedPSCell-v1370"
		},
};
static const int asn_MAP_PSCellToAddMod_r12_oms_1[] = { 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_PSCellToAddMod_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PSCellToAddMod_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sCellIndex-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellIdentification-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* radioResourceConfigCommonPSCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* radioResourceConfigDedicatedPSCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* antennaInfoDedicatedPSCell-v1280 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sCellIndex-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* radioResourceConfigDedicatedPSCell-v1370 */
};
asn_SEQUENCE_specifics_t asn_SPC_PSCellToAddMod_r12_specs_1 = {
	sizeof(struct PSCellToAddMod_r12),
	offsetof(struct PSCellToAddMod_r12, _asn_ctx),
	asn_MAP_PSCellToAddMod_r12_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_PSCellToAddMod_r12_oms_1,	/* Optional members */
	3, 3,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PSCellToAddMod_r12 = {
	"PSCellToAddMod-r12",
	"PSCellToAddMod-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_PSCellToAddMod_r12_tags_1,
	sizeof(asn_DEF_PSCellToAddMod_r12_tags_1)
		/sizeof(asn_DEF_PSCellToAddMod_r12_tags_1[0]), /* 1 */
	asn_DEF_PSCellToAddMod_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_PSCellToAddMod_r12_tags_1)
		/sizeof(asn_DEF_PSCellToAddMod_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PSCellToAddMod_r12_1,
	7,	/* Elements count */
	&asn_SPC_PSCellToAddMod_r12_specs_1	/* Additional specs */
};
