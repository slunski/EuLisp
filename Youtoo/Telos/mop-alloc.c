/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module mop-alloc
 **  Copyright: See file mop-alloc.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern void initialize_module_mop_prim();
extern void initialize_module_mop_key();
extern void initialize_module_mop_class();
extern void initialize_module_mop_init();
extern void initialize_module_mop_inspect();
extern void initialize_module_mop_gf();
extern void initialize_module_mop_meth();
extern void initialize_module_mop_defcl();
extern void initialize_module_mop_access();
extern LispRef mop_prim_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_init_bindings[];
extern LispRef mop_access_bindings[];
extern LispRef mop_defcl_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef boot1_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_key_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 83 */
LispRef mop_alloc_bindings[83];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-alloc */
void initialize_module_mop_alloc()
{
  if (is_initialized) return;
  initialize_module_boot();
  initialize_module_mop_prim();
  initialize_module_mop_key();
  initialize_module_mop_class();
  initialize_module_mop_init();
  initialize_module_mop_inspect();
  initialize_module_mop_gf();
  initialize_module_mop_meth();
  initialize_module_mop_defcl();
  initialize_module_mop_access();
  eul_fast_table_set(eul_modules,"mop_alloc",(LispRef) mop_alloc_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_3499, sym_3498, sym_3497, sym_3496, G003495, G003489, key_3487, key_3486, key_3485, G003484, G003482, G003479, sym_3477, sym_3476, sym_3475, sym_3474, sym_3473, sym_3472, sym_3471, sym_3470, sym_3469, sym_3468, sym_3467, sym_3466, sym_3465, sym_3464, sym_3463, sym_3462, sym_3461, sym_3460, sym_3459, sym_3458, sym_3457, sym_3456, sym_3455, sym_3454, G003453, G003450, G003448, G003445, key_3442, key_3441, G003440, G003438, G003436, G003434, G003432, G003430, G003428, G003426, sym_3424, G003423, G003421, G003419, G003417, G003415, G003413, key_3410, key_3409, key_3408, G003407, G003405;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 16 binding: (method-compute-defined-slot-class) */
  static const void *G003404[] = {I(ab,24,00,00),B(mop_class ,56),I(45,02,00,00)};

  eul_allocate_static_cons(cons_3411, NULL, NULL);
  /* Byte-vector with size: 33 is_init: 0 index: 21 binding: (method-compute-defined-slot) */
  static const void *G003406[] = {I(ab,23,00,00),B(mop_alloc ,17),I(1c,23,00,00),B(mop_alloc ,18),I(24,00,00,00),B(mop_key ,2),I(3c,03,1d,26),I(00,00,00,05),I(02,1c,1c,86),I(6c,1b,34,00),I(00,00,00,0e),I(1d,32,00,00),I(00,00,00,08),I(86,23,00,00),B(mop_alloc ,19),I(1f,05,1d,24),B(mop_key ,2),I(3c,03,1f,06),I(1f,06,24,00),B(mop_alloc ,12),I(3c,02,1f,06),I(23,00,00,00),B(mop_alloc ,20),I(24,00,00,00),B(mop_key ,3),I(3c,02,24,00),B(mop_gf ,2),I(1d,23,00,00),B(mop_alloc ,19),I(1f,05,1f,04),I(24,00,00,00),B(boot ,9),I(3d,05,09,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 22 binding: (method-compute-specialized-slot-class) */
  static const void *G003412[] = {I(43,03,24,00),B(mop_class ,56),I(45,03,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 23 binding: (method-compute-specialized-slot) */
  static const void *G003414[] = {I(43,03,1c,10),I(1f,03,1f,03),I(1f,03,24,00),B(mop_alloc ,2),I(3c,03,1d,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,05,1f,03),I(1f,03,24,00),B(mop_alloc ,5),I(3d,03,06,32),I(00,00,00,18),I(1f,05,1f,03),I(1f,03,1f,06),I(24,00,00,00),B(mop_alloc ,11),I(3d,04,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 24 binding: anonymous */
  static const void *G003416[] = {I(aa,23,00,00),B(mop_alloc ,17),I(1c,23,00,00),B(mop_alloc ,18),I(24,00,00,00),B(mop_key ,2),I(3c,03,1b,47),I(00,01,86,6c),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,1e),I(47,00,00,1f),I(03,24,00,00),B(mop_alloc ,7),I(3c,02,24,00),B(boot1 ,23),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 25 binding: anonymous */
  static const void *G003418[] = {I(aa,1b,24,00),B(boot1 ,23),I(3c,01,1c,84),I(02,47,00,02),I(1c,24,00,00),B(boot ,28),I(3c,02,47,00),I(00,1f,03,1d),I(24,00,00,00),B(mop_alloc ,15),I(3d,03,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 26 binding: anonymous */
  static const void *G003420[] = {I(aa,23,00,00),B(mop_alloc ,17),I(1c,23,00,00),B(mop_alloc ,18),I(24,00,00,00),B(mop_key ,2),I(3c,03,1b,1d),I(24,00,00,00),B(boot1 ,23),I(3d,02,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 33 is_init: 0 index: 28 binding: (method-compute-slots) */
  static const void *G003422[] = {I(43,03,46,03),I(1d,48,00,00),I(1b,10,24,00),B(mop_class ,80),I(1c,24,00,00),B(boot ,15),I(3c,02,23,00),B(mop_alloc ,27),I(23,00,00,00),B(mop_alloc ,26),I(3b,01,1f,04),I(24,00,00,00),B(boot ,10),I(3c,02,1c,48),I(00,01,1b,48),I(00,02,1f,03),I(10,23,00,00),B(mop_alloc ,27),I(23,00,00,00),B(mop_alloc ,25),I(3b,01,1c,24),B(boot ,15),I(3c,02,23,00),B(mop_alloc ,27),I(23,00,00,00),B(mop_alloc ,24),I(3b,01,1f,07),I(24,00,00,00),B(boot ,10),I(3c,02,24,00),B(boot ,11),I(3d,02,07,45),I(07,00,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 29 binding: (method-compute-inherited-slots) */
  static const void *G003425[] = {I(ab,10,1b,26),I(00,00,00,04),I(02,24,00,00),B(boot1 ,23),I(3d,01,02,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 30 binding: (method-compute-keywords) */
  static const void *G003427[] = {I(43,03,10,1c),I(1c,24,00,00),B(boot ,11),I(3c,02,24,00),B(boot ,30),I(3d,01,03,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 31 binding: (method-compute-inherited-keywords) */
  static const void *G003429[] = {I(ab,10,1b,26),I(00,00,00,05),I(02,24,00,00),B(boot1 ,23),I(3d,01,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 32 binding: (method-compute-class-precedence-list) */
  static const void *G003431[] = {I(ab,10,1b,26),I(00,00,00,06),I(02,1d,1c,0f),I(45,03,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 33 binding: (method-compatible-superclass?) */
  static const void *G003433[] = {I(ab,1b,26,00),I(00,00,00,07),I(02,1b,34,00),I(00,00,00,0e),I(87,32,00,00),I(00,00,00,16),I(1d,04,1d,04),I(24,00,00,00),B(mop_inspect ,11),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 34 binding: (method-compatible-superclasses?) */
  static const void *G003435[] = {I(ab,10,24,00),B(mop_alloc ,8),I(3d,02,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 35 binding: anonymous */
  static const void *G003437[] = {I(aa,1b,47,00),I(00,24,00,00),B(mop_defcl ,9),I(3d,02,01,00)};

  eul_allocate_static_string(str_3443, "~a can not be a subclass of ~a", 30);
  /* Byte-vector with size: 75 is_init: 0 index: 39 binding: (method-initialize) */
  static const void *G003439[] = {I(ab,46,01,1c),I(48,00,00,47),I(00,00,1c,37),I(02,2a,47,00),I(00,84,02,23),B(mop_alloc ,36),I(1d,86,24,00),B(mop_key ,2),I(3c,03,23,00),B(mop_alloc ,37),I(1f,03,86,24),B(mop_key ,2),I(3c,03,47,00),I(00,1f,03,24),B(mop_alloc ,14),I(3c,02,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,1d),I(23,00,00,00),B(mop_alloc ,38),I(47,00,00,1f),I(05,24,00,00),B(boot ,22),I(3c,03,2a,47),I(00,00,1f,04),I(24,00,00,00),B(mop_alloc ,13),I(3c,02,47,00),I(00,1c,1c,26),I(00,00,00,06),I(1d,03,22,02),I(2a,47,00,00),I(1f,05,24,00),B(mop_alloc ,10),I(3c,02,47,00),I(00,1f,04,1d),I(24,00,00,00),B(mop_alloc ,6),I(3c,03,47,00),I(00,1c,1c,26),I(00,00,00,05),I(1d,03,22,02),I(2a,47,00,00),I(1f,07,24,00),B(mop_alloc ,3),I(3c,02,47,00),I(00,1f,07,1d),I(24,00,00,00),B(mop_alloc ,9),I(3c,03,47,00),I(00,1c,1f,03),I(24,00,00,00),B(mop_access ,9),I(3c,03,47,00),I(00,1c,1c,26),I(00,00,00,04),I(1d,03,22,02),I(2a,1b,24,00),B(boot ,8),I(3c,01,47,00),I(00,1c,1c,83),I(1d,03,22,02),I(2a,23,00,00),B(mop_alloc ,27),I(23,00,00,00),B(mop_alloc ,35),I(3b,01,1f,0b),I(24,00,00,00),B(boot ,4),I(3c,02,22,0b),I(2a,24,00,00),B(mop_init ,2),I(3c,00,2a,47),I(00,00,45,02)};

  eul_allocate_static_string(str_3446, "missing keyword ~a to make ~a", 29);
  /* Byte-vector with size: 58 is_init: 0 index: 41 binding: anonymous */
  static const void *G003444[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,d9),I(1d,10,1b,26),I(00,00,00,03),I(02,1c,26,00),I(00,00,00,04),I(02,1c,12,1b),I(34,00,00,00),I(00,00,00,28),I(1c,24,00,00),B(mop_inspect ,8),I(3c,01,1b,34),I(00,00,00,0d),I(1d,3c,00,32),I(00,00,00,06),I(1d,22,01,32),I(00,00,00,84),I(1d,47,00,01),I(24,00,00,00),B(boot1 ,44),I(24,00,00,00),B(mop_key ,2),I(3c,03,1b,24),B(boot1 ,44),I(50,1b,34,00),I(00,00,00,5e),I(1f,05,26,00),I(00,00,00,05),I(02,1b,34,00),I(00,00,00,26),I(47,00,00,04),I(1b,82,02,23),B(mop_alloc ,40),I(1f,08,1d,24),B(boot ,19),I(3c,03,22,02),I(32,00,00,00),I(00,00,00,28),I(1f,04,24,00),B(mop_inspect ,8),I(3c,01,1b,34),I(00,00,00,11),I(1f,05,3c,00),I(32,00,00,00),I(00,00,00,0a),I(1f,05,22,01),I(22,01,32,00),I(00,00,00,07),I(1c,22,02,47),I(00,00,1f,07),I(1d,03,2a,1f),I(07,11,1f,07),I(83,14,47,00),I(02,3d,02,08),I(22,05,45,03)};

  /* Byte-vector with size: 21 is_init: 0 index: 42 binding: (method-initialize) */
  static const void *G003447[] = {I(ab,46,03,1c),I(48,00,00,1b),I(48,00,01,86),I(1b,48,00,02),I(23,00,00,00),B(mop_alloc ,27),I(23,00,00,00),B(mop_alloc ,41),I(3b,02,48,00),I(02,47,00,00),I(04,47,00,00),I(1c,47,00,01),I(24,00,00,00),B(mop_alloc ,4),I(3c,03,2a,1b),I(26,00,00,00),I(00,00,00,04),I(02,82,47,00),I(02,3c,02,2a),I(47,00,00,45),I(04,00,00,00)};

  eul_allocate_static_string(str_3451, "can't allocate an instance of abstract-class ~a", 47);
  /* Byte-vector with size: 13 is_init: 0 index: 44 binding: (method-allocate) */
  static const void *G003449[] = {I(ab,1c,26,00),I(00,00,00,07),I(02,1b,34,00),I(00,00,00,1e),I(23,00,00,00),B(mop_alloc ,43),I(1f,03,24,00),B(boot ,22),I(3d,02,03,32),I(00,00,00,0e),I(1d,83,02,1f),I(03,1c,01,22),I(01,45,03,00)};

  /* Byte-vector with size: 673 is_init: 0 index: 69 binding: top-level */
  static const void *G003452[] = {I(a9,84,24,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_alloc ,45),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,14),I(2a,84,24,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_alloc ,46),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,8),I(2a,84,24,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_alloc ,47),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,13),I(2a,84,24,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_alloc ,48),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,10),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_alloc ,49),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,6),I(2a,84,24,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_alloc ,50),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,3),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_alloc ,51),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,9),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_alloc ,52),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,15),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_alloc ,53),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,2),I(2a,84,24,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_alloc ,54),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,7),I(2a,84,24,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(boot1 ,23),I(3c,00,23,00),B(mop_alloc ,55),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,54),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,12),I(2a,24,00,00),B(mop_gf ,8),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,75),I(86,24,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_gf ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,56),I(23,00,00,00),B(mop_alloc ,44),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,20),I(86,24,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,57),I(23,00,00,00),B(mop_alloc ,42),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,75),I(86,24,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,57),I(23,00,00,00),B(mop_alloc ,39),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,14),I(2a,24,00,00),B(mop_alloc ,14),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,75),I(86,24,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_alloc ,14),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,58),I(23,00,00,00),B(mop_alloc ,34),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,14),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,8),I(2a,24,00,00),B(mop_alloc ,8),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_alloc ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,59),I(23,00,00,00),B(mop_alloc ,33),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,13),I(2a,24,00,00),B(mop_alloc ,13),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,75),I(86,24,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_alloc ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,60),I(23,00,00,00),B(mop_alloc ,32),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,10),I(2a,24,00,00),B(mop_alloc ,10),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,75),I(86,24,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_alloc ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,61),I(23,00,00,00),B(mop_alloc ,31),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,6),I(2a,24,00,00),B(mop_alloc ,6),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(86,86,24,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_alloc ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,62),I(23,00,00,00),B(mop_alloc ,30),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,3),I(2a,24,00,00),B(mop_alloc ,3),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,75),I(86,24,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_alloc ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,63),I(23,00,00,00),B(mop_alloc ,29),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,9),I(2a,24,00,00),B(mop_alloc ,9),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(86,86,24,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_alloc ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,64),I(23,00,00,00),B(mop_alloc ,28),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,15),I(2a,24,00,00),B(mop_alloc ,15),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(86,86,24,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_alloc ,15),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,65),I(23,00,00,00),B(mop_alloc ,23),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,15),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,2),I(2a,24,00,00),B(mop_alloc ,2),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,75),I(86,86,24,00),B(boot1 ,37),I(3c,04,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_alloc ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,66),I(23,00,00,00),B(mop_alloc ,22),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,7),I(2a,24,00,00),B(mop_alloc ,7),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,75),I(86,24,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_alloc ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,67),I(23,00,00,00),B(mop_alloc ,21),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,12),I(2a,24,00,00),B(mop_alloc ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,75),I(86,24,00,00),B(boot1 ,37),I(3c,03,24,00),B(boot1 ,23),I(3c,00,24,00),B(mop_alloc ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,68),I(23,00,00,00),B(mop_alloc ,16),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,12),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,80,45),I(80,00,00,00)};

  eul_allocate_static_string(str_3480, "unexpected keyword ~a in initialization of ~a", 45);
  /* Byte-vector with size: 21 is_init: 0 index: 71 binding: anonymous */
  static const void *G003478[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(87,32,00,00),I(00,00,00,44),I(1c,10,1b,47),I(00,02,86,6c),I(1b,34,00,00),I(00,00,00,1b),I(1f,03,11,1b),I(11,47,00,01),I(3d,01,05,22),I(01,32,00,00),I(00,00,00,1e),I(23,00,00,00),B(mop_alloc ,70),I(1d,47,00,00),I(24,00,00,00),B(boot ,19),I(3d,03,04,22),I(02,45,02,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 72 binding: check-keywords */
  static const void *G003481[] = {I(43,03,46,04),I(1d,48,00,00),I(1c,26,00,00),I(00,00,00,05),I(02,1b,48,00),I(02,86,1b,48),I(00,01,23,00),B(mop_alloc ,27),I(23,00,00,00),B(mop_alloc ,71),I(3b,01,48,00),I(01,1d,47,00),I(01,3d,01,05),I(45,05,00,00)};

  /* Byte-vector with size: 27 is_init: 0 index: 76 binding: inherited-slot */
  static const void *G003483[] = {I(43,03,1c,04),I(1c,1c,50,1b),I(34,00,00,00),I(00,00,00,10),I(1f,03,32,00),I(00,00,00,57),I(1f,03,84,02),I(1f,04,82,02),I(1f,05,83,02),I(1f,06,26,00),I(00,00,00,03),I(02,1f,07,26),I(00,00,00,04),I(02,1f,07,23),B(mop_alloc ,17),I(1f,06,23,00),B(mop_alloc ,73),I(1f,07,23,00),B(mop_alloc ,74),I(1f,08,23,00),B(mop_alloc ,19),I(1f,09,23,00),B(mop_alloc ,75),I(1f,0a,24,00),B(mop_gf ,2),I(3d,0b,0a,22),I(05,45,05,00)};

  eul_allocate_static_cons(cons_3493, NULL, NULL);
  eul_allocate_static_cons(cons_3492, NULL, eul_as_static(cons_3493));
  eul_allocate_static_cons(cons_3491, NULL, eul_as_static(cons_3492));
  eul_allocate_static_cons(cons_3490, NULL, eul_as_static(cons_3491));
  /* Byte-vector with size: 60 is_init: 0 index: 78 binding: redefined-slot */
  static const void *G003488[] = {I(43,04,1d,82),I(02,23,00,00),B(mop_alloc ,73),I(1d,1d,24,00),B(mop_key ,2),I(3c,03,1f,04),I(83,02,23,00),B(mop_alloc ,74),I(1f,04,1d,24),B(mop_key ,2),I(3c,03,1f,06),I(26,00,00,00),I(00,00,00,04),I(02,23,00,00),B(mop_alloc ,75),I(1f,06,1d,24),B(mop_key ,2),I(3c,03,23,00),B(mop_alloc ,17),I(1f,07,23,00),B(mop_alloc ,18),I(24,00,00,00),B(mop_key ,2),I(3c,03,1f,09),I(26,00,00,00),I(00,00,00,03),I(02,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,26),I(1f,0b,26,00),I(00,00,00,05),I(02,1d,1c,86),I(6c,1b,34,00),I(00,00,00,0e),I(1f,03,32,00),I(00,00,00,07),I(86,22,02,23),B(mop_alloc ,19),I(1f,0a,1d,24),B(mop_key ,2),I(3c,03,1f,0a),I(23,00,00,00),B(mop_alloc ,77),I(24,00,00,00),B(mop_key ,3),I(3c,02,24,00),B(mop_gf ,2),I(1f,0d,23,00),B(mop_alloc ,73),I(1f,0c,23,00),B(mop_alloc ,74),I(1f,0c,23,00),B(mop_alloc ,19),I(1f,08,23,00),B(mop_alloc ,75),I(1f,0e,1f,0a),I(24,00,00,00),B(boot ,9),I(3d,0b,0f,00)};

  /* Byte-vector with size: 98 is_init: 1 index: 0 binding: initialize-mop-alloc */
  static const void *G003494[] = {I(87,25,00,00),B(mop_alloc ,1),I(24,00,00,00),B(mop_access ,1),I(3e,0b,24,00),B(mop_access ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_defcl ,1),I(3e,0b,24,00),B(mop_defcl ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_meth ,1),I(3e,0b,24,00),B(mop_meth ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_gf ,1),I(3e,0b,24,00),B(mop_gf ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_inspect ,1),I(3e,0b,24,00),B(mop_inspect ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_init ,1),I(3e,0b,24,00),B(mop_init ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_class ,1),I(3e,0b,24,00),B(mop_class ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_key ,1),I(3e,0b,24,00),B(mop_key ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_prim ,1),I(3e,0b,24,00),B(mop_prim ,0),I(3c,00,21,01),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(86,25,00,00),B(mop_alloc ,15),I(86,25,00,00),B(mop_alloc ,14),I(86,25,00,00),B(mop_alloc ,13),I(86,25,00,00),B(mop_alloc ,12),I(23,00,00,00),B(mop_alloc ,79),I(23,00,00,00),B(mop_alloc ,78),I(3b,04,25,00),B(mop_alloc ,11),I(86,25,00,00),B(mop_alloc ,10),I(86,25,00,00),B(mop_alloc ,9),I(86,25,00,00),B(mop_alloc ,8),I(86,25,00,00),B(mop_alloc ,7),I(86,25,00,00),B(mop_alloc ,6),I(23,00,00,00),B(mop_alloc ,80),I(23,00,00,00),B(mop_alloc ,76),I(3b,03,25,00),B(mop_alloc ,5),I(23,00,00,00),B(mop_alloc ,81),I(23,00,00,00),B(mop_alloc ,72),I(3b,03,25,00),B(mop_alloc ,4),I(86,25,00,00),B(mop_alloc ,3),I(86,25,00,00),B(mop_alloc ,2),I(23,00,00,00),B(mop_alloc ,82),I(23,00,00,00),B(mop_alloc ,69),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G003405,G003404);
  eul_intern_keyword(key_3408,"name");
  eul_intern_keyword(key_3409,"required");
  eul_intern_keyword(key_3410,"keyword");
  object_class(cons_3411) = eul_static_cons_class;
  eul_car(cons_3411) = key_3410;
  eul_cdr(cons_3411) = eul_nil;
  eul_allocate_bytevector( G003407,G003406);
  eul_allocate_bytevector( G003413,G003412);
  eul_allocate_bytevector( G003415,G003414);
  eul_allocate_bytevector( G003417,G003416);
  eul_allocate_bytevector( G003419,G003418);
  eul_allocate_bytevector( G003421,G003420);
  eul_intern_symbol(sym_3424,"anonymous");
  eul_allocate_bytevector( G003423,G003422);
  eul_allocate_bytevector( G003426,G003425);
  eul_allocate_bytevector( G003428,G003427);
  eul_allocate_bytevector( G003430,G003429);
  eul_allocate_bytevector( G003432,G003431);
  eul_allocate_bytevector( G003434,G003433);
  eul_allocate_bytevector( G003436,G003435);
  eul_allocate_bytevector( G003438,G003437);
  eul_intern_keyword(key_3441,"direct-slots");
  eul_intern_keyword(key_3442,"direct-keywords");
  object_class(str_3443) = eul_static_string_class;
  eul_allocate_bytevector( G003440,G003439);
  object_class(str_3446) = eul_static_string_class;
  eul_allocate_bytevector( G003445,G003444);
  eul_allocate_bytevector( G003448,G003447);
  object_class(str_3451) = eul_static_string_class;
  eul_allocate_bytevector( G003450,G003449);
  eul_intern_symbol(sym_3454,"compatible-superclasses?");
  eul_intern_symbol(sym_3455,"compatible-superclass?");
  eul_intern_symbol(sym_3456,"compute-class-precedence-list");
  eul_intern_symbol(sym_3457,"compute-inherited-keywords");
  eul_intern_symbol(sym_3458,"compute-keywords");
  eul_intern_symbol(sym_3459,"compute-inherited-slots");
  eul_intern_symbol(sym_3460,"compute-slots");
  eul_intern_symbol(sym_3461,"compute-specialized-slot");
  eul_intern_symbol(sym_3462,"compute-specialized-slot-class");
  eul_intern_symbol(sym_3463,"compute-defined-slot");
  eul_intern_symbol(sym_3464,"compute-defined-slot-class");
  eul_intern_symbol(sym_3465,"(method allocate)");
  eul_intern_symbol(sym_3466,"(method initialize)");
  eul_intern_symbol(sym_3467,"(method compatible-superclasses?)");
  eul_intern_symbol(sym_3468,"(method compatible-superclass?)");
  eul_intern_symbol(sym_3469,"(method compute-class-precedence-list)");
  eul_intern_symbol(sym_3470,"(method compute-inherited-keywords)");
  eul_intern_symbol(sym_3471,"(method compute-keywords)");
  eul_intern_symbol(sym_3472,"(method compute-inherited-slots)");
  eul_intern_symbol(sym_3473,"(method compute-slots)");
  eul_intern_symbol(sym_3474,"(method compute-specialized-slot)");
  eul_intern_symbol(sym_3475,"(method compute-specialized-slot-class)");
  eul_intern_symbol(sym_3476,"(method compute-defined-slot)");
  eul_intern_symbol(sym_3477,"(method compute-defined-slot-class)");
  eul_allocate_bytevector( G003453,G003452);
  object_class(str_3480) = eul_static_string_class;
  eul_allocate_bytevector( G003479,G003478);
  eul_allocate_bytevector( G003482,G003481);
  eul_intern_keyword(key_3485,"reader");
  eul_intern_keyword(key_3486,"writer");
  eul_intern_keyword(key_3487,"default");
  eul_allocate_bytevector( G003484,G003483);
  object_class(cons_3493) = eul_static_cons_class;
  eul_car(cons_3493) = key_3487;
  eul_cdr(cons_3493) = eul_nil;
  object_class(cons_3492) = eul_static_cons_class;
  eul_car(cons_3492) = key_3410;
  object_class(cons_3491) = eul_static_cons_class;
  eul_car(cons_3491) = key_3486;
  object_class(cons_3490) = eul_static_cons_class;
  eul_car(cons_3490) = key_3485;
  eul_allocate_bytevector( G003489,G003488);
  eul_intern_symbol(sym_3496,"redefined-slot");
  eul_intern_symbol(sym_3497,"inherited-slot");
  eul_intern_symbol(sym_3498,"check-keywords");
  eul_intern_symbol(sym_3499,"top-level");
  eul_allocate_bytevector( G003495,G003494);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 16; i++)
      mop_alloc_bindings[i] = eul_nil;
  }

  mop_alloc_bindings[ 16] = G003405;
  mop_alloc_bindings[ 17] = key_3408;
  mop_alloc_bindings[ 18] = key_3409;
  mop_alloc_bindings[ 19] = key_3410;
  mop_alloc_bindings[ 20] = cons_3411;
  mop_alloc_bindings[ 21] = G003407;
  mop_alloc_bindings[ 22] = G003413;
  mop_alloc_bindings[ 23] = G003415;
  mop_alloc_bindings[ 24] = G003417;
  mop_alloc_bindings[ 25] = G003419;
  mop_alloc_bindings[ 26] = G003421;
  mop_alloc_bindings[ 27] = sym_3424;
  mop_alloc_bindings[ 28] = G003423;
  mop_alloc_bindings[ 29] = G003426;
  mop_alloc_bindings[ 30] = G003428;
  mop_alloc_bindings[ 31] = G003430;
  mop_alloc_bindings[ 32] = G003432;
  mop_alloc_bindings[ 33] = G003434;
  mop_alloc_bindings[ 34] = G003436;
  mop_alloc_bindings[ 35] = G003438;
  mop_alloc_bindings[ 36] = key_3441;
  mop_alloc_bindings[ 37] = key_3442;
  mop_alloc_bindings[ 38] = str_3443;
  mop_alloc_bindings[ 39] = G003440;
  mop_alloc_bindings[ 40] = str_3446;
  mop_alloc_bindings[ 41] = G003445;
  mop_alloc_bindings[ 42] = G003448;
  mop_alloc_bindings[ 43] = str_3451;
  mop_alloc_bindings[ 44] = G003450;
  mop_alloc_bindings[ 45] = sym_3454;
  mop_alloc_bindings[ 46] = sym_3455;
  mop_alloc_bindings[ 47] = sym_3456;
  mop_alloc_bindings[ 48] = sym_3457;
  mop_alloc_bindings[ 49] = sym_3458;
  mop_alloc_bindings[ 50] = sym_3459;
  mop_alloc_bindings[ 51] = sym_3460;
  mop_alloc_bindings[ 52] = sym_3461;
  mop_alloc_bindings[ 53] = sym_3462;
  mop_alloc_bindings[ 54] = sym_3463;
  mop_alloc_bindings[ 55] = sym_3464;
  mop_alloc_bindings[ 56] = sym_3465;
  mop_alloc_bindings[ 57] = sym_3466;
  mop_alloc_bindings[ 58] = sym_3467;
  mop_alloc_bindings[ 59] = sym_3468;
  mop_alloc_bindings[ 60] = sym_3469;
  mop_alloc_bindings[ 61] = sym_3470;
  mop_alloc_bindings[ 62] = sym_3471;
  mop_alloc_bindings[ 63] = sym_3472;
  mop_alloc_bindings[ 64] = sym_3473;
  mop_alloc_bindings[ 65] = sym_3474;
  mop_alloc_bindings[ 66] = sym_3475;
  mop_alloc_bindings[ 67] = sym_3476;
  mop_alloc_bindings[ 68] = sym_3477;
  mop_alloc_bindings[ 69] = G003453;
  mop_alloc_bindings[ 70] = str_3480;
  mop_alloc_bindings[ 71] = G003479;
  mop_alloc_bindings[ 72] = G003482;
  mop_alloc_bindings[ 73] = key_3485;
  mop_alloc_bindings[ 74] = key_3486;
  mop_alloc_bindings[ 75] = key_3487;
  mop_alloc_bindings[ 76] = G003484;
  mop_alloc_bindings[ 77] = cons_3490;
  mop_alloc_bindings[ 78] = G003489;
  mop_alloc_bindings[ 1] = eul_nil;
  mop_alloc_bindings[ 79] = sym_3496;
  mop_alloc_bindings[ 80] = sym_3497;
  mop_alloc_bindings[ 81] = sym_3498;
  mop_alloc_bindings[ 82] = sym_3499;
  eul_allocate_lambda( mop_alloc_bindings[0], "initialize-mop-alloc", 0, G003495);

  }
}


/* eof */