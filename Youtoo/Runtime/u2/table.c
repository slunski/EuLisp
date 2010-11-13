/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module table
 **  Copyright: See file table.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_condition();
extern void initialize_module_convert();
extern void initialize_module_copy();
extern void initialize_module_collect();
extern void initialize_module_compare();
extern void initialize_module_list();
extern void initialize_module_fpi();
extern void initialize_module_string();
extern void initialize_module_vector();
extern void initialize_module_table1();
extern LispRef fpi_bindings[];
extern LispRef compare_bindings[];
extern LispRef copy_bindings[];
extern LispRef convert_bindings[];
extern LispRef telos_bindings[];
extern LispRef list_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef string_bindings[];
extern LispRef boot1_bindings[];
extern LispRef vector_bindings[];
extern LispRef boot_bindings[];
extern LispRef condition_bindings[];
extern LispRef collect_bindings[];
extern LispRef table1_bindings[];

/* Module bindings with size 84 */
LispRef table_bindings[84];

/* Foreign functions */
static LispRef ff_stub_eul_table_ref5262 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G005375, G005376, res;

  POPVAL1(G005376);
  POPVAL1(G005375);
  FF_RES_CONVERT6(res,eul_table_ref(FF_ARG_CONVERT8(G005375), FF_ARG_CONVERT3(G005376)));
  return res;
}

static LispRef ff_stub_eul_addr_str5263 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G005377, res;

  POPVAL1(G005377);
  FF_RES_CONVERT3(res,eul_addr_str(FF_ARG_CONVERT8(G005377)));
  return res;
}

static LispRef ff_stub_eul_table_set5264 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G005378, G005379, G005380, res;

  POPVAL1(G005380);
  POPVAL1(G005379);
  POPVAL1(G005378);
  FF_RES_CONVERT6(res,eul_table_set(FF_ARG_CONVERT8(G005378), FF_ARG_CONVERT3(G005379), FF_ARG_CONVERT8(G005380)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module table */
void initialize_module_table()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_condition();
  initialize_module_convert();
  initialize_module_copy();
  initialize_module_collect();
  initialize_module_compare();
  initialize_module_list();
  initialize_module_fpi();
  initialize_module_string();
  initialize_module_vector();
  initialize_module_table1();
  eul_fast_table_set(eul_modules,"table",(LispRef) table_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_5374, sym_5373, sym_5372, sym_5371, sym_5370, sym_5369, sym_5368, sym_5367, sym_5366, G005365, G005363, G005361, G005359, G005357, G005355, G005353, G005351, G005349, G005347, G005345, G005343, G005341, G005339, G005337, sym_5335, sym_5333, sym_5331, sym_5330, sym_5329, sym_5328, sym_5327, sym_5326, sym_5325, sym_5324, sym_5323, sym_5321, sym_5319, sym_5318, sym_5317, sym_5316, G005315, G005313, G005311, G005308, G005306, G005304, G005302, G005300, G005298, G005295, G005293, G005291, G005289, G005287, G005284, G005281, G005278, G005275, sym_5273, G005272, G005270, G005268, G005266;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 14 binding: (method-accumulate1) */
  static const void *G005265[] = {I(ab,24,00,00),B(table ,10),I(3d,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 15 binding: (method-accumulate) */
  static const void *G005267[] = {I(43,03,24,00),B(table ,4),I(3d,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 16 binding: anonymous */
  static const void *G005269[] = {I(aa,1b,7a,1b),I(34,00,00,00),I(00,00,00,20),I(1c,10,1d,11),I(47,00,00,1d),I(1d,47,00,01),I(3d,03,04,22),I(02,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 18 binding: (method-member) */
  static const void *G005271[] = {I(43,fd,46,02),I(1d,48,00,00),I(1b,12,1b,34),I(00,00,00,19),I(1d,47,00,00),I(24,00,00,00),B(table ,7),I(3d,02,04,32),I(00,00,00,3e),I(1c,10,1b,48),I(00,01,1f,03),I(26,00,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,3),I(08,47,00,00),I(1c,23,00,00),B(table ,17),I(23,00,00,00),B(table ,16),I(3b,01,24,00),B(collect ,11),I(3d,03,06,22),I(02,45,04,00)};

  eul_allocate_static_string(str_5276, "all? on multiple tables not yet implemented", 43);
  /* Byte-vector with size: 15 is_init: 0 index: 20 binding: (method-all?) */
  static const void *G005274[] = {I(43,fd,12,1b),I(34,00,00,00),I(00,00,00,18),I(1d,1d,24,00),B(table ,5),I(3d,02,03,32),I(00,00,00,20),I(24,00,00,00),B(condition ,8),I(23,00,00,00),B(table ,19),I(24,00,00,00),B(boot ,13),I(3d,02,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_5279, "any? on multiple tables not yet implemented", 43);
  /* Byte-vector with size: 15 is_init: 0 index: 22 binding: (method-any?) */
  static const void *G005277[] = {I(43,fd,12,1b),I(34,00,00,00),I(00,00,00,18),I(1d,1d,24,00),B(table ,8),I(3d,02,03,32),I(00,00,00,20),I(24,00,00,00),B(condition ,8),I(23,00,00,00),B(table ,21),I(24,00,00,00),B(boot ,13),I(3d,02,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_5282, "map on multiple tables not yet implemented", 42);
  /* Byte-vector with size: 15 is_init: 0 index: 24 binding: (method-map) */
  static const void *G005280[] = {I(43,fd,12,1b),I(34,00,00,00),I(00,00,00,18),I(1d,1d,24,00),B(table ,2),I(3d,02,03,32),I(00,00,00,20),I(24,00,00,00),B(condition ,8),I(23,00,00,00),B(table ,23),I(24,00,00,00),B(boot ,13),I(3d,02,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_5285, "do on multiple tables not yet implemented", 41);
  /* Byte-vector with size: 15 is_init: 0 index: 26 binding: (method-do) */
  static const void *G005283[] = {I(43,fd,12,1b),I(34,00,00,00),I(00,00,00,18),I(1d,1d,24,00),B(table ,9),I(3d,02,03,32),I(00,00,00,20),I(24,00,00,00),B(condition ,8),I(23,00,00,00),B(table ,25),I(24,00,00,00),B(boot ,13),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 27 binding: (method-emptyp) */
  static const void *G005286[] = {I(aa,24,00,00),B(table ,6),I(3d,01,00,00)};

  /* Byte-vector with size: 52 is_init: 0 index: 28 binding: anonymous */
  static const void *G005288[] = {I(aa,47,00,03),I(1c,02,1b,7a),I(1b,34,00,00),I(00,00,00,5b),I(1c,10,1b,47),I(00,01,47,00),I(04,3c,02,1b),I(34,00,00,00),I(00,00,00,1c),I(1f,03,11,1f),I(04,47,00,02),I(90,2a,1b,22),I(01,32,00,00),I(00,00,00,2c),I(1f,04,2b,1b),I(47,00,06,1a),I(1b,34,00,00),I(00,00,00,13),I(1c,47,00,05),I(3d,01,07,32),I(00,00,00,0c),I(82,47,00,05),I(3d,01,07,22),I(02,22,02,32),I(00,00,00,6c),I(47,00,00,83),I(24,00,00,00),B(table1 ,3),I(08,2b,47,00),I(01,47,00,02),I(0f,47,00,03),I(1f,05,1d,03),I(2a,47,00,00),I(1d,1c,83,1d),I(24,00,00,00),B(table1 ,3),I(09,22,02,2a),I(47,00,00,82),I(24,00,00,00),B(table1 ,3),I(08,1d,1c,1a),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,11),I(47,00,00,24),B(table ,3),I(3c,01,2a,47),I(00,00,84,24),B(table1 ,3),I(08,22,04,45),I(03,00,00,00)};

  /* Byte-vector with size: 48 is_init: 0 index: 29 binding: (method-(setter table-ref)) */
  static const void *G005290[] = {I(43,03,46,0a),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(47,00,00,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,3),I(08,47,00,00),I(83,24,00,00),B(table1 ,13),I(08,47,00,00),I(82,24,00,00),B(table1 ,13),I(08,1d,48,00),I(03,1c,48,00),I(04,47,00,03),I(24,00,00,00),B(vector ,6),I(3c,01,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,36),I(26,00,00,00),I(00,00,00,10),I(24,00,00,00),B(boot1 ,40),I(3c,01,1b,48),I(00,03,47,00),I(03,47,00,00),I(1c,1c,26,00),I(00,00,00,03),I(1d,24,00,00),B(table1 ,3),I(09,22,04,2a),I(47,00,03,06),I(1b,48,00,06),I(47,00,01,1f),I(03,3c,01,1b),I(47,00,06,18),I(86,1b,48,00),I(05,23,00,00),B(table ,17),I(23,00,00,00),B(table ,28),I(3b,01,48,00),I(05,1c,47,00),I(05,3d,01,0b)};

  /* Byte-vector with size: 6 is_init: 0 index: 30 binding: (method-(setter table-ref)) */
  static const void *G005292[] = {I(43,03,1c,24),B(collect ,8),I(3c,01,1f,03),I(1c,1f,03,41),B(table ,13),I(45,07,00,00)};

  eul_allocate_static_string(str_5296, "", 1);
  /* Byte-vector with size: 8 is_init: 0 index: 32 binding: (method-(setter table-ref)) */
  static const void *G005294[] = {I(43,03,1c,23),B(table ,31),I(24,00,00,00),B(string ,11),I(3c,02,1f,03),I(1c,1f,03,41),B(table ,13),I(45,07,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 33 binding: (method-(setter table-ref)) */
  static const void *G005297[] = {I(43,03,1c,41),B(table ,12),I(22,01,1f,03),I(1c,1f,03,41),B(table ,13),I(45,07,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 34 binding: (method-(setter element)) */
  static const void *G005299[] = {I(43,03,24,00),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,1f,03),I(1f,03,1f,03),I(1f,03,3d,03),I(04,45,04,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 35 binding: anonymous */
  static const void *G005301[] = {I(aa,47,00,02),I(1c,02,1b,7a),I(1b,34,00,00),I(00,00,00,4f),I(1c,10,1b,47),I(00,01,47,00),I(03,3c,02,1b),I(34,00,00,00),I(00,00,00,10),I(1f,03,11,32),I(00,00,00,2a),I(1f,04,2b,1b),I(47,00,05,1a),I(1b,34,00,00),I(00,00,00,13),I(1c,47,00,04),I(3d,01,07,32),I(00,00,00,0c),I(82,47,00,04),I(3d,01,07,22),I(02,22,02,32),I(00,00,00,12),I(47,00,00,84),I(24,00,00,00),B(table1 ,3),I(08,45,03,00)};

  /* Byte-vector with size: 39 is_init: 0 index: 36 binding: (method-table-ref) */
  static const void *G005303[] = {I(ab,46,07,1c),I(48,00,00,1b),I(48,00,01,47),I(00,00,26,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,3),I(08,47,00,00),I(83,24,00,00),B(table1 ,13),I(08,47,00,00),I(82,24,00,00),B(table1 ,13),I(08,1d,48,00),I(02,1c,48,00),I(03,47,00,02),I(24,00,00,00),B(vector ,6),I(3c,01,1b,34),I(00,00,00,41),I(47,00,02,06),I(1b,48,00,05),I(47,00,01,1f),I(03,3c,01,1b),I(47,00,05,18),I(86,1b,48,00),I(04,23,00,00),B(table ,17),I(23,00,00,00),B(table ,35),I(3b,01,48,00),I(04,1c,47,00),I(04,3d,01,0a),I(22,04,32,00),I(00,00,00,13),I(47,00,00,84),I(24,00,00,00),B(table1 ,3),I(08,45,06,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 37 binding: (method-table-ref) */
  static const void *G005305[] = {I(ab,24,00,00),B(collect ,8),I(3c,01,41,00),B(table ,11),I(45,02,00,00)};

  eul_allocate_static_string(str_5309, "", 1);
  /* Byte-vector with size: 7 is_init: 0 index: 39 binding: (method-table-ref) */
  static const void *G005307[] = {I(ab,23,00,00),B(table ,38),I(24,00,00,00),B(string ,11),I(3c,02,41,00),B(table ,11),I(45,02,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 40 binding: (method-table-ref) */
  static const void *G005310[] = {I(ab,41,00,00),B(table ,12),I(22,01,41,00),B(table ,11),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 41 binding: (method-element) */
  static const void *G005312[] = {I(ab,24,00,00),B(table ,7),I(3d,02,00,00)};

  eul_allocate_static_cons(cons_5322, NULL, NULL);
  eul_allocate_static_cons(cons_5320, NULL, eul_as_static(cons_5322));
  eul_allocate_static_cons(cons_5334, NULL, NULL);
  eul_allocate_static_cons(cons_5332, NULL, eul_as_static(cons_5334));
  /* Byte-vector with size: 658 is_init: 0 index: 60 binding: top-level */
  static const void *G005314[] = {I(a9,84,24,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(table ,42),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(table ,7),I(2a,24,00,00),B(collect ,20),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,3),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,20),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(table ,43),I(23,00,00,00),B(table ,41),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,20),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,7),I(2a,24,00,00),B(table ,7),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,18),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(table ,44),I(23,00,00,00),B(table ,40),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,7),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,18),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(table ,44),I(23,00,00,00),B(table ,39),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,7),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,18),I(24,00,00,00),B(mop_class ,39),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(table ,44),I(23,00,00,00),B(table ,37),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,7),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(table1 ,13),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(table ,44),I(23,00,00,00),B(table ,36),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(table ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(collect ,20),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,3),I(86,86,24,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,20),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,8),I(3c,02,1f,05),I(1f,05,23,00),B(table ,45),I(23,00,00,00),B(table ,34),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,26,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(table ,47),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(table ,7),I(1c,1f,06,3c),I(02,2a,24,00),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,2a,24),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,18),I(86,86,24,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,8),I(3c,02,1f,05),I(1f,05,23,00),B(table ,48),I(23,00,00,00),B(table ,33),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,18),I(24,00,00,00),B(string ,13),I(86,24,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,8),I(3c,02,1f,05),I(1f,05,23,00),B(table ,48),I(23,00,00,00),B(table ,32),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,18),I(24,00,00,00),B(mop_class ,39),I(86,24,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,8),I(3c,02,1f,05),I(1f,05,23,00),B(table ,48),I(23,00,00,00),B(table ,30),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,26),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,13),I(86,86,24,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,8),I(3c,02,1f,05),I(1f,05,23,00),B(table ,48),I(23,00,00,00),B(table ,29),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(table1 ,3),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(table ,49),I(23,00,00,00),B(table ,27),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,32),I(24,00,00,00),B(table1 ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(table ,50),I(23,00,00,00),B(table ,26),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,32),I(24,00,00,00),B(table1 ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(table ,51),I(23,00,00,00),B(table ,24),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,24),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,32),I(24,00,00,00),B(table1 ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,24),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(table ,52),I(23,00,00,00),B(table ,22),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,24),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,16),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,32),I(24,00,00,00),B(table1 ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,16),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(table ,53),I(23,00,00,00),B(table ,20),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,16),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,11),I(26,00,00,00),I(00,00,00,03),I(02,84,86,24),B(table1 ,3),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,11),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(table ,54),I(23,00,00,00),B(table ,18),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,11),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,23),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,32),I(86,24,00,00),B(table1 ,3),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,23),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(table ,55),I(23,00,00,00),B(table ,15),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,23),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,32),I(24,00,00,00),B(table1 ,3),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(table ,56),I(23,00,00,00),B(table ,14),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_class ,13),I(24,00,00,00),B(boot1 ,42),I(3c,01,83,24),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(table ,59),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(table1 ,3),I(1c,1f,06,3c),I(02,2a,24,00),B(table1 ,3),I(24,00,00,00),B(mop_class ,13),I(3d,01,89,45),I(89,00,00,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 61 binding: anonymous */
  static const void *G005336[] = {I(ab,1c,47,00),I(03,1a,1b,34),I(00,00,00,49),I(47,00,02,1f),I(03,02,1f,03),I(2b,1c,7a,1b),I(34,00,00,00),I(00,00,00,28),I(1d,10,1f,03),I(11,1c,1c,47),I(00,00,3c,02),I(1b,1f,08,0f),I(1f,05,1c,47),I(00,01,3d,02),I(0a,22,04,32),I(00,00,00,0e),I(1c,1f,05,47),I(00,01,3d,02),I(06,22,03,32),I(00,00,00,10),I(1c,24,00,00),B(boot ,28),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 62 binding: map1-table */
  static const void *G005338[] = {I(ab,46,04,1c),I(48,00,00,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,3),I(08,1b,48,00),I(02,47,00,02),I(06,1b,48,00),I(03,47,00,02),I(24,00,00,00),B(vector ,6),I(3c,01,1b,34),I(00,00,00,2d),I(86,1b,48,00),I(01,23,00,00),B(table ,17),I(23,00,00,00),B(table ,61),I(3b,02,48,00),I(01,82,86,47),I(00,01,3d,02),I(05,22,01,32),I(00,00,00,06),I(86,45,04,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 63 binding: anonymous */
  static const void *G005340[] = {I(aa,1b,47,00),I(05,1a,1b,34),I(00,00,00,45),I(47,00,01,1d),I(02,1b,7a,1b),I(34,00,00,00),I(00,00,00,24),I(1c,10,47,00),I(02,3c,01,1b),I(47,00,06,18),I(1b,1f,04,47),I(00,03,3c,02),I(22,02,32,00),I(00,00,00,07),I(86,2a,1f,03),I(2b,47,00,04),I(3d,01,04,22),I(02,32,00,00),I(00,00,00,0a),I(47,00,00,45),I(02,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 64 binding: anonymous */
  static const void *G005342[] = {I(ab,1c,47,00),I(06,1a,1b,34),I(00,00,00,35),I(47,00,07,1f),I(03,02,1b,34),I(00,00,00,19),I(1f,03,2b,1b),I(1f,04,47,00),I(03,3d,02,05),I(22,01,32,00),I(00,00,00,0e),I(47,00,07,1f),I(04,1f,04,03),I(22,01,32,00),I(00,00,00,0e),I(82,1d,47,00),I(03,3d,02,03),I(45,03,00,00)};

  /* Byte-vector with size: 56 is_init: 0 index: 65 binding: table-rehash */
  static const void *G005344[] = {I(aa,46,08,1b),I(48,00,00,47),I(00,00,26,00),I(00,00,00,03),I(24,00,00,00),B(table1 ,3),I(08,47,00,00),I(82,24,00,00),B(table1 ,13),I(08,1c,48,00),I(01,1b,48,00),I(02,47,00,01),I(24,00,00,00),B(vector ,6),I(3c,01,1b,34),I(00,00,00,9d),I(47,00,01,06),I(1b,48,00,05),I(47,00,05,84),I(16,1b,48,00),I(06,47,00,06),I(24,00,00,00),B(boot1 ,40),I(3c,01,1b,48),I(00,07,47,00),I(00,82,24,00),B(table1 ,3),I(08,84,16,47),I(00,00,47,00),I(07,1c,26,00),I(00,00,00,03),I(1d,24,00,00),B(table1 ,3),I(09,22,02,2a),I(47,00,00,1c),I(1c,82,1d,24),B(table1 ,3),I(09,22,02,2a),I(86,86,1c,48),I(00,03,1b,48),I(00,04,23,00),B(table ,17),I(23,00,00,00),B(table ,64),I(3b,02,48,00),I(03,23,00,00),B(table ,17),I(23,00,00,00),B(table ,63),I(3b,01,48,00),I(04,82,47,00),I(04,3d,01,0a),I(22,06,32,00),I(00,00,00,09),I(47,00,00,45),I(04,00,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 66 binding: accumulate-table */
  static const void *G005346[] = {I(43,03,24,00),B(table1 ,9),I(3c,01,24,00),B(list ,26),I(3d,03,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 67 binding: anonymous */
  static const void *G005348[] = {I(aa,1b,7a,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,11),I(1c,10,1d,11),I(47,00,00,3d),I(02,02,45,02)};

  /* Byte-vector with size: 12 is_init: 0 index: 68 binding: all1-table? */
  static const void *G005350[] = {I(ab,46,01,1c),I(48,00,00,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,3),I(08,23,00,00),B(table ,17),I(23,00,00,00),B(table ,67),I(3b,01,1c,24),B(vector ,10),I(3d,02,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 69 binding: table-empty? */
  static const void *G005352[] = {I(aa,83,24,00),B(table1 ,3),I(08,2d,45,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 70 binding: anonymous */
  static const void *G005354[] = {I(aa,1b,7a,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,11),I(1c,10,1d,11),I(47,00,00,3d),I(02,02,45,02)};

  /* Byte-vector with size: 12 is_init: 0 index: 71 binding: anyp1-table */
  static const void *G005356[] = {I(ab,46,01,1c),I(48,00,00,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,3),I(08,23,00,00),B(table ,17),I(23,00,00,00),B(table ,70),I(3b,01,1c,24),B(vector ,4),I(3d,02,02,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 72 binding: anonymous */
  static const void *G005358[] = {I(aa,1b,7a,1b),I(34,00,00,00),I(00,00,00,18),I(1c,10,1d,11),I(47,00,00,3d),I(02,02,32,00),I(00,00,00,07),I(86,45,02,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 73 binding: do1-table */
  static const void *G005360[] = {I(ab,46,01,1c),I(48,00,00,26),I(00,00,00,03),I(24,00,00,00),B(table1 ,3),I(08,23,00,00),B(table ,17),I(23,00,00,00),B(table ,72),I(3b,01,1c,24),B(vector ,16),I(3d,02,02,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 74 binding: accumulate1-table */
  static const void *G005362[] = {I(ab,24,00,00),B(table1 ,9),I(3c,01,24,00),B(list ,24),I(3d,02,00,00)};

  /* Byte-vector with size: 113 is_init: 1 index: 0 binding: initialize-table */
  static const void *G005364[] = {I(87,25,00,00),B(table ,1),I(24,00,00,00),B(table1 ,1),I(3e,0b,24,00),B(table1 ,0),I(3c,00,21,01),I(24,00,00,00),B(vector ,1),I(3e,0b,24,00),B(vector ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(list ,1),I(3e,0b,24,00),B(list ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(copy ,1),I(3e,0b,24,00),B(copy ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(condition ,1),I(3e,0b,24,00),B(condition ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(table ,75),I(23,00,00,00),B(table ,74),I(3b,02,25,00),B(table ,10),I(23,00,00,00),B(table ,76),I(23,00,00,00),B(table ,73),I(3b,02,25,00),B(table ,9),I(23,00,00,00),B(table ,77),I(23,00,00,00),B(table ,71),I(3b,02,25,00),B(table ,8),I(86,25,00,00),B(table ,7),I(23,00,00,00),B(table ,78),I(23,00,00,00),B(table ,69),I(3b,01,25,00),B(table ,6),I(23,00,00,00),B(table ,79),I(23,00,00,00),B(table ,68),I(3b,02,25,00),B(table ,5),I(23,00,00,00),B(table ,80),I(23,00,00,00),B(table ,66),I(3b,03,25,00),B(table ,4),I(23,00,00,00),B(table ,81),I(23,00,00,00),B(table ,65),I(3b,01,25,00),B(table ,3),I(23,00,00,00),B(table ,82),I(23,00,00,00),B(table ,62),I(3b,02,25,00),B(table ,2),I(23,00,00,00),B(table ,83),I(23,00,00,00),B(table ,60),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G005266,G005265);
  eul_allocate_bytevector( G005268,G005267);
  eul_allocate_bytevector( G005270,G005269);
  eul_intern_symbol(sym_5273,"anonymous");
  eul_allocate_bytevector( G005272,G005271);
  object_class(str_5276) = eul_static_string_class;
  eul_allocate_bytevector( G005275,G005274);
  object_class(str_5279) = eul_static_string_class;
  eul_allocate_bytevector( G005278,G005277);
  object_class(str_5282) = eul_static_string_class;
  eul_allocate_bytevector( G005281,G005280);
  object_class(str_5285) = eul_static_string_class;
  eul_allocate_bytevector( G005284,G005283);
  eul_allocate_bytevector( G005287,G005286);
  eul_allocate_bytevector( G005289,G005288);
  eul_allocate_bytevector( G005291,G005290);
  eul_allocate_bytevector( G005293,G005292);
  object_class(str_5296) = eul_static_string_class;
  eul_allocate_bytevector( G005295,G005294);
  eul_allocate_bytevector( G005298,G005297);
  eul_allocate_bytevector( G005300,G005299);
  eul_allocate_bytevector( G005302,G005301);
  eul_allocate_bytevector( G005304,G005303);
  eul_allocate_bytevector( G005306,G005305);
  object_class(str_5309) = eul_static_string_class;
  eul_allocate_bytevector( G005308,G005307);
  eul_allocate_bytevector( G005311,G005310);
  eul_allocate_bytevector( G005313,G005312);
  eul_intern_symbol(sym_5316,"table-ref");
  eul_intern_symbol(sym_5317,"(method element)");
  eul_intern_symbol(sym_5318,"(method table-ref)");
  eul_intern_symbol(sym_5319,"(method (setter element))");
  eul_intern_symbol(sym_5321,"setter");
  object_class(cons_5322) = eul_static_cons_class;
  eul_car(cons_5322) = sym_5316;
  eul_cdr(cons_5322) = eul_nil;
  object_class(cons_5320) = eul_static_cons_class;
  eul_car(cons_5320) = sym_5321;
  eul_intern_symbol(sym_5323,"(method (setter table-ref))");
  eul_intern_symbol(sym_5324,"(method emptyp)");
  eul_intern_symbol(sym_5325,"(method do)");
  eul_intern_symbol(sym_5326,"(method map)");
  eul_intern_symbol(sym_5327,"(method any?)");
  eul_intern_symbol(sym_5328,"(method all?)");
  eul_intern_symbol(sym_5329,"(method member)");
  eul_intern_symbol(sym_5330,"(method accumulate)");
  eul_intern_symbol(sym_5331,"(method accumulate1)");
  eul_intern_symbol(sym_5333,"converter");
  eul_intern_symbol(sym_5335,"<table>");
  object_class(cons_5334) = eul_static_cons_class;
  eul_car(cons_5334) = sym_5335;
  eul_cdr(cons_5334) = eul_nil;
  object_class(cons_5332) = eul_static_cons_class;
  eul_car(cons_5332) = sym_5333;
  eul_allocate_bytevector( G005315,G005314);
  eul_allocate_bytevector( G005337,G005336);
  eul_allocate_bytevector( G005339,G005338);
  eul_allocate_bytevector( G005341,G005340);
  eul_allocate_bytevector( G005343,G005342);
  eul_allocate_bytevector( G005345,G005344);
  eul_allocate_bytevector( G005347,G005346);
  eul_allocate_bytevector( G005349,G005348);
  eul_allocate_bytevector( G005351,G005350);
  eul_allocate_bytevector( G005353,G005352);
  eul_allocate_bytevector( G005355,G005354);
  eul_allocate_bytevector( G005357,G005356);
  eul_allocate_bytevector( G005359,G005358);
  eul_allocate_bytevector( G005361,G005360);
  eul_allocate_bytevector( G005363,G005362);
  eul_intern_symbol(sym_5366,"accumulate1-table");
  eul_intern_symbol(sym_5367,"do1-table");
  eul_intern_symbol(sym_5368,"anyp1-table");
  eul_intern_symbol(sym_5369,"table-empty?");
  eul_intern_symbol(sym_5370,"all1-table?");
  eul_intern_symbol(sym_5371,"accumulate-table");
  eul_intern_symbol(sym_5372,"table-rehash");
  eul_intern_symbol(sym_5373,"map1-table");
  eul_intern_symbol(sym_5374,"top-level");
  eul_allocate_bytevector( G005365,G005364);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 11; i++)
      table_bindings[i] = eul_nil;
  }

  table_bindings[ 11] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_table_ref5262;
  table_bindings[ 12] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_addr_str5263;
  table_bindings[ 13] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_table_set5264;
  table_bindings[ 14] = G005266;
  table_bindings[ 15] = G005268;
  table_bindings[ 16] = G005270;
  table_bindings[ 17] = sym_5273;
  table_bindings[ 18] = G005272;
  table_bindings[ 19] = str_5276;
  table_bindings[ 20] = G005275;
  table_bindings[ 21] = str_5279;
  table_bindings[ 22] = G005278;
  table_bindings[ 23] = str_5282;
  table_bindings[ 24] = G005281;
  table_bindings[ 25] = str_5285;
  table_bindings[ 26] = G005284;
  table_bindings[ 27] = G005287;
  table_bindings[ 28] = G005289;
  table_bindings[ 29] = G005291;
  table_bindings[ 30] = G005293;
  table_bindings[ 31] = str_5296;
  table_bindings[ 32] = G005295;
  table_bindings[ 33] = G005298;
  table_bindings[ 34] = G005300;
  table_bindings[ 35] = G005302;
  table_bindings[ 36] = G005304;
  table_bindings[ 37] = G005306;
  table_bindings[ 38] = str_5309;
  table_bindings[ 39] = G005308;
  table_bindings[ 40] = G005311;
  table_bindings[ 41] = G005313;
  table_bindings[ 42] = sym_5316;
  table_bindings[ 43] = sym_5317;
  table_bindings[ 44] = sym_5318;
  table_bindings[ 45] = sym_5319;
  table_bindings[ 46] = sym_5321;
  table_bindings[ 47] = cons_5320;
  table_bindings[ 48] = sym_5323;
  table_bindings[ 49] = sym_5324;
  table_bindings[ 50] = sym_5325;
  table_bindings[ 51] = sym_5326;
  table_bindings[ 52] = sym_5327;
  table_bindings[ 53] = sym_5328;
  table_bindings[ 54] = sym_5329;
  table_bindings[ 55] = sym_5330;
  table_bindings[ 56] = sym_5331;
  table_bindings[ 57] = sym_5333;
  table_bindings[ 58] = sym_5335;
  table_bindings[ 59] = cons_5332;
  table_bindings[ 60] = G005315;
  table_bindings[ 61] = G005337;
  table_bindings[ 62] = G005339;
  table_bindings[ 63] = G005341;
  table_bindings[ 64] = G005343;
  table_bindings[ 65] = G005345;
  table_bindings[ 66] = G005347;
  table_bindings[ 67] = G005349;
  table_bindings[ 68] = G005351;
  table_bindings[ 69] = G005353;
  table_bindings[ 70] = G005355;
  table_bindings[ 71] = G005357;
  table_bindings[ 72] = G005359;
  table_bindings[ 73] = G005361;
  table_bindings[ 74] = G005363;
  table_bindings[ 1] = eul_nil;
  table_bindings[ 75] = sym_5366;
  table_bindings[ 76] = sym_5367;
  table_bindings[ 77] = sym_5368;
  table_bindings[ 78] = sym_5369;
  table_bindings[ 79] = sym_5370;
  table_bindings[ 80] = sym_5371;
  table_bindings[ 81] = sym_5372;
  table_bindings[ 82] = sym_5373;
  table_bindings[ 83] = sym_5374;
  eul_allocate_lambda( table_bindings[0], "initialize-table", 0, G005365);

  }
}


/* eof */
