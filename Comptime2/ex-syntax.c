/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module ex-syntax
 **  Copyright: See file ex-syntax.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_i_modify();
extern void initialize_module_p_env();
extern void initialize_module_sx_obj();
extern void initialize_module_sx_node();
extern void initialize_module_cg_interf();
extern LispRef cg_interf_bindings[];
extern LispRef i_modify_bindings[];
extern LispRef i_all_bindings[];
extern LispRef thread_bindings[];
extern LispRef convert_bindings[];
extern LispRef collect_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef number_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot_bindings[];
extern LispRef i_error_bindings[];
extern LispRef i_param_bindings[];
extern LispRef mop_access_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef stream2_bindings[];
extern LispRef p_env_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef sx_node_bindings[];

/* Module bindings with size 80 */
LispRef ex_syntax_bindings[80];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module ex-syntax */
void initialize_module_ex_syntax()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_i_modify();
  initialize_module_p_env();
  initialize_module_sx_obj();
  initialize_module_sx_node();
  initialize_module_cg_interf();
  eul_fast_table_set(eul_modules,"ex_syntax",(LispRef) ex_syntax_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_5022, sym_5021, sym_5020, sym_5019, sym_5018, sym_5017, sym_5016, sym_5015, sym_5014, G005013, G005011, G005009, G005006, G005004, G005000, G004998, G004996, G004994, G004992, sym_4990, G004988, sym_4986, G004983, G004981, G004979, G004976, sym_4974, sym_4973, sym_4972, sym_4971, G004970, sym_4968, G004967, G004963, G004961, G004959, sym_4957, G004956, G004952, G004950, G004948, sym_4946, G004945, G004941, G004939, G004937, G004935, sym_4933, sym_4932, G004931, key_4929, G004926, G004924, G004922, G004920;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 18 is_init: 0 index: 11 binding: anonymous */
  static const void *G004919[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_syntax ,2),I(3c,02,24,00),B(sx_node ,20),I(3c,01,47,00),I(02,1d,24,00),B(ex_syntax ,5),I(3c,02,1c,1c),I(1c,26,00,00),I(00,00,00,06),I(1d,24,00,00),B(sx_obj1 ,44),I(09,22,02,2a),I(1c,24,00,00),B(p_env ,15),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 12 binding: anonymous */
  static const void *G004921[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_syntax ,2),I(3c,02,24,00),B(p_env ,15),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 13 binding: (method-G004761) */
  static const void *G004923[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_4927, "compile time error condition: ", 30);
  eul_allocate_static_string(str_4928, "bad syntax prefix syntax", 24);
  /* Byte-vector with size: 27 is_init: 0 index: 17 binding: (method-G004761) */
  static const void *G004925[] = {I(ab,24,00,00),B(stream2 ,10),I(23,00,00,00),B(ex_syntax ,14),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,10),I(24,00,00,00),B(mop_access ,3),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(23,00,00,00),B(ex_syntax ,15),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_syntax ,16),I(47,00,00,24),B(boot ,21),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 109 is_init: 0 index: 20 binding: anonymous */
  static const void *G004930[] = {I(ab,46,07,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_syntax ,18),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,26),I(00,00,00,03),I(02,84,86,86),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,19),I(23,00,00,00),B(ex_syntax ,17),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,19),I(23,00,00,00),B(ex_syntax ,13),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,77,24),B(p_env ,13),I(3c,01,1b,48),I(00,01,47,00),I(01,26,00,00),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,60),I(08,47,00,00),I(73,1b,48,00),I(02,1c,24,00),B(aux_table ,8),I(3c,01,24,00),B(sx_obj ,27),I(1c,24,00,00),B(boot ,15),I(3c,02,47,00),I(00,76,24,00),B(number ,7),I(3c,02,23,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,12),I(3b,01,1c,24),B(boot ,4),I(3c,02,2a,47),I(00,00,76,23),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,11),I(3b,01,1c,24),B(boot ,4),I(3c,02,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,1b,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 21 binding: anonymous */
  static const void *G004934[] = {I(aa,1b,10,1b),I(47,00,01,24),B(ex_syntax ,2),I(3c,02,24,00),B(sx_node ,20),I(3c,01,1d,73),I(1c,1c,1c,26),I(00,00,00,06),I(1d,24,00,00),B(sx_obj1 ,44),I(09,22,02,2a),I(1c,24,00,00),B(p_env ,15),I(3d,01,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 22 binding: anonymous */
  static const void *G004936[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_syntax ,2),I(3c,02,24,00),B(p_env ,15),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 23 binding: (method-G004731) */
  static const void *G004938[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_4942, "compile time error condition: ", 30);
  eul_allocate_static_string(str_4943, "bad syntax rename syntax", 24);
  /* Byte-vector with size: 27 is_init: 0 index: 26 binding: (method-G004731) */
  static const void *G004940[] = {I(ab,24,00,00),B(stream2 ,10),I(23,00,00,00),B(ex_syntax ,24),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,10),I(24,00,00,00),B(mop_access ,3),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(23,00,00,00),B(ex_syntax ,25),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_syntax ,16),I(47,00,00,24),B(boot ,21),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 112 is_init: 0 index: 28 binding: anonymous */
  static const void *G004944[] = {I(ab,46,04,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_syntax ,18),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,26),I(00,00,00,03),I(02,84,86,86),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,27),I(23,00,00,00),B(ex_syntax ,26),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,27),I(23,00,00,00),B(ex_syntax ,23),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,76,24),B(p_env ,13),I(3c,01,1b,48),I(00,01,47,00),I(01,26,00,00),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,60),I(08,24,00,00),B(aux_table ,8),I(3c,01,24,00),B(sx_obj ,27),I(1c,24,00,00),B(boot ,15),I(3c,02,47,00),I(00,73,24,00),B(boot1 ,31),I(1c,24,00,00),B(boot ,15),I(3c,02,1d,1c),I(24,00,00,00),B(number ,7),I(3c,02,23,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,22),I(3b,01,1c,24),B(boot ,4),I(3c,02,2a,47),I(00,00,73,23),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,21),I(3b,01,1c,24),B(boot ,4),I(3c,02,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,1c,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 29 binding: anonymous */
  static const void *G004947[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_syntax ,2),I(3c,02,24,00),B(p_env ,15),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 30 binding: (method-G004705) */
  static const void *G004949[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_4953, "compile time error condition: ", 30);
  eul_allocate_static_string(str_4954, "bad syntax except syntax", 24);
  /* Byte-vector with size: 27 is_init: 0 index: 33 binding: (method-G004705) */
  static const void *G004951[] = {I(ab,24,00,00),B(stream2 ,10),I(23,00,00,00),B(ex_syntax ,31),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,10),I(24,00,00,00),B(mop_access ,3),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(23,00,00,00),B(ex_syntax ,32),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_syntax ,16),I(47,00,00,24),B(boot ,21),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 100 is_init: 0 index: 35 binding: anonymous */
  static const void *G004955[] = {I(ab,46,04,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_syntax ,18),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,26),I(00,00,00,03),I(02,84,86,86),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,34),I(23,00,00,00),B(ex_syntax ,33),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,34),I(23,00,00,00),B(ex_syntax ,30),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,76,24),B(p_env ,13),I(3c,01,1b,48),I(00,01,47,00),I(01,26,00,00),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,60),I(08,1b,24,00),B(aux_table ,8),I(3c,01,24,00),B(sx_obj ,27),I(1c,24,00,00),B(boot ,15),I(3c,02,47,00),I(00,73,24,00),B(number ,7),I(3c,02,23,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,29),I(3b,01,1c,24),B(boot ,4),I(3c,02,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,19,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 36 binding: anonymous */
  static const void *G004958[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_syntax ,2),I(3c,02,24,00),B(p_env ,15),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 37 binding: (method-G004681) */
  static const void *G004960[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_4964, "compile time error condition: ", 30);
  eul_allocate_static_string(str_4965, "bad syntax only syntax", 22);
  /* Byte-vector with size: 27 is_init: 0 index: 40 binding: (method-G004681) */
  static const void *G004962[] = {I(ab,24,00,00),B(stream2 ,10),I(23,00,00,00),B(ex_syntax ,38),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,10),I(24,00,00,00),B(mop_access ,3),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(23,00,00,00),B(ex_syntax ,39),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_syntax ,16),I(47,00,00,24),B(boot ,21),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 87 is_init: 0 index: 42 binding: anonymous */
  static const void *G004966[] = {I(ab,46,04,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_syntax ,18),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,26),I(00,00,00,03),I(02,84,86,86),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,41),I(23,00,00,00),B(ex_syntax ,40),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,41),I(23,00,00,00),B(ex_syntax ,37),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,76,24),B(p_env ,13),I(3c,01,1b,48),I(00,01,47,00),I(00,73,23,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,36),I(3b,01,1c,24),B(boot ,4),I(3c,02,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,17,00,00)};

  /* Byte-vector with size: 38 is_init: 0 index: 47 binding: top-level */
  static const void *G004969[] = {I(a9,24,00,00),B(aux_table ,3),I(3c,00,1b,89),B(ex_syntax ,10),I(2a,23,00,00),B(ex_syntax ,43),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,42),I(3b,02,24,00),B(ex_syntax ,8),I(3c,02,2a,23),B(ex_syntax ,44),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,35),I(3b,02,24,00),B(ex_syntax ,8),I(3c,02,2a,23),B(ex_syntax ,45),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,28),I(3b,02,24,00),B(ex_syntax ,8),I(3c,02,2a,23),B(ex_syntax ,46),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,20),I(3b,02,24,00),B(ex_syntax ,8),I(3d,02,01,45),I(01,00,00,00)};

  eul_allocate_static_string(str_4977, "external syntax binding ~a not available in module", 50);
  /* Byte-vector with size: 23 is_init: 0 index: 49 binding: import-syntax-binding */
  static const void *G004975[] = {I(ab,1c,1c,24),B(p_env ,19),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,27),I(1d,24,00,00),B(sx_node ,5),I(3c,01,1b,23),B(ex_syntax ,48),I(1f,05,1f,05),I(24,00,00,00),B(i_notify ,6),I(3c,04,22,01),I(1b,87,1c,26),I(00,00,00,03),I(1d,24,00,00),B(sx_obj1 ,44),I(09,22,02,2a),I(1d,24,00,00),B(ex_syntax ,9),I(3c,01,2a,1b),I(45,04,00,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 50 binding: anonymous */
  static const void *G004978[] = {I(ab,1b,7a,1b),I(34,00,00,00),I(00,00,00,28),I(1d,41,00,00),B(aux_table ,10),I(22,01,1d,1c),I(24,00,00,00),B(p_env ,15),I(3d,02,04,22),I(01,32,00,00),I(00,00,00,26),I(1c,24,00,00),B(p_env ,15),I(3c,01,2a,1c),I(87,1c,26,00),I(00,00,00,03),I(1d,24,00,00),B(sx_obj1 ,44),I(09,22,02,45),I(03,00,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 51 binding: (method-G004633) */
  static const void *G004980[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_4984, "compile time error condition: ", 30);
  eul_allocate_static_string(str_4985, "cannot import syntax module ~a", 30);
  /* Byte-vector with size: 33 is_init: 0 index: 55 binding: (method-G004633) */
  static const void *G004982[] = {I(ab,24,00,00),B(stream2 ,10),I(23,00,00,00),B(ex_syntax ,52),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,10),I(24,00,00,00),B(mop_access ,3),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,44),I(86,23,00,00),B(ex_syntax ,53),I(47,00,00,24),B(mop_gf ,17),I(3c,03,23,00),B(ex_syntax ,54),I(24,00,00,00),B(dynamic ,3),I(3c,01,1c,24),B(i_error ,5),I(23,00,00,00),B(ex_syntax ,16),I(1f,03,24,00),B(boot ,21),I(3d,04,04,22),I(02,45,02,00)};

  eul_allocate_static_string(str_4989, "  Import syntax module ~a ...", 29);
  /* Byte-vector with size: 102 is_init: 0 index: 58 binding: import-syntax-module */
  static const void *G004987[] = {I(aa,46,01,1b),I(48,00,00,23),B(ex_syntax ,56),I(47,00,00,24),B(i_notify ,4),I(3c,02,2a,84),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_syntax ,18),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,26),I(00,00,00,03),I(02,84,86,86),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,57),I(23,00,00,00),B(ex_syntax ,55),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,57),I(23,00,00,00),B(ex_syntax ,51),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,24,00),B(sx_obj1 ,7),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,11),I(47,00,00,24),B(p_env ,13),I(3c,01,1b,26),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,60),I(08,23,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,50),I(3b,02,1c,24),B(aux_table ,7),I(3c,02,2a,1c),I(24,00,00,00),B(ex_syntax ,9),I(3c,01,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,17,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 59 binding: expand-syntax-import */
  static const void *G004991[] = {I(aa,24,00,00),B(ex_syntax ,6),I(24,00,00,00),B(ex_syntax ,6),I(3d,02,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 60 binding: make-prefix */
  static const void *G004993[] = {I(ab,1c,82,02),I(1c,82,02,1c),I(1c,24,00,00),B(collect ,19),I(3c,02,24,00),B(mop_class ,6),I(24,00,00,00),B(convert ,2),I(3d,02,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 61 binding: anonymous */
  static const void *G004995[] = {I(ab,1c,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 62 binding: anonymous */
  static const void *G004997[] = {I(ab,1c,24,00),B(ex_syntax ,3),I(3d,01,02,00)};

  eul_allocate_static_string(str_5001, "no syntax-import expander ~a available", 38);
  eul_allocate_static_string(str_5002, "no syntax-import expander ~a available", 38);
  /* Byte-vector with size: 43 is_init: 0 index: 65 binding: syntax-import-expander */
  static const void *G004999[] = {I(ab,1c,7c,1b),I(34,00,00,00),I(00,00,00,20),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,62),I(3b,02,32,00),I(00,00,00,84),I(1d,7a,12,1b),I(34,00,00,00),I(00,00,00,20),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,61),I(3b,02,32,00),I(00,00,00,5e),I(1f,03,10,7c),I(1b,34,00,00),I(00,00,00,3f),I(1f,04,10,24),B(ex_syntax ,10),I(3c,01,1b,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,19),I(23,00,00,00),B(ex_syntax ,63),I(1f,07,24,00),B(boot ,21),I(3c,02,22,02),I(32,00,00,00),I(00,00,00,1a),I(23,00,00,00),B(ex_syntax ,64),I(1f,05,24,00),B(boot ,21),I(3c,02,22,01),I(22,01,1f,03),I(1f,03,1d,3d),I(02,04,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 66 binding: expand-old-syntax-imports */
  static const void *G005003[] = {I(aa,24,00,00),B(ex_syntax ,4),I(1c,24,00,00),B(boot ,15),I(3d,02,01,00)};

  eul_allocate_static_string(str_5007, "redefinition of expander ~a", 27);
  /* Byte-vector with size: 17 is_init: 0 index: 68 binding: install-syntax-import-expander */
  static const void *G005005[] = {I(ab,1c,24,00),B(ex_syntax ,10),I(3c,01,1b,34),I(00,00,00,1d),I(86,23,00,00),B(ex_syntax ,67),I(1f,04,24,00),B(i_notify ,5),I(3c,03,32,00),I(00,00,00,07),I(86,2a,24,00),B(ex_syntax ,10),I(24,00,00,00),B(boot1 ,41),I(3c,01,1f,03),I(1f,03,1d,3d),I(02,04,00,00)};

  /* Byte-vector with size: 41 is_init: 0 index: 69 binding: anonymous */
  static const void *G005008[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,44),I(23,00,00,00),B(ex_syntax ,54),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,84),I(24,00,00,00),B(sx_obj1 ,60),I(08,1b,47,00),I(00,24,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,84,1d,24),B(sx_obj1 ,60),I(09,22,05,32),I(00,00,00,5e),I(1c,10,1b,24),B(sx_obj1 ,7),I(3c,01,1b,34),I(00,00,00,29),I(1c,47,00,00),I(50,1b,34,00),I(00,00,00,0e),I(1d,32,00,00),I(00,00,00,10),I(1f,04,11,47),I(00,01,3d,01),I(05,22,01,32),I(00,00,00,28),I(1c,47,00,02),I(50,1b,34,00),I(00,00,00,12),I(1f,04,47,00),I(00,8f,32,00),I(00,00,00,0f),I(1f,04,11,47),I(00,01,3d,01),I(05,22,01,22),I(02,45,02,00)};

  /* Byte-vector with size: 29 is_init: 0 index: 70 binding: register-imported-syntax-module */
  static const void *G005010[] = {I(aa,46,04,1b),I(48,00,00,47),I(00,00,24,00),B(sx_obj1 ,7),I(3c,01,1b,34),I(00,00,00,1d),I(47,00,00,26),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,60),I(08,32,00,00),I(00,00,00,0a),I(47,00,00,1b),I(48,00,02,86),I(1b,48,00,01),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,69),I(3b,01,48,00),I(01,23,00,00),B(ex_syntax ,54),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,84),I(24,00,00,00),B(sx_obj1 ,60),I(08,47,00,01),I(3d,01,05,00)};

  /* Byte-vector with size: 88 is_init: 1 index: 0 binding: initialize-ex-syntax */
  static const void *G005012[] = {I(87,25,00,00),B(ex_syntax ,1),I(24,00,00,00),B(cg_interf ,1),I(3e,0b,24,00),B(cg_interf ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_node ,1),I(3e,0b,24,00),B(sx_node ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(i_modify ,1),I(3e,0b,24,00),B(i_modify ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(86,25,00,00),B(ex_syntax ,10),I(23,00,00,00),B(ex_syntax ,71),I(23,00,00,00),B(ex_syntax ,70),I(3b,01,25,00),B(ex_syntax ,9),I(23,00,00,00),B(ex_syntax ,72),I(23,00,00,00),B(ex_syntax ,68),I(3b,02,25,00),B(ex_syntax ,8),I(23,00,00,00),B(ex_syntax ,73),I(23,00,00,00),B(ex_syntax ,66),I(3b,01,25,00),B(ex_syntax ,7),I(23,00,00,00),B(ex_syntax ,74),I(23,00,00,00),B(ex_syntax ,65),I(3b,02,25,00),B(ex_syntax ,6),I(23,00,00,00),B(ex_syntax ,75),I(23,00,00,00),B(ex_syntax ,60),I(3b,02,25,00),B(ex_syntax ,5),I(23,00,00,00),B(ex_syntax ,76),I(23,00,00,00),B(ex_syntax ,59),I(3b,01,25,00),B(ex_syntax ,4),I(23,00,00,00),B(ex_syntax ,77),I(23,00,00,00),B(ex_syntax ,58),I(3b,01,25,00),B(ex_syntax ,3),I(23,00,00,00),B(ex_syntax ,78),I(23,00,00,00),B(ex_syntax ,49),I(3b,02,25,00),B(ex_syntax ,2),I(23,00,00,00),B(ex_syntax ,79),I(23,00,00,00),B(ex_syntax ,47),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G004920,G004919);
  eul_allocate_bytevector( G004922,G004921);
  eul_allocate_bytevector( G004924,G004923);
  object_class(str_4927) = eul_static_string_class;
  object_class(str_4928) = eul_static_string_class;
  eul_intern_keyword(key_4929,"ct-error-value");
  eul_allocate_bytevector( G004926,G004925);
  eul_intern_symbol(sym_4932,"anonymous");
  eul_intern_symbol(sym_4933,"(method G004761)");
  eul_allocate_bytevector( G004931,G004930);
  eul_allocate_bytevector( G004935,G004934);
  eul_allocate_bytevector( G004937,G004936);
  eul_allocate_bytevector( G004939,G004938);
  object_class(str_4942) = eul_static_string_class;
  object_class(str_4943) = eul_static_string_class;
  eul_allocate_bytevector( G004941,G004940);
  eul_intern_symbol(sym_4946,"(method G004731)");
  eul_allocate_bytevector( G004945,G004944);
  eul_allocate_bytevector( G004948,G004947);
  eul_allocate_bytevector( G004950,G004949);
  object_class(str_4953) = eul_static_string_class;
  object_class(str_4954) = eul_static_string_class;
  eul_allocate_bytevector( G004952,G004951);
  eul_intern_symbol(sym_4957,"(method G004705)");
  eul_allocate_bytevector( G004956,G004955);
  eul_allocate_bytevector( G004959,G004958);
  eul_allocate_bytevector( G004961,G004960);
  object_class(str_4964) = eul_static_string_class;
  object_class(str_4965) = eul_static_string_class;
  eul_allocate_bytevector( G004963,G004962);
  eul_intern_symbol(sym_4968,"(method G004681)");
  eul_allocate_bytevector( G004967,G004966);
  eul_intern_symbol(sym_4971,"only");
  eul_intern_symbol(sym_4972,"except");
  eul_intern_symbol(sym_4973,"rename");
  eul_intern_symbol(sym_4974,"prefix");
  eul_allocate_bytevector( G004970,G004969);
  object_class(str_4977) = eul_static_string_class;
  eul_allocate_bytevector( G004976,G004975);
  eul_allocate_bytevector( G004979,G004978);
  eul_allocate_bytevector( G004981,G004980);
  object_class(str_4984) = eul_static_string_class;
  object_class(str_4985) = eul_static_string_class;
  eul_intern_symbol(sym_4986,"*actual-module*");
  eul_allocate_bytevector( G004983,G004982);
  object_class(str_4989) = eul_static_string_class;
  eul_intern_symbol(sym_4990,"(method G004633)");
  eul_allocate_bytevector( G004988,G004987);
  eul_allocate_bytevector( G004992,G004991);
  eul_allocate_bytevector( G004994,G004993);
  eul_allocate_bytevector( G004996,G004995);
  eul_allocate_bytevector( G004998,G004997);
  object_class(str_5001) = eul_static_string_class;
  object_class(str_5002) = eul_static_string_class;
  eul_allocate_bytevector( G005000,G004999);
  eul_allocate_bytevector( G005004,G005003);
  object_class(str_5007) = eul_static_string_class;
  eul_allocate_bytevector( G005006,G005005);
  eul_allocate_bytevector( G005009,G005008);
  eul_allocate_bytevector( G005011,G005010);
  eul_intern_symbol(sym_5014,"register-imported-syntax-module");
  eul_intern_symbol(sym_5015,"install-syntax-import-expander");
  eul_intern_symbol(sym_5016,"expand-old-syntax-imports");
  eul_intern_symbol(sym_5017,"syntax-import-expander");
  eul_intern_symbol(sym_5018,"make-prefix");
  eul_intern_symbol(sym_5019,"expand-syntax-import");
  eul_intern_symbol(sym_5020,"import-syntax-module");
  eul_intern_symbol(sym_5021,"import-syntax-binding");
  eul_intern_symbol(sym_5022,"top-level");
  eul_allocate_bytevector( G005013,G005012);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 11; i++)
      ex_syntax_bindings[i] = eul_nil;
  }

  ex_syntax_bindings[ 11] = G004920;
  ex_syntax_bindings[ 12] = G004922;
  ex_syntax_bindings[ 13] = G004924;
  ex_syntax_bindings[ 14] = str_4927;
  ex_syntax_bindings[ 15] = str_4928;
  ex_syntax_bindings[ 16] = key_4929;
  ex_syntax_bindings[ 17] = G004926;
  ex_syntax_bindings[ 18] = sym_4932;
  ex_syntax_bindings[ 19] = sym_4933;
  ex_syntax_bindings[ 20] = G004931;
  ex_syntax_bindings[ 21] = G004935;
  ex_syntax_bindings[ 22] = G004937;
  ex_syntax_bindings[ 23] = G004939;
  ex_syntax_bindings[ 24] = str_4942;
  ex_syntax_bindings[ 25] = str_4943;
  ex_syntax_bindings[ 26] = G004941;
  ex_syntax_bindings[ 27] = sym_4946;
  ex_syntax_bindings[ 28] = G004945;
  ex_syntax_bindings[ 29] = G004948;
  ex_syntax_bindings[ 30] = G004950;
  ex_syntax_bindings[ 31] = str_4953;
  ex_syntax_bindings[ 32] = str_4954;
  ex_syntax_bindings[ 33] = G004952;
  ex_syntax_bindings[ 34] = sym_4957;
  ex_syntax_bindings[ 35] = G004956;
  ex_syntax_bindings[ 36] = G004959;
  ex_syntax_bindings[ 37] = G004961;
  ex_syntax_bindings[ 38] = str_4964;
  ex_syntax_bindings[ 39] = str_4965;
  ex_syntax_bindings[ 40] = G004963;
  ex_syntax_bindings[ 41] = sym_4968;
  ex_syntax_bindings[ 42] = G004967;
  ex_syntax_bindings[ 43] = sym_4971;
  ex_syntax_bindings[ 44] = sym_4972;
  ex_syntax_bindings[ 45] = sym_4973;
  ex_syntax_bindings[ 46] = sym_4974;
  ex_syntax_bindings[ 47] = G004970;
  ex_syntax_bindings[ 48] = str_4977;
  ex_syntax_bindings[ 49] = G004976;
  ex_syntax_bindings[ 50] = G004979;
  ex_syntax_bindings[ 51] = G004981;
  ex_syntax_bindings[ 52] = str_4984;
  ex_syntax_bindings[ 53] = str_4985;
  ex_syntax_bindings[ 54] = sym_4986;
  ex_syntax_bindings[ 55] = G004983;
  ex_syntax_bindings[ 56] = str_4989;
  ex_syntax_bindings[ 57] = sym_4990;
  ex_syntax_bindings[ 58] = G004988;
  ex_syntax_bindings[ 59] = G004992;
  ex_syntax_bindings[ 60] = G004994;
  ex_syntax_bindings[ 61] = G004996;
  ex_syntax_bindings[ 62] = G004998;
  ex_syntax_bindings[ 63] = str_5001;
  ex_syntax_bindings[ 64] = str_5002;
  ex_syntax_bindings[ 65] = G005000;
  ex_syntax_bindings[ 66] = G005004;
  ex_syntax_bindings[ 67] = str_5007;
  ex_syntax_bindings[ 68] = G005006;
  ex_syntax_bindings[ 69] = G005009;
  ex_syntax_bindings[ 70] = G005011;
  ex_syntax_bindings[ 1] = eul_nil;
  ex_syntax_bindings[ 71] = sym_5014;
  ex_syntax_bindings[ 72] = sym_5015;
  ex_syntax_bindings[ 73] = sym_5016;
  ex_syntax_bindings[ 74] = sym_5017;
  ex_syntax_bindings[ 75] = sym_5018;
  ex_syntax_bindings[ 76] = sym_5019;
  ex_syntax_bindings[ 77] = sym_5020;
  ex_syntax_bindings[ 78] = sym_5021;
  ex_syntax_bindings[ 79] = sym_5022;
  eul_allocate_lambda( ex_syntax_bindings[0], "initialize-ex-syntax", 0, G005013);

  }
}


/* eof */
