/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module float
 **  Copyright: See file float.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_number();
extern LispRef telos_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot1_bindings[];
extern LispRef number_bindings[];

/* Module bindings with size 35 */
LispRef float_bindings[35];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module float */
void initialize_module_float()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_number();
  eul_fast_table_set(eul_modules,"float",(LispRef) float_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_3211, G003210, sym_3208, sym_3206, sym_3204, sym_3203, sym_3202, sym_3201, sym_3200, sym_3199, sym_3198, sym_3197, sym_3196, key_3195, key_3194, key_3193, key_3192, sym_3191, key_3190, G003189, G003187, G003185, G003183, G003181;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 1 is_init: 0 index: 11 binding: (method-double?) */
  static const void *G003180[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 12 binding: (method-double?) */
  static const void *G003182[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 13 binding: (method-float?) */
  static const void *G003184[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 14 binding: (method-float?) */
  static const void *G003186[] = {I(aa,86,45,01)};

  eul_allocate_static_cons(cons_3207, NULL, NULL);
  eul_allocate_static_cons(cons_3205, NULL, eul_as_static(cons_3207));
  /* Byte-vector with size: 329 is_init: 0 index: 33 binding: top-level */
  static const void *G003188[] = {I(a9,24,00,00),B(number ,7),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_class ,70),I(23,00,00,00),B(float ,15),I(23,00,00,00),B(float ,16),I(23,00,00,00),B(float ,17),I(1f,05,23,00),B(float ,18),I(1f,06,23,00),B(float ,19),I(86,23,00,00),B(float ,20),I(87,24,00,00),B(mop_gf ,2),I(3c,0b,1b,89),B(float ,4),I(2a,28,06,1b),I(89,00,00,00),B(float ,7),I(2a,24,00,00),B(float ,7),I(89,00,00,00),B(float ,9),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(float ,21),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(float ,3),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(float ,22),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(float ,6),I(2a,83,24,00),B(float ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(float ,23),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(float ,10),I(2a,83,24,00),B(float ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(float ,24),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(float ,8),I(2a,83,24,00),B(float ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(float ,25),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(float ,5),I(2a,83,24,00),B(float ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(float ,26),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(float ,2),I(2a,24,00,00),B(float ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(float ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(float ,27),I(23,00,00,00),B(float ,14),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(float ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(float ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(float ,4),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(float ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(float ,27),I(23,00,00,00),B(float ,13),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(float ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(float ,3),I(2a,24,00,00),B(float ,4),I(2a,24,00,00),B(float ,7),I(24,00,00,00),B(mop_class ,70),I(05,2a,24,00),B(float ,4),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,23,00),B(float ,15),I(23,00,00,00),B(float ,28),I(23,00,00,00),B(float ,17),I(1f,04,23,00),B(float ,18),I(1f,05,23,00),B(float ,19),I(86,24,00,00),B(boot1 ,25),I(3c,08,24,00),B(float ,7),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(float ,6),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(float ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(float ,29),I(23,00,00,00),B(float ,12),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(float ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(float ,6),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(float ,7),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(float ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(float ,29),I(23,00,00,00),B(float ,11),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(float ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(float ,6),I(2a,24,00,00),B(float ,7),I(2a,24,00,00),B(float ,10),I(2a,24,00,00),B(float ,8),I(2a,24,00,00),B(float ,5),I(2a,24,00,00),B(float ,2),I(2a,24,00,00),B(mop_class ,13),I(24,00,00,00),B(boot1 ,41),I(3c,01,83,24),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(float ,32),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(float ,7),I(1c,1f,06,3c),I(02,2a,24,00),B(float ,7),I(24,00,00,00),B(mop_class ,13),I(3d,01,3c,45),I(3c,00,00,00)};

  /* Byte-vector with size: 36 is_init: 1 index: 0 binding: initialize-float */
  static const void *G003209[] = {I(87,25,00,00),B(float ,1),I(24,00,00,00),B(number ,1),I(3e,0b,24,00),B(number ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(float ,10),I(86,25,00,00),B(float ,9),I(86,25,00,00),B(float ,8),I(86,25,00,00),B(float ,7),I(86,25,00,00),B(float ,6),I(86,25,00,00),B(float ,5),I(86,25,00,00),B(float ,4),I(86,25,00,00),B(float ,3),I(86,25,00,00),B(float ,2),I(23,00,00,00),B(float ,34),I(23,00,00,00),B(float ,33),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G003181,G003180);
  eul_allocate_bytevector( G003183,G003182);
  eul_allocate_bytevector( G003185,G003184);
  eul_allocate_bytevector( G003187,G003186);
  eul_intern_keyword(key_3190,"name");
  eul_intern_symbol(sym_3191,"float");
  eul_intern_keyword(key_3192,"direct-superclasses");
  eul_intern_keyword(key_3193,"direct-slots");
  eul_intern_keyword(key_3194,"direct-keywords");
  eul_intern_keyword(key_3195,"abstract?");
  eul_intern_symbol(sym_3196,"float?");
  eul_intern_symbol(sym_3197,"double?");
  eul_intern_symbol(sym_3198,"ceiling");
  eul_intern_symbol(sym_3199,"floor");
  eul_intern_symbol(sym_3200,"round");
  eul_intern_symbol(sym_3201,"truncate");
  eul_intern_symbol(sym_3202,"(method float?)");
  eul_intern_symbol(sym_3203,"double");
  eul_intern_symbol(sym_3204,"(method double?)");
  eul_intern_symbol(sym_3206,"converter");
  eul_intern_symbol(sym_3208,"<double>");
  object_class(cons_3207) = eul_static_cons_class;
  eul_car(cons_3207) = sym_3208;
  eul_cdr(cons_3207) = eul_nil;
  object_class(cons_3205) = eul_static_cons_class;
  eul_car(cons_3205) = sym_3206;
  eul_allocate_bytevector( G003189,G003188);
  eul_intern_symbol(sym_3211,"top-level");
  eul_allocate_bytevector( G003210,G003209);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 11; i++)
      float_bindings[i] = eul_nil;
  }

  float_bindings[ 11] = G003181;
  float_bindings[ 12] = G003183;
  float_bindings[ 13] = G003185;
  float_bindings[ 14] = G003187;
  float_bindings[ 15] = key_3190;
  float_bindings[ 16] = sym_3191;
  float_bindings[ 17] = key_3192;
  float_bindings[ 18] = key_3193;
  float_bindings[ 19] = key_3194;
  float_bindings[ 20] = key_3195;
  float_bindings[ 21] = sym_3196;
  float_bindings[ 22] = sym_3197;
  float_bindings[ 23] = sym_3198;
  float_bindings[ 24] = sym_3199;
  float_bindings[ 25] = sym_3200;
  float_bindings[ 26] = sym_3201;
  float_bindings[ 27] = sym_3202;
  float_bindings[ 28] = sym_3203;
  float_bindings[ 29] = sym_3204;
  float_bindings[ 30] = sym_3206;
  float_bindings[ 31] = sym_3208;
  float_bindings[ 32] = cons_3205;
  float_bindings[ 33] = G003189;
  float_bindings[ 1] = eul_nil;
  float_bindings[ 34] = sym_3211;
  eul_allocate_lambda( float_bindings[0], "initialize-float", 0, G003210);

  }
}


/* eof */
