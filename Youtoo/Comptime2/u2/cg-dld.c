/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module cg-dld
 **  Copyright: See file cg-dld.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_sx_obj();
extern void initialize_module_sx_node();
extern void initialize_module_ex_import();
extern void initialize_module_ex_syntax();
extern void initialize_module_i_modify();
extern void initialize_module_cg_interf();
extern void initialize_module_p_env();
extern LispRef ex_syntax_bindings[];
extern LispRef ex_import_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef i_all_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef sx_node_bindings[];
extern LispRef condition_bindings[];
extern LispRef stream_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef i_modify_bindings[];
extern LispRef collect_bindings[];
extern LispRef cg_interf_bindings[];
extern LispRef table_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef p_env_bindings[];
extern LispRef i_param_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef format_bindings[];
extern LispRef dynamic_bindings[];

/* Module bindings with size 64 */
LispRef cg_dld_bindings[64];

/* Foreign functions */
static LispRef ff_stub_eul_initialize_level_1_tables5800 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef res;

  FF_RES_CONVERT6(res,eul_initialize_level_1_tables());
  return res;
}

static LispRef ff_stub_eul_dyn_binding_ref5801 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G005872, G005873, res;

  POPVAL1(G005873);
  POPVAL1(G005872);
  FF_RES_CONVERT6(res,eul_dyn_binding_ref(FF_ARG_CONVERT3(G005872), FF_ARG_CONVERT0(G005873)));
  return res;
}

static LispRef ff_stub_eul_dyn_binding_set5802 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G005874, G005875, G005876, res;

  POPVAL1(G005876);
  POPVAL1(G005875);
  POPVAL1(G005874);
  FF_RES_CONVERT6(res,eul_dyn_binding_set(FF_ARG_CONVERT3(G005874), FF_ARG_CONVERT0(G005875), FF_ARG_CONVERT8(G005876)));
  return res;
}

static LispRef ff_stub_eul_dyn_load_module5803 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G005877, G005878, res;

  POPVAL1(G005878);
  POPVAL1(G005877);
  FF_RES_CONVERT0(res,eul_dyn_load_module(FF_ARG_CONVERT3(G005877), FF_ARG_CONVERT3(G005878)));
  return res;
}

static LispRef ff_stub_eul_module_name_as_C_module_name_string5804 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G005879, res;

  POPVAL1(G005879);
  FF_RES_CONVERT3(res,eul_module_name_as_C_module_name_string(FF_ARG_CONVERT8(G005879)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module cg-dld */
void initialize_module_cg_dld()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_sx_obj();
  initialize_module_sx_node();
  initialize_module_ex_import();
  initialize_module_ex_syntax();
  initialize_module_i_modify();
  initialize_module_cg_interf();
  initialize_module_p_env();
  eul_fast_table_set(eul_modules,"cg_dld",(LispRef) cg_dld_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_5871, sym_5870, sym_5869, sym_5868, sym_5867, sym_5866, sym_5865, sym_5864, sym_5863, G005862, G005858, G005856, G005854, G005851, G005849, sym_5847, sym_5846, sym_5845, key_5844, G005842, sym_5839, sym_5838, G005837, G005829, sym_5827, G005826, G005824, G005822, G005820, G005818, sym_5816, G005815, sym_5812, sym_5811, sym_5809, G005808, G005806;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 6 is_init: 0 index: 15 binding: anonymous */
  static const void *G005805[] = {I(a9,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_string(str_5810, "  ~a", 4);
  eul_allocate_static_string(str_5813, "Loading syntax module ~a ...", 28);
  /* Byte-vector with size: 44 is_init: 0 index: 21 binding: (method-load-syntax-module) */
  static const void *G005807[] = {I(aa,23,00,00),B(cg_dld ,16),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(cg_dld ,17),I(1c,24,00,00),B(format ,2),I(3c,02,23,00),B(cg_dld ,16),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(cg_dld ,18),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(cg_dld ,19),I(23,00,00,00),B(cg_dld ,15),I(3b,00,1c,0f),I(23,00,00,00),B(cg_dld ,18),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(cg_dld ,20),I(1f,05,24,00),B(i_notify ,3),I(3c,02,2a,1f),I(04,89,00,00),B(i_param ,63),I(2a,1f,04,24),B(cg_dld ,3),I(3c,01,1f,05),I(1c,24,00,00),B(p_env ,9),I(3c,02,83,24),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(45,07,00,00)};

  /* Byte-vector with size: 28 is_init: 0 index: 23 binding: top-level */
  static const void *G005814[] = {I(a9,24,00,00),B(i_param ,5),I(8a,03,02,83),I(86,24,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(i_param ,5),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(cg_dld ,22),I(23,00,00,00),B(cg_dld ,21),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(i_param ,5),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(cg_dld ,5),I(3d,00,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 24 binding: anonymous */
  static const void *G005817[] = {I(ab,1c,34,00),I(00,00,00,2e),I(24,00,00,00),B(table ,7),I(24,00,00,00),B(boot1 ,42),I(3c,01,47,00),I(00,1f,03,1f),I(03,1f,03,3c),I(03,2a,1c,22),I(01,32,00,00),I(00,00,00,0a),I(47,00,00,45),I(02,00,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 25 binding: anonymous */
  static const void *G005819[] = {I(aa,47,00,00),I(1c,24,00,00),B(table ,7),I(3d,02,01,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 26 binding: make-module-env */
  static const void *G005821[] = {I(aa,46,01,1b),I(48,00,00,23),B(cg_dld ,19),I(23,00,00,00),B(cg_dld ,25),I(3b,01,24,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,1c,23),B(cg_dld ,19),I(23,00,00,00),B(cg_dld ,24),I(3b,02,1d,3c),I(02,2a,1c,45),I(03,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 27 binding: anonymous */
  static const void *G005823[] = {I(aa,1b,24,00),B(cg_dld ,6),I(3c,01,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,12),I(1c,24,00,00),B(cg_dld ,3),I(3d,01,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 29 binding: anonymous */
  static const void *G005825[] = {I(a9,47,00,00),I(23,00,00,00),B(cg_dld ,28),I(50,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,22),I(24,00,00,00),B(i_param ,19),I(24,00,00,00),B(boot1 ,42),I(3c,01,47,00),I(00,86,1d,3c),I(02,22,01,2a),I(47,00,01,89),B(i_param ,20),I(2a,83,24,00),B(dynamic ,8),I(3d,01,01,00)};

  eul_allocate_static_string(str_5830, ".i", 2);
  eul_allocate_static_string(str_5831, ".c", 2);
  eul_allocate_static_string(str_5832, "Dynamically linking module ~a ...", 33);
  eul_allocate_static_string(str_5833, "initialize literals module ~a ...", 33);
  eul_allocate_static_string(str_5834, "run module ~a", 13);
  eul_allocate_static_string(str_5835, "module ~a can't be loaded correctly", 35);
  /* Byte-vector with size: 189 is_init: 0 index: 36 binding: dynamic-load-module */
  static const void *G005828[] = {I(43,fe,46,02),I(1c,48,00,00),I(24,00,00,00),B(i_param ,20),I(1b,48,00,01),I(23,00,00,00),B(cg_dld ,18),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(cg_dld ,19),I(23,00,00,00),B(cg_dld ,29),I(3b,00,1c,0f),I(23,00,00,00),B(cg_dld ,18),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,1f),I(03,12,1b,34),I(00,00,00,15),I(47,00,00,24),B(cg_dld ,6),I(3c,01,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,32),I(47,00,00,24),B(p_env ,14),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,11),I(47,00,00,24),B(cg_interf ,12),I(3c,01,1b,22),I(02,32,00,00),I(00,00,02,15),I(86,89,00,00),B(i_param ,20),I(2a,1f,05,12),I(1b,34,00,00),I(00,00,00,8b),I(47,00,00,24),B(p_env ,14),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,6b),I(47,00,00,7d),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,0c),I(47,00,00,82),I(02,24,00,00),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1d,23,00,00),B(cg_dld ,30),I(24,00,00,00),B(collect ,17),I(3c,04,24,00),B(i_modify ,7),I(3c,01,1b,34),I(00,00,00,15),I(47,00,00,24),B(cg_interf ,12),I(3c,01,32,00),I(00,00,00,10),I(47,00,00,24),B(i_param ,18),I(3c,01,22,03),I(22,01,32,00),I(00,00,00,10),I(47,00,00,24),B(i_param ,18),I(3c,01,47,00),I(01,89,00,00),B(i_param ,20),I(2a,1b,26,00),I(00,00,00,03),I(24,00,00,00),B(sx_obj1 ,59),I(08,1c,84,24),B(sx_obj1 ,59),I(08,2a,47,00),I(00,7d,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,0c),I(47,00,00,82),I(02,24,00,00),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1d,23,00,00),B(cg_dld ,31),I(24,00,00,00),B(collect ,17),I(3c,04,47,00),I(00,41,00,00),B(cg_dld ,14),I(22,01,24,00),B(stream ,19),I(1d,24,00,00),B(i_param ,16),I(24,00,00,00),B(boot ,5),I(3c,03,10,23),B(cg_dld ,19),I(23,00,00,00),B(cg_dld ,27),I(3b,01,1f,06),I(24,00,00,00),B(boot ,17),I(3c,02,2a,23),B(cg_dld ,32),I(47,00,00,24),B(i_notify ,3),I(3c,02,2a,1c),I(1c,41,00,00),B(cg_dld ,13),I(22,02,82,1c),I(1a,1b,34,00),I(00,00,00,8a),I(1f,08,1d,1c),I(26,00,00,00),I(00,00,00,12),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1c,26,00,00),I(00,00,01,00),I(14,1f,09,1c),I(1c,26,00,00),I(00,00,00,11),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(23,00,00,00),B(cg_dld ,33),I(47,00,00,24),B(i_notify ,4),I(3c,02,2a,1f),I(09,47,00,00),I(24,00,00,00),B(cg_dld ,8),I(3c,02,2a,23),B(cg_dld ,34),I(47,00,00,24),B(i_notify ,4),I(3c,02,2a,1f),I(04,82,41,00),B(cg_dld ,11),I(22,02,1b,3c),I(00,2a,1f,0a),I(22,02,32,00),I(00,00,00,2a),I(23,00,00,00),B(cg_dld ,35),I(47,00,00,24),B(format ,2),I(3c,02,24,00),B(condition ,8),I(1c,24,00,00),B(boot ,13),I(3c,02,22,01),I(22,0a,47,00),I(00,23,00,00),B(cg_dld ,28),I(50,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,22),I(24,00,00,00),B(i_param ,19),I(24,00,00,00),B(boot1 ,42),I(3c,01,47,00),I(00,86,1d,3c),I(02,22,01,2a),I(47,00,01,89),B(i_param ,20),I(2a,83,24,00),B(dynamic ,8),I(3c,01,2a,1c),I(45,09,00,00)};

  eul_allocate_static_string(str_5840, "binding ~a not accessable in module ~a", 38);
  /* Byte-vector with size: 50 is_init: 0 index: 40 binding: as-dynamic-binding */
  static const void *G005836[] = {I(aa,1b,83,24),B(sx_obj1 ,42),I(08,1c,26,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,1b,7c,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,18),I(1c,26,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,1f,04,23),B(cg_dld ,37),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,19),I(1f,05,23,00),B(cg_dld ,38),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,34),I(00,00,00,41),I(1f,06,26,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,23,00,00),B(cg_dld ,39),I(1c,24,00,00),B(format ,2),I(3c,02,24,00),B(condition ,8),I(1c,1f,06,24),B(boot ,13),I(3d,03,09,22),I(02,32,00,00),I(00,00,00,1d),I(1d,41,00,00),B(cg_dld ,14),I(22,01,1b,1f),I(07,41,00,00),B(cg_dld ,11),I(22,03,45,07)};

  eul_allocate_static_string(str_5843, "Create default modules ...", 26);
  /* Byte-vector with size: 141 is_init: 0 index: 46 binding: create-default-modules */
  static const void *G005841[] = {I(a9,23,00,00),B(cg_dld ,41),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,41),B(cg_dld ,10),I(1b,82,02,1c),I(83,02,1d,84),I(02,24,00,00),B(boot ,29),I(3c,01,1f,03),I(26,00,00,00),I(00,00,00,03),I(02,24,00,00),B(mop_class ,5),I(23,00,00,00),B(cg_dld ,42),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1f,05),I(26,00,00,00),I(00,00,00,04),I(02,24,00,00),B(mop_class ,5),I(23,00,00,00),B(cg_dld ,42),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1d,24),B(sx_node ,3),I(3c,01,1c,24),B(sx_node ,3),I(3c,01,23,00),B(cg_dld ,28),I(24,00,00,00),B(sx_node ,3),I(3c,01,23,00),B(cg_dld ,43),I(24,00,00,00),B(sx_node ,3),I(3c,01,2a,23),B(cg_dld ,44),I(24,00,00,00),B(sx_node ,3),I(3c,01,1f,0a),I(24,00,00,00),B(cg_dld ,2),I(3c,01,1f,0a),I(24,00,00,00),B(cg_dld ,2),I(3c,01,23,00),B(cg_dld ,45),I(24,00,00,00),B(sx_node ,3),I(3c,01,1f,06),I(86,1c,26,00),I(00,00,00,12),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,06,1f,03),I(1c,26,00,00),I(00,00,00,0f),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,05,86,1c),I(26,00,00,00),I(00,00,00,12),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,05,1d,1c),I(26,00,00,00),I(00,00,00,0f),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,03,1f,03),I(1c,26,00,00),I(00,00,00,10),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,03,1f,03),I(1c,26,00,00),I(00,00,00,0f),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,03,1d,1c),I(26,00,00,00),I(00,00,00,0e),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1b,86,1c,26),I(00,00,00,12),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1b,1d,1c,26),I(00,00,00,0f),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,04,84,1c),I(26,00,00,00),I(00,00,00,12),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,04,26,00),I(00,00,04,00),I(1c,26,00,00),I(00,00,00,11),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,04,1f,03),I(1c,26,00,00),I(00,00,00,10),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,04,1f,03),I(1c,26,00,00),I(00,00,00,0f),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,04,1d,1c),I(26,00,00,00),I(00,00,00,0e),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,06,1f,0c),I(1c,83,1d,24),B(sx_obj1 ,59),I(09,45,11,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 47 binding: module-loaded? */
  static const void *G005848[] = {I(aa,41,00,00),B(cg_dld ,14),I(22,01,82,41),B(cg_dld ,11),I(45,02,00,00)};

  eul_allocate_static_string(str_5852, "binding ~a not available in module ~a", 37);
  /* Byte-vector with size: 41 is_init: 0 index: 49 binding: dynamic-binding-ref */
  static const void *G005850[] = {I(ab,1b,24,00),B(p_env ,14),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,11),I(1c,24,00,00),B(cg_interf ,12),I(3c,01,1f,03),I(1c,24,00,00),B(p_env ,10),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,63),I(1f,04,1d,24),B(p_env ,7),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,49),I(1f,05,1f,03),I(24,00,00,00),B(p_env ,19),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,2b),I(23,00,00,00),B(cg_dld ,48),I(1f,07,24,00),B(format ,2),I(3c,02,24,00),B(condition ,8),I(1c,1f,08,24),B(boot ,13),I(3c,03,22,01),I(22,01,22,01),I(24,00,00,00),B(cg_dld ,4),I(3d,01,05,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 50 binding: anonymous */
  static const void *G005853[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,25),I(1c,10,1b,11),I(1c,10,47,00),I(00,1d,1d,41),B(cg_dld ,12),I(22,03,2a,1f),I(04,11,47,00),I(01,3d,01,05),I(22,03,45,02)};

  /* Byte-vector with size: 16 is_init: 0 index: 51 binding: dynamic-initialize-local-literals */
  static const void *G005855[] = {I(ab,46,02,41),B(cg_dld ,14),I(22,01,1c,26),I(00,00,00,04),I(24,00,00,00),B(sx_obj1 ,59),I(08,1c,48,00),I(00,86,1b,48),I(00,01,23,00),B(cg_dld ,19),I(23,00,00,00),B(cg_dld ,50),I(3b,01,48,00),I(01,1c,47,00),I(01,3d,01,04),I(45,04,00,00)};

  eul_allocate_static_string(str_5859, "binding ~a not available in module ~a", 37);
  eul_allocate_static_string(str_5860, "binding ~a not accessable in module ~a", 38);
  /* Byte-vector with size: 75 is_init: 0 index: 54 binding: dynamic-binding-set */
  static const void *G005857[] = {I(43,03,1c,24),B(p_env ,14),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,11),I(1d,24,00,00),B(cg_interf ,12),I(3c,01,1f,04),I(1c,24,00,00),B(p_env ,10),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,63),I(1f,05,1d,24),B(p_env ,7),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,49),I(1f,06,1f,03),I(24,00,00,00),B(p_env ,19),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,2b),I(23,00,00,00),B(cg_dld ,52),I(1f,08,24,00),B(format ,2),I(3c,02,24,00),B(condition ,8),I(1c,1f,09,24),B(boot ,13),I(3c,03,22,01),I(22,01,22,01),I(1b,83,24,00),B(sx_obj1 ,42),I(08,1c,26,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,1d,23,00),B(cg_dld ,37),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,19),I(1f,03,23,00),B(cg_dld ,38),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,34),I(00,00,00,31),I(23,00,00,00),B(cg_dld ,53),I(1f,0b,24,00),B(format ,2),I(3c,02,24,00),B(condition ,8),I(1c,1f,0c,24),B(boot ,13),I(3d,03,0c,22),I(01,32,00,00),I(00,00,00,1d),I(1d,41,00,00),B(cg_dld ,14),I(22,01,1b,1f),I(05,1f,0b,41),B(cg_dld ,12),I(22,04,45,0b)};

  /* Byte-vector with size: 96 is_init: 1 index: 0 binding: initialize-cg-dld */
  static const void *G005861[] = {I(87,25,00,00),B(cg_dld ,1),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_interf ,1),I(3e,0b,24,00),B(cg_interf ,0),I(3c,00,21,01),I(24,00,00,00),B(i_modify ,1),I(3e,0b,24,00),B(i_modify ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_syntax ,1),I(3e,0b,24,00),B(ex_syntax ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_import ,1),I(3e,0b,24,00),B(ex_import ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_node ,1),I(3e,0b,24,00),B(sx_node ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(cg_dld ,55),I(23,00,00,00),B(cg_dld ,54),I(3b,03,25,00),B(cg_dld ,9),I(23,00,00,00),B(cg_dld ,56),I(23,00,00,00),B(cg_dld ,51),I(3b,02,25,00),B(cg_dld ,8),I(23,00,00,00),B(cg_dld ,57),I(23,00,00,00),B(cg_dld ,49),I(3b,02,25,00),B(cg_dld ,7),I(23,00,00,00),B(cg_dld ,58),I(23,00,00,00),B(cg_dld ,47),I(3b,01,25,00),B(cg_dld ,6),I(23,00,00,00),B(cg_dld ,59),I(23,00,00,00),B(cg_dld ,46),I(3b,00,25,00),B(cg_dld ,5),I(23,00,00,00),B(cg_dld ,60),I(23,00,00,00),B(cg_dld ,40),I(3b,01,25,00),B(cg_dld ,4),I(23,00,00,00),B(cg_dld ,61),I(23,00,00,00),B(cg_dld ,36),I(3b,fe,25,00),B(cg_dld ,3),I(23,00,00,00),B(cg_dld ,62),I(23,00,00,00),B(cg_dld ,26),I(3b,01,25,00),B(cg_dld ,2),I(23,00,00,00),B(cg_dld ,63),I(23,00,00,00),B(cg_dld ,23),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G005806,G005805);
  eul_intern_symbol(sym_5809,"*indent*");
  object_class(str_5810) = eul_static_string_class;
  eul_intern_symbol(sym_5811,"*clean-ups*");
  eul_intern_symbol(sym_5812,"anonymous");
  object_class(str_5813) = eul_static_string_class;
  eul_allocate_bytevector( G005808,G005807);
  eul_intern_symbol(sym_5816,"(method load-syntax-module)");
  eul_allocate_bytevector( G005815,G005814);
  eul_allocate_bytevector( G005818,G005817);
  eul_allocate_bytevector( G005820,G005819);
  eul_allocate_bytevector( G005822,G005821);
  eul_allocate_bytevector( G005824,G005823);
  eul_intern_symbol(sym_5827,"user");
  eul_allocate_bytevector( G005826,G005825);
  object_class(str_5830) = eul_static_string_class;
  object_class(str_5831) = eul_static_string_class;
  object_class(str_5832) = eul_static_string_class;
  object_class(str_5833) = eul_static_string_class;
  object_class(str_5834) = eul_static_string_class;
  object_class(str_5835) = eul_static_string_class;
  eul_allocate_bytevector( G005829,G005828);
  eul_intern_symbol(sym_5838,"opencoding");
  eul_intern_symbol(sym_5839,"ff");
  object_class(str_5840) = eul_static_string_class;
  eul_allocate_bytevector( G005837,G005836);
  object_class(str_5843) = eul_static_string_class;
  eul_intern_keyword(key_5844,"name");
  eul_intern_symbol(sym_5845,"math");
  eul_intern_symbol(sym_5846,"level-0");
  eul_intern_symbol(sym_5847,"syntax-0");
  eul_allocate_bytevector( G005842,G005841);
  eul_allocate_bytevector( G005849,G005848);
  object_class(str_5852) = eul_static_string_class;
  eul_allocate_bytevector( G005851,G005850);
  eul_allocate_bytevector( G005854,G005853);
  eul_allocate_bytevector( G005856,G005855);
  object_class(str_5859) = eul_static_string_class;
  object_class(str_5860) = eul_static_string_class;
  eul_allocate_bytevector( G005858,G005857);
  eul_intern_symbol(sym_5863,"dynamic-binding-set");
  eul_intern_symbol(sym_5864,"dynamic-initialize-local-literals");
  eul_intern_symbol(sym_5865,"dynamic-binding-ref");
  eul_intern_symbol(sym_5866,"module-loaded?");
  eul_intern_symbol(sym_5867,"create-default-modules");
  eul_intern_symbol(sym_5868,"as-dynamic-binding");
  eul_intern_symbol(sym_5869,"dynamic-load-module");
  eul_intern_symbol(sym_5870,"make-module-env");
  eul_intern_symbol(sym_5871,"top-level");
  eul_allocate_bytevector( G005862,G005861);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 10; i++)
      cg_dld_bindings[i] = eul_nil;
  }

  cg_dld_bindings[ 10] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_initialize_level_1_tables5800;
  cg_dld_bindings[ 11] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dyn_binding_ref5801;
  cg_dld_bindings[ 12] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dyn_binding_set5802;
  cg_dld_bindings[ 13] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dyn_load_module5803;
  cg_dld_bindings[ 14] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_module_name_as_C_module_name_string5804;
  cg_dld_bindings[ 15] = G005806;
  cg_dld_bindings[ 16] = sym_5809;
  cg_dld_bindings[ 17] = str_5810;
  cg_dld_bindings[ 18] = sym_5811;
  cg_dld_bindings[ 19] = sym_5812;
  cg_dld_bindings[ 20] = str_5813;
  cg_dld_bindings[ 21] = G005808;
  cg_dld_bindings[ 22] = sym_5816;
  cg_dld_bindings[ 23] = G005815;
  cg_dld_bindings[ 24] = G005818;
  cg_dld_bindings[ 25] = G005820;
  cg_dld_bindings[ 26] = G005822;
  cg_dld_bindings[ 27] = G005824;
  cg_dld_bindings[ 28] = sym_5827;
  cg_dld_bindings[ 29] = G005826;
  cg_dld_bindings[ 30] = str_5830;
  cg_dld_bindings[ 31] = str_5831;
  cg_dld_bindings[ 32] = str_5832;
  cg_dld_bindings[ 33] = str_5833;
  cg_dld_bindings[ 34] = str_5834;
  cg_dld_bindings[ 35] = str_5835;
  cg_dld_bindings[ 36] = G005829;
  cg_dld_bindings[ 37] = sym_5838;
  cg_dld_bindings[ 38] = sym_5839;
  cg_dld_bindings[ 39] = str_5840;
  cg_dld_bindings[ 40] = G005837;
  cg_dld_bindings[ 41] = str_5843;
  cg_dld_bindings[ 42] = key_5844;
  cg_dld_bindings[ 43] = sym_5845;
  cg_dld_bindings[ 44] = sym_5846;
  cg_dld_bindings[ 45] = sym_5847;
  cg_dld_bindings[ 46] = G005842;
  cg_dld_bindings[ 47] = G005849;
  cg_dld_bindings[ 48] = str_5852;
  cg_dld_bindings[ 49] = G005851;
  cg_dld_bindings[ 50] = G005854;
  cg_dld_bindings[ 51] = G005856;
  cg_dld_bindings[ 52] = str_5859;
  cg_dld_bindings[ 53] = str_5860;
  cg_dld_bindings[ 54] = G005858;
  cg_dld_bindings[ 1] = eul_nil;
  cg_dld_bindings[ 55] = sym_5863;
  cg_dld_bindings[ 56] = sym_5864;
  cg_dld_bindings[ 57] = sym_5865;
  cg_dld_bindings[ 58] = sym_5866;
  cg_dld_bindings[ 59] = sym_5867;
  cg_dld_bindings[ 60] = sym_5868;
  cg_dld_bindings[ 61] = sym_5869;
  cg_dld_bindings[ 62] = sym_5870;
  cg_dld_bindings[ 63] = sym_5871;
  eul_allocate_lambda( cg_dld_bindings[0], "initialize-cg-dld", 0, G005862);

  }
}


/* eof */
