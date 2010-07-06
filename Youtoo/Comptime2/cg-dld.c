/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module cg-dld
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
extern LispRef stream_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef i_modify_bindings[];
extern LispRef string_bindings[];
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

/* Module bindings with size 63 */
LispRef cg_dld_bindings[63];

/* Foreign functions */
static LispRef ff_stub_eul_initialize_level1_tables5718 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef res;

  FF_RES_CONVERT6(res,eul_initialize_level1_tables());
  return res;
}

static LispRef ff_stub_eul_dyn_binding_ref5719 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G005789, G005790, res;

  POPVAL1(G005790);
  POPVAL1(G005789);
  FF_RES_CONVERT6(res,eul_dyn_binding_ref(FF_ARG_CONVERT3(G005789), FF_ARG_CONVERT0(G005790)));
  return res;
}

static LispRef ff_stub_eul_dyn_binding_set5720 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G005791, G005792, G005793, res;

  POPVAL1(G005793);
  POPVAL1(G005792);
  POPVAL1(G005791);
  FF_RES_CONVERT6(res,eul_dyn_binding_set(FF_ARG_CONVERT3(G005791), FF_ARG_CONVERT0(G005792), FF_ARG_CONVERT8(G005793)));
  return res;
}

static LispRef ff_stub_eul_dyn_load_module5721 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G005794, G005795, res;

  POPVAL1(G005795);
  POPVAL1(G005794);
  FF_RES_CONVERT0(res,eul_dyn_load_module(FF_ARG_CONVERT3(G005794), FF_ARG_CONVERT3(G005795)));
  return res;
}

static LispRef ff_stub_eul_module_name_as_C_module_name_string5722 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G005796, res;

  POPVAL1(G005796);
  FF_RES_CONVERT3(res,eul_module_name_as_C_module_name_string(FF_ARG_CONVERT8(G005796)));
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
  LispRef sym_5788, sym_5787, sym_5786, sym_5785, sym_5784, sym_5783, sym_5782, sym_5781, sym_5780, G005779, G005775, G005773, G005771, G005768, G005766, sym_5764, sym_5763, key_5762, G005760, sym_5757, sym_5756, G005755, G005747, sym_5745, G005744, G005742, G005740, G005738, G005736, sym_5734, G005733, sym_5730, sym_5729, sym_5727, G005726, G005724;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 6 is_init: 0 index: 15 binding: anonymous */
  static const void *G005723[] = {I(a9,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_string(str_5728, "  ~a", 4);
  eul_allocate_static_string(str_5731, "Loading syntax module ~a ...", 28);
  /* Byte-vector with size: 44 is_init: 0 index: 21 binding: (method-load-syntax-module) */
  static const void *G005725[] = {I(aa,23,00,00),B(cg_dld ,16),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(cg_dld ,17),I(1c,24,00,00),B(format ,2),I(3c,02,23,00),B(cg_dld ,16),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(cg_dld ,18),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(cg_dld ,19),I(23,00,00,00),B(cg_dld ,15),I(3b,00,1c,0f),I(23,00,00,00),B(cg_dld ,18),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(cg_dld ,20),I(1f,05,24,00),B(i_notify ,3),I(3c,02,2a,1f),I(04,89,00,00),B(i_param ,61),I(2a,1f,04,24),B(cg_dld ,3),I(3c,01,1f,05),I(1c,24,00,00),B(p_env ,9),I(3c,02,83,24),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(45,07,00,00)};

  /* Byte-vector with size: 30 is_init: 0 index: 23 binding: top-level */
  static const void *G005732[] = {I(a9,24,00,00),B(i_param ,5),I(26,00,00,00),I(00,00,00,03),I(02,83,86,24),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(i_param ,5),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(cg_dld ,22),I(23,00,00,00),B(cg_dld ,21),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(i_param ,5),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(cg_dld ,5),I(3d,00,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 24 binding: anonymous */
  static const void *G005735[] = {I(ab,1c,34,00),I(00,00,00,2e),I(24,00,00,00),B(table ,5),I(24,00,00,00),B(boot1 ,41),I(3c,01,47,00),I(00,1f,03,1f),I(03,1f,03,3c),I(03,2a,1c,22),I(01,32,00,00),I(00,00,00,0a),I(47,00,00,45),I(02,00,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 25 binding: anonymous */
  static const void *G005737[] = {I(aa,47,00,00),I(1c,24,00,00),B(table ,5),I(3d,02,01,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 26 binding: make-module-env */
  static const void *G005739[] = {I(aa,46,01,1b),I(48,00,00,23),B(cg_dld ,19),I(23,00,00,00),B(cg_dld ,25),I(3b,01,24,00),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,1c,23),B(cg_dld ,19),I(23,00,00,00),B(cg_dld ,24),I(3b,02,1d,3c),I(02,2a,1c,45),I(03,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 27 binding: anonymous */
  static const void *G005741[] = {I(aa,1b,24,00),B(cg_dld ,6),I(3c,01,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,12),I(1c,24,00,00),B(cg_dld ,3),I(3d,01,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 29 binding: anonymous */
  static const void *G005743[] = {I(a9,47,00,00),I(23,00,00,00),B(cg_dld ,28),I(50,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,22),I(24,00,00,00),B(i_param ,19),I(24,00,00,00),B(boot1 ,41),I(3c,01,47,00),I(00,86,1d,3c),I(02,22,01,2a),I(47,00,01,89),B(i_param ,20),I(2a,83,24,00),B(dynamic ,8),I(3d,01,01,00)};

  eul_allocate_static_string(str_5748, ".i", 2);
  eul_allocate_static_string(str_5749, ".c", 2);
  eul_allocate_static_string(str_5750, "Dynamically linking module ~a ...", 33);
  eul_allocate_static_string(str_5751, "initialize literals module ~a ...", 33);
  eul_allocate_static_string(str_5752, "run module ~a", 13);
  eul_allocate_static_string(str_5753, "module ~a can't be loaded correctly", 35);
  /* Byte-vector with size: 176 is_init: 0 index: 36 binding: dynamic-load-module */
  static const void *G005746[] = {I(43,fe,46,02),I(1c,48,00,00),I(24,00,00,00),B(i_param ,20),I(1b,48,00,01),I(23,00,00,00),B(cg_dld ,18),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(cg_dld ,19),I(23,00,00,00),B(cg_dld ,29),I(3b,00,1c,0f),I(23,00,00,00),B(cg_dld ,18),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,1f),I(03,12,1b,34),I(00,00,00,15),I(47,00,00,24),B(cg_dld ,6),I(3c,01,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,32),I(47,00,00,24),B(p_env ,14),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,11),I(47,00,00,24),B(cg_interf ,12),I(3c,01,1b,22),I(02,32,00,00),I(00,00,01,e3),I(86,89,00,00),B(i_param ,20),I(2a,1f,05,12),I(1b,34,00,00),I(00,00,00,7b),I(47,00,00,24),B(p_env ,14),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,5b),I(47,00,00,7d),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,0c),I(47,00,00,82),I(02,1b,23,00),B(cg_dld ,30),I(24,00,00,00),B(string ,11),I(3c,02,24,00),B(i_modify ,7),I(3c,01,1b,34),I(00,00,00,15),I(47,00,00,24),B(cg_interf ,12),I(3c,01,32,00),I(00,00,00,10),I(47,00,00,24),B(i_param ,18),I(3c,01,22,03),I(22,01,32,00),I(00,00,00,10),I(47,00,00,24),B(i_param ,18),I(3c,01,47,00),I(01,89,00,00),B(i_param ,20),I(2a,1b,26,00),I(00,00,00,03),I(24,00,00,00),B(sx_obj1 ,59),I(08,1c,84,24),B(sx_obj1 ,59),I(08,2a,47,00),I(00,7d,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,0c),I(47,00,00,82),I(02,23,00,00),B(cg_dld ,31),I(24,00,00,00),B(string ,11),I(3c,02,47,00),I(00,41,00,00),B(cg_dld ,14),I(22,01,24,00),B(stream ,17),I(1d,24,00,00),B(i_param ,16),I(24,00,00,00),B(boot ,5),I(3c,03,10,23),B(cg_dld ,19),I(23,00,00,00),B(cg_dld ,27),I(3b,01,1f,05),I(24,00,00,00),B(boot ,16),I(3c,02,2a,23),B(cg_dld ,32),I(47,00,00,24),B(i_notify ,3),I(3c,02,2a,1c),I(1c,41,00,00),B(cg_dld ,13),I(22,02,82,1c),I(1a,1b,34,00),I(00,00,00,8a),I(1f,07,1d,1c),I(26,00,00,00),I(00,00,00,12),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1c,26,00,00),I(00,00,01,00),I(14,1f,08,1c),I(1c,26,00,00),I(00,00,00,11),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(23,00,00,00),B(cg_dld ,33),I(47,00,00,24),B(i_notify ,4),I(3c,02,2a,1f),I(08,47,00,00),I(24,00,00,00),B(cg_dld ,8),I(3c,02,2a,23),B(cg_dld ,34),I(47,00,00,24),B(i_notify ,4),I(3c,02,2a,1f),I(04,82,41,00),B(cg_dld ,11),I(22,02,1b,3c),I(00,2a,1f,09),I(22,02,32,00),I(00,00,00,18),I(23,00,00,00),B(cg_dld ,35),I(47,00,00,24),B(boot ,12),I(3c,02,22,09),I(47,00,00,23),B(cg_dld ,28),I(50,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,22),I(24,00,00,00),B(i_param ,19),I(24,00,00,00),B(boot1 ,41),I(3c,01,47,00),I(00,86,1d,3c),I(02,22,01,2a),I(47,00,01,89),B(i_param ,20),I(2a,83,24,00),B(dynamic ,8),I(3c,01,2a,1c),I(45,09,00,00)};

  eul_allocate_static_string(str_5758, "binding ~a not accessable in module ~a", 38);
  /* Byte-vector with size: 46 is_init: 0 index: 40 binding: as-dynamic-binding */
  static const void *G005754[] = {I(aa,1b,83,24),B(sx_obj1 ,42),I(08,1c,26,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,1b,7c,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,18),I(1c,26,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,1f,04,23),B(cg_dld ,37),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,19),I(1f,05,23,00),B(cg_dld ,38),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,34),I(00,00,00,31),I(1f,06,26,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,23,00,00),B(cg_dld ,39),I(1c,1f,05,24),B(boot ,12),I(3d,03,08,22),I(01,32,00,00),I(00,00,00,1d),I(1d,41,00,00),B(cg_dld ,14),I(22,01,1b,1f),I(07,41,00,00),B(cg_dld ,11),I(22,03,45,07)};

  eul_allocate_static_string(str_5761, "Create default modules ...", 26);
  /* Byte-vector with size: 124 is_init: 0 index: 45 binding: create-default-modules */
  static const void *G005759[] = {I(a9,23,00,00),B(cg_dld ,41),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,41),B(cg_dld ,10),I(1b,82,02,1c),I(83,02,1d,84),I(02,24,00,00),B(boot ,26),I(3c,01,1f,03),I(26,00,00,00),I(00,00,00,03),I(02,24,00,00),B(mop_class ,5),I(23,00,00,00),B(cg_dld ,42),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1f,05),I(26,00,00,00),I(00,00,00,04),I(02,24,00,00),B(mop_class ,5),I(23,00,00,00),B(cg_dld ,42),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1d,24),B(sx_node ,3),I(3c,01,1c,24),B(sx_node ,3),I(3c,01,23,00),B(cg_dld ,28),I(24,00,00,00),B(sx_node ,3),I(3c,01,23,00),B(cg_dld ,43),I(24,00,00,00),B(sx_node ,3),I(3c,01,2a,23),B(cg_dld ,44),I(24,00,00,00),B(sx_node ,3),I(3c,01,1f,0a),I(24,00,00,00),B(cg_dld ,2),I(3c,01,1f,0a),I(24,00,00,00),B(cg_dld ,2),I(3c,01,1f,05),I(86,1c,26,00),I(00,00,00,12),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,04,86,1c),I(26,00,00,00),I(00,00,00,12),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,05,1d,1c),I(26,00,00,00),I(00,00,00,0f),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,04,1c,1c),I(26,00,00,00),I(00,00,00,0f),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1d,1d,1c,26),I(00,00,00,10),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1d,1d,1c,26),I(00,00,00,0f),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1d,1c,1c,26),I(00,00,00,0e),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,03,84,1c),I(26,00,00,00),I(00,00,00,12),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,03,26,00),I(00,00,04,00),I(1c,26,00,00),I(00,00,00,11),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,03,1d,1c),I(26,00,00,00),I(00,00,00,10),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,03,1d,1c),I(26,00,00,00),I(00,00,00,0f),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,03,1c,1c),I(26,00,00,00),I(00,00,00,0e),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,05,1f,0b),I(1c,83,1d,24),B(sx_obj1 ,59),I(09,45,10,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 46 binding: module-loaded? */
  static const void *G005765[] = {I(aa,41,00,00),B(cg_dld ,14),I(22,01,82,41),B(cg_dld ,11),I(45,02,00,00)};

  eul_allocate_static_string(str_5769, "binding ~a not available in module ~a", 37);
  /* Byte-vector with size: 37 is_init: 0 index: 48 binding: dynamic-binding-ref */
  static const void *G005767[] = {I(ab,1b,24,00),B(p_env ,14),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,11),I(1c,24,00,00),B(cg_interf ,12),I(3c,01,1f,03),I(1c,24,00,00),B(p_env ,10),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,55),I(1f,04,1d,24),B(p_env ,7),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,3b),I(1f,05,1f,03),I(24,00,00,00),B(p_env ,19),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,1d),I(23,00,00,00),B(cg_dld ,47),I(1f,07,1f,07),I(24,00,00,00),B(boot ,12),I(3c,03,22,01),I(22,01,24,00),B(cg_dld ,4),I(3d,01,05,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 49 binding: anonymous */
  static const void *G005770[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,25),I(1c,10,1b,11),I(1c,10,47,00),I(00,1d,1d,41),B(cg_dld ,12),I(22,03,2a,1f),I(04,11,47,00),I(01,3d,01,05),I(22,03,45,02)};

  /* Byte-vector with size: 16 is_init: 0 index: 50 binding: dynamic-initialize-local-literals */
  static const void *G005772[] = {I(ab,46,02,41),B(cg_dld ,14),I(22,01,1c,26),I(00,00,00,04),I(24,00,00,00),B(sx_obj1 ,59),I(08,1c,48,00),I(00,86,1b,48),I(00,01,23,00),B(cg_dld ,19),I(23,00,00,00),B(cg_dld ,49),I(3b,01,48,00),I(01,1c,47,00),I(01,3d,01,04),I(45,04,00,00)};

  eul_allocate_static_string(str_5776, "binding ~a not available in module ~a", 37);
  eul_allocate_static_string(str_5777, "binding ~a not accessable in module ~a", 38);
  /* Byte-vector with size: 68 is_init: 0 index: 53 binding: dynamic-binding-set */
  static const void *G005774[] = {I(43,03,1c,24),B(p_env ,14),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,11),I(1d,24,00,00),B(cg_interf ,12),I(3c,01,1f,04),I(1c,24,00,00),B(p_env ,10),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,55),I(1f,05,1d,24),B(p_env ,7),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,3b),I(1f,06,1f,03),I(24,00,00,00),B(p_env ,19),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,1d),I(23,00,00,00),B(cg_dld ,51),I(1f,08,1f,08),I(24,00,00,00),B(boot ,12),I(3c,03,22,01),I(22,01,1b,83),I(24,00,00,00),B(sx_obj1 ,42),I(08,1c,26,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,1d,23,00),B(cg_dld ,37),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,19),I(1f,03,23,00),B(cg_dld ,38),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,34),I(00,00,00,21),I(23,00,00,00),B(cg_dld ,52),I(1f,0b,1f,0b),I(24,00,00,00),B(boot ,12),I(3d,03,0b,32),I(00,00,00,1b),I(1d,41,00,00),B(cg_dld ,14),I(22,01,1b,1f),I(05,1f,0b,41),B(cg_dld ,12),I(22,04,45,0b)};

  /* Byte-vector with size: 96 is_init: 1 index: 0 binding: initialize-cg-dld */
  static const void *G005778[] = {I(87,25,00,00),B(cg_dld ,1),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_interf ,1),I(3e,0b,24,00),B(cg_interf ,0),I(3c,00,21,01),I(24,00,00,00),B(i_modify ,1),I(3e,0b,24,00),B(i_modify ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_syntax ,1),I(3e,0b,24,00),B(ex_syntax ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_import ,1),I(3e,0b,24,00),B(ex_import ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_node ,1),I(3e,0b,24,00),B(sx_node ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(cg_dld ,54),I(23,00,00,00),B(cg_dld ,53),I(3b,03,25,00),B(cg_dld ,9),I(23,00,00,00),B(cg_dld ,55),I(23,00,00,00),B(cg_dld ,50),I(3b,02,25,00),B(cg_dld ,8),I(23,00,00,00),B(cg_dld ,56),I(23,00,00,00),B(cg_dld ,48),I(3b,02,25,00),B(cg_dld ,7),I(23,00,00,00),B(cg_dld ,57),I(23,00,00,00),B(cg_dld ,46),I(3b,01,25,00),B(cg_dld ,6),I(23,00,00,00),B(cg_dld ,58),I(23,00,00,00),B(cg_dld ,45),I(3b,00,25,00),B(cg_dld ,5),I(23,00,00,00),B(cg_dld ,59),I(23,00,00,00),B(cg_dld ,40),I(3b,01,25,00),B(cg_dld ,4),I(23,00,00,00),B(cg_dld ,60),I(23,00,00,00),B(cg_dld ,36),I(3b,fe,25,00),B(cg_dld ,3),I(23,00,00,00),B(cg_dld ,61),I(23,00,00,00),B(cg_dld ,26),I(3b,01,25,00),B(cg_dld ,2),I(23,00,00,00),B(cg_dld ,62),I(23,00,00,00),B(cg_dld ,23),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G005724,G005723);
  eul_intern_symbol(sym_5727,"*indent*");
  object_class(str_5728) = eul_static_string_class;
  eul_intern_symbol(sym_5729,"*clean-ups*");
  eul_intern_symbol(sym_5730,"anonymous");
  object_class(str_5731) = eul_static_string_class;
  eul_allocate_bytevector( G005726,G005725);
  eul_intern_symbol(sym_5734,"(method load-syntax-module)");
  eul_allocate_bytevector( G005733,G005732);
  eul_allocate_bytevector( G005736,G005735);
  eul_allocate_bytevector( G005738,G005737);
  eul_allocate_bytevector( G005740,G005739);
  eul_allocate_bytevector( G005742,G005741);
  eul_intern_symbol(sym_5745,"user");
  eul_allocate_bytevector( G005744,G005743);
  object_class(str_5748) = eul_static_string_class;
  object_class(str_5749) = eul_static_string_class;
  object_class(str_5750) = eul_static_string_class;
  object_class(str_5751) = eul_static_string_class;
  object_class(str_5752) = eul_static_string_class;
  object_class(str_5753) = eul_static_string_class;
  eul_allocate_bytevector( G005747,G005746);
  eul_intern_symbol(sym_5756,"opencoding");
  eul_intern_symbol(sym_5757,"ff");
  object_class(str_5758) = eul_static_string_class;
  eul_allocate_bytevector( G005755,G005754);
  object_class(str_5761) = eul_static_string_class;
  eul_intern_keyword(key_5762,"name");
  eul_intern_symbol(sym_5763,"math");
  eul_intern_symbol(sym_5764,"level0");
  eul_allocate_bytevector( G005760,G005759);
  eul_allocate_bytevector( G005766,G005765);
  object_class(str_5769) = eul_static_string_class;
  eul_allocate_bytevector( G005768,G005767);
  eul_allocate_bytevector( G005771,G005770);
  eul_allocate_bytevector( G005773,G005772);
  object_class(str_5776) = eul_static_string_class;
  object_class(str_5777) = eul_static_string_class;
  eul_allocate_bytevector( G005775,G005774);
  eul_intern_symbol(sym_5780,"dynamic-binding-set");
  eul_intern_symbol(sym_5781,"dynamic-initialize-local-literals");
  eul_intern_symbol(sym_5782,"dynamic-binding-ref");
  eul_intern_symbol(sym_5783,"module-loaded?");
  eul_intern_symbol(sym_5784,"create-default-modules");
  eul_intern_symbol(sym_5785,"as-dynamic-binding");
  eul_intern_symbol(sym_5786,"dynamic-load-module");
  eul_intern_symbol(sym_5787,"make-module-env");
  eul_intern_symbol(sym_5788,"top-level");
  eul_allocate_bytevector( G005779,G005778);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 10; i++)
      cg_dld_bindings[i] = eul_nil;
  }

  cg_dld_bindings[ 10] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_initialize_level1_tables5718;
  cg_dld_bindings[ 11] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dyn_binding_ref5719;
  cg_dld_bindings[ 12] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dyn_binding_set5720;
  cg_dld_bindings[ 13] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_dyn_load_module5721;
  cg_dld_bindings[ 14] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_module_name_as_C_module_name_string5722;
  cg_dld_bindings[ 15] = G005724;
  cg_dld_bindings[ 16] = sym_5727;
  cg_dld_bindings[ 17] = str_5728;
  cg_dld_bindings[ 18] = sym_5729;
  cg_dld_bindings[ 19] = sym_5730;
  cg_dld_bindings[ 20] = str_5731;
  cg_dld_bindings[ 21] = G005726;
  cg_dld_bindings[ 22] = sym_5734;
  cg_dld_bindings[ 23] = G005733;
  cg_dld_bindings[ 24] = G005736;
  cg_dld_bindings[ 25] = G005738;
  cg_dld_bindings[ 26] = G005740;
  cg_dld_bindings[ 27] = G005742;
  cg_dld_bindings[ 28] = sym_5745;
  cg_dld_bindings[ 29] = G005744;
  cg_dld_bindings[ 30] = str_5748;
  cg_dld_bindings[ 31] = str_5749;
  cg_dld_bindings[ 32] = str_5750;
  cg_dld_bindings[ 33] = str_5751;
  cg_dld_bindings[ 34] = str_5752;
  cg_dld_bindings[ 35] = str_5753;
  cg_dld_bindings[ 36] = G005747;
  cg_dld_bindings[ 37] = sym_5756;
  cg_dld_bindings[ 38] = sym_5757;
  cg_dld_bindings[ 39] = str_5758;
  cg_dld_bindings[ 40] = G005755;
  cg_dld_bindings[ 41] = str_5761;
  cg_dld_bindings[ 42] = key_5762;
  cg_dld_bindings[ 43] = sym_5763;
  cg_dld_bindings[ 44] = sym_5764;
  cg_dld_bindings[ 45] = G005760;
  cg_dld_bindings[ 46] = G005766;
  cg_dld_bindings[ 47] = str_5769;
  cg_dld_bindings[ 48] = G005768;
  cg_dld_bindings[ 49] = G005771;
  cg_dld_bindings[ 50] = G005773;
  cg_dld_bindings[ 51] = str_5776;
  cg_dld_bindings[ 52] = str_5777;
  cg_dld_bindings[ 53] = G005775;
  cg_dld_bindings[ 1] = eul_nil;
  cg_dld_bindings[ 54] = sym_5780;
  cg_dld_bindings[ 55] = sym_5781;
  cg_dld_bindings[ 56] = sym_5782;
  cg_dld_bindings[ 57] = sym_5783;
  cg_dld_bindings[ 58] = sym_5784;
  cg_dld_bindings[ 59] = sym_5785;
  cg_dld_bindings[ 60] = sym_5786;
  cg_dld_bindings[ 61] = sym_5787;
  cg_dld_bindings[ 62] = sym_5788;
  eul_allocate_lambda( cg_dld_bindings[0], "initialize-cg-dld", 0, G005779);

  }
}


/* eof */
