/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module mop-prim
 **  Copyright: See file mop-prim.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];

/* Module bindings with size 17 */
LispRef mop_prim_bindings[17];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-prim */
void initialize_module_mop_prim()
{
  if (is_initialized) return;
  initialize_module_boot();
  eul_fast_table_set(eul_modules,"mop_prim",(LispRef) mop_prim_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_596, sym_595, sym_594, sym_593, G00592, G00590, G00588, G00586, sym_584, sym_583, G00582, G00580, G00578;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 2 is_init: 0 index: 5 binding: (setter-primitive-ref) */
  static const void *G00577[] = {I(43,03,03,45),I(00,00,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 6 binding: (setter-primitive-class-of) */
  static const void *G00579[] = {I(ab,05,45,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 9 binding: top-level */
  static const void *G00581[] = {I(a9,24,00,00),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(mop_prim ,2),I(23,00,00,00),B(mop_prim ,7),I(23,00,00,00),B(mop_prim ,6),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(mop_prim ,4),I(23,00,00,00),B(mop_prim ,8),I(23,00,00,00),B(mop_prim ,5),I(3b,03,1d,3d),I(02,02,45,02)};

  /* Byte-vector with size: 1 is_init: 0 index: 10 binding: primitive-class-of */
  static const void *G00585[] = {I(aa,04,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 11 binding: primitive-allocate */
  static const void *G00587[] = {I(ab,01,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 12 binding: primitive-ref */
  static const void *G00589[] = {I(ab,02,45,00)};

  /* Byte-vector with size: 31 is_init: 1 index: 0 binding: initialize-mop-prim */
  static const void *G00591[] = {I(87,25,00,00),B(mop_prim ,1),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(23,00,00,00),B(mop_prim ,13),I(23,00,00,00),B(mop_prim ,12),I(3b,02,25,00),B(mop_prim ,4),I(23,00,00,00),B(mop_prim ,14),I(23,00,00,00),B(mop_prim ,11),I(3b,02,25,00),B(mop_prim ,3),I(23,00,00,00),B(mop_prim ,15),I(23,00,00,00),B(mop_prim ,10),I(3b,01,25,00),B(mop_prim ,2),I(23,00,00,00),B(mop_prim ,16),I(23,00,00,00),B(mop_prim ,9),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G00578,G00577);
  eul_allocate_bytevector( G00580,G00579);
  eul_intern_symbol(sym_583,"(setter primitive-class-of)");
  eul_intern_symbol(sym_584,"(setter primitive-ref)");
  eul_allocate_bytevector( G00582,G00581);
  eul_allocate_bytevector( G00586,G00585);
  eul_allocate_bytevector( G00588,G00587);
  eul_allocate_bytevector( G00590,G00589);
  eul_intern_symbol(sym_593,"primitive-ref");
  eul_intern_symbol(sym_594,"primitive-allocate");
  eul_intern_symbol(sym_595,"primitive-class-of");
  eul_intern_symbol(sym_596,"top-level");
  eul_allocate_bytevector( G00592,G00591);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 5; i++)
      mop_prim_bindings[i] = eul_nil;
  }

  mop_prim_bindings[ 5] = G00578;
  mop_prim_bindings[ 6] = G00580;
  mop_prim_bindings[ 7] = sym_583;
  mop_prim_bindings[ 8] = sym_584;
  mop_prim_bindings[ 9] = G00582;
  mop_prim_bindings[ 10] = G00586;
  mop_prim_bindings[ 11] = G00588;
  mop_prim_bindings[ 12] = G00590;
  mop_prim_bindings[ 1] = eul_nil;
  mop_prim_bindings[ 13] = sym_593;
  mop_prim_bindings[ 14] = sym_594;
  mop_prim_bindings[ 15] = sym_595;
  mop_prim_bindings[ 16] = sym_596;
  eul_allocate_lambda( mop_prim_bindings[0], "initialize-mop-prim", 0, G00592);

  }
}


/* eof */
