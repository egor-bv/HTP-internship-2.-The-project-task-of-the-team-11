/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "AS-Config-NB.h"

asn_TYPE_member_t asn_MBR_AS_Config_NB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config_NB, sourceRadioResourceConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicated_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceRadioResourceConfig-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config_NB, sourceSecurityAlgorithmConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityAlgorithmConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceSecurityAlgorithmConfig-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config_NB, sourceUE_Identity_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceUE-Identity-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config_NB, sourceDl_CarrierFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreq_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceDl-CarrierFreq-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_AS_Config_NB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AS_Config_NB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourceRadioResourceConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sourceSecurityAlgorithmConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sourceUE-Identity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* sourceDl-CarrierFreq-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_AS_Config_NB_specs_1 = {
	sizeof(struct AS_Config_NB),
	offsetof(struct AS_Config_NB, _asn_ctx),
	asn_MAP_AS_Config_NB_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AS_Config_NB = {
	"AS-Config-NB",
	"AS-Config-NB",
	&asn_OP_SEQUENCE,
	asn_DEF_AS_Config_NB_tags_1,
	sizeof(asn_DEF_AS_Config_NB_tags_1)
		/sizeof(asn_DEF_AS_Config_NB_tags_1[0]), /* 1 */
	asn_DEF_AS_Config_NB_tags_1,	/* Same as above */
	sizeof(asn_DEF_AS_Config_NB_tags_1)
		/sizeof(asn_DEF_AS_Config_NB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AS_Config_NB_1,
	4,	/* Elements count */
	&asn_SPC_AS_Config_NB_specs_1	/* Additional specs */
};

