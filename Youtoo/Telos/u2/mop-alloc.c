/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module mop-alloc
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
  LispRef sym_451, sym_450, sym_449, sym_448, G00447, G00441, key_439, key_438, key_437, G00436, G00434, G00431, sym_429, sym_428, sym_427, sym_426, sym_425, sym_424, sym_423, sym_422, sym_421, sym_420, sym_419, sym_418, sym_417, sym_416, sym_415, sym_414, sym_413, sym_412, sym_411, sym_410, sym_409, sym_408, sym_407, sym_406, G00405, G00402, G00400, G00397, key_394, key_393, G00392, G00390, G00388, G00386, G00384, G00382, G00380, G00378, sym_376, G00375, G00373, G00371, G00369, G00367, G00365, key_362, key_361, key_360, G00359, G00357;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 16 binding: (method-compute-defined-slot-class) */
  static const void *G00356[] = {I(ab,24,00,00),B(mop_class ,59),I(45,02,00,00)};

  eul_allocate_static_cons(cons_363, NULL, NULL);
  /* Byte-vector with size: 33 is_init: 0 index: 21 binding: (method-compute-defined-slot) */
  static const void *G00358[] = {I(ab,23,00,00),B(mop_alloc ,17),I(1c,23,00,00),B(mop_alloc ,18),I(24,00,00,00),B(mop_key ,2),I(3c,03,1d,26),I(00,00,00,05),I(02,1c,1c,86),I(6c,1b,34,00),I(00,00,00,0e),I(1d,32,00,00),I(00,00,00,08),I(86,23,00,00),B(mop_alloc ,19),I(1f,05,1d,24),B(mop_key ,2),I(3c,03,1f,06),I(1f,06,24,00),B(mop_alloc ,12),I(3c,02,1f,06),I(23,00,00,00),B(mop_alloc ,20),I(24,00,00,00),B(mop_key ,3),I(3c,02,24,00),B(mop_gf ,2),I(1d,23,00,00),B(mop_alloc ,19),I(1f,05,1f,04),I(24,00,00,00),B(boot ,5),I(3d,05,09,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 22 binding: (method-compute-specialized-slot-class) */
  static const void *G00364[] = {I(43,03,24,00),B(mop_class ,59),I(45,03,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 23 binding: (method-compute-specialized-slot) */
  static const void *G00366[] = {I(43,03,1c,10),I(1f,03,1f,03),I(1f,03,24,00),B(mop_alloc ,2),I(3c,03,1d,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,05,1f,03),I(1f,03,24,00),B(mop_alloc ,5),I(3d,03,06,32),I(00,00,00,18),I(1f,05,1f,03),I(1f,03,1f,06),I(24,00,00,00),B(mop_alloc ,11),I(3d,04,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 24 binding: anonymous */
  static const void *G00368[] = {I(aa,23,00,00),B(mop_alloc ,17),I(1c,23,00,00),B(mop_alloc ,18),I(24,00,00,00),B(mop_key ,2),I(3c,03,1b,47),I(00,01,86,6c),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,1e),I(47,00,00,1f),I(03,24,00,00),B(mop_alloc ,7),I(3c,02,24,00),B(boot1 ,26),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 25 binding: anonymous */
  static const void *G00370[] = {I(aa,1b,24,00),B(boot1 ,26),I(3c,01,1c,84),I(02,47,00,02),I(1c,24,00,00),B(boot ,32),I(3c,02,47,00),I(00,1f,03,1d),I(24,00,00,00),B(mop_alloc ,15),I(3d,03,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 26 binding: anonymous */
  static const void *G00372[] = {I(aa,23,00,00),B(mop_alloc ,17),I(1c,23,00,00),B(mop_alloc ,18),I(24,00,00,00),B(mop_key ,2),I(3c,03,1b,1d),I(24,00,00,00),B(boot1 ,26),I(3d,02,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 33 is_init: 0 index: 28 binding: (method-compute-slots) */
  static const void *G00374[] = {I(43,03,46,03),I(1d,48,00,00),I(1b,10,24,00),B(mop_class ,91),I(1c,24,00,00),B(boot ,11),I(3c,02,23,00),B(mop_alloc ,27),I(23,00,00,00),B(mop_alloc ,26),I(3b,01,1f,04),I(24,00,00,00),B(boot ,7),I(3c,02,1c,48),I(00,01,1b,48),I(00,02,1f,03),I(10,23,00,00),B(mop_alloc ,27),I(23,00,00,00),B(mop_alloc ,25),I(3b,01,1c,24),B(boot ,11),I(3c,02,23,00),B(mop_alloc ,27),I(23,00,00,00),B(mop_alloc ,24),I(3b,01,1f,07),I(24,00,00,00),B(boot ,7),I(3c,02,24,00),B(boot ,8),I(3d,02,07,45),I(07,00,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 29 binding: (method-compute-inherited-slots) */
  static const void *G00377[] = {I(ab,10,1b,26),I(00,00,00,04),I(02,24,00,00),B(boot1 ,26),I(3d,01,02,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 30 binding: (method-compute-keywords) */
  static const void *G00379[] = {I(43,03,10,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,24,00),B(boot ,15),I(3d,01,03,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 31 binding: (method-compute-inherited-keywords) */
  static const void *G00381[] = {I(ab,10,1b,26),I(00,00,00,05),I(02,24,00,00),B(boot1 ,26),I(3d,01,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 32 binding: (method-compute-class-precedence-list) */
  static const void *G00383[] = {I(ab,10,1b,26),I(00,00,00,06),I(02,1d,1c,0f),I(45,03,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 33 binding: (method-compatible-superclass?) */
  static const void *G00385[] = {I(ab,1b,26,00),I(00,00,00,07),I(02,1b,34,00),I(00,00,00,0e),I(87,32,00,00),I(00,00,00,16),I(1d,04,1d,04),I(24,00,00,00),B(mop_inspect ,2),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 34 binding: (method-compatible-superclasses?) */
  static const void *G00387[] = {I(ab,10,24,00),B(mop_alloc ,8),I(3d,02,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 35 binding: anonymous */
  static const void *G00389[] = {I(aa,1b,47,00),I(00,24,00,00),B(mop_defcl ,10),I(3d,02,01,00)};

  eul_allocate_static_string(str_395, "~a can not be a subclass of ~a", 30);
  /* Byte-vector with size: 75 is_init: 0 index: 39 binding: (method-initialize) */
  static const void *G00391[] = {I(ab,46,01,1c),I(48,00,00,47),I(00,00,1c,37),I(02,2a,47,00),I(00,84,02,23),B(mop_alloc ,36),I(1d,86,24,00),B(mop_key ,2),I(3c,03,23,00),B(mop_alloc ,37),I(1f,03,86,24),B(mop_key ,2),I(3c,03,47,00),I(00,1f,03,24),B(mop_alloc ,14),I(3c,02,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,1d),I(86,23,00,00),B(mop_alloc ,38),I(47,00,00,1f),I(06,24,00,00),B(boot ,13),I(3c,04,2a,47),I(00,00,1f,04),I(24,00,00,00),B(mop_alloc ,13),I(3c,02,47,00),I(00,1c,1c,26),I(00,00,00,06),I(1d,03,22,02),I(2a,47,00,00),I(1f,05,24,00),B(mop_alloc ,10),I(3c,02,47,00),I(00,1f,04,1d),I(24,00,00,00),B(mop_alloc ,6),I(3c,03,47,00),I(00,1c,1c,26),I(00,00,00,05),I(1d,03,22,02),I(2a,47,00,00),I(1f,07,24,00),B(mop_alloc ,3),I(3c,02,47,00),I(00,1f,07,1d),I(24,00,00,00),B(mop_alloc ,9),I(3c,03,47,00),I(00,1c,1f,03),I(24,00,00,00),B(mop_access ,10),I(3c,03,47,00),I(00,1c,1c,26),I(00,00,00,04),I(1d,03,22,02),I(2a,1b,24,00),B(boot ,19),I(3c,01,47,00),I(00,1c,1c,83),I(1d,03,22,02),I(2a,23,00,00),B(mop_alloc ,27),I(23,00,00,00),B(mop_alloc ,35),I(3b,01,1f,0b),I(24,00,00,00),B(boot ,17),I(3c,02,22,0b),I(2a,24,00,00),B(mop_init ,2),I(3c,00,2a,47),I(00,00,45,02)};

  eul_allocate_static_string(str_398, "missing keyword ~a to make ~a", 29);
  /* Byte-vector with size: 58 is_init: 0 index: 41 binding: anonymous */
  static const void *G00396[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,d9),I(1d,10,1b,26),I(00,00,00,03),I(02,1c,26,00),I(00,00,00,04),I(02,1c,12,1b),I(34,00,00,00),I(00,00,00,28),I(1c,24,00,00),B(mop_inspect ,8),I(3c,01,1b,34),I(00,00,00,0d),I(1d,3c,00,32),I(00,00,00,06),I(1d,22,01,32),I(00,00,00,84),I(1d,47,00,01),I(24,00,00,00),B(boot1 ,47),I(24,00,00,00),B(mop_key ,2),I(3c,03,1b,24),B(boot1 ,47),I(50,1b,34,00),I(00,00,00,5e),I(1f,05,26,00),I(00,00,00,05),I(02,1b,34,00),I(00,00,00,26),I(47,00,00,04),I(1b,82,02,23),B(mop_alloc ,40),I(1f,08,1d,24),B(boot ,25),I(3c,03,22,02),I(32,00,00,00),I(00,00,00,28),I(1f,04,24,00),B(mop_inspect ,8),I(3c,01,1b,34),I(00,00,00,11),I(1f,05,3c,00),I(32,00,00,00),I(00,00,00,0a),I(1f,05,22,01),I(22,01,32,00),I(00,00,00,07),I(1c,22,02,47),I(00,00,1f,07),I(1d,03,2a,1f),I(07,11,1f,07),I(83,14,47,00),I(02,3d,02,08),I(22,05,45,03)};

  /* Byte-vector with size: 21 is_init: 0 index: 42 binding: (method-initialize) */
  static const void *G00399[] = {I(ab,46,03,1c),I(48,00,00,1b),I(48,00,01,86),I(1b,48,00,02),I(23,00,00,00),B(mop_alloc ,27),I(23,00,00,00),B(mop_alloc ,41),I(3b,02,48,00),I(02,47,00,00),I(04,47,00,00),I(1c,47,00,01),I(24,00,00,00),B(mop_alloc ,4),I(3c,03,2a,1b),I(26,00,00,00),I(00,00,00,04),I(02,82,47,00),I(02,3c,02,2a),I(47,00,00,45),I(04,00,00,00)};

  eul_allocate_static_string(str_403, "can't allocate an instance of abstract-class ~a", 47);
  /* Byte-vector with size: 13 is_init: 0 index: 44 binding: (method-allocate) */
  static const void *G00401[] = {I(ab,1c,26,00),I(00,00,00,07),I(02,1b,34,00),I(00,00,00,1e),I(86,23,00,00),B(mop_alloc ,43),I(1f,04,24,00),B(boot ,13),I(3d,03,03,32),I(00,00,00,0e),I(1d,83,02,1f),I(03,1c,01,22),I(01,45,03,00)};

  /* Byte-vector with size: 673 is_init: 0 index: 69 binding: top-level */
  static const void *G00404[] = {I(a9,84,24,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_alloc ,45),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,14),I(2a,84,24,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,86),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_alloc ,46),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,8),I(2a,84,24,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_alloc ,47),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,13),I(2a,84,24,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_alloc ,48),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,10),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_alloc ,49),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,6),I(2a,84,24,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_alloc ,50),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,3),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_alloc ,51),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,9),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_alloc ,52),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,15),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_alloc ,53),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,2),I(2a,84,24,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_alloc ,54),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,7),I(2a,84,24,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_alloc ,55),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_alloc ,12),I(2a,24,00,00),B(mop_gf ,8),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,56),I(23,00,00,00),B(mop_alloc ,44),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,22),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,57),I(23,00,00,00),B(mop_alloc ,42),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,57),I(23,00,00,00),B(mop_alloc ,39),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,14),I(2a,24,00,00),B(mop_alloc ,14),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_alloc ,14),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,58),I(23,00,00,00),B(mop_alloc ,34),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,14),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,8),I(2a,24,00,00),B(mop_alloc ,8),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,86),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_alloc ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,59),I(23,00,00,00),B(mop_alloc ,33),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,13),I(2a,24,00,00),B(mop_alloc ,13),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_alloc ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,60),I(23,00,00,00),B(mop_alloc ,32),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,10),I(2a,24,00,00),B(mop_alloc ,10),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_alloc ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,61),I(23,00,00,00),B(mop_alloc ,31),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,6),I(2a,24,00,00),B(mop_alloc ,6),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,86),I(86,86,24,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_alloc ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,62),I(23,00,00,00),B(mop_alloc ,30),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,3),I(2a,24,00,00),B(mop_alloc ,3),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_alloc ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,63),I(23,00,00,00),B(mop_alloc ,29),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,9),I(2a,24,00,00),B(mop_alloc ,9),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,86),I(86,86,24,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_alloc ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,64),I(23,00,00,00),B(mop_alloc ,28),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,15),I(2a,24,00,00),B(mop_alloc ,15),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,86),I(86,86,24,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_alloc ,15),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,65),I(23,00,00,00),B(mop_alloc ,23),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,15),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,2),I(2a,24,00,00),B(mop_alloc ,2),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,86),I(86,86,24,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_alloc ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,66),I(23,00,00,00),B(mop_alloc ,22),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,7),I(2a,24,00,00),B(mop_alloc ,7),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_alloc ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,67),I(23,00,00,00),B(mop_alloc ,21),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_alloc ,12),I(2a,24,00,00),B(mop_alloc ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_alloc ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_alloc ,68),I(23,00,00,00),B(mop_alloc ,16),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_alloc ,12),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,80,45),I(80,00,00,00)};

  eul_allocate_static_string(str_432, "unexpected keyword ~a in initialization of ~a", 45);
  /* Byte-vector with size: 21 is_init: 0 index: 71 binding: anonymous */
  static const void *G00430[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(87,32,00,00),I(00,00,00,44),I(1c,10,1b,47),I(00,02,86,6c),I(1b,34,00,00),I(00,00,00,1b),I(1f,03,11,1b),I(11,47,00,01),I(3d,01,05,22),I(01,32,00,00),I(00,00,00,1e),I(23,00,00,00),B(mop_alloc ,70),I(1d,47,00,00),I(24,00,00,00),B(boot ,25),I(3d,03,04,22),I(02,45,02,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 72 binding: check-keywords */
  static const void *G00433[] = {I(43,03,46,04),I(1d,48,00,00),I(1c,26,00,00),I(00,00,00,05),I(02,1b,48,00),I(02,86,1b,48),I(00,01,23,00),B(mop_alloc ,27),I(23,00,00,00),B(mop_alloc ,71),I(3b,01,48,00),I(01,1d,47,00),I(01,3d,01,05),I(45,05,00,00)};

  /* Byte-vector with size: 27 is_init: 0 index: 76 binding: inherited-slot */
  static const void *G00435[] = {I(43,03,1c,04),I(1c,1c,50,1b),I(34,00,00,00),I(00,00,00,10),I(1f,03,32,00),I(00,00,00,57),I(1f,03,84,02),I(1f,04,82,02),I(1f,05,83,02),I(1f,06,26,00),I(00,00,00,03),I(02,1f,07,26),I(00,00,00,04),I(02,1f,07,23),B(mop_alloc ,17),I(1f,06,23,00),B(mop_alloc ,73),I(1f,07,23,00),B(mop_alloc ,74),I(1f,08,23,00),B(mop_alloc ,19),I(1f,09,23,00),B(mop_alloc ,75),I(1f,0a,24,00),B(mop_gf ,2),I(3d,0b,0a,22),I(05,45,05,00)};

  eul_allocate_static_cons(cons_445, NULL, NULL);
  eul_allocate_static_cons(cons_444, NULL, eul_as_static(cons_445));
  eul_allocate_static_cons(cons_443, NULL, eul_as_static(cons_444));
  eul_allocate_static_cons(cons_442, NULL, eul_as_static(cons_443));
  /* Byte-vector with size: 60 is_init: 0 index: 78 binding: redefined-slot */
  static const void *G00440[] = {I(43,04,1d,82),I(02,23,00,00),B(mop_alloc ,73),I(1d,1d,24,00),B(mop_key ,2),I(3c,03,1f,04),I(83,02,23,00),B(mop_alloc ,74),I(1f,04,1d,24),B(mop_key ,2),I(3c,03,1f,06),I(26,00,00,00),I(00,00,00,04),I(02,23,00,00),B(mop_alloc ,75),I(1f,06,1d,24),B(mop_key ,2),I(3c,03,23,00),B(mop_alloc ,17),I(1f,07,23,00),B(mop_alloc ,18),I(24,00,00,00),B(mop_key ,2),I(3c,03,1f,09),I(26,00,00,00),I(00,00,00,03),I(02,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,26),I(1f,0b,26,00),I(00,00,00,05),I(02,1d,1c,86),I(6c,1b,34,00),I(00,00,00,0e),I(1f,03,32,00),I(00,00,00,07),I(86,22,02,23),B(mop_alloc ,19),I(1f,0a,1d,24),B(mop_key ,2),I(3c,03,1f,0a),I(23,00,00,00),B(mop_alloc ,77),I(24,00,00,00),B(mop_key ,3),I(3c,02,24,00),B(mop_gf ,2),I(1f,0d,23,00),B(mop_alloc ,73),I(1f,0c,23,00),B(mop_alloc ,74),I(1f,0c,23,00),B(mop_alloc ,19),I(1f,08,23,00),B(mop_alloc ,75),I(1f,0e,1f,0a),I(24,00,00,00),B(boot ,5),I(3d,0b,0f,00)};

  /* Byte-vector with size: 98 is_init: 1 index: 0 binding: initialize-mop-alloc */
  static const void *G00446[] = {I(87,25,00,00),B(mop_alloc ,1),I(24,00,00,00),B(mop_access ,1),I(3e,0b,24,00),B(mop_access ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_defcl ,1),I(3e,0b,24,00),B(mop_defcl ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_meth ,1),I(3e,0b,24,00),B(mop_meth ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_gf ,1),I(3e,0b,24,00),B(mop_gf ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_inspect ,1),I(3e,0b,24,00),B(mop_inspect ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_init ,1),I(3e,0b,24,00),B(mop_init ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_class ,1),I(3e,0b,24,00),B(mop_class ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_key ,1),I(3e,0b,24,00),B(mop_key ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_prim ,1),I(3e,0b,24,00),B(mop_prim ,0),I(3c,00,21,01),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(86,25,00,00),B(mop_alloc ,15),I(86,25,00,00),B(mop_alloc ,14),I(86,25,00,00),B(mop_alloc ,13),I(86,25,00,00),B(mop_alloc ,12),I(23,00,00,00),B(mop_alloc ,79),I(23,00,00,00),B(mop_alloc ,78),I(3b,04,25,00),B(mop_alloc ,11),I(86,25,00,00),B(mop_alloc ,10),I(86,25,00,00),B(mop_alloc ,9),I(86,25,00,00),B(mop_alloc ,8),I(86,25,00,00),B(mop_alloc ,7),I(86,25,00,00),B(mop_alloc ,6),I(23,00,00,00),B(mop_alloc ,80),I(23,00,00,00),B(mop_alloc ,76),I(3b,03,25,00),B(mop_alloc ,5),I(23,00,00,00),B(mop_alloc ,81),I(23,00,00,00),B(mop_alloc ,72),I(3b,03,25,00),B(mop_alloc ,4),I(86,25,00,00),B(mop_alloc ,3),I(86,25,00,00),B(mop_alloc ,2),I(23,00,00,00),B(mop_alloc ,82),I(23,00,00,00),B(mop_alloc ,69),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G00357,G00356);
  eul_intern_keyword(key_360,"name");
  eul_intern_keyword(key_361,"required");
  eul_intern_keyword(key_362,"keyword");
  object_class(cons_363) = eul_static_cons_class;
  eul_car(cons_363) = key_362;
  eul_cdr(cons_363) = eul_nil;
  eul_allocate_bytevector( G00359,G00358);
  eul_allocate_bytevector( G00365,G00364);
  eul_allocate_bytevector( G00367,G00366);
  eul_allocate_bytevector( G00369,G00368);
  eul_allocate_bytevector( G00371,G00370);
  eul_allocate_bytevector( G00373,G00372);
  eul_intern_symbol(sym_376,"anonymous");
  eul_allocate_bytevector( G00375,G00374);
  eul_allocate_bytevector( G00378,G00377);
  eul_allocate_bytevector( G00380,G00379);
  eul_allocate_bytevector( G00382,G00381);
  eul_allocate_bytevector( G00384,G00383);
  eul_allocate_bytevector( G00386,G00385);
  eul_allocate_bytevector( G00388,G00387);
  eul_allocate_bytevector( G00390,G00389);
  eul_intern_keyword(key_393,"direct-slots");
  eul_intern_keyword(key_394,"direct-keywords");
  object_class(str_395) = eul_static_string_class;
  eul_allocate_bytevector( G00392,G00391);
  object_class(str_398) = eul_static_string_class;
  eul_allocate_bytevector( G00397,G00396);
  eul_allocate_bytevector( G00400,G00399);
  object_class(str_403) = eul_static_string_class;
  eul_allocate_bytevector( G00402,G00401);
  eul_intern_symbol(sym_406,"compatible-superclasses?");
  eul_intern_symbol(sym_407,"compatible-superclass?");
  eul_intern_symbol(sym_408,"compute-class-precedence-list");
  eul_intern_symbol(sym_409,"compute-inherited-keywords");
  eul_intern_symbol(sym_410,"compute-keywords");
  eul_intern_symbol(sym_411,"compute-inherited-slots");
  eul_intern_symbol(sym_412,"compute-slots");
  eul_intern_symbol(sym_413,"compute-specialized-slot");
  eul_intern_symbol(sym_414,"compute-specialized-slot-class");
  eul_intern_symbol(sym_415,"compute-defined-slot");
  eul_intern_symbol(sym_416,"compute-defined-slot-class");
  eul_intern_symbol(sym_417,"(method allocate)");
  eul_intern_symbol(sym_418,"(method initialize)");
  eul_intern_symbol(sym_419,"(method compatible-superclasses?)");
  eul_intern_symbol(sym_420,"(method compatible-superclass?)");
  eul_intern_symbol(sym_421,"(method compute-class-precedence-list)");
  eul_intern_symbol(sym_422,"(method compute-inherited-keywords)");
  eul_intern_symbol(sym_423,"(method compute-keywords)");
  eul_intern_symbol(sym_424,"(method compute-inherited-slots)");
  eul_intern_symbol(sym_425,"(method compute-slots)");
  eul_intern_symbol(sym_426,"(method compute-specialized-slot)");
  eul_intern_symbol(sym_427,"(method compute-specialized-slot-class)");
  eul_intern_symbol(sym_428,"(method compute-defined-slot)");
  eul_intern_symbol(sym_429,"(method compute-defined-slot-class)");
  eul_allocate_bytevector( G00405,G00404);
  object_class(str_432) = eul_static_string_class;
  eul_allocate_bytevector( G00431,G00430);
  eul_allocate_bytevector( G00434,G00433);
  eul_intern_keyword(key_437,"reader");
  eul_intern_keyword(key_438,"writer");
  eul_intern_keyword(key_439,"default");
  eul_allocate_bytevector( G00436,G00435);
  object_class(cons_445) = eul_static_cons_class;
  eul_car(cons_445) = key_439;
  eul_cdr(cons_445) = eul_nil;
  object_class(cons_444) = eul_static_cons_class;
  eul_car(cons_444) = key_362;
  object_class(cons_443) = eul_static_cons_class;
  eul_car(cons_443) = key_438;
  object_class(cons_442) = eul_static_cons_class;
  eul_car(cons_442) = key_437;
  eul_allocate_bytevector( G00441,G00440);
  eul_intern_symbol(sym_448,"redefined-slot");
  eul_intern_symbol(sym_449,"inherited-slot");
  eul_intern_symbol(sym_450,"check-keywords");
  eul_intern_symbol(sym_451,"top-level");
  eul_allocate_bytevector( G00447,G00446);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 16; i++)
      mop_alloc_bindings[i] = eul_nil;
  }

  mop_alloc_bindings[ 16] = G00357;
  mop_alloc_bindings[ 17] = key_360;
  mop_alloc_bindings[ 18] = key_361;
  mop_alloc_bindings[ 19] = key_362;
  mop_alloc_bindings[ 20] = cons_363;
  mop_alloc_bindings[ 21] = G00359;
  mop_alloc_bindings[ 22] = G00365;
  mop_alloc_bindings[ 23] = G00367;
  mop_alloc_bindings[ 24] = G00369;
  mop_alloc_bindings[ 25] = G00371;
  mop_alloc_bindings[ 26] = G00373;
  mop_alloc_bindings[ 27] = sym_376;
  mop_alloc_bindings[ 28] = G00375;
  mop_alloc_bindings[ 29] = G00378;
  mop_alloc_bindings[ 30] = G00380;
  mop_alloc_bindings[ 31] = G00382;
  mop_alloc_bindings[ 32] = G00384;
  mop_alloc_bindings[ 33] = G00386;
  mop_alloc_bindings[ 34] = G00388;
  mop_alloc_bindings[ 35] = G00390;
  mop_alloc_bindings[ 36] = key_393;
  mop_alloc_bindings[ 37] = key_394;
  mop_alloc_bindings[ 38] = str_395;
  mop_alloc_bindings[ 39] = G00392;
  mop_alloc_bindings[ 40] = str_398;
  mop_alloc_bindings[ 41] = G00397;
  mop_alloc_bindings[ 42] = G00400;
  mop_alloc_bindings[ 43] = str_403;
  mop_alloc_bindings[ 44] = G00402;
  mop_alloc_bindings[ 45] = sym_406;
  mop_alloc_bindings[ 46] = sym_407;
  mop_alloc_bindings[ 47] = sym_408;
  mop_alloc_bindings[ 48] = sym_409;
  mop_alloc_bindings[ 49] = sym_410;
  mop_alloc_bindings[ 50] = sym_411;
  mop_alloc_bindings[ 51] = sym_412;
  mop_alloc_bindings[ 52] = sym_413;
  mop_alloc_bindings[ 53] = sym_414;
  mop_alloc_bindings[ 54] = sym_415;
  mop_alloc_bindings[ 55] = sym_416;
  mop_alloc_bindings[ 56] = sym_417;
  mop_alloc_bindings[ 57] = sym_418;
  mop_alloc_bindings[ 58] = sym_419;
  mop_alloc_bindings[ 59] = sym_420;
  mop_alloc_bindings[ 60] = sym_421;
  mop_alloc_bindings[ 61] = sym_422;
  mop_alloc_bindings[ 62] = sym_423;
  mop_alloc_bindings[ 63] = sym_424;
  mop_alloc_bindings[ 64] = sym_425;
  mop_alloc_bindings[ 65] = sym_426;
  mop_alloc_bindings[ 66] = sym_427;
  mop_alloc_bindings[ 67] = sym_428;
  mop_alloc_bindings[ 68] = sym_429;
  mop_alloc_bindings[ 69] = G00405;
  mop_alloc_bindings[ 70] = str_432;
  mop_alloc_bindings[ 71] = G00431;
  mop_alloc_bindings[ 72] = G00434;
  mop_alloc_bindings[ 73] = key_437;
  mop_alloc_bindings[ 74] = key_438;
  mop_alloc_bindings[ 75] = key_439;
  mop_alloc_bindings[ 76] = G00436;
  mop_alloc_bindings[ 77] = cons_442;
  mop_alloc_bindings[ 78] = G00441;
  mop_alloc_bindings[ 1] = eul_nil;
  mop_alloc_bindings[ 79] = sym_448;
  mop_alloc_bindings[ 80] = sym_449;
  mop_alloc_bindings[ 81] = sym_450;
  mop_alloc_bindings[ 82] = sym_451;
  eul_allocate_lambda( mop_alloc_bindings[0], "initialize-mop-alloc", 0, G00447);

  }
}


/* eof */
