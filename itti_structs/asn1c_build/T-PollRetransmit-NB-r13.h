/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_T_PollRetransmit_NB_r13_H_
#define	_T_PollRetransmit_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T_PollRetransmit_NB_r13 {
	T_PollRetransmit_NB_r13_ms250	= 0,
	T_PollRetransmit_NB_r13_ms500	= 1,
	T_PollRetransmit_NB_r13_ms1000	= 2,
	T_PollRetransmit_NB_r13_ms2000	= 3,
	T_PollRetransmit_NB_r13_ms3000	= 4,
	T_PollRetransmit_NB_r13_ms4000	= 5,
	T_PollRetransmit_NB_r13_ms6000	= 6,
	T_PollRetransmit_NB_r13_ms10000	= 7,
	T_PollRetransmit_NB_r13_ms15000	= 8,
	T_PollRetransmit_NB_r13_ms25000	= 9,
	T_PollRetransmit_NB_r13_ms40000	= 10,
	T_PollRetransmit_NB_r13_ms60000	= 11,
	T_PollRetransmit_NB_r13_ms90000	= 12,
	T_PollRetransmit_NB_r13_ms120000	= 13,
	T_PollRetransmit_NB_r13_ms180000	= 14,
	T_PollRetransmit_NB_r13_spare1	= 15
} e_T_PollRetransmit_NB_r13;

/* T-PollRetransmit-NB-r13 */
typedef long	 T_PollRetransmit_NB_r13_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_T_PollRetransmit_NB_r13_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_T_PollRetransmit_NB_r13;
extern const asn_INTEGER_specifics_t asn_SPC_T_PollRetransmit_NB_r13_specs_1;
asn_struct_free_f T_PollRetransmit_NB_r13_free;
asn_struct_print_f T_PollRetransmit_NB_r13_print;
asn_constr_check_f T_PollRetransmit_NB_r13_constraint;
ber_type_decoder_f T_PollRetransmit_NB_r13_decode_ber;
der_type_encoder_f T_PollRetransmit_NB_r13_encode_der;
xer_type_decoder_f T_PollRetransmit_NB_r13_decode_xer;
xer_type_encoder_f T_PollRetransmit_NB_r13_encode_xer;
oer_type_decoder_f T_PollRetransmit_NB_r13_decode_oer;
oer_type_encoder_f T_PollRetransmit_NB_r13_encode_oer;
per_type_decoder_f T_PollRetransmit_NB_r13_decode_uper;
per_type_encoder_f T_PollRetransmit_NB_r13_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _T_PollRetransmit_NB_r13_H_ */
#include <asn_internal.h>
