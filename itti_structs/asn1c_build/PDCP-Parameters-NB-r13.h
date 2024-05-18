/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_PDCP_Parameters_NB_r13_H_
#define	_PDCP_Parameters_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDCP_Parameters_NB_r13__maxNumberROHC_ContextSessions_r13 {
	PDCP_Parameters_NB_r13__maxNumberROHC_ContextSessions_r13_cs2	= 0,
	PDCP_Parameters_NB_r13__maxNumberROHC_ContextSessions_r13_cs4	= 1,
	PDCP_Parameters_NB_r13__maxNumberROHC_ContextSessions_r13_cs8	= 2,
	PDCP_Parameters_NB_r13__maxNumberROHC_ContextSessions_r13_cs12	= 3
} e_PDCP_Parameters_NB_r13__maxNumberROHC_ContextSessions_r13;

/* PDCP-Parameters-NB-r13 */
typedef struct PDCP_Parameters_NB_r13 {
	struct PDCP_Parameters_NB_r13__supportedROHC_Profiles_r13 {
		BOOLEAN_t	 profile0x0002;
		BOOLEAN_t	 profile0x0003;
		BOOLEAN_t	 profile0x0004;
		BOOLEAN_t	 profile0x0006;
		BOOLEAN_t	 profile0x0102;
		BOOLEAN_t	 profile0x0103;
		BOOLEAN_t	 profile0x0104;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} supportedROHC_Profiles_r13;
	long	 maxNumberROHC_ContextSessions_r13	/* DEFAULT 0 */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCP_Parameters_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberROHC_ContextSessions_r13_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDCP_Parameters_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_PDCP_Parameters_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_PDCP_Parameters_NB_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PDCP_Parameters_NB_r13_H_ */
#include <asn_internal.h>
