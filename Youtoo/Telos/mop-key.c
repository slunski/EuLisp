/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module mop-key
 **  Copyright: See file mop-key.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];

/* Module bindings with size 12 */
LispRef mop_key_bindings[12];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-key */
void initialize_module_mop_key()
{
  if (is_initialized) return;
  initialize_module_boot();
  eul_fast_table_set(eul_modules,"mop_key",(LispRef) mop_key_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_635, sym_634, G00633, sym_631, G00630, G00628, key_625, G00624;

  /* Code vector and literal definitions */
  eul_allocate_static_string(str_626, "missing required keyword ~a", 27);
  /* Byte-vector with size: 24 is_init: 0 index: 6 binding: find-key */
  static const void *G00623[] = {I(43,03,1c,1f),I(03,24,00,00),B(boot1 ,49),I(24,00,00,00),B(boot ,29),I(3c,03,1b,24),B(boot1 ,49),I(50,1b,34,00),I(00,00,00,3e),I(1d,23,00,00),B(mop_key ,4),I(50,1b,34,00),I(00,00,00,22),I(23,00,00,00),B(mop_key ,5),I(1f,06,24,00),B(boot ,22),I(3c,02,2a,1d),I(32,00,00,00),I(00,00,00,0a),I(1f,03,22,01),I(32,00,00,00),I(00,00,00,09),I(1c,45,05,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 7 binding: anonymous */
  static const void *G00627[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,18),I(1c,24,00,00),B(boot ,25),I(3d,01,03,32),I(00,00,00,43),I(1d,10,1f,03),I(11,1b,10,1c),I(11,1f,03,47),I(00,00,86,6c),I(1b,34,00,00),I(00,00,00,17),I(1c,1f,07,47),I(00,01,3d,02),I(08,32,00,00),I(00,00,00,1b),I(1f,04,1f,07),I(0f,1f,03,1c),I(0f,1f,03,1c),I(47,00,01,3d),I(02,0a,22,02),I(22,05,45,03)};

  /* Byte-vector with size: 11 is_init: 0 index: 9 binding: filter-keywords */
  static const void *G00629[] = {I(ab,46,02,1b),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(mop_key ,8),I(23,00,00,00),B(mop_key ,7),I(3b,02,48,00),I(01,1d,86,47),I(00,01,3d,02),I(03,45,03,00)};

  /* Byte-vector with size: 20 is_init: 1 index: 0 binding: initialize-mop-key */
  static const void *G00632[] = {I(87,25,00,00),B(mop_key ,1),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(23,00,00,00),B(mop_key ,10),I(23,00,00,00),B(mop_key ,9),I(3b,02,25,00),B(mop_key ,3),I(23,00,00,00),B(mop_key ,11),I(23,00,00,00),B(mop_key ,6),I(3b,03,25,00),B(mop_key ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_intern_keyword(key_625,"required");
  object_class(str_626) = eul_static_string_class;
  eul_allocate_bytevector( G00624,G00623);
  eul_allocate_bytevector( G00628,G00627);
  eul_intern_symbol(sym_631,"anonymous");
  eul_allocate_bytevector( G00630,G00629);
  eul_intern_symbol(sym_634,"filter-keywords");
  eul_intern_symbol(sym_635,"find-key");
  eul_allocate_bytevector( G00633,G00632);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 4; i++)
      mop_key_bindings[i] = eul_nil;
  }

  mop_key_bindings[ 4] = key_625;
  mop_key_bindings[ 5] = str_626;
  mop_key_bindings[ 6] = G00624;
  mop_key_bindings[ 7] = G00628;
  mop_key_bindings[ 8] = sym_631;
  mop_key_bindings[ 9] = G00630;
  mop_key_bindings[ 1] = eul_nil;
  mop_key_bindings[ 10] = sym_634;
  mop_key_bindings[ 11] = sym_635;
  eul_allocate_lambda( mop_key_bindings[0], "initialize-mop-key", 0, G00633);

  }
}


/* eof */
