/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module fpi
 **  Copyright: See file fpi.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_compare();
extern void initialize_module_number();
extern void initialize_module_integer();
extern LispRef telos_bindings[];
extern LispRef compare_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef number_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef integer_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 47 */
LispRef fpi_bindings[47];

/* Foreign functions */
static LispRef ff_stub_eul_int_as_str2381 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002438, res;

  POPVAL1(G002438);
  FF_RES_CONVERT3(res,eul_int_as_str(FF_ARG_CONVERT0(G002438)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module fpi */
void initialize_module_fpi()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_compare();
  initialize_module_number();
  initialize_module_integer();
  eul_fast_table_set(eul_modules,"fpi",(LispRef) fpi_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2437, sym_2436, sym_2435, sym_2434, G002433, G002431, G002429, G002427, sym_2425, sym_2423, sym_2421, sym_2420, sym_2419, sym_2418, sym_2417, sym_2416, sym_2415, sym_2414, sym_2413, sym_2412, sym_2411, key_2410, key_2409, key_2408, sym_2407, key_2406, G002405, G002403, G002401, G002399, G002397, G002395, G002393, G002391, G002389, G002387, G002385, G002383;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 1 is_init: 0 index: 9 binding: (method-zerop) */
  static const void *G002382[] = {I(aa,2d,45,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 10 binding: (method-binary-lcm) */
  static const void *G002384[] = {I(ab,24,00,00),B(fpi ,3),I(3d,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 11 binding: (method-binary-gcd) */
  static const void *G002386[] = {I(ab,24,00,00),B(fpi ,4),I(3d,02,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 12 binding: (method-binary-mod) */
  static const void *G002388[] = {I(ab,18,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 13 binding: (method-binary%) */
  static const void *G002390[] = {I(ab,18,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 14 binding: (method-binary/) */
  static const void *G002392[] = {I(ab,17,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 15 binding: (method-binary*) */
  static const void *G002394[] = {I(ab,16,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 16 binding: (method-binary-) */
  static const void *G002396[] = {I(ab,15,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 17 binding: (method-binary<) */
  static const void *G002398[] = {I(ab,1a,45,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 18 binding: (method-binary=) */
  static const void *G002400[] = {I(ab,19,1b,34),I(00,00,00,0d),I(87,32,00,00),I(00,00,00,08),I(86,45,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 19 binding: (method-binary+) */
  static const void *G002402[] = {I(ab,14,45,00)};

  eul_allocate_static_cons(cons_2424, NULL, NULL);
  eul_allocate_static_cons(cons_2422, NULL, eul_as_static(cons_2424));
  /* Byte-vector with size: 397 is_init: 0 index: 39 binding: top-level */
  static const void *G002404[] = {I(a9,28,02,1b),I(89,00,00,00),B(fpi ,5),I(2a,24,00,00),B(fpi ,5),I(89,00,00,00),B(fpi ,6),I(2a,24,00,00),B(fpi ,6),I(89,00,00,00),B(fpi ,2),I(2a,24,00,00),B(fpi ,5),I(24,00,00,00),B(mop_class ,71),I(05,2a,24,00),B(integer ,2),I(24,00,00,00),B(boot1 ,27),I(3c,01,24,00),B(boot1 ,27),I(3c,00,23,00),B(fpi ,20),I(23,00,00,00),B(fpi ,21),I(23,00,00,00),B(fpi ,22),I(1f,04,23,00),B(fpi ,23),I(1f,05,23,00),B(fpi ,24),I(86,24,00,00),B(boot1 ,27),I(3c,08,24,00),B(fpi ,5),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(fpi ,5),I(2a,24,00,00),B(number ,13),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,5),I(24,00,00,00),B(fpi ,5),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,27),I(3c,00,24,00),B(number ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,25),I(23,00,00,00),B(fpi ,19),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(compare ,9),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,5),I(24,00,00,00),B(fpi ,5),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,27),I(3c,00,24,00),B(compare ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,26),I(23,00,00,00),B(fpi ,18),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(compare ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,5),I(24,00,00,00),B(fpi ,5),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,27),I(3c,00,24,00),B(compare ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,27),I(23,00,00,00),B(fpi ,17),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,7),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,5),I(24,00,00,00),B(fpi ,5),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,27),I(3c,00,24,00),B(number ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,28),I(23,00,00,00),B(fpi ,16),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,11),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,5),I(24,00,00,00),B(fpi ,5),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,27),I(3c,00,24,00),B(number ,11),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,29),I(23,00,00,00),B(fpi ,15),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,11),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,16),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,5),I(24,00,00,00),B(fpi ,5),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,27),I(3c,00,24,00),B(number ,16),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,30),I(23,00,00,00),B(fpi ,14),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,16),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,4),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,5),I(24,00,00,00),B(fpi ,5),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,27),I(3c,00,24,00),B(number ,4),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,31),I(23,00,00,00),B(fpi ,13),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,4),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,5),I(24,00,00,00),B(fpi ,5),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,27),I(3c,00,24,00),B(number ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,32),I(23,00,00,00),B(fpi ,12),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,25),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,5),I(24,00,00,00),B(fpi ,5),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,27),I(3c,00,24,00),B(number ,25),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,33),I(23,00,00,00),B(fpi ,11),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,25),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,18),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,5),I(24,00,00,00),B(fpi ,5),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,27),I(3c,00,24,00),B(number ,18),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,34),I(23,00,00,00),B(fpi ,10),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,18),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(fpi ,5),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,27),I(3c,00,24,00),B(number ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(fpi ,35),I(23,00,00,00),B(fpi ,9),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_class ,13),I(24,00,00,00),B(boot1 ,42),I(3c,01,83,24),B(mop_class ,21),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,27),I(3c,00,24,00),B(boot1 ,27),I(3c,00,23,00),B(fpi ,38),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(fpi ,5),I(1c,1f,06,3c),I(02,2a,24,00),B(fpi ,5),I(24,00,00,00),B(mop_class ,13),I(3d,01,4b,45),I(4b,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 40 binding: int-binary-lcm */
  static const void *G002426[] = {I(ab,1c,82,24),B(compare ,2),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,11),I(1c,82,24,00),B(compare ,2),I(3c,02,1b,34),I(00,00,00,0d),I(82,32,00,00),I(00,00,00,1a),I(1f,03,1f,03),I(16,1f,04,1f),I(04,24,00,00),B(fpi ,4),I(3c,02,17,45),I(04,00,00,00)};

  /* Byte-vector with size: 34 is_init: 0 index: 41 binding: int-binary-gcd */
  static const void *G002428[] = {I(ab,1c,1c,1a),I(1b,34,00,00),I(00,00,00,3b),I(1c,1f,03,17),I(1f,03,1c,16),I(1b,1f,04,19),I(1b,34,00,00),I(00,00,00,0f),I(1f,05,32,00),I(00,00,00,17),I(1f,04,1d,15),I(1b,1f,07,24),B(fpi ,4),I(3d,02,07,22),I(01,22,03,32),I(00,00,00,49),I(1c,1f,03,1a),I(1b,34,00,00),I(00,00,00,3b),I(1f,03,1f,03),I(17,1f,03,1c),I(16,1b,1f,06),I(19,1b,34,00),I(00,00,00,0e),I(1f,05,32,00),I(00,00,00,17),I(1f,06,1d,15),I(1b,1f,07,24),B(fpi ,4),I(3d,02,08,22),I(01,22,03,32),I(00,00,00,07),I(1f,03,22,01),I(45,03,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 42 binding: fixed-precision-integer-p */
  static const void *G002430[] = {I(aa,7e,45,00)};

  /* Byte-vector with size: 52 is_init: 1 index: 0 binding: initialize-fpi */
  static const void *G002432[] = {I(87,25,00,00),B(fpi ,1),I(24,00,00,00),B(integer ,1),I(3e,0b,24,00),B(integer ,0),I(3c,00,21,01),I(24,00,00,00),B(number ,1),I(3e,0b,24,00),B(number ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(fpi ,43),I(23,00,00,00),B(fpi ,42),I(3b,01,25,00),B(fpi ,7),I(86,25,00,00),B(fpi ,6),I(86,25,00,00),B(fpi ,5),I(23,00,00,00),B(fpi ,44),I(23,00,00,00),B(fpi ,41),I(3b,02,25,00),B(fpi ,4),I(23,00,00,00),B(fpi ,45),I(23,00,00,00),B(fpi ,40),I(3b,02,25,00),B(fpi ,3),I(86,25,00,00),B(fpi ,2),I(23,00,00,00),B(fpi ,46),I(23,00,00,00),B(fpi ,39),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G002383,G002382);
  eul_allocate_bytevector( G002385,G002384);
  eul_allocate_bytevector( G002387,G002386);
  eul_allocate_bytevector( G002389,G002388);
  eul_allocate_bytevector( G002391,G002390);
  eul_allocate_bytevector( G002393,G002392);
  eul_allocate_bytevector( G002395,G002394);
  eul_allocate_bytevector( G002397,G002396);
  eul_allocate_bytevector( G002399,G002398);
  eul_allocate_bytevector( G002401,G002400);
  eul_allocate_bytevector( G002403,G002402);
  eul_intern_keyword(key_2406,"name");
  eul_intern_symbol(sym_2407,"int");
  eul_intern_keyword(key_2408,"direct-superclasses");
  eul_intern_keyword(key_2409,"direct-slots");
  eul_intern_keyword(key_2410,"direct-keywords");
  eul_intern_symbol(sym_2411,"(method binary+)");
  eul_intern_symbol(sym_2412,"(method binary=)");
  eul_intern_symbol(sym_2413,"(method binary<)");
  eul_intern_symbol(sym_2414,"(method binary-)");
  eul_intern_symbol(sym_2415,"(method binary*)");
  eul_intern_symbol(sym_2416,"(method binary/)");
  eul_intern_symbol(sym_2417,"(method binary%)");
  eul_intern_symbol(sym_2418,"(method binary-mod)");
  eul_intern_symbol(sym_2419,"(method binary-gcd)");
  eul_intern_symbol(sym_2420,"(method binary-lcm)");
  eul_intern_symbol(sym_2421,"(method zerop)");
  eul_intern_symbol(sym_2423,"converter");
  eul_intern_symbol(sym_2425,"<int>");
  object_class(cons_2424) = eul_static_cons_class;
  eul_car(cons_2424) = sym_2425;
  eul_cdr(cons_2424) = eul_nil;
  object_class(cons_2422) = eul_static_cons_class;
  eul_car(cons_2422) = sym_2423;
  eul_allocate_bytevector( G002405,G002404);
  eul_allocate_bytevector( G002427,G002426);
  eul_allocate_bytevector( G002429,G002428);
  eul_allocate_bytevector( G002431,G002430);
  eul_intern_symbol(sym_2434,"fixed-precision-integer-p");
  eul_intern_symbol(sym_2435,"int-binary-gcd");
  eul_intern_symbol(sym_2436,"int-binary-lcm");
  eul_intern_symbol(sym_2437,"top-level");
  eul_allocate_bytevector( G002433,G002432);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 8; i++)
      fpi_bindings[i] = eul_nil;
  }

  fpi_bindings[ 8] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_int_as_str2381;
  fpi_bindings[ 9] = G002383;
  fpi_bindings[ 10] = G002385;
  fpi_bindings[ 11] = G002387;
  fpi_bindings[ 12] = G002389;
  fpi_bindings[ 13] = G002391;
  fpi_bindings[ 14] = G002393;
  fpi_bindings[ 15] = G002395;
  fpi_bindings[ 16] = G002397;
  fpi_bindings[ 17] = G002399;
  fpi_bindings[ 18] = G002401;
  fpi_bindings[ 19] = G002403;
  fpi_bindings[ 20] = key_2406;
  fpi_bindings[ 21] = sym_2407;
  fpi_bindings[ 22] = key_2408;
  fpi_bindings[ 23] = key_2409;
  fpi_bindings[ 24] = key_2410;
  fpi_bindings[ 25] = sym_2411;
  fpi_bindings[ 26] = sym_2412;
  fpi_bindings[ 27] = sym_2413;
  fpi_bindings[ 28] = sym_2414;
  fpi_bindings[ 29] = sym_2415;
  fpi_bindings[ 30] = sym_2416;
  fpi_bindings[ 31] = sym_2417;
  fpi_bindings[ 32] = sym_2418;
  fpi_bindings[ 33] = sym_2419;
  fpi_bindings[ 34] = sym_2420;
  fpi_bindings[ 35] = sym_2421;
  fpi_bindings[ 36] = sym_2423;
  fpi_bindings[ 37] = sym_2425;
  fpi_bindings[ 38] = cons_2422;
  fpi_bindings[ 39] = G002405;
  fpi_bindings[ 40] = G002427;
  fpi_bindings[ 41] = G002429;
  fpi_bindings[ 42] = G002431;
  fpi_bindings[ 1] = eul_nil;
  fpi_bindings[ 43] = sym_2434;
  fpi_bindings[ 44] = sym_2435;
  fpi_bindings[ 45] = sym_2436;
  fpi_bindings[ 46] = sym_2437;
  eul_allocate_lambda( fpi_bindings[0], "initialize-fpi", 0, G002433);

  }
}


/* eof */
