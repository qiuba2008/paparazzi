/* This file was auto-generated by KreMLin! */
#include "kremlib.h"
#ifndef __Curve25519_H
#define __Curve25519_H



#include "testlib.h"

typedef uint64_t Hacl_Bignum_Constants_limb;

typedef FStar_UInt128_t Hacl_Bignum_Constants_wide;

typedef uint64_t Hacl_Bignum_Parameters_limb;

typedef FStar_UInt128_t Hacl_Bignum_Parameters_wide;

typedef uint32_t Hacl_Bignum_Parameters_ctr;

typedef uint64_t *Hacl_Bignum_Parameters_felem;

typedef FStar_UInt128_t *Hacl_Bignum_Parameters_felem_wide;

typedef void *Hacl_Bignum_Parameters_seqelem;

typedef void *Hacl_Bignum_Parameters_seqelem_wide;

typedef FStar_UInt128_t Hacl_Bignum_Wide_t;

typedef uint64_t Hacl_Bignum_Limb_t;

//extern void Hacl_Bignum_lemma_diff(Prims_int x0, Prims_int x1, Prims_pos x2);

typedef uint64_t *Hacl_EC_Point_point;

typedef uint8_t *Hacl_EC_Ladder_SmallLoop_uint8_p;

typedef uint8_t *Hacl_EC_Ladder_uint8_p;

typedef uint8_t *Hacl_EC_Format_uint8_p;

void Hacl_EC_crypto_scalarmult(uint8_t *mypublic, uint8_t *secret, uint8_t *basepoint);

typedef uint8_t *Curve25519_uint8_p;

void *Curve25519_op_String_Access(FStar_Monotonic_HyperStack_mem h, uint8_t *b);

void Curve25519_crypto_scalarmult(uint8_t *mypublic, uint8_t *secret, uint8_t *basepoint);
#endif