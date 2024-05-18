/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_WLAN_IW_Parameters_v1310_H_
#define	_WLAN_IW_Parameters_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WLAN_IW_Parameters_v1310__rclwi_r13 {
	WLAN_IW_Parameters_v1310__rclwi_r13_supported	= 0
} e_WLAN_IW_Parameters_v1310__rclwi_r13;

/* WLAN-IW-Parameters-v1310 */
typedef struct WLAN_IW_Parameters_v1310 {
	long	*rclwi_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WLAN_IW_Parameters_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rclwi_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_WLAN_IW_Parameters_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_WLAN_IW_Parameters_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_WLAN_IW_Parameters_v1310_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _WLAN_IW_Parameters_v1310_H_ */
#include <asn_internal.h>
