/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module number
 **  Copyright: See file number.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_callback();
extern void initialize_module_compare();
extern void initialize_module_copy();
extern LispRef compare_bindings[];
extern LispRef telos_bindings[];
extern LispRef copy_bindings[];
extern LispRef callback_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 87 */
LispRef number_bindings[87];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module number */
void initialize_module_number()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_callback();
  initialize_module_compare();
  initialize_module_copy();
  eul_fast_table_set(eul_modules,"number",(LispRef) number_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2081, sym_2080, sym_2079, sym_2078, sym_2077, sym_2076, sym_2075, sym_2074, sym_2073, sym_2072, sym_2071, sym_2070, sym_2069, G002068, G002066, G002064, G002062, G002060, G002058, G002056, G002054, G002052, G002050, G002048, G002046, G002044, G002042, G002040, G002038, G002036, G002034, G002032, sym_2030, G002029, G002027, sym_2025, sym_2024, sym_2023, sym_2022, sym_2021, sym_2020, sym_2019, sym_2018, sym_2017, sym_2016, sym_2015, sym_2014, sym_2013, sym_2012, sym_2011, key_2010, key_2009, key_2008, key_2007, sym_2006, key_2005, G002004, G002002, G002000, G001998, G001996, G001994;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 1 is_init: 0 index: 26 binding: (method-deep-copy) */
  static const void *G001993[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 27 binding: (method-shallow-copy) */
  static const void *G001995[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 2 is_init: 0 index: 28 binding: (method-negate) */
  static const void *G001997[] = {I(aa,82,1c,15),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 29 binding: (method-numberp) */
  static const void *G001999[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 30 binding: (method-numberp) */
  static const void *G002001[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 444 is_init: 0 index: 52 binding: top-level */
  static const void *G002003[] = {I(a9,24,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_class ,71),I(23,00,00,00),B(number ,31),I(23,00,00,00),B(number ,32),I(23,00,00,00),B(number ,33),I(1f,05,23,00),B(number ,34),I(1f,06,23,00),B(number ,35),I(86,23,00,00),B(number ,36),I(87,24,00,00),B(mop_gf ,2),I(3c,0b,1b,89),B(number ,5),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(number ,37),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,23),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(number ,38),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,8),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(number ,39),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,12),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(number ,40),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,13),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(number ,41),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,7),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(number ,42),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,11),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(number ,43),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,16),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(number ,44),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,4),I(2a,84,24,00),B(number ,5),I(24,00,00,00),B(number ,5),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(number ,45),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,6),I(2a,84,24,00),B(number ,5),I(24,00,00,00),B(number ,5),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(number ,46),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,25),I(2a,84,24,00),B(number ,5),I(24,00,00,00),B(number ,5),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(number ,47),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(number ,18),I(2a,24,00,00),B(number ,23),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(number ,23),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(number ,48),I(23,00,00,00),B(number ,30),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,23),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,23),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(number ,5),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(number ,23),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(number ,48),I(23,00,00,00),B(number ,29),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,23),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,23),I(2a,24,00,00),B(number ,5),I(2a,24,00,00),B(number ,8),I(2a,24,00,00),B(number ,12),I(2a,24,00,00),B(number ,12),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(number ,5),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(number ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(number ,49),I(23,00,00,00),B(number ,28),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(number ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(number ,13),I(2a,24,00,00),B(number ,7),I(2a,24,00,00),B(number ,11),I(2a,24,00,00),B(number ,16),I(2a,24,00,00),B(number ,4),I(2a,24,00,00),B(number ,6),I(2a,24,00,00),B(number ,25),I(2a,24,00,00),B(number ,18),I(2a,83,82,14),I(24,00,00,00),B(number ,13),I(24,00,00,00),B(callback ,4),I(3c,02,2a,83),I(2b,24,00,00),B(number ,7),I(24,00,00,00),B(callback ,4),I(3c,02,2a,83),I(84,14,24,00),B(number ,11),I(24,00,00,00),B(callback ,4),I(3c,02,2a,83),I(26,00,00,00),I(00,00,00,03),I(14,24,00,00),B(number ,16),I(24,00,00,00),B(callback ,4),I(3c,02,2a,83),I(26,00,00,00),I(00,00,00,04),I(14,24,00,00),B(number ,4),I(24,00,00,00),B(callback ,4),I(3c,02,2a,24),B(copy ,2),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(number ,5),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(copy ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(number ,50),I(23,00,00,00),B(number ,27),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(copy ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(copy ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(number ,5),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(copy ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(number ,51),I(23,00,00,00),B(number ,26),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(copy ,3),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,4d,45),I(4d,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 53 binding: anonymous */
  static const void *G002026[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1f,03,1c),I(24,00,00,00),B(number ,7),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 55 binding: - */
  static const void *G002028[] = {I(43,fe,46,01),I(1b,12,1b,34),I(00,00,00,15),I(82,1f,03,24),B(number ,7),I(3d,02,03,32),I(00,00,00,29),I(86,1b,48,00),I(00,23,00,00),B(number ,54),I(23,00,00,00),B(number ,53),I(3b,02,48,00),I(00,1d,1f,04),I(47,00,00,3d),I(02,04,22,01),I(45,03,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 56 binding: signum */
  static const void *G002031[] = {I(aa,1b,2d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,23),I(1c,1b,82,1a),I(1b,34,00,00),I(00,00,00,0f),I(82,1d,15,32),I(00,00,00,06),I(1c,22,02,1d),I(1c,17,22,01),I(45,02,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 57 binding: anonymous */
  static const void *G002033[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1f,03,1c),I(24,00,00,00),B(number ,16),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 58 binding: / */
  static const void *G002035[] = {I(43,fe,46,01),I(86,1b,48,00),I(00,23,00,00),B(number ,54),I(23,00,00,00),B(number ,57),I(3b,02,48,00),I(00,1c,1f,03),I(47,00,00,3d),I(02,03,45,03)};

  /* Byte-vector with size: 13 is_init: 0 index: 59 binding: anonymous */
  static const void *G002037[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1b,1f,04),I(24,00,00,00),B(number ,13),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 60 binding: + */
  static const void *G002039[] = {I(a8,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(number ,54),I(23,00,00,00),B(number ,59),I(3b,02,48,00),I(00,1c,82,47),I(00,00,3d,02),I(02,45,02,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 61 binding: anonymous */
  static const void *G002041[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1f,03,1c),I(24,00,00,00),B(number ,4),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 62 binding: % */
  static const void *G002043[] = {I(43,fe,46,01),I(86,1b,48,00),I(00,23,00,00),B(number ,54),I(23,00,00,00),B(number ,61),I(3b,02,48,00),I(00,1c,1f,03),I(47,00,00,3d),I(02,03,45,03)};

  /* Byte-vector with size: 2 is_init: 0 index: 63 binding: positivep */
  static const void *G002045[] = {I(aa,82,1c,1a),I(45,01,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 64 binding: anonymous */
  static const void *G002047[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1f,03,1c),I(24,00,00,00),B(number ,6),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 65 binding: mod */
  static const void *G002049[] = {I(43,fe,46,01),I(86,1b,48,00),I(00,23,00,00),B(number ,54),I(23,00,00,00),B(number ,64),I(3b,02,48,00),I(00,1c,1f,03),I(47,00,00,3d),I(02,03,45,03)};

  /* Byte-vector with size: 6 is_init: 0 index: 66 binding: abs */
  static const void *G002051[] = {I(aa,1b,82,1a),I(1b,34,00,00),I(00,00,00,0f),I(82,1d,15,32),I(00,00,00,06),I(1c,45,02,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 67 binding: negativep */
  static const void *G002053[] = {I(aa,82,1a,45),I(00,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 68 binding: anonymous */
  static const void *G002055[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1f,03,1c),I(24,00,00,00),B(number ,25),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 69 binding: gcd */
  static const void *G002057[] = {I(43,fe,46,01),I(86,1b,48,00),I(00,23,00,00),B(number ,54),I(23,00,00,00),B(number ,68),I(3b,02,48,00),I(00,1c,1f,03),I(47,00,00,3d),I(02,03,45,03)};

  /* Byte-vector with size: 13 is_init: 0 index: 70 binding: anonymous */
  static const void *G002059[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1f,03,1c),I(24,00,00,00),B(number ,18),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 71 binding: lcm */
  static const void *G002061[] = {I(43,fe,46,01),I(86,1b,48,00),I(00,23,00,00),B(number ,54),I(23,00,00,00),B(number ,70),I(3b,02,48,00),I(00,1c,1f,03),I(47,00,00,3d),I(02,03,45,03)};

  /* Byte-vector with size: 13 is_init: 0 index: 72 binding: anonymous */
  static const void *G002063[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1b,1f,04),I(24,00,00,00),B(number ,11),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 73 binding: * */
  static const void *G002065[] = {I(a8,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(number ,54),I(23,00,00,00),B(number ,72),I(3b,02,48,00),I(00,1c,83,47),I(00,00,3d,02),I(02,45,02,00)};

  /* Byte-vector with size: 124 is_init: 1 index: 0 binding: initialize-number */
  static const void *G002067[] = {I(87,25,00,00),B(number ,1),I(24,00,00,00),B(copy ,1),I(3e,0b,24,00),B(copy ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(callback ,1),I(3e,0b,24,00),B(callback ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(number ,25),I(23,00,00,00),B(number ,74),I(23,00,00,00),B(number ,73),I(3b,ff,25,00),B(number ,24),I(86,25,00,00),B(number ,23),I(23,00,00,00),B(number ,75),I(23,00,00,00),B(number ,71),I(3b,fe,25,00),B(number ,22),I(23,00,00,00),B(number ,76),I(23,00,00,00),B(number ,69),I(3b,fe,25,00),B(number ,21),I(23,00,00,00),B(number ,77),I(23,00,00,00),B(number ,67),I(3b,01,25,00),B(number ,20),I(23,00,00,00),B(number ,78),I(23,00,00,00),B(number ,66),I(3b,01,25,00),B(number ,19),I(86,25,00,00),B(number ,18),I(23,00,00,00),B(number ,79),I(23,00,00,00),B(number ,65),I(3b,fe,25,00),B(number ,17),I(86,25,00,00),B(number ,16),I(23,00,00,00),B(number ,80),I(23,00,00,00),B(number ,63),I(3b,01,25,00),B(number ,15),I(23,00,00,00),B(number ,81),I(23,00,00,00),B(number ,62),I(3b,fe,25,00),B(number ,14),I(86,25,00,00),B(number ,13),I(86,25,00,00),B(number ,12),I(86,25,00,00),B(number ,11),I(23,00,00,00),B(number ,82),I(23,00,00,00),B(number ,60),I(3b,ff,25,00),B(number ,10),I(23,00,00,00),B(number ,83),I(23,00,00,00),B(number ,58),I(3b,fe,25,00),B(number ,9),I(86,25,00,00),B(number ,8),I(86,25,00,00),B(number ,7),I(86,25,00,00),B(number ,6),I(86,25,00,00),B(number ,5),I(86,25,00,00),B(number ,4),I(23,00,00,00),B(number ,84),I(23,00,00,00),B(number ,56),I(3b,01,25,00),B(number ,3),I(23,00,00,00),B(number ,85),I(23,00,00,00),B(number ,55),I(3b,fe,25,00),B(number ,2),I(23,00,00,00),B(number ,86),I(23,00,00,00),B(number ,52),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G001994,G001993);
  eul_allocate_bytevector( G001996,G001995);
  eul_allocate_bytevector( G001998,G001997);
  eul_allocate_bytevector( G002000,G001999);
  eul_allocate_bytevector( G002002,G002001);
  eul_intern_keyword(key_2005,"name");
  eul_intern_symbol(sym_2006,"number");
  eul_intern_keyword(key_2007,"direct-superclasses");
  eul_intern_keyword(key_2008,"direct-slots");
  eul_intern_keyword(key_2009,"direct-keywords");
  eul_intern_keyword(key_2010,"abstractp");
  eul_intern_symbol(sym_2011,"numberp");
  eul_intern_symbol(sym_2012,"zerop");
  eul_intern_symbol(sym_2013,"negate");
  eul_intern_symbol(sym_2014,"binary+");
  eul_intern_symbol(sym_2015,"binary-");
  eul_intern_symbol(sym_2016,"binary*");
  eul_intern_symbol(sym_2017,"binary/");
  eul_intern_symbol(sym_2018,"binary%");
  eul_intern_symbol(sym_2019,"binary-mod");
  eul_intern_symbol(sym_2020,"binary-gcd");
  eul_intern_symbol(sym_2021,"binary-lcm");
  eul_intern_symbol(sym_2022,"(method numberp)");
  eul_intern_symbol(sym_2023,"(method negate)");
  eul_intern_symbol(sym_2024,"(method shallow-copy)");
  eul_intern_symbol(sym_2025,"(method deep-copy)");
  eul_allocate_bytevector( G002004,G002003);
  eul_allocate_bytevector( G002027,G002026);
  eul_intern_symbol(sym_2030,"anonymous");
  eul_allocate_bytevector( G002029,G002028);
  eul_allocate_bytevector( G002032,G002031);
  eul_allocate_bytevector( G002034,G002033);
  eul_allocate_bytevector( G002036,G002035);
  eul_allocate_bytevector( G002038,G002037);
  eul_allocate_bytevector( G002040,G002039);
  eul_allocate_bytevector( G002042,G002041);
  eul_allocate_bytevector( G002044,G002043);
  eul_allocate_bytevector( G002046,G002045);
  eul_allocate_bytevector( G002048,G002047);
  eul_allocate_bytevector( G002050,G002049);
  eul_allocate_bytevector( G002052,G002051);
  eul_allocate_bytevector( G002054,G002053);
  eul_allocate_bytevector( G002056,G002055);
  eul_allocate_bytevector( G002058,G002057);
  eul_allocate_bytevector( G002060,G002059);
  eul_allocate_bytevector( G002062,G002061);
  eul_allocate_bytevector( G002064,G002063);
  eul_allocate_bytevector( G002066,G002065);
  eul_intern_symbol(sym_2069,"*");
  eul_intern_symbol(sym_2070,"lcm");
  eul_intern_symbol(sym_2071,"gcd");
  eul_intern_symbol(sym_2072,"negativep");
  eul_intern_symbol(sym_2073,"abs");
  eul_intern_symbol(sym_2074,"mod");
  eul_intern_symbol(sym_2075,"positivep");
  eul_intern_symbol(sym_2076,"%");
  eul_intern_symbol(sym_2077,"+");
  eul_intern_symbol(sym_2078,"/");
  eul_intern_symbol(sym_2079,"signum");
  eul_intern_symbol(sym_2080,"-");
  eul_intern_symbol(sym_2081,"top-level");
  eul_allocate_bytevector( G002068,G002067);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 26; i++)
      number_bindings[i] = eul_nil;
  }

  number_bindings[ 26] = G001994;
  number_bindings[ 27] = G001996;
  number_bindings[ 28] = G001998;
  number_bindings[ 29] = G002000;
  number_bindings[ 30] = G002002;
  number_bindings[ 31] = key_2005;
  number_bindings[ 32] = sym_2006;
  number_bindings[ 33] = key_2007;
  number_bindings[ 34] = key_2008;
  number_bindings[ 35] = key_2009;
  number_bindings[ 36] = key_2010;
  number_bindings[ 37] = sym_2011;
  number_bindings[ 38] = sym_2012;
  number_bindings[ 39] = sym_2013;
  number_bindings[ 40] = sym_2014;
  number_bindings[ 41] = sym_2015;
  number_bindings[ 42] = sym_2016;
  number_bindings[ 43] = sym_2017;
  number_bindings[ 44] = sym_2018;
  number_bindings[ 45] = sym_2019;
  number_bindings[ 46] = sym_2020;
  number_bindings[ 47] = sym_2021;
  number_bindings[ 48] = sym_2022;
  number_bindings[ 49] = sym_2023;
  number_bindings[ 50] = sym_2024;
  number_bindings[ 51] = sym_2025;
  number_bindings[ 52] = G002004;
  number_bindings[ 53] = G002027;
  number_bindings[ 54] = sym_2030;
  number_bindings[ 55] = G002029;
  number_bindings[ 56] = G002032;
  number_bindings[ 57] = G002034;
  number_bindings[ 58] = G002036;
  number_bindings[ 59] = G002038;
  number_bindings[ 60] = G002040;
  number_bindings[ 61] = G002042;
  number_bindings[ 62] = G002044;
  number_bindings[ 63] = G002046;
  number_bindings[ 64] = G002048;
  number_bindings[ 65] = G002050;
  number_bindings[ 66] = G002052;
  number_bindings[ 67] = G002054;
  number_bindings[ 68] = G002056;
  number_bindings[ 69] = G002058;
  number_bindings[ 70] = G002060;
  number_bindings[ 71] = G002062;
  number_bindings[ 72] = G002064;
  number_bindings[ 73] = G002066;
  number_bindings[ 1] = eul_nil;
  number_bindings[ 74] = sym_2069;
  number_bindings[ 75] = sym_2070;
  number_bindings[ 76] = sym_2071;
  number_bindings[ 77] = sym_2072;
  number_bindings[ 78] = sym_2073;
  number_bindings[ 79] = sym_2074;
  number_bindings[ 80] = sym_2075;
  number_bindings[ 81] = sym_2076;
  number_bindings[ 82] = sym_2077;
  number_bindings[ 83] = sym_2078;
  number_bindings[ 84] = sym_2079;
  number_bindings[ 85] = sym_2080;
  number_bindings[ 86] = sym_2081;
  eul_allocate_lambda( number_bindings[0], "initialize-number", 0, G002068);

  }
}


/* eof */
