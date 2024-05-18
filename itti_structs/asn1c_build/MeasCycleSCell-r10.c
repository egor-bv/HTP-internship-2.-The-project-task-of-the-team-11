/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "MeasCycleSCell-r10.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_MeasCycleSCell_r10_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_MeasCycleSCell_r10_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_MeasCycleSCell_r10_value2enum_1[] = {
	{ 0,	5,	"sf160" },
	{ 1,	5,	"sf256" },
	{ 2,	5,	"sf320" },
	{ 3,	5,	"sf512" },
	{ 4,	5,	"sf640" },
	{ 5,	6,	"sf1024" },
	{ 6,	6,	"sf1280" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_MeasCycleSCell_r10_enum2value_1[] = {
	5,	/* sf1024(5) */
	6,	/* sf1280(6) */
	0,	/* sf160(0) */
	1,	/* sf256(1) */
	2,	/* sf320(2) */
	3,	/* sf512(3) */
	4,	/* sf640(4) */
	7	/* spare1(7) */
};
const asn_INTEGER_specifics_t asn_SPC_MeasCycleSCell_r10_specs_1 = {
	asn_MAP_MeasCycleSCell_r10_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_MeasCycleSCell_r10_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_MeasCycleSCell_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_MeasCycleSCell_r10 = {
	"MeasCycleSCell-r10",
	"MeasCycleSCell-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_MeasCycleSCell_r10_tags_1,
	sizeof(asn_DEF_MeasCycleSCell_r10_tags_1)
		/sizeof(asn_DEF_MeasCycleSCell_r10_tags_1[0]), /* 1 */
	asn_DEF_MeasCycleSCell_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasCycleSCell_r10_tags_1)
		/sizeof(asn_DEF_MeasCycleSCell_r10_tags_1[0]), /* 1 */
	{ &asn_OER_type_MeasCycleSCell_r10_constr_1, &asn_PER_type_MeasCycleSCell_r10_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_MeasCycleSCell_r10_specs_1	/* Additional specs */
};

