/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module sx-node
 **  Copyright: See file sx-node.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_i_ffi();
extern void initialize_module_sx_obj();
extern void initialize_module_p_env();
extern LispRef i_all_bindings[];
extern LispRef i_ffi_bindings[];
extern LispRef mop_defcl_bindings[];
extern LispRef number_bindings[];
extern LispRef sx_obj2_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef thread_bindings[];
extern LispRef list_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef p_env_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef i_param_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef sx_obj1_bindings[];

/* Module bindings with size 127 */
LispRef sx_node_bindings[127];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module sx-node */
void initialize_module_sx_node()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_i_ffi();
  initialize_module_sx_obj();
  initialize_module_p_env();
  eul_fast_table_set(eul_modules,"sx_node",(LispRef) sx_node_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_3432, sym_3431, sym_3430, sym_3429, sym_3428, sym_3427, sym_3426, sym_3425, sym_3424, sym_3423, sym_3422, sym_3421, sym_3420, sym_3419, sym_3418, sym_3417, sym_3416, sym_3415, sym_3414, sym_3413, sym_3412, sym_3411, sym_3410, sym_3409, sym_3408, sym_3407, G003406, G003404, G003402, G003400, G003398, G003396, G003394, G003392, G003390, G003388, G003386, G003384, G003382, G003378, sym_3376, G003375, G003373, key_3371, key_3370, G003369, key_3367, G003366, G003364, sym_3362, G003361, sym_3359, sym_3358, sym_3357, sym_3356, sym_3355, G003354, key_3352, key_3351, key_3350, key_3349, sym_3348, G003347, G003345, G003343, sym_3341, G003340, sym_3338, sym_3337, sym_3336, G003334, key_3332, key_3331, key_3330, key_3329, key_3328, G003327, sym_3325, G003324, sym_3322, sym_3321, sym_3320, sym_3319, sym_3318, G003317, G003315, G003313, sym_3311, G003310, key_3308, key_3307, key_3306, key_3305, key_3304, key_3303, key_3302, G003301;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 39 is_init: 0 index: 36 binding: (method-clone-node) */
  static const void *G003300[] = {I(aa,1b,04,1c),I(8a,06,24,00),B(sx_obj1 ,42),I(08,1d,8a,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,03,8a),I(04,24,00,00),B(sx_obj1 ,42),I(08,1f,04,8a),I(03,24,00,00),B(sx_obj1 ,42),I(08,1f,05,84),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,06,83),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,07,82),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,07,23),B(sx_node ,29),I(1f,08,23,00),B(sx_node ,30),I(1f,09,23,00),B(sx_node ,31),I(1f,0a,23,00),B(sx_node ,32),I(1f,0b,23,00),B(sx_node ,33),I(1f,0c,23,00),B(sx_node ,34),I(1f,0d,23,00),B(sx_node ,35),I(1f,0e,24,00),B(mop_gf ,2),I(3d,0f,09,45),I(09,00,00,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 38 binding: (method-get-named-encl-lambda) */
  static const void *G003309[] = {I(aa,1b,44,2f),I(1b,8a,07,24),B(sx_obj ,17),I(08,23,00,00),B(sx_node ,37),I(50,1b,44,16),I(1c,82,24,00),B(sx_obj1 ,3),I(08,24,00,00),B(i_param ,40),I(3d,01,02,36),I(02,1c,22,01),I(36,02,86,45),I(01,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 39 binding: (method-binding-origin-module-name) */
  static const void *G003312[] = {I(aa,8a,05,24),B(sx_obj1 ,42),I(08,45,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 40 binding: (method-binding-origin-module-name) */
  static const void *G003314[] = {I(aa,8a,05,24),B(sx_obj1 ,42),I(08,8a,15,24),B(sx_obj1 ,59),I(08,45,00,00)};

  /* Byte-vector with size: 146 is_init: 0 index: 46 binding: top-level */
  static const void *G003316[] = {I(a9,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(sx_node ,41),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(sx_node ,28),I(2a,83,24,00),B(sx_obj1 ,27),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(sx_node ,42),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(sx_node ,21),I(2a,24,00,00),B(sx_node ,28),I(2a,24,00,00),B(sx_node ,28),I(8a,03,02,83),I(24,00,00,00),B(sx_obj1 ,42),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_node ,28),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_node ,43),I(23,00,00,00),B(sx_node ,40),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_node ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_node ,28),I(8a,03,02,83),I(24,00,00,00),B(sx_obj1 ,72),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_node ,28),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_node ,43),I(23,00,00,00),B(sx_node ,39),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_node ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(i_param ,40),I(8a,03,02,83),I(86,24,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(i_param ,40),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_node ,44),I(23,00,00,00),B(sx_node ,38),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(i_param ,40),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_node ,21),I(2a,24,00,00),B(sx_node ,21),I(8a,03,02,83),I(24,00,00,00),B(sx_obj1 ,42),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_node ,21),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_node ,45),I(23,00,00,00),B(sx_node ,36),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_node ,21),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,20,45),I(20,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 48 binding: register-delegated-vars */
  static const void *G003323[] = {I(aa,23,00,00),B(sx_node ,47),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(sx_node ,47),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,83),I(24,00,00,00),B(sx_obj ,13),I(08,1b,1f,04),I(24,00,00,00),B(boot ,8),I(3c,02,1f,03),I(1c,1c,83,1d),I(24,00,00,00),B(sx_obj ,13),I(09,45,07,00)};

  /* Byte-vector with size: 33 is_init: 0 index: 54 binding: make-module */
  static const void *G003326[] = {I(aa,24,00,00),B(aux_table ,4),I(3c,00,24,00),B(aux_table ,4),I(3c,00,24,00),B(aux_table ,4),I(3c,00,24,00),B(aux_table ,4),I(3c,00,24,00),B(sx_obj1 ,59),I(23,00,00,00),B(sx_node ,49),I(1f,06,23,00),B(sx_node ,50),I(1f,07,23,00),B(sx_node ,51),I(1f,08,23,00),B(sx_node ,52),I(1f,09,23,00),B(sx_node ,53),I(1f,0a,24,00),B(mop_gf ,2),I(3c,0b,1f,05),I(1c,24,00,00),B(p_env ,16),I(3c,02,2a,1b),I(24,00,00,00),B(i_param ,37),I(1c,8a,14,1d),I(24,00,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1b,45,06,00)};

  eul_allocate_static_string(str_3335, "no lexical binding ~a available", 31);
  /* Byte-vector with size: 58 is_init: 0 index: 59 binding: get-imported-inlined-setter-binding */
  static const void *G003333[] = {I(ab,1c,73,1b),I(24,00,00,00),B(p_env ,7),I(3c,01,1b,44),I(04,1b,36,2f),I(1c,1f,03,24),B(p_env ,18),I(3c,02,1b,44),I(04,1b,36,1d),I(1d,24,00,00),B(sx_node ,5),I(3c,01,1b,23),B(sx_node ,55),I(1f,05,24,00),B(i_notify ,6),I(3c,03,22,01),I(22,01,1b,23),B(sx_node ,56),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,44),I(8e,1c,8a,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,23,00,00),B(sx_node ,57),I(1d,0f,1b,86),I(0f,24,00,00),B(sx_obj1 ,72),I(23,00,00,00),B(sx_node ,29),I(1f,0a,23,00),B(sx_node ,30),I(1f,06,23,00),B(sx_node ,31),I(87,23,00,00),B(sx_node ,33),I(1f,10,23,00),B(sx_node ,32),I(87,23,00,00),B(sx_node ,35),I(1f,0c,24,00),B(mop_gf ,2),I(3c,0d,23,00),B(sx_node ,58),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,8a),I(0a,24,00,00),B(sx_obj1 ,59),I(08,1d,1c,0f),I(1d,1c,1c,8a),I(0a,1d,24,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,03,22,07),I(36,02,86,45),I(06,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 61 binding: make-dummy-binding */
  static const void *G003339[] = {I(a8,1b,44,05),I(1b,10,36,02),I(86,1b,44,04),I(1b,36,06,23),B(sx_node ,60),I(23,00,00,00),B(sx_node ,58),I(24,00,00,00),B(dynamic ,3),I(3c,01,24,00),B(sx_obj1 ,42),I(23,00,00,00),B(sx_node ,29),I(1f,03,23,00),B(sx_node ,30),I(1f,04,24,00),B(mop_gf ,2),I(3d,05,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 62 binding: make-defined-fun */
  static const void *G003342[] = {I(43,03,24,00),B(sx_obj ,13),I(1f,03,1f,03),I(1f,03,24,00),B(sx_node ,8),I(3c,04,1b,24),B(sx_node ,22),I(3c,01,24,00),B(p_env ,5),I(3c,01,2a,1b),I(45,04,00,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 63 binding: compute-arity */
  static const void *G003344[] = {I(aa,1b,24,00),B(list ,25),I(3c,01,1b,44),I(0d,1c,24,00),B(boot ,19),I(3d,01,02,36),I(1c,1c,7a,12),I(1b,44,04,85),I(36,11,1d,24),B(boot ,19),I(3c,01,1b,83),I(14,82,1c,15),I(22,02,22,01),I(45,02,00,00)};

  /* Byte-vector with size: 78 is_init: 0 index: 69 binding: make-fun */
  static const void *G003346[] = {I(43,fb,1f,03),I(7a,1b,44,0f),I(1f,04,24,00),B(boot ,19),I(3c,01,83,19),I(36,02,86,1b),I(44,06,1f,05),I(10,36,03,1f),I(05,1f,05,7c),I(1b,44,0e,1f),I(06,24,00,00),B(boot1 ,26),I(3c,01,36,03),I(1f,06,1f,07),I(24,00,00,00),B(sx_node ,7),I(3c,01,1f,07),I(24,00,00,00),B(sx_obj1 ,70),I(3c,01,1b,44),I(04,1b,36,0c),I(23,00,00,00),B(sx_node ,64),I(1f,09,0f,1f),I(08,44,06,1f),I(08,10,36,02),I(86,1f,0d,23),B(sx_node ,49),I(1f,08,23,00),B(sx_node ,65),I(1f,08,23,00),B(sx_node ,66),I(1f,09,23,00),B(sx_node ,67),I(1f,09,23,00),B(sx_node ,68),I(1f,0a,24,00),B(mop_gf ,2),I(3c,0b,1b,24),B(sx_obj ,44),I(3c,01,1b,44),I(8f,1f,0e,23),B(sx_node ,37),I(50,1b,44,04),I(1b,36,03,1f),I(0a,1b,44,3e),I(23,00,00,00),B(sx_node ,58),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,8a),I(08,24,00,00),B(sx_obj1 ,59),I(08,1b,1f,06),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,8a,08,1d),I(24,00,00,00),B(sx_obj1 ,59),I(09,22,05,36),I(3b,23,00,00),B(sx_node ,58),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,8a),I(09,24,00,00),B(sx_obj1 ,59),I(08,1b,1f,06),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,8a,09,1d),I(24,00,00,00),B(sx_obj1 ,59),I(09,22,05,22),I(02,36,02,86),I(2a,1c,45,10)};

  /* Byte-vector with size: 51 is_init: 0 index: 75 binding: true-local-binding? */
  static const void *G003353[] = {I(aa,1b,24,00),B(sx_obj1 ,14),I(3c,01,1b,44),I(bd,1c,84,24),B(sx_obj1 ,42),I(08,1d,24,00),B(sx_obj1 ,10),I(3c,01,1b,44),I(04,1b,36,a1),I(1f,03,8a,03),I(24,00,00,00),B(sx_obj1 ,42),I(08,1b,44,04),I(1b,36,8c,1d),I(24,00,00,00),B(sx_obj ,7),I(3c,01,1b,44),I(04,1b,36,79),I(1f,05,23,00),B(sx_node ,70),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,44),I(04,1b,36,5f),I(1f,06,23,00),B(sx_node ,71),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,44),I(04,1b,36,45),I(1f,07,23,00),B(sx_node ,72),I(24,00,00,00),B(sx_node ,20),I(3c,02,23,00),B(sx_node ,73),I(50,1b,44,15),I(1f,08,23,00),B(sx_node ,74),I(24,00,00,00),B(sx_node ,20),I(3c,02,36,02),I(86,1b,44,04),I(1b,36,0c,1f),I(07,24,00,00),B(mop_inspect ,8),I(3c,01,22,02),I(22,01,22,01),I(22,01,22,01),I(12,22,02,36),I(02,86,45,02)};

  /* Byte-vector with size: 23 is_init: 0 index: 77 binding: make-defined-opencoded-fun */
  static const void *G003360[] = {I(43,03,86,1f),I(03,24,00,00),B(sx_node ,22),I(3c,02,1d,24),B(sx_node ,7),I(3c,01,1c,24),B(p_env ,5),I(3c,01,2a,23),B(sx_node ,72),I(23,00,00,00),B(sx_node ,70),I(0f,23,00,00),B(sx_node ,76),I(1d,0f,23,00),B(sx_node ,70),I(1f,05,0f,1b),I(86,0f,1d,1c),I(0f,1f,04,1c),I(0f,1f,07,1c),I(1c,82,1d,24),B(sx_obj1 ,42),I(09,22,02,2a),I(1f,07,45,0b)};

  /* Byte-vector with size: 5 is_init: 0 index: 78 binding: get-binding-spec-info */
  static const void *G003363[] = {I(ab,1b,1d,1b),I(1d,86,6a,22),I(02,1b,44,05),I(1b,11,36,02),I(86,45,03,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 80 binding: make-setq */
  static const void *G003365[] = {I(ab,24,00,00),B(sx_obj2 ,25),I(23,00,00,00),B(sx_node ,79),I(1f,03,23,00),B(sx_node ,33),I(1f,04,24,00),B(mop_gf ,2),I(3d,05,02,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 83 binding: make-local-static-var */
  static const void *G003368[] = {I(a7,1b,44,05),I(1b,10,36,02),I(86,24,00,00),B(sx_obj2 ,9),I(23,00,00,00),B(sx_node ,49),I(1f,04,23,00),B(sx_node ,81),I(1f,04,23,00),B(sx_node ,82),I(82,24,00,00),B(mop_gf ,2),I(3c,07,1b,24),B(sx_node ,15),I(3c,01,2a,1b),I(45,04,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 84 binding: foldable-constant? */
  static const void *G003372[] = {I(aa,1b,24,00),B(number ,24),I(3c,01,1b,44),I(04,1b,36,0d),I(1c,81,1b,44),I(04,1b,36,03),I(1d,12,22,01),I(45,02,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 86 binding: make-mutable-binding */
  static const void *G003374[] = {I(a7,1b,44,05),I(1b,10,36,02),I(86,1b,44,04),I(1b,36,14,1d),I(23,00,00,00),B(sx_node ,85),I(24,00,00,00),B(mop_defcl ,8),I(3c,02,1f,03),I(1c,86,24,00),B(sx_node ,23),I(3d,03,04,45),I(04,00,00,00)};

  eul_allocate_static_cons(cons_3380, NULL, NULL);
  eul_allocate_static_cons(cons_3379, eul_as_static(cons_3380), NULL);
  /* Byte-vector with size: 63 is_init: 0 index: 88 binding: make-named-const */
  static const void *G003377[] = {I(ab,24,00,00),B(sx_obj2 ,22),I(23,00,00,00),B(sx_node ,49),I(1f,03,23,00),B(sx_node ,81),I(1f,04,24,00),B(mop_gf ,2),I(3c,05,1b,24),B(sx_node ,22),I(3c,01,24,00),B(i_param ,10),I(12,1b,44,0d),I(1f,03,24,00),B(sx_node ,14),I(3c,01,36,02),I(86,1b,44,4e),I(23,00,00,00),B(sx_node ,72),I(23,00,00,00),B(sx_node ,73),I(0f,1f,05,86),I(0f,23,00,00),B(sx_node ,74),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,1f,07,82),I(24,00,00,00),B(sx_obj1 ,42),I(08,1c,1c,24),B(boot ,8),I(3c,02,1f,09),I(1c,1c,82,1d),I(24,00,00,00),B(sx_obj1 ,42),I(09,22,09,36),I(2b,23,00,00),B(sx_node ,87),I(1f,03,82,24),B(sx_obj1 ,42),I(08,1c,1c,24),B(boot ,8),I(3c,02,1f,05),I(1c,1c,82,1d),I(24,00,00,00),B(sx_obj1 ,42),I(09,22,05,2a),I(23,00,00,00),B(sx_node ,58),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,8a),I(0d,24,00,00),B(sx_obj1 ,59),I(08,1f,05,1c),I(0f,1d,1c,1c),I(8a,0d,1d,24),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,05,24,00),B(p_env ,5),I(3c,01,2a,1f),I(06,45,09,00)};

  /* Byte-vector with size: 27 is_init: 0 index: 89 binding: make-global-var */
  static const void *G003381[] = {I(ab,24,00,00),B(sx_obj2 ,28),I(23,00,00,00),B(sx_node ,49),I(1f,03,23,00),B(sx_node ,81),I(1f,04,23,00),B(sx_node ,82),I(82,24,00,00),B(mop_gf ,2),I(3c,07,1b,24),B(sx_node ,15),I(3c,01,24,00),B(p_env ,5),I(3c,01,2a,23),B(sx_node ,58),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,8a),I(0c,24,00,00),B(sx_obj1 ,59),I(08,1d,1c,0f),I(1d,1c,1c,8a),I(0c,1d,24,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,03,45,06)};

  /* Byte-vector with size: 54 is_init: 0 index: 90 binding: make-defined-external-fun */
  static const void *G003383[] = {I(43,04,24,00),B(i_ffi ,7),I(1f,03,24,00),B(boot ,11),I(3c,02,1d,24),B(i_ffi ,3),I(3c,01,86,1f),I(06,24,00,00),B(sx_node ,22),I(3c,02,1f,05),I(24,00,00,00),B(sx_node ,7),I(3c,01,1f,04),I(44,06,1f,04),I(10,36,02,86),I(1b,44,04,1b),I(36,05,1f,08),I(82,02,1f,03),I(24,00,00,00),B(p_env ,5),I(3c,01,2a,23),B(sx_node ,72),I(23,00,00,00),B(sx_node ,71),I(0f,23,00,00),B(sx_node ,76),I(1f,04,0f,1d),I(86,0f,1f,07),I(1c,0f,1f,09),I(1c,0f,23,00),B(sx_node ,71),I(1c,0f,1b,86),I(0f,1f,05,1c),I(0f,1f,07,1c),I(0f,1f,0c,1c),I(1c,82,1d,24),B(sx_obj1 ,42),I(09,22,02,2a),I(23,00,00,00),B(sx_node ,58),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,8a),I(07,24,00,00),B(sx_obj1 ,59),I(08,1b,1f,0f),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,8a,07,1d),I(24,00,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,0f,45,16)};

  /* Byte-vector with size: 5 is_init: 0 index: 91 binding: anonymous */
  static const void *G003385[] = {I(aa,1b,47,00),I(00,1c,83,1d),I(24,00,00,00),B(sx_obj2 ,9),I(09,45,03,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 92 binding: make-let* */
  static const void *G003387[] = {I(ab,46,01,24),B(sx_obj ,2),I(23,00,00,00),B(sx_node ,37),I(1f,03,1f,03),I(24,00,00,00),B(sx_node ,8),I(3c,04,1b,48),I(00,00,23,00),B(sx_node ,37),I(23,00,00,00),B(sx_node ,91),I(3b,01,1f,03),I(24,00,00,00),B(boot ,17),I(3c,02,2a,1d),I(24,00,00,00),B(sx_node ,2),I(3c,01,2a,47),I(00,00,45,03)};

  /* Byte-vector with size: 5 is_init: 0 index: 93 binding: get-binding-info */
  static const void *G003389[] = {I(ab,1c,82,24),B(sx_obj1 ,42),I(08,24,00,00),B(sx_node ,11),I(3d,02,01,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 94 binding: make-immutable-binding */
  static const void *G003391[] = {I(a7,1b,44,05),I(1b,10,36,02),I(86,1b,44,04),I(1b,36,14,1d),I(23,00,00,00),B(sx_node ,85),I(24,00,00,00),B(mop_defcl ,8),I(3c,02,1f,03),I(1c,87,24,00),B(sx_node ,23),I(3d,03,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 28 is_init: 0 index: 95 binding: make-binding */
  static const void *G003393[] = {I(43,fd,23,00),B(sx_node ,58),I(24,00,00,00),B(dynamic ,3),I(3c,01,1c,44),I(05,1c,10,36),I(02,86,24,00),B(sx_obj1 ,42),I(23,00,00,00),B(sx_node ,29),I(1f,05,23,00),B(sx_node ,30),I(1f,05,23,00),B(sx_node ,31),I(1f,06,23,00),B(sx_node ,33),I(1f,0c,24,00),B(mop_gf ,2),I(3c,09,1f,05),I(24,00,00,00),B(sx_obj1 ,70),I(3c,01,1b,44),I(10,1f,06,1d),I(24,00,00,00),B(sx_obj ,33),I(3c,02,36,02),I(86,2a,1c,45),I(07,00,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 96 binding: anonymous */
  static const void *G003395[] = {I(aa,1b,44,2a),I(1b,10,1b,8a),I(06,24,00,00),B(sx_obj1 ,42),I(08,1b,73,1b),I(47,00,01,50),I(1b,44,06,1f),I(04,10,36,0a),I(1f,04,11,47),I(00,00,3d,01),I(05,22,04,36),I(02,86,45,01)};

  /* Byte-vector with size: 23 is_init: 0 index: 97 binding: get-inlined-setter-binding */
  static const void *G003397[] = {I(ab,46,03,1c),I(73,1b,48,00),I(01,86,1b,48),I(00,00,23,00),B(sx_node ,37),I(23,00,00,00),B(sx_node ,96),I(3b,01,48,00),I(00,1f,03,1f),I(03,24,00,00),B(sx_node ,4),I(3c,02,1b,44),I(04,1b,36,26),I(23,00,00,00),B(sx_node ,58),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,8a),I(0a,24,00,00),B(sx_obj1 ,59),I(08,47,00,00),I(3d,01,06,22),I(01,45,05,00)};

  /* Byte-vector with size: 25 is_init: 0 index: 98 binding: register-binding-ref */
  static const void *G003399[] = {I(aa,23,00,00),B(sx_node ,47),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(sx_node ,58),I(24,00,00,00),B(dynamic ,3),I(3c,01,1c,44),I(1d,1c,82,24),B(sx_obj ,13),I(08,1f,03,1c),I(0f,1f,03,1c),I(1c,82,1d,24),B(sx_obj ,13),I(09,22,04,36),I(1f,1b,8a,05),I(24,00,00,00),B(sx_obj1 ,59),I(08,1f,03,1c),I(0f,1d,1c,1c),I(8a,05,1d,24),B(sx_obj1 ,59),I(09,22,04,45),I(03,00,00,00)};

  /* Byte-vector with size: 27 is_init: 0 index: 99 binding: make-inlined-setter */
  static const void *G003401[] = {I(43,03,24,00),B(sx_obj ,13),I(1f,03,1f,03),I(1f,03,24,00),B(sx_node ,8),I(3c,04,1b,24),B(sx_node ,22),I(3c,01,1c,87),I(1c,84,1d,24),B(sx_obj ,13),I(09,22,02,2a),I(23,00,00,00),B(sx_node ,58),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,8a),I(0a,24,00,00),B(sx_obj1 ,59),I(08,1b,1f,03),I(24,00,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,8a,0a,1d),I(24,00,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,04,45,08)};

  /* Byte-vector with size: 37 is_init: 0 index: 100 binding: non-folded-local-binding? */
  static const void *G003403[] = {I(aa,1b,24,00),B(sx_obj1 ,14),I(3c,01,1b,44),I(83,1c,84,24),B(sx_obj1 ,42),I(08,1d,24,00),B(sx_obj1 ,10),I(3c,01,1b,44),I(04,1b,36,67),I(1f,03,8a,03),I(24,00,00,00),B(sx_obj1 ,42),I(08,1b,44,04),I(1b,36,52,1d),I(24,00,00,00),B(sx_obj ,7),I(3c,01,1b,44),I(04,1b,36,3f),I(1f,05,23,00),B(sx_node ,70),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,44),I(04,1b,36,25),I(1f,06,23,00),B(sx_node ,71),I(24,00,00,00),B(sx_node ,20),I(3c,02,1b,44),I(04,1b,36,0b),I(1f,05,24,00),B(mop_inspect ,8),I(3c,01,22,01),I(22,01,22,01),I(22,01,12,22),I(02,36,02,86),I(45,02,00,00)};

  /* Byte-vector with size: 182 is_init: 1 index: 0 binding: initialize-sx-node */
  static const void *G003405[] = {I(87,25,00,00),B(sx_node ,1),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(i_ffi ,1),I(3e,0b,24,00),B(i_ffi ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(86,25,00,00),B(sx_node ,28),I(23,00,00,00),B(sx_node ,101),I(23,00,00,00),B(sx_node ,100),I(3b,01,25,00),B(sx_node ,27),I(23,00,00,00),B(sx_node ,102),I(23,00,00,00),B(sx_node ,99),I(3b,03,25,00),B(sx_node ,26),I(23,00,00,00),B(sx_node ,103),I(23,00,00,00),B(sx_node ,98),I(3b,01,25,00),B(sx_node ,25),I(23,00,00,00),B(sx_node ,104),I(23,00,00,00),B(sx_node ,97),I(3b,02,25,00),B(sx_node ,24),I(23,00,00,00),B(sx_node ,105),I(23,00,00,00),B(sx_node ,95),I(3b,fd,25,00),B(sx_node ,23),I(23,00,00,00),B(sx_node ,106),I(23,00,00,00),B(sx_node ,94),I(3b,fe,25,00),B(sx_node ,22),I(86,25,00,00),B(sx_node ,21),I(23,00,00,00),B(sx_node ,107),I(23,00,00,00),B(sx_node ,93),I(3b,02,25,00),B(sx_node ,20),I(23,00,00,00),B(sx_node ,108),I(23,00,00,00),B(sx_node ,92),I(3b,02,25,00),B(sx_node ,19),I(23,00,00,00),B(sx_node ,109),I(23,00,00,00),B(sx_node ,90),I(3b,04,25,00),B(sx_node ,18),I(23,00,00,00),B(sx_node ,110),I(23,00,00,00),B(sx_node ,89),I(3b,02,25,00),B(sx_node ,17),I(23,00,00,00),B(sx_node ,111),I(23,00,00,00),B(sx_node ,88),I(3b,02,25,00),B(sx_node ,16),I(23,00,00,00),B(sx_node ,112),I(23,00,00,00),B(sx_node ,86),I(3b,fe,25,00),B(sx_node ,15),I(23,00,00,00),B(sx_node ,113),I(23,00,00,00),B(sx_node ,84),I(3b,01,25,00),B(sx_node ,14),I(23,00,00,00),B(sx_node ,114),I(23,00,00,00),B(sx_node ,83),I(3b,fe,25,00),B(sx_node ,13),I(23,00,00,00),B(sx_node ,115),I(23,00,00,00),B(sx_node ,80),I(3b,02,25,00),B(sx_node ,12),I(23,00,00,00),B(sx_node ,116),I(23,00,00,00),B(sx_node ,78),I(3b,02,25,00),B(sx_node ,11),I(23,00,00,00),B(sx_node ,117),I(23,00,00,00),B(sx_node ,77),I(3b,03,25,00),B(sx_node ,10),I(23,00,00,00),B(sx_node ,118),I(23,00,00,00),B(sx_node ,75),I(3b,01,25,00),B(sx_node ,9),I(23,00,00,00),B(sx_node ,119),I(23,00,00,00),B(sx_node ,69),I(3b,fb,25,00),B(sx_node ,8),I(23,00,00,00),B(sx_node ,120),I(23,00,00,00),B(sx_node ,63),I(3b,01,25,00),B(sx_node ,7),I(23,00,00,00),B(sx_node ,121),I(23,00,00,00),B(sx_node ,62),I(3b,03,25,00),B(sx_node ,6),I(23,00,00,00),B(sx_node ,122),I(23,00,00,00),B(sx_node ,61),I(3b,ff,25,00),B(sx_node ,5),I(23,00,00,00),B(sx_node ,123),I(23,00,00,00),B(sx_node ,59),I(3b,02,25,00),B(sx_node ,4),I(23,00,00,00),B(sx_node ,124),I(23,00,00,00),B(sx_node ,54),I(3b,01,25,00),B(sx_node ,3),I(23,00,00,00),B(sx_node ,125),I(23,00,00,00),B(sx_node ,48),I(3b,01,25,00),B(sx_node ,2),I(23,00,00,00),B(sx_node ,126),I(23,00,00,00),B(sx_node ,46),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_intern_keyword(key_3302,"local-name");
  eul_intern_keyword(key_3303,"module");
  eul_intern_keyword(key_3304,"immutable");
  eul_intern_keyword(key_3305,"imported");
  eul_intern_keyword(key_3306,"obj");
  eul_intern_keyword(key_3307,"local-index");
  eul_intern_keyword(key_3308,"info");
  eul_allocate_bytevector( G003301,G003300);
  eul_intern_symbol(sym_3311,"anonymous");
  eul_allocate_bytevector( G003310,G003309);
  eul_allocate_bytevector( G003313,G003312);
  eul_allocate_bytevector( G003315,G003314);
  eul_intern_symbol(sym_3318,"binding-origin-module-name");
  eul_intern_symbol(sym_3319,"clone-node");
  eul_intern_symbol(sym_3320,"(method binding-origin-module-name)");
  eul_intern_symbol(sym_3321,"(method get-named-encl-lambda)");
  eul_intern_symbol(sym_3322,"(method clone-node)");
  eul_allocate_bytevector( G003317,G003316);
  eul_intern_symbol(sym_3325,"*encl-lambda*");
  eul_allocate_bytevector( G003324,G003323);
  eul_intern_keyword(key_3328,"name");
  eul_intern_keyword(key_3329,"lexical-env");
  eul_intern_keyword(key_3330,"interactive-lexical-env");
  eul_intern_keyword(key_3331,"external-env");
  eul_intern_keyword(key_3332,"syntax-env");
  eul_allocate_bytevector( G003327,G003326);
  object_class(str_3335) = eul_static_string_class;
  eul_intern_symbol(sym_3336,"setter");
  eul_intern_symbol(sym_3337,"inline");
  eul_intern_symbol(sym_3338,"*actual-module*");
  eul_allocate_bytevector( G003334,G003333);
  eul_intern_symbol(sym_3341," unbound ");
  eul_allocate_bytevector( G003340,G003339);
  eul_allocate_bytevector( G003343,G003342);
  eul_allocate_bytevector( G003345,G003344);
  eul_intern_symbol(sym_3348,"progn");
  eul_intern_keyword(key_3349,"args");
  eul_intern_keyword(key_3350,"arity");
  eul_intern_keyword(key_3351,"body");
  eul_intern_keyword(key_3352,"has-unknown-appls");
  eul_allocate_bytevector( G003347,G003346);
  eul_intern_symbol(sym_3355,"opencoding");
  eul_intern_symbol(sym_3356,"ff");
  eul_intern_symbol(sym_3357,"class");
  eul_intern_symbol(sym_3358,"constant");
  eul_intern_symbol(sym_3359,"value");
  eul_allocate_bytevector( G003354,G003353);
  eul_intern_symbol(sym_3362,"arity");
  eul_allocate_bytevector( G003361,G003360);
  eul_allocate_bytevector( G003364,G003363);
  eul_intern_keyword(key_3367,"binding");
  eul_allocate_bytevector( G003366,G003365);
  eul_intern_keyword(key_3370,"value");
  eul_intern_keyword(key_3371,"used");
  eul_allocate_bytevector( G003369,G003368);
  eul_allocate_bytevector( G003373,G003372);
  eul_intern_symbol(sym_3376,"name");
  eul_allocate_bytevector( G003375,G003374);
  object_class(cons_3380) = eul_static_cons_class;
  eul_car(cons_3380) = sym_3357;
  eul_cdr(cons_3380) = sym_3358;
  object_class(cons_3379) = eul_static_cons_class;
  eul_cdr(cons_3379) = eul_nil;
  eul_allocate_bytevector( G003378,G003377);
  eul_allocate_bytevector( G003382,G003381);
  eul_allocate_bytevector( G003384,G003383);
  eul_allocate_bytevector( G003386,G003385);
  eul_allocate_bytevector( G003388,G003387);
  eul_allocate_bytevector( G003390,G003389);
  eul_allocate_bytevector( G003392,G003391);
  eul_allocate_bytevector( G003394,G003393);
  eul_allocate_bytevector( G003396,G003395);
  eul_allocate_bytevector( G003398,G003397);
  eul_allocate_bytevector( G003400,G003399);
  eul_allocate_bytevector( G003402,G003401);
  eul_allocate_bytevector( G003404,G003403);
  eul_intern_symbol(sym_3407,"non-folded-local-binding?");
  eul_intern_symbol(sym_3408,"make-inlined-setter");
  eul_intern_symbol(sym_3409,"register-binding-ref");
  eul_intern_symbol(sym_3410,"get-inlined-setter-binding");
  eul_intern_symbol(sym_3411,"make-binding");
  eul_intern_symbol(sym_3412,"make-immutable-binding");
  eul_intern_symbol(sym_3413,"get-binding-info");
  eul_intern_symbol(sym_3414,"make-let*");
  eul_intern_symbol(sym_3415,"make-defined-external-fun");
  eul_intern_symbol(sym_3416,"make-global-var");
  eul_intern_symbol(sym_3417,"make-named-const");
  eul_intern_symbol(sym_3418,"make-mutable-binding");
  eul_intern_symbol(sym_3419,"foldable-constant?");
  eul_intern_symbol(sym_3420,"make-local-static-var");
  eul_intern_symbol(sym_3421,"make-setq");
  eul_intern_symbol(sym_3422,"get-binding-spec-info");
  eul_intern_symbol(sym_3423,"make-defined-opencoded-fun");
  eul_intern_symbol(sym_3424,"true-local-binding?");
  eul_intern_symbol(sym_3425,"make-fun");
  eul_intern_symbol(sym_3426,"compute-arity");
  eul_intern_symbol(sym_3427,"make-defined-fun");
  eul_intern_symbol(sym_3428,"make-dummy-binding");
  eul_intern_symbol(sym_3429,"get-imported-inlined-setter-binding");
  eul_intern_symbol(sym_3430,"make-module");
  eul_intern_symbol(sym_3431,"register-delegated-vars");
  eul_intern_symbol(sym_3432,"top-level");
  eul_allocate_bytevector( G003406,G003405);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 29; i++)
      sx_node_bindings[i] = eul_nil;
  }

  sx_node_bindings[ 29] = key_3302;
  sx_node_bindings[ 30] = key_3303;
  sx_node_bindings[ 31] = key_3304;
  sx_node_bindings[ 32] = key_3305;
  sx_node_bindings[ 33] = key_3306;
  sx_node_bindings[ 34] = key_3307;
  sx_node_bindings[ 35] = key_3308;
  sx_node_bindings[ 36] = G003301;
  sx_node_bindings[ 37] = sym_3311;
  sx_node_bindings[ 38] = G003310;
  sx_node_bindings[ 39] = G003313;
  sx_node_bindings[ 40] = G003315;
  sx_node_bindings[ 41] = sym_3318;
  sx_node_bindings[ 42] = sym_3319;
  sx_node_bindings[ 43] = sym_3320;
  sx_node_bindings[ 44] = sym_3321;
  sx_node_bindings[ 45] = sym_3322;
  sx_node_bindings[ 46] = G003317;
  sx_node_bindings[ 47] = sym_3325;
  sx_node_bindings[ 48] = G003324;
  sx_node_bindings[ 49] = key_3328;
  sx_node_bindings[ 50] = key_3329;
  sx_node_bindings[ 51] = key_3330;
  sx_node_bindings[ 52] = key_3331;
  sx_node_bindings[ 53] = key_3332;
  sx_node_bindings[ 54] = G003327;
  sx_node_bindings[ 55] = str_3335;
  sx_node_bindings[ 56] = sym_3336;
  sx_node_bindings[ 57] = sym_3337;
  sx_node_bindings[ 58] = sym_3338;
  sx_node_bindings[ 59] = G003334;
  sx_node_bindings[ 60] = sym_3341;
  sx_node_bindings[ 61] = G003340;
  sx_node_bindings[ 62] = G003343;
  sx_node_bindings[ 63] = G003345;
  sx_node_bindings[ 64] = sym_3348;
  sx_node_bindings[ 65] = key_3349;
  sx_node_bindings[ 66] = key_3350;
  sx_node_bindings[ 67] = key_3351;
  sx_node_bindings[ 68] = key_3352;
  sx_node_bindings[ 69] = G003347;
  sx_node_bindings[ 70] = sym_3355;
  sx_node_bindings[ 71] = sym_3356;
  sx_node_bindings[ 72] = sym_3357;
  sx_node_bindings[ 73] = sym_3358;
  sx_node_bindings[ 74] = sym_3359;
  sx_node_bindings[ 75] = G003354;
  sx_node_bindings[ 76] = sym_3362;
  sx_node_bindings[ 77] = G003361;
  sx_node_bindings[ 78] = G003364;
  sx_node_bindings[ 79] = key_3367;
  sx_node_bindings[ 80] = G003366;
  sx_node_bindings[ 81] = key_3370;
  sx_node_bindings[ 82] = key_3371;
  sx_node_bindings[ 83] = G003369;
  sx_node_bindings[ 84] = G003373;
  sx_node_bindings[ 85] = sym_3376;
  sx_node_bindings[ 86] = G003375;
  sx_node_bindings[ 87] = cons_3379;
  sx_node_bindings[ 88] = G003378;
  sx_node_bindings[ 89] = G003382;
  sx_node_bindings[ 90] = G003384;
  sx_node_bindings[ 91] = G003386;
  sx_node_bindings[ 92] = G003388;
  sx_node_bindings[ 93] = G003390;
  sx_node_bindings[ 94] = G003392;
  sx_node_bindings[ 95] = G003394;
  sx_node_bindings[ 96] = G003396;
  sx_node_bindings[ 97] = G003398;
  sx_node_bindings[ 98] = G003400;
  sx_node_bindings[ 99] = G003402;
  sx_node_bindings[ 100] = G003404;
  sx_node_bindings[ 1] = eul_nil;
  sx_node_bindings[ 101] = sym_3407;
  sx_node_bindings[ 102] = sym_3408;
  sx_node_bindings[ 103] = sym_3409;
  sx_node_bindings[ 104] = sym_3410;
  sx_node_bindings[ 105] = sym_3411;
  sx_node_bindings[ 106] = sym_3412;
  sx_node_bindings[ 107] = sym_3413;
  sx_node_bindings[ 108] = sym_3414;
  sx_node_bindings[ 109] = sym_3415;
  sx_node_bindings[ 110] = sym_3416;
  sx_node_bindings[ 111] = sym_3417;
  sx_node_bindings[ 112] = sym_3418;
  sx_node_bindings[ 113] = sym_3419;
  sx_node_bindings[ 114] = sym_3420;
  sx_node_bindings[ 115] = sym_3421;
  sx_node_bindings[ 116] = sym_3422;
  sx_node_bindings[ 117] = sym_3423;
  sx_node_bindings[ 118] = sym_3424;
  sx_node_bindings[ 119] = sym_3425;
  sx_node_bindings[ 120] = sym_3426;
  sx_node_bindings[ 121] = sym_3427;
  sx_node_bindings[ 122] = sym_3428;
  sx_node_bindings[ 123] = sym_3429;
  sx_node_bindings[ 124] = sym_3430;
  sx_node_bindings[ 125] = sym_3431;
  sx_node_bindings[ 126] = sym_3432;
  eul_allocate_lambda( sx_node_bindings[0], "initialize-sx-node", 0, G003406);

  }
}


/* eof */
