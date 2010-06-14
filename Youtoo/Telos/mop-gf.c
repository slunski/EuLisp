/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module mop-gf
 **  Copyright: See file mop-gf.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern void initialize_module_mop_prim();
extern void initialize_module_mop_class();
extern void initialize_module_mop_inspect();
extern LispRef mop_prim_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot1_bindings[];
extern LispRef boot_bindings[];

/* Module bindings with size 75 */
LispRef mop_gf_bindings[75];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-gf */
void initialize_module_mop_gf()
{
  if (is_initialized) return;
  initialize_module_boot();
  initialize_module_mop_prim();
  initialize_module_mop_class();
  initialize_module_mop_inspect();
  eul_fast_table_set(eul_modules,"mop_gf",(LispRef) mop_gf_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1926, sym_1925, sym_1924, sym_1923, sym_1922, sym_1921, sym_1920, sym_1919, sym_1918, sym_1917, sym_1916, sym_1915, sym_1914, G001913, key_1911, key_1910, key_1909, key_1908, G001907, G001904, G001902, G001900, G001898, G001896, G001894, G001892, G001890, G001888, G001886, G001884, G001882, G001880, G001878, sym_1876, G001875, G001873, sym_1871, G001870, G001868, sym_1866, G001865, G001863, G001861, sym_1859, sym_1858, sym_1857, sym_1856, sym_1855, sym_1854, G001853, G001848, G001844;

  /* Code vector and literal definitions */
  eul_allocate_static_string(str_1845, "*** WARNING [level1]: ", 22);
  eul_allocate_static_string(str_1846, "\n", 1);
  /* Byte-vector with size: 15 is_init: 0 index: 20 binding: warning */
  static const void *G001843[] = {I(43,fe,84,23),B(mop_gf ,18),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,24),B(mop_gf ,17),I(84,1f,03,1f),I(03,24,00,00),B(boot ,9),I(3c,04,2a,84),I(23,00,00,00),B(mop_gf ,19),I(24,00,00,00),B(mop_gf ,17),I(3d,02,02,00)};

  eul_allocate_static_string(str_1849, "*** ERROR [level1]: ", 20);
  eul_allocate_static_string(str_1850, "\n", 1);
  eul_allocate_static_string(str_1851, "***    See Backtrace? (y/n) ", 28);
  /* Byte-vector with size: 31 is_init: 0 index: 24 binding: error */
  static const void *G001847[] = {I(43,fe,84,23),B(mop_gf ,21),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,24),B(mop_gf ,17),I(84,1f,03,1f),I(03,24,00,00),B(boot ,9),I(3c,04,2a,84),I(23,00,00,00),B(mop_gf ,22),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,84),I(23,00,00,00),B(mop_gf ,23),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,41),B(boot ,32),I(27,79,50,1b),I(34,00,00,00),I(00,00,00,18),I(24,00,00,00),B(boot ,13),I(3c,00,32,00),I(00,00,00,07),I(86,2a,24,00),B(boot1 ,19),I(3d,00,03,00)};

  /* Byte-vector with size: 112 is_init: 0 index: 31 binding: top-level */
  static const void *G001852[] = {I(a9,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,38),I(3c,03,24,00),B(boot1 ,24),I(3c,00,24,00),B(boot1 ,24),I(3c,00,23,00),B(mop_gf ,25),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_gf ,12),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(boot1 ,24),I(3c,00,23,00),B(mop_gf ,26),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_gf ,14),I(2a,84,24,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,38),I(3c,03,24,00),B(boot1 ,24),I(3c,00,24,00),B(boot1 ,24),I(3c,00,23,00),B(mop_gf ,27),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_gf ,8),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,38),I(3c,03,24,00),B(boot1 ,24),I(3c,00,24,00),B(boot1 ,24),I(3c,00,23,00),B(mop_gf ,28),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_gf ,17),I(2a,24,00,00),B(mop_gf ,12),I(2a,26,00,00),I(00,00,00,22),I(24,00,00,00),B(boot1 ,38),I(3c,01,24,00),B(mop_gf ,12),I(1c,1c,26,00),I(00,00,00,08),I(1d,03,22,02),I(2a,24,00,00),B(mop_gf ,14),I(2a,24,00,00),B(mop_gf ,8),I(2a,24,00,00),B(mop_gf ,17),I(2a,23,00,00),B(mop_gf ,29),I(23,00,00,00),B(mop_gf ,24),I(3b,fe,89,00),B(boot ,23),I(2a,23,00,00),B(mop_gf ,30),I(23,00,00,00),B(mop_gf ,20),I(3b,fe,89,00),B(boot ,6),I(45,11,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 32 binding: make */
  static const void *G001860[] = {I(43,fe,1c,1c),I(24,00,00,00),B(mop_gf ,8),I(3c,02,1b,1d),I(24,00,00,00),B(mop_gf ,12),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 33 binding: anonymous */
  static const void *G001862[] = {I(aa,1b,47,00),I(01,1a,1b,34),I(00,00,00,1d),I(47,00,03,1d),I(86,03,2a,1c),I(83,14,47,00),I(00,3d,01,02),I(32,00,00,00),I(00,00,00,0b),I(47,00,03,45),I(02,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 35 binding: gf-reset-cache */
  static const void *G001864[] = {I(aa,46,04,26),I(00,00,00,08),I(02,1b,48,00),I(03,47,00,03),I(34,00,00,00),I(00,00,00,38),I(47,00,03,06),I(1b,48,00,01),I(86,1b,48,00),I(00,23,00,00),B(mop_gf ,34),I(23,00,00,00),B(mop_gf ,33),I(3b,01,48,00),I(00,82,47,00),I(00,3d,01,03),I(22,02,32,00),I(00,00,00,07),I(86,45,01,00)};

  /* Byte-vector with size: 31 is_init: 0 index: 36 binding: primitive-discriminating-function */
  static const void *G001867[] = {I(a8,47,00,00),I(26,00,00,00),I(00,00,00,08),I(02,1b,82,02),I(1c,83,02,47),I(00,00,26,00),I(00,00,00,06),I(02,1b,1f,05),I(24,00,00,00),B(boot ,9),I(3c,02,24,00),B(mop_class ,76),I(1c,24,00,00),B(boot ,15),I(3c,02,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(47,00,00,1f),I(08,24,00,00),B(mop_gf ,15),I(3d,02,08,32),I(00,00,00,26),I(1f,05,1d,0f),I(1f,07,1f,06),I(1d,03,2a,1d),I(11,29,18,1d),I(10,1b,1f,0a),I(24,00,00,00),B(boot ,9),I(3d,02,0a,22),I(02,45,08,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 38 binding: compute-primitive-discriminating-function */
  static const void *G001869[] = {I(aa,46,01,1b),I(48,00,00,23),B(mop_gf ,37),I(23,00,00,00),B(mop_gf ,36),I(3b,ff,45,01)};

  /* Byte-vector with size: 5 is_init: 0 index: 39 binding: primitive-method-lookup-function */
  static const void *G001872[] = {I(a8,47,00,01),I(1c,47,00,00),I(24,00,00,00),B(mop_gf ,7),I(3d,03,01,00)};

  /* Byte-vector with size: 35 is_init: 0 index: 41 binding: primitive-make-generic-function */
  static const void *G001874[] = {I(ab,46,02,1b),I(48,00,00,24),B(mop_class ,15),I(26,00,00,00),I(00,00,00,09),I(01,1b,48,00),I(01,47,00,01),I(1f,03,1c,82),I(1d,03,22,02),I(2a,47,00,01),I(47,00,00,1c),I(83,1d,03,22),I(02,2a,47,00),I(01,24,00,00),B(mop_class ,55),I(1c,26,00,00),I(00,00,00,03),I(1d,03,22,02),I(2a,47,00,01),I(23,00,00,00),B(mop_gf ,40),I(23,00,00,00),B(mop_gf ,39),I(3b,ff,1c,26),I(00,00,00,06),I(1d,03,22,02),I(2a,47,00,01),I(24,00,00,00),B(mop_gf ,4),I(3c,01,47,00),I(01,1c,1c,26),I(00,00,00,07),I(1d,03,22,02),I(2a,47,00,01),I(45,04,00,00)};

  /* Byte-vector with size: 22 is_init: 0 index: 42 binding: anonymous */
  static const void *G001877[] = {I(43,03,1c,12),I(1b,34,00,00),I(00,00,00,17),I(1c,24,00,00),B(boot ,24),I(3d,01,04,32),I(00,00,00,3f),I(1d,10,1b,34),I(00,00,00,29),I(1f,04,11,1f),I(04,11,1f,06),I(10,1b,04,1b),I(1f,07,0f,1f),I(04,1f,04,1d),I(47,00,00,3d),I(03,0a,22,05),I(32,00,00,00),I(00,00,00,14),I(1f,04,11,1f),I(04,11,47,00),I(00,3d,02,05),I(22,01,45,04)};

  /* Byte-vector with size: 10 is_init: 0 index: 43 binding: discriminating-domain */
  static const void *G001879[] = {I(ab,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(mop_gf ,34),I(23,00,00,00),B(mop_gf ,42),I(3b,03,48,00),I(00,1d,1d,86),I(47,00,00,3d),I(03,03,45,03)};

  /* Byte-vector with size: 7 is_init: 0 index: 44 binding: anonymous */
  static const void *G001881[] = {I(ab,1c,83,02),I(1c,83,02,1c),I(1c,47,00,00),I(24,00,00,00),B(mop_gf ,13),I(3d,03,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 45 binding: the-method-lookup-function */
  static const void *G001883[] = {I(43,03,46,01),I(1d,26,00,00),I(00,00,00,08),I(02,82,02,1b),I(48,00,00,1f),I(03,26,00,00),I(00,00,00,05),I(02,47,00,00),I(1c,24,00,00),B(mop_gf ,9),I(3c,02,1b,23),B(mop_gf ,34),I(23,00,00,00),B(mop_gf ,44),I(3b,02,24,00),B(boot ,3),I(3d,02,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 46 binding: anonymous */
  static const void *G001885[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,43),I(1d,10,1b,83),I(02,47,00,00),I(1c,24,00,00),B(mop_gf ,11),I(3c,02,1b,34),I(00,00,00,19),I(1f,05,11,1f),I(03,1f,06,0f),I(47,00,01,3d),I(02,06,32,00),I(00,00,00,14),I(1f,05,11,1b),I(1f,06,47,00),I(01,3d,02,07),I(22,01,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 47 binding: select-methods */
  static const void *G001887[] = {I(ab,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(mop_gf ,34),I(23,00,00,00),B(mop_gf ,46),I(3b,02,48,00),I(01,1c,86,47),I(00,01,3d,02),I(03,45,03,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 48 binding: anonymous */
  static const void *G001889[] = {I(aa,1b,47,00),I(03,1a,1b,34),I(00,00,00,31),I(47,00,00,1d),I(02,47,00,01),I(1f,03,02,50),I(1b,34,00,00),I(00,00,00,17),I(1d,83,14,47),I(00,02,3d,01),I(03,32,00,00),I(00,00,00,08),I(86,22,01,32),I(00,00,00,06),I(87,45,02,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 49 binding: sig= */
  static const void *G001891[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,00,06,1b),I(48,00,03,86),I(1b,48,00,02),I(23,00,00,00),B(mop_gf ,34),I(23,00,00,00),B(mop_gf ,48),I(3b,01,48,00),I(02,82,47,00),I(02,3d,01,04),I(45,04,00,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 50 binding: anonymous */
  static const void *G001893[] = {I(aa,1b,47,00),I(03,1a,1b,34),I(00,00,00,51),I(47,00,01,1d),I(02,1b,34,00),I(00,00,00,36),I(47,00,00,1f),I(03,02,1b,1d),I(24,00,00,00),B(mop_inspect ,7),I(3c,02,1b,34),I(00,00,00,15),I(1f,04,83,14),I(47,00,02,3d),I(01,05,32,00),I(00,00,00,07),I(86,22,02,32),I(00,00,00,0e),I(1d,83,14,47),I(00,02,3d,01),I(03,22,01,32),I(00,00,00,06),I(87,45,02,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 51 binding: sig-applicable? */
  static const void *G001895[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,1b),I(48,00,03,86),I(1b,48,00,02),I(23,00,00,00),B(mop_gf ,34),I(23,00,00,00),B(mop_gf ,50),I(3b,01,48,00),I(02,82,47,00),I(02,3c,01,1b),I(45,05,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 52 binding: anonymous */
  static const void *G001897[] = {I(aa,1b,10,47),I(00,00,1c,50),I(1b,34,00,00),I(00,00,00,0f),I(87,32,00,00),I(00,00,00,26),I(47,00,01,1d),I(50,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,10),I(1f,03,11,47),I(00,02,3d,01),I(04,22,01,45),I(03,00,00,00)};

  /* Byte-vector with size: 31 is_init: 0 index: 53 binding: anonymous */
  static const void *G001899[] = {I(aa,46,03,1b),I(47,01,04,1a),I(1b,34,00,00),I(00,00,00,6f),I(47,01,00,1d),I(02,47,01,01),I(1f,03,02,1c),I(48,00,00,1b),I(48,00,01,47),I(00,00,47,00),I(01,50,1b,34),I(00,00,00,15),I(1f,04,83,14),I(47,01,03,3d),I(01,05,32,00),I(00,00,00,37),I(86,1b,48,00),I(02,23,00,00),B(mop_gf ,34),I(23,00,00,00),B(mop_gf ,52),I(3b,01,48,00),I(02,47,01,02),I(1f,06,02,1b),I(26,00,00,00),I(00,00,00,06),I(02,47,00,02),I(3d,01,07,22),I(02,22,03,32),I(00,00,00,06),I(87,45,02,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 54 binding: sig<= */
  static const void *G001901[] = {I(43,03,46,06),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(47,00,00,06),I(1b,48,00,04),I(86,1b,48,00),I(03,23,00,00),B(mop_gf ,34),I(23,00,00,00),B(mop_gf ,53),I(3b,01,48,00),I(03,82,47,00),I(03,3d,01,05),I(45,05,00,00)};

  eul_allocate_static_string(str_1905, "no applicable methods for ~a\n    arguments: ~a\n    classes: ~a", 62);
  /* Byte-vector with size: 12 is_init: 0 index: 56 binding: error-no-applicable-methods */
  static const void *G001903[] = {I(ab,1c,82,02),I(24,00,00,00),B(mop_inspect ,8),I(1d,24,00,00),B(boot ,15),I(3c,02,23,00),B(mop_gf ,55),I(1d,1f,04,1f),I(03,24,00,00),B(boot ,22),I(3d,04,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 40 is_init: 0 index: 61 binding: make-generic-function */
  static const void *G001906[] = {I(43,06,1f,03),I(24,00,00,00),B(mop_class ,15),I(50,1b,34,00),I(00,00,00,3a),I(1f,03,24,00),B(mop_class ,55),I(50,1b,34,00),I(00,00,00,22),I(1f,03,12,1b),I(34,00,00,00),I(00,00,00,10),I(1f,03,12,32),I(00,00,00,06),I(86,22,01,32),I(00,00,00,06),I(86,22,01,32),I(00,00,00,06),I(86,1b,34,00),I(00,00,00,1a),I(1f,07,1f,07),I(24,00,00,00),B(mop_gf ,5),I(3d,02,08,32),I(00,00,00,3c),I(24,00,00,00),B(mop_gf ,2),I(1f,06,23,00),B(mop_gf ,57),I(1f,0a,23,00),B(mop_gf ,58),I(1f,0b,23,00),B(mop_gf ,59),I(1f,0b,23,00),B(mop_gf ,60),I(1f,0c,1f,0c),I(24,00,00,00),B(boot ,9),I(3d,0b,08,45),I(08,00,00,00)};

  /* Byte-vector with size: 108 is_init: 1 index: 0 binding: initialize-mop-gf */
  static const void *G001912[] = {I(87,25,00,00),B(mop_gf ,1),I(24,00,00,00),B(mop_inspect ,1),I(3e,0b,24,00),B(mop_inspect ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_class ,1),I(3e,0b,24,00),B(mop_class ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_prim ,1),I(3e,0b,24,00),B(mop_prim ,0),I(3c,00,21,01),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(86,25,00,00),B(mop_gf ,17),I(23,00,00,00),B(mop_gf ,62),I(23,00,00,00),B(mop_gf ,61),I(3b,06,25,00),B(mop_gf ,16),I(23,00,00,00),B(mop_gf ,63),I(23,00,00,00),B(mop_gf ,56),I(3b,02,25,00),B(mop_gf ,15),I(86,25,00,00),B(mop_gf ,14),I(23,00,00,00),B(mop_gf ,64),I(23,00,00,00),B(mop_gf ,54),I(3b,03,25,00),B(mop_gf ,13),I(86,25,00,00),B(mop_gf ,12),I(23,00,00,00),B(mop_gf ,65),I(23,00,00,00),B(mop_gf ,51),I(3b,02,25,00),B(mop_gf ,11),I(23,00,00,00),B(mop_gf ,66),I(23,00,00,00),B(mop_gf ,49),I(3b,02,25,00),B(mop_gf ,10),I(23,00,00,00),B(mop_gf ,67),I(23,00,00,00),B(mop_gf ,47),I(3b,02,25,00),B(mop_gf ,9),I(86,25,00,00),B(mop_gf ,8),I(23,00,00,00),B(mop_gf ,68),I(23,00,00,00),B(mop_gf ,45),I(3b,03,25,00),B(mop_gf ,7),I(23,00,00,00),B(mop_gf ,69),I(23,00,00,00),B(mop_gf ,43),I(3b,02,25,00),B(mop_gf ,6),I(23,00,00,00),B(mop_gf ,70),I(23,00,00,00),B(mop_gf ,41),I(3b,02,25,00),B(mop_gf ,5),I(23,00,00,00),B(mop_gf ,71),I(23,00,00,00),B(mop_gf ,38),I(3b,01,25,00),B(mop_gf ,4),I(23,00,00,00),B(mop_gf ,72),I(23,00,00,00),B(mop_gf ,35),I(3b,01,25,00),B(mop_gf ,3),I(23,00,00,00),B(mop_gf ,73),I(23,00,00,00),B(mop_gf ,32),I(3b,fe,25,00),B(mop_gf ,2),I(23,00,00,00),B(mop_gf ,74),I(23,00,00,00),B(mop_gf ,31),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  object_class(str_1845) = eul_static_string_class;
  object_class(str_1846) = eul_static_string_class;
  eul_allocate_bytevector( G001844,G001843);
  object_class(str_1849) = eul_static_string_class;
  object_class(str_1850) = eul_static_string_class;
  object_class(str_1851) = eul_static_string_class;
  eul_allocate_bytevector( G001848,G001847);
  eul_intern_symbol(sym_1854,"initialize");
  eul_intern_symbol(sym_1855,"finalize");
  eul_intern_symbol(sym_1856,"allocate");
  eul_intern_symbol(sym_1857,"generic-format");
  eul_intern_symbol(sym_1858,"error");
  eul_intern_symbol(sym_1859,"warning");
  eul_allocate_bytevector( G001853,G001852);
  eul_allocate_bytevector( G001861,G001860);
  eul_allocate_bytevector( G001863,G001862);
  eul_intern_symbol(sym_1866,"anonymous");
  eul_allocate_bytevector( G001865,G001864);
  eul_allocate_bytevector( G001868,G001867);
  eul_intern_symbol(sym_1871,"primitive-discriminating-function");
  eul_allocate_bytevector( G001870,G001869);
  eul_allocate_bytevector( G001873,G001872);
  eul_intern_symbol(sym_1876,"primitive-method-lookup-function");
  eul_allocate_bytevector( G001875,G001874);
  eul_allocate_bytevector( G001878,G001877);
  eul_allocate_bytevector( G001880,G001879);
  eul_allocate_bytevector( G001882,G001881);
  eul_allocate_bytevector( G001884,G001883);
  eul_allocate_bytevector( G001886,G001885);
  eul_allocate_bytevector( G001888,G001887);
  eul_allocate_bytevector( G001890,G001889);
  eul_allocate_bytevector( G001892,G001891);
  eul_allocate_bytevector( G001894,G001893);
  eul_allocate_bytevector( G001896,G001895);
  eul_allocate_bytevector( G001898,G001897);
  eul_allocate_bytevector( G001900,G001899);
  eul_allocate_bytevector( G001902,G001901);
  object_class(str_1905) = eul_static_string_class;
  eul_allocate_bytevector( G001904,G001903);
  eul_intern_keyword(key_1908,"name");
  eul_intern_keyword(key_1909,"domain");
  eul_intern_keyword(key_1910,"method-class");
  eul_intern_keyword(key_1911,"method-keywords");
  eul_allocate_bytevector( G001907,G001906);
  eul_intern_symbol(sym_1914,"make-generic-function");
  eul_intern_symbol(sym_1915,"error-no-applicable-methods");
  eul_intern_symbol(sym_1916,"sig<=");
  eul_intern_symbol(sym_1917,"sig-applicable?");
  eul_intern_symbol(sym_1918,"sig=");
  eul_intern_symbol(sym_1919,"select-methods");
  eul_intern_symbol(sym_1920,"the-method-lookup-function");
  eul_intern_symbol(sym_1921,"discriminating-domain");
  eul_intern_symbol(sym_1922,"primitive-make-generic-function");
  eul_intern_symbol(sym_1923,"compute-primitive-discriminating-function");
  eul_intern_symbol(sym_1924,"gf-reset-cache");
  eul_intern_symbol(sym_1925,"make");
  eul_intern_symbol(sym_1926,"top-level");
  eul_allocate_bytevector( G001913,G001912);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 18; i++)
      mop_gf_bindings[i] = eul_nil;
  }

  mop_gf_bindings[ 18] = str_1845;
  mop_gf_bindings[ 19] = str_1846;
  mop_gf_bindings[ 20] = G001844;
  mop_gf_bindings[ 21] = str_1849;
  mop_gf_bindings[ 22] = str_1850;
  mop_gf_bindings[ 23] = str_1851;
  mop_gf_bindings[ 24] = G001848;
  mop_gf_bindings[ 25] = sym_1854;
  mop_gf_bindings[ 26] = sym_1855;
  mop_gf_bindings[ 27] = sym_1856;
  mop_gf_bindings[ 28] = sym_1857;
  mop_gf_bindings[ 29] = sym_1858;
  mop_gf_bindings[ 30] = sym_1859;
  mop_gf_bindings[ 31] = G001853;
  mop_gf_bindings[ 32] = G001861;
  mop_gf_bindings[ 33] = G001863;
  mop_gf_bindings[ 34] = sym_1866;
  mop_gf_bindings[ 35] = G001865;
  mop_gf_bindings[ 36] = G001868;
  mop_gf_bindings[ 37] = sym_1871;
  mop_gf_bindings[ 38] = G001870;
  mop_gf_bindings[ 39] = G001873;
  mop_gf_bindings[ 40] = sym_1876;
  mop_gf_bindings[ 41] = G001875;
  mop_gf_bindings[ 42] = G001878;
  mop_gf_bindings[ 43] = G001880;
  mop_gf_bindings[ 44] = G001882;
  mop_gf_bindings[ 45] = G001884;
  mop_gf_bindings[ 46] = G001886;
  mop_gf_bindings[ 47] = G001888;
  mop_gf_bindings[ 48] = G001890;
  mop_gf_bindings[ 49] = G001892;
  mop_gf_bindings[ 50] = G001894;
  mop_gf_bindings[ 51] = G001896;
  mop_gf_bindings[ 52] = G001898;
  mop_gf_bindings[ 53] = G001900;
  mop_gf_bindings[ 54] = G001902;
  mop_gf_bindings[ 55] = str_1905;
  mop_gf_bindings[ 56] = G001904;
  mop_gf_bindings[ 57] = key_1908;
  mop_gf_bindings[ 58] = key_1909;
  mop_gf_bindings[ 59] = key_1910;
  mop_gf_bindings[ 60] = key_1911;
  mop_gf_bindings[ 61] = G001907;
  mop_gf_bindings[ 1] = eul_nil;
  mop_gf_bindings[ 62] = sym_1914;
  mop_gf_bindings[ 63] = sym_1915;
  mop_gf_bindings[ 64] = sym_1916;
  mop_gf_bindings[ 65] = sym_1917;
  mop_gf_bindings[ 66] = sym_1918;
  mop_gf_bindings[ 67] = sym_1919;
  mop_gf_bindings[ 68] = sym_1920;
  mop_gf_bindings[ 69] = sym_1921;
  mop_gf_bindings[ 70] = sym_1922;
  mop_gf_bindings[ 71] = sym_1923;
  mop_gf_bindings[ 72] = sym_1924;
  mop_gf_bindings[ 73] = sym_1925;
  mop_gf_bindings[ 74] = sym_1926;
  eul_allocate_lambda( mop_gf_bindings[0], "initialize-mop-gf", 0, G001913);

  }
}


/* eof */
