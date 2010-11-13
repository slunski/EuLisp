/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module ex-import
 **  Copyright: See file ex-import.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_sx_obj();
extern void initialize_module_sx_node();
extern void initialize_module_p_env();
extern void initialize_module_cg_interf();
extern LispRef i_all_bindings[];
extern LispRef convert_bindings[];
extern LispRef collect_bindings[];
extern LispRef condition_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef thread_bindings[];
extern LispRef number_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef cg_interf_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot_bindings[];
extern LispRef i_error_bindings[];
extern LispRef i_param_bindings[];
extern LispRef mop_access_bindings[];
extern LispRef format_bindings[];
extern LispRef stream2_bindings[];
extern LispRef p_env_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef sx_node_bindings[];

/* Module bindings with size 79 */
LispRef ex_import_bindings[79];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module ex-import */
void initialize_module_ex_import()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_sx_obj();
  initialize_module_sx_node();
  initialize_module_p_env();
  initialize_module_cg_interf();
  eul_fast_table_set(eul_modules,"ex_import",(LispRef) ex_import_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_4688, sym_4687, sym_4686, sym_4685, sym_4684, sym_4683, sym_4682, sym_4681, sym_4680, G004679, G004677, G004673, G004671, G004669, G004666, sym_4664, G004662, G004658, G004656, G004654, G004652, G004650, G004647, G004645, sym_4643, sym_4642, sym_4641, sym_4640, G004639, sym_4637, G004636, G004632, G004630, G004628, sym_4626, G004625, G004621, G004619, G004617, sym_4615, G004614, G004610, G004608, G004606, G004604, sym_4602, sym_4601, sym_4600, G004599, key_4597, G004594, G004592, G004590, G004588;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 18 is_init: 0 index: 11 binding: anonymous */
  static const void *G004587[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_import ,4),I(3c,02,24,00),B(sx_node ,21),I(3c,01,47,00),I(02,1d,24,00),B(ex_import ,10),I(3c,02,1c,1c),I(1c,26,00,00),I(00,00,00,06),I(1d,24,00,00),B(sx_obj1 ,42),I(09,22,02,2a),I(1c,24,00,00),B(p_env ,5),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 12 binding: anonymous */
  static const void *G004589[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_import ,4),I(3c,02,24,00),B(p_env ,5),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 13 binding: (method-G004426) */
  static const void *G004591[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_4595, "compile time error condition: ", 30);
  eul_allocate_static_string(str_4596, "bad prefix import syntax", 24);
  /* Byte-vector with size: 26 is_init: 0 index: 17 binding: (method-G004426) */
  static const void *G004593[] = {I(ab,24,00,00),B(stream2 ,9),I(23,00,00,00),B(ex_import ,14),I(24,00,00,00),B(format ,4),I(3c,02,2a,24),B(stream2 ,9),I(1d,24,00,00),B(mop_access ,8),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_import ,15),I(23,00,00,00),B(ex_import ,16),I(47,00,00,24),B(boot ,13),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 123 is_init: 0 index: 21 binding: anonymous */
  static const void *G004598[] = {I(ab,46,07,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_import ,18),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,8a),I(03,02,84,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_import ,19),I(23,00,00,00),B(ex_import ,17),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(8a,03,02,84),I(24,00,00,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_import ,19),I(23,00,00,00),B(ex_import ,13),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,77,1b),I(24,00,00,00),B(cg_interf ,26),I(3c,01,1b,48),I(00,01,47,00),I(01,26,00,00),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,59),I(08,47,00,00),I(73,1b,48,00),I(02,1c,24,00),B(aux_table ,8),I(3c,01,24,00),B(sx_obj ,25),I(1c,24,00,00),B(boot ,11),I(3c,02,47,00),I(00,76,24,00),B(number ,9),I(3c,02,23,00),B(ex_import ,18),I(23,00,00,00),B(ex_import ,12),I(3b,01,1c,24),B(boot ,17),I(3c,02,2a,47),I(00,00,76,23),B(ex_import ,18),I(23,00,00,00),B(ex_import ,11),I(3b,01,1c,24),B(boot ,17),I(3c,02,2a,23),B(ex_import ,20),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,03),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,1f,09),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,26,00,00),I(00,00,00,03),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,83),I(24,00,00,00),B(dynamic ,6),I(3c,01,2a,1b),I(45,1f,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 22 binding: anonymous */
  static const void *G004603[] = {I(aa,1b,10,1b),I(47,00,01,24),B(ex_import ,4),I(3c,02,24,00),B(sx_node ,21),I(3c,01,1d,73),I(1c,1c,1c,26),I(00,00,00,06),I(1d,24,00,00),B(sx_obj1 ,42),I(09,22,02,2a),I(1c,24,00,00),B(p_env ,5),I(3d,01,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 23 binding: anonymous */
  static const void *G004605[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_import ,4),I(3c,02,24,00),B(p_env ,5),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 24 binding: (method-G004394) */
  static const void *G004607[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_4611, "compile time error condition: ", 30);
  eul_allocate_static_string(str_4612, "bad rename import syntax", 24);
  /* Byte-vector with size: 26 is_init: 0 index: 27 binding: (method-G004394) */
  static const void *G004609[] = {I(ab,24,00,00),B(stream2 ,9),I(23,00,00,00),B(ex_import ,25),I(24,00,00,00),B(format ,4),I(3c,02,2a,24),B(stream2 ,9),I(1d,24,00,00),B(mop_access ,8),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_import ,26),I(23,00,00,00),B(ex_import ,16),I(47,00,00,24),B(boot ,13),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 126 is_init: 0 index: 29 binding: anonymous */
  static const void *G004613[] = {I(ab,46,04,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_import ,18),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,8a),I(03,02,84,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_import ,28),I(23,00,00,00),B(ex_import ,27),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(8a,03,02,84),I(24,00,00,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_import ,28),I(23,00,00,00),B(ex_import ,24),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,76,1b),I(24,00,00,00),B(cg_interf ,26),I(3c,01,1b,48),I(00,01,47,00),I(01,26,00,00),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,59),I(08,24,00,00),B(aux_table ,8),I(3c,01,24,00),B(sx_obj ,25),I(1c,24,00,00),B(boot ,11),I(3c,02,47,00),I(00,73,24,00),B(boot1 ,30),I(1c,24,00,00),B(boot ,11),I(3c,02,1d,1c),I(24,00,00,00),B(number ,9),I(3c,02,23,00),B(ex_import ,18),I(23,00,00,00),B(ex_import ,23),I(3b,01,1c,24),B(boot ,17),I(3c,02,2a,47),I(00,00,73,23),B(ex_import ,18),I(23,00,00,00),B(ex_import ,22),I(3b,01,1c,24),B(boot ,17),I(3c,02,2a,23),B(ex_import ,20),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,03),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,1f,0a),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,26,00,00),I(00,00,00,03),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,83),I(24,00,00,00),B(dynamic ,6),I(3c,01,2a,1b),I(45,20,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 30 binding: anonymous */
  static const void *G004616[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_import ,4),I(3c,02,24,00),B(p_env ,5),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 31 binding: (method-G004366) */
  static const void *G004618[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_4622, "compile time error condition: ", 30);
  eul_allocate_static_string(str_4623, "bad except import syntax", 24);
  /* Byte-vector with size: 26 is_init: 0 index: 34 binding: (method-G004366) */
  static const void *G004620[] = {I(ab,24,00,00),B(stream2 ,9),I(23,00,00,00),B(ex_import ,32),I(24,00,00,00),B(format ,4),I(3c,02,2a,24),B(stream2 ,9),I(1d,24,00,00),B(mop_access ,8),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_import ,33),I(23,00,00,00),B(ex_import ,16),I(47,00,00,24),B(boot ,13),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 114 is_init: 0 index: 36 binding: anonymous */
  static const void *G004624[] = {I(ab,46,04,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_import ,18),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,8a),I(03,02,84,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_import ,35),I(23,00,00,00),B(ex_import ,34),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(8a,03,02,84),I(24,00,00,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_import ,35),I(23,00,00,00),B(ex_import ,31),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,76,1b),I(24,00,00,00),B(cg_interf ,26),I(3c,01,1b,48),I(00,01,47,00),I(01,26,00,00),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,24,00),B(aux_table ,8),I(3c,01,24,00),B(sx_obj ,25),I(1c,24,00,00),B(boot ,11),I(3c,02,47,00),I(00,73,24,00),B(number ,9),I(3c,02,23,00),B(ex_import ,18),I(23,00,00,00),B(ex_import ,30),I(3b,01,1c,24),B(boot ,17),I(3c,02,2a,23),B(ex_import ,20),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,03),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,1f,07),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,26,00,00),I(00,00,00,03),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,83),I(24,00,00,00),B(dynamic ,6),I(3c,01,2a,1b),I(45,1d,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 37 binding: anonymous */
  static const void *G004627[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_import ,4),I(3c,02,24,00),B(p_env ,5),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 38 binding: (method-G004340) */
  static const void *G004629[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_4633, "compile time error condition: ", 30);
  eul_allocate_static_string(str_4634, "bad only import syntax", 22);
  /* Byte-vector with size: 26 is_init: 0 index: 41 binding: (method-G004340) */
  static const void *G004631[] = {I(ab,24,00,00),B(stream2 ,9),I(23,00,00,00),B(ex_import ,39),I(24,00,00,00),B(format ,4),I(3c,02,2a,24),B(stream2 ,9),I(1d,24,00,00),B(mop_access ,8),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_import ,40),I(23,00,00,00),B(ex_import ,16),I(47,00,00,24),B(boot ,13),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 101 is_init: 0 index: 43 binding: anonymous */
  static const void *G004635[] = {I(ab,46,04,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_import ,18),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,8a),I(03,02,84,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_import ,42),I(23,00,00,00),B(ex_import ,41),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(8a,03,02,84),I(24,00,00,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_import ,42),I(23,00,00,00),B(ex_import ,38),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,76,1b),I(24,00,00,00),B(cg_interf ,26),I(3c,01,1b,48),I(00,01,47,00),I(00,73,23,00),B(ex_import ,18),I(23,00,00,00),B(ex_import ,37),I(3b,01,1c,24),B(boot ,17),I(3c,02,2a,23),B(ex_import ,20),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,03),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,1f,05),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,26,00,00),I(00,00,00,03),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,83),I(24,00,00,00),B(dynamic ,6),I(3c,01,2a,1b),I(45,1b,00,00)};

  /* Byte-vector with size: 38 is_init: 0 index: 48 binding: top-level */
  static const void *G004638[] = {I(a9,24,00,00),B(aux_table ,4),I(3c,00,1b,89),B(ex_import ,3),I(2a,23,00,00),B(ex_import ,44),I(23,00,00,00),B(ex_import ,18),I(23,00,00,00),B(ex_import ,43),I(3b,02,24,00),B(ex_import ,8),I(3c,02,2a,23),B(ex_import ,45),I(23,00,00,00),B(ex_import ,18),I(23,00,00,00),B(ex_import ,36),I(3b,02,24,00),B(ex_import ,8),I(3c,02,2a,23),B(ex_import ,46),I(23,00,00,00),B(ex_import ,18),I(23,00,00,00),B(ex_import ,29),I(3b,02,24,00),B(ex_import ,8),I(3c,02,2a,23),B(ex_import ,47),I(23,00,00,00),B(ex_import ,18),I(23,00,00,00),B(ex_import ,21),I(3b,02,24,00),B(ex_import ,8),I(3d,02,01,45),I(01,00,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 49 binding: expand-old-imports */
  static const void *G004644[] = {I(aa,24,00,00),B(ex_import ,6),I(1c,24,00,00),B(boot ,11),I(3d,02,01,00)};

  eul_allocate_static_string(str_4648, "external binding ~a not available in module ~a", 46);
  /* Byte-vector with size: 23 is_init: 0 index: 51 binding: import-binding */
  static const void *G004646[] = {I(ab,1c,1c,24),B(p_env ,19),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,27),I(1d,24,00,00),B(sx_node ,5),I(3c,01,1b,23),B(ex_import ,50),I(1f,05,1f,05),I(24,00,00,00),B(i_notify ,6),I(3c,04,22,01),I(1b,87,1c,26),I(00,00,00,03),I(1d,24,00,00),B(sx_obj1 ,42),I(09,22,02,2a),I(1d,24,00,00),B(ex_import ,5),I(3c,01,2a,1b),I(45,04,00,00)};

  /* Byte-vector with size: 59 is_init: 0 index: 52 binding: register-imported-module */
  static const void *G004649[] = {I(aa,23,00,00),B(ex_import ,20),I(24,00,00,00),B(dynamic ,3),I(3c,01,1c,26),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,1c,26,00),I(00,00,00,03),I(24,00,00,00),B(sx_obj1 ,59),I(08,1c,1c,86),I(6c,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,aa),I(1f,03,83,24),B(sx_obj1 ,59),I(08,1f,05,83),I(24,00,00,00),B(sx_obj1 ,59),I(08,24,00,00),B(cg_interf ,6),I(3c,00,1f,05),I(1c,86,6c,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,13),I(1f,06,1f,03),I(0f,1b,20,04),I(1f,03,22,01),I(2a,23,00,00),B(ex_import ,20),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,26),I(00,00,00,03),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,1f,09),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,26,00,00),I(00,00,00,03),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,06,1f,06),I(24,00,00,00),B(number ,14),I(3c,02,1f,0b),I(1c,1c,83,1d),I(24,00,00,00),B(sx_obj1 ,59),I(09,22,0a,45),I(05,00,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 53 binding: expand-import */
  static const void *G004651[] = {I(aa,24,00,00),B(ex_import ,9),I(24,00,00,00),B(ex_import ,9),I(3d,02,00,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 54 binding: anonymous */
  static const void *G004653[] = {I(ab,1b,7a,1b),I(34,00,00,00),I(00,00,00,28),I(1d,41,00,00),B(aux_table ,10),I(22,01,1d,1c),I(24,00,00,00),B(p_env ,5),I(3d,02,04,22),I(01,32,00,00),I(00,00,00,26),I(1c,24,00,00),B(p_env ,5),I(3c,01,2a,1c),I(87,1c,26,00),I(00,00,00,03),I(1d,24,00,00),B(sx_obj1 ,42),I(09,22,02,45),I(03,00,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 55 binding: (method-G004290) */
  static const void *G004655[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_4659, "compile time error condition: ", 30);
  eul_allocate_static_string(str_4660, "cannot import lexical module ~a", 31);
  /* Byte-vector with size: 32 is_init: 0 index: 58 binding: (method-G004290) */
  static const void *G004657[] = {I(ab,24,00,00),B(stream2 ,9),I(23,00,00,00),B(ex_import ,56),I(24,00,00,00),B(format ,4),I(3c,02,2a,24),B(stream2 ,9),I(1d,24,00,00),B(mop_access ,8),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,44),I(23,00,00,00),B(ex_import ,57),I(47,00,00,24),B(format ,2),I(3c,02,23,00),B(ex_import ,20),I(24,00,00,00),B(dynamic ,3),I(3c,01,24,00),B(i_error ,5),I(1d,23,00,00),B(ex_import ,16),I(1f,03,24,00),B(boot ,13),I(3d,04,04,22),I(02,45,02,00)};

  eul_allocate_static_string(str_4663, "  Import module ~a ...", 22);
  /* Byte-vector with size: 105 is_init: 0 index: 61 binding: import-module */
  static const void *G004661[] = {I(aa,46,01,1b),I(48,00,00,23),B(ex_import ,59),I(47,00,00,24),B(i_notify ,4),I(3c,02,2a,84),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_import ,18),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,8a),I(03,02,84,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_import ,60),I(23,00,00,00),B(ex_import ,58),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(8a,03,02,84),I(24,00,00,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_import ,60),I(23,00,00,00),B(ex_import ,55),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,24,00),B(sx_obj1 ,45),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,11),I(47,00,00,24),B(cg_interf ,26),I(3c,01,1b,26),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,59),I(08,23,00,00),B(ex_import ,18),I(23,00,00,00),B(ex_import ,54),I(3b,02,1c,24),B(aux_table ,7),I(3c,02,2a,47),I(00,00,24,00),B(sx_obj1 ,45),I(3c,01,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,11),I(1d,24,00,00),B(ex_import ,5),I(3c,01,2a,1d),I(83,24,00,00),B(dynamic ,6),I(3c,01,2a,1b),I(45,18,00,00)};

  eul_allocate_static_string(str_4667, "redefinition of expander ~a", 27);
  /* Byte-vector with size: 17 is_init: 0 index: 63 binding: install-import-expander */
  static const void *G004665[] = {I(ab,1c,24,00),B(ex_import ,3),I(3c,01,1b,34),I(00,00,00,1d),I(86,23,00,00),B(ex_import ,62),I(1f,04,24,00),B(i_notify ,5),I(3c,03,32,00),I(00,00,00,07),I(86,2a,24,00),B(ex_import ,3),I(24,00,00,00),B(boot1 ,42),I(3c,01,1f,03),I(1f,03,1d,3d),I(02,04,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 64 binding: anonymous */
  static const void *G004668[] = {I(ab,1c,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 65 binding: anonymous */
  static const void *G004670[] = {I(ab,1c,24,00),B(ex_import ,7),I(3d,01,02,00)};

  eul_allocate_static_string(str_4674, "no import expander ~a available", 31);
  eul_allocate_static_string(str_4675, "no import expander ~a available", 31);
  /* Byte-vector with size: 50 is_init: 0 index: 68 binding: import-expander */
  static const void *G004672[] = {I(ab,1c,7c,1b),I(34,00,00,00),I(00,00,00,20),I(23,00,00,00),B(ex_import ,18),I(23,00,00,00),B(ex_import ,65),I(3b,02,32,00),I(00,00,00,a2),I(1d,7a,12,1b),I(34,00,00,00),I(00,00,00,20),I(23,00,00,00),B(ex_import ,18),I(23,00,00,00),B(ex_import ,64),I(3b,02,32,00),I(00,00,00,7c),I(1f,03,10,7c),I(1b,34,00,00),I(00,00,00,4b),I(1f,04,10,24),B(ex_import ,3),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,2b),I(23,00,00,00),B(ex_import ,66),I(1f,06,24,00),B(format ,2),I(3c,02,24,00),B(condition ,8),I(1c,24,00,00),B(boot ,13),I(3c,02,22,01),I(22,01,32,00),I(00,00,00,2a),I(23,00,00,00),B(ex_import ,67),I(1f,05,24,00),B(format ,2),I(3c,02,24,00),B(condition ,8),I(1c,24,00,00),B(boot ,13),I(3c,02,22,01),I(22,01,22,01),I(1f,03,1f,03),I(1d,3d,02,04)};

  /* Byte-vector with size: 10 is_init: 0 index: 69 binding: make-prefix */
  static const void *G004676[] = {I(ab,1c,82,02),I(1c,82,02,1c),I(1c,24,00,00),B(collect ,17),I(3c,02,24,00),B(mop_class ,5),I(24,00,00,00),B(convert ,2),I(3d,02,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 83 is_init: 1 index: 0 binding: initialize-ex-import */
  static const void *G004678[] = {I(87,25,00,00),B(ex_import ,1),I(24,00,00,00),B(cg_interf ,1),I(3e,0b,24,00),B(cg_interf ,0),I(3c,00,21,01),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_node ,1),I(3e,0b,24,00),B(sx_node ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(ex_import ,70),I(23,00,00,00),B(ex_import ,69),I(3b,02,25,00),B(ex_import ,10),I(23,00,00,00),B(ex_import ,71),I(23,00,00,00),B(ex_import ,68),I(3b,02,25,00),B(ex_import ,9),I(23,00,00,00),B(ex_import ,72),I(23,00,00,00),B(ex_import ,63),I(3b,02,25,00),B(ex_import ,8),I(23,00,00,00),B(ex_import ,73),I(23,00,00,00),B(ex_import ,61),I(3b,01,25,00),B(ex_import ,7),I(23,00,00,00),B(ex_import ,74),I(23,00,00,00),B(ex_import ,53),I(3b,01,25,00),B(ex_import ,6),I(23,00,00,00),B(ex_import ,75),I(23,00,00,00),B(ex_import ,52),I(3b,01,25,00),B(ex_import ,5),I(23,00,00,00),B(ex_import ,76),I(23,00,00,00),B(ex_import ,51),I(3b,02,25,00),B(ex_import ,4),I(86,25,00,00),B(ex_import ,3),I(23,00,00,00),B(ex_import ,77),I(23,00,00,00),B(ex_import ,49),I(3b,01,25,00),B(ex_import ,2),I(23,00,00,00),B(ex_import ,78),I(23,00,00,00),B(ex_import ,48),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G004588,G004587);
  eul_allocate_bytevector( G004590,G004589);
  eul_allocate_bytevector( G004592,G004591);
  object_class(str_4595) = eul_static_string_class;
  object_class(str_4596) = eul_static_string_class;
  eul_intern_keyword(key_4597,"ct-error-value");
  eul_allocate_bytevector( G004594,G004593);
  eul_intern_symbol(sym_4600,"anonymous");
  eul_intern_symbol(sym_4601,"(method G004426)");
  eul_intern_symbol(sym_4602,"*actual-module*");
  eul_allocate_bytevector( G004599,G004598);
  eul_allocate_bytevector( G004604,G004603);
  eul_allocate_bytevector( G004606,G004605);
  eul_allocate_bytevector( G004608,G004607);
  object_class(str_4611) = eul_static_string_class;
  object_class(str_4612) = eul_static_string_class;
  eul_allocate_bytevector( G004610,G004609);
  eul_intern_symbol(sym_4615,"(method G004394)");
  eul_allocate_bytevector( G004614,G004613);
  eul_allocate_bytevector( G004617,G004616);
  eul_allocate_bytevector( G004619,G004618);
  object_class(str_4622) = eul_static_string_class;
  object_class(str_4623) = eul_static_string_class;
  eul_allocate_bytevector( G004621,G004620);
  eul_intern_symbol(sym_4626,"(method G004366)");
  eul_allocate_bytevector( G004625,G004624);
  eul_allocate_bytevector( G004628,G004627);
  eul_allocate_bytevector( G004630,G004629);
  object_class(str_4633) = eul_static_string_class;
  object_class(str_4634) = eul_static_string_class;
  eul_allocate_bytevector( G004632,G004631);
  eul_intern_symbol(sym_4637,"(method G004340)");
  eul_allocate_bytevector( G004636,G004635);
  eul_intern_symbol(sym_4640,"only");
  eul_intern_symbol(sym_4641,"except");
  eul_intern_symbol(sym_4642,"rename");
  eul_intern_symbol(sym_4643,"prefix");
  eul_allocate_bytevector( G004639,G004638);
  eul_allocate_bytevector( G004645,G004644);
  object_class(str_4648) = eul_static_string_class;
  eul_allocate_bytevector( G004647,G004646);
  eul_allocate_bytevector( G004650,G004649);
  eul_allocate_bytevector( G004652,G004651);
  eul_allocate_bytevector( G004654,G004653);
  eul_allocate_bytevector( G004656,G004655);
  object_class(str_4659) = eul_static_string_class;
  object_class(str_4660) = eul_static_string_class;
  eul_allocate_bytevector( G004658,G004657);
  object_class(str_4663) = eul_static_string_class;
  eul_intern_symbol(sym_4664,"(method G004290)");
  eul_allocate_bytevector( G004662,G004661);
  object_class(str_4667) = eul_static_string_class;
  eul_allocate_bytevector( G004666,G004665);
  eul_allocate_bytevector( G004669,G004668);
  eul_allocate_bytevector( G004671,G004670);
  object_class(str_4674) = eul_static_string_class;
  object_class(str_4675) = eul_static_string_class;
  eul_allocate_bytevector( G004673,G004672);
  eul_allocate_bytevector( G004677,G004676);
  eul_intern_symbol(sym_4680,"make-prefix");
  eul_intern_symbol(sym_4681,"import-expander");
  eul_intern_symbol(sym_4682,"install-import-expander");
  eul_intern_symbol(sym_4683,"import-module");
  eul_intern_symbol(sym_4684,"expand-import");
  eul_intern_symbol(sym_4685,"register-imported-module");
  eul_intern_symbol(sym_4686,"import-binding");
  eul_intern_symbol(sym_4687,"expand-old-imports");
  eul_intern_symbol(sym_4688,"top-level");
  eul_allocate_bytevector( G004679,G004678);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 11; i++)
      ex_import_bindings[i] = eul_nil;
  }

  ex_import_bindings[ 11] = G004588;
  ex_import_bindings[ 12] = G004590;
  ex_import_bindings[ 13] = G004592;
  ex_import_bindings[ 14] = str_4595;
  ex_import_bindings[ 15] = str_4596;
  ex_import_bindings[ 16] = key_4597;
  ex_import_bindings[ 17] = G004594;
  ex_import_bindings[ 18] = sym_4600;
  ex_import_bindings[ 19] = sym_4601;
  ex_import_bindings[ 20] = sym_4602;
  ex_import_bindings[ 21] = G004599;
  ex_import_bindings[ 22] = G004604;
  ex_import_bindings[ 23] = G004606;
  ex_import_bindings[ 24] = G004608;
  ex_import_bindings[ 25] = str_4611;
  ex_import_bindings[ 26] = str_4612;
  ex_import_bindings[ 27] = G004610;
  ex_import_bindings[ 28] = sym_4615;
  ex_import_bindings[ 29] = G004614;
  ex_import_bindings[ 30] = G004617;
  ex_import_bindings[ 31] = G004619;
  ex_import_bindings[ 32] = str_4622;
  ex_import_bindings[ 33] = str_4623;
  ex_import_bindings[ 34] = G004621;
  ex_import_bindings[ 35] = sym_4626;
  ex_import_bindings[ 36] = G004625;
  ex_import_bindings[ 37] = G004628;
  ex_import_bindings[ 38] = G004630;
  ex_import_bindings[ 39] = str_4633;
  ex_import_bindings[ 40] = str_4634;
  ex_import_bindings[ 41] = G004632;
  ex_import_bindings[ 42] = sym_4637;
  ex_import_bindings[ 43] = G004636;
  ex_import_bindings[ 44] = sym_4640;
  ex_import_bindings[ 45] = sym_4641;
  ex_import_bindings[ 46] = sym_4642;
  ex_import_bindings[ 47] = sym_4643;
  ex_import_bindings[ 48] = G004639;
  ex_import_bindings[ 49] = G004645;
  ex_import_bindings[ 50] = str_4648;
  ex_import_bindings[ 51] = G004647;
  ex_import_bindings[ 52] = G004650;
  ex_import_bindings[ 53] = G004652;
  ex_import_bindings[ 54] = G004654;
  ex_import_bindings[ 55] = G004656;
  ex_import_bindings[ 56] = str_4659;
  ex_import_bindings[ 57] = str_4660;
  ex_import_bindings[ 58] = G004658;
  ex_import_bindings[ 59] = str_4663;
  ex_import_bindings[ 60] = sym_4664;
  ex_import_bindings[ 61] = G004662;
  ex_import_bindings[ 62] = str_4667;
  ex_import_bindings[ 63] = G004666;
  ex_import_bindings[ 64] = G004669;
  ex_import_bindings[ 65] = G004671;
  ex_import_bindings[ 66] = str_4674;
  ex_import_bindings[ 67] = str_4675;
  ex_import_bindings[ 68] = G004673;
  ex_import_bindings[ 69] = G004677;
  ex_import_bindings[ 1] = eul_nil;
  ex_import_bindings[ 70] = sym_4680;
  ex_import_bindings[ 71] = sym_4681;
  ex_import_bindings[ 72] = sym_4682;
  ex_import_bindings[ 73] = sym_4683;
  ex_import_bindings[ 74] = sym_4684;
  ex_import_bindings[ 75] = sym_4685;
  ex_import_bindings[ 76] = sym_4686;
  ex_import_bindings[ 77] = sym_4687;
  ex_import_bindings[ 78] = sym_4688;
  eul_allocate_lambda( ex_import_bindings[0], "initialize-ex-import", 0, G004679);

  }
}


/* eof */
