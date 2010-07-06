/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module stream3
 **  Copyright: See file stream3.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_integer();
extern void initialize_module_collect();
extern void initialize_module_list();
extern void initialize_module_character();
extern void initialize_module_string();
extern void initialize_module_vector();
extern void initialize_module_float();
extern void initialize_module_stream1();
extern void initialize_module_stream();
extern void initialize_module_format();
extern LispRef stream1_bindings[];
extern LispRef list_bindings[];
extern LispRef telos_bindings[];
extern LispRef string_bindings[];
extern LispRef vector_bindings[];
extern LispRef float_bindings[];
extern LispRef integer_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef collect_bindings[];
extern LispRef character_bindings[];
extern LispRef format_bindings[];
extern LispRef socket_bindings[];
extern LispRef stream2_bindings[];
extern LispRef stream_bindings[];

/* Module bindings with size 51 */
LispRef stream3_bindings[51];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module stream3 */
void initialize_module_stream3()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_integer();
  initialize_module_collect();
  initialize_module_list();
  initialize_module_character();
  initialize_module_string();
  initialize_module_vector();
  initialize_module_float();
  initialize_module_stream1();
  initialize_module_stream();
  initialize_module_format();
  eul_fast_table_set(eul_modules,"stream3",(LispRef) stream3_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_3603, G003602, sym_3600, sym_3599, G003598, G003596, G003594, G003590, G003587, G003585, G003583, G003580, G003577, G003574, G003569, G003567, G003564, G003562, G003560, sym_3555, G003554, G003551, G003548, G003543, G003541, G003538, G003536, G003534, G003532, sym_3530, G003529;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 19 is_init: 0 index: 3 binding: (method-generic-prin) */
  static const void *G003528[] = {I(ab,1c,82,02),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,0f),I(23,00,00,00),B(stream3 ,2),I(82,02,1d,27),I(3c,24,00,00),B(stream ,25),I(3c,02,2a,1b),I(06,1c,1c,1f),I(05,24,00,00),B(stream ,4),I(3c,03,2a,1f),I(03,27,3e,24),B(stream ,25),I(3c,02,2a,1f),I(04,45,05,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 4 binding: (method-generic-prin) */
  static const void *G003531[] = {I(ab,1c,06,1d),I(1c,1f,03,24),B(stream ,4),I(3c,03,2a,1d),I(45,03,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 5 binding: (method-generic-prin) */
  static const void *G003533[] = {I(ab,1c,82,02),I(1b,1d,24,00),B(stream2 ,2),I(3c,02,2a,1d),I(45,03,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 6 binding: (method-generic-prin) */
  static const void *G003535[] = {I(ab,1b,1d,24),B(stream ,25),I(3c,02,2a,1c),I(45,02,00,00)};

  eul_allocate_static_string(str_3539, " . ", 3);
  /* Byte-vector with size: 27 is_init: 0 index: 8 binding: (method-generic-prin) */
  static const void *G003537[] = {I(ab,1b,27,28),I(24,00,00,00),B(stream ,25),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,2),I(1d,24,00,00),B(stream ,16),I(3c,03,1b,12),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,2d),I(23,00,00,00),B(stream3 ,7),I(26,00,00,00),I(00,00,00,03),I(1f,04,24,00),B(stream ,4),I(3c,03,2a,1d),I(1d,24,00,00),B(stream ,23),I(3c,02,2a,1d),I(27,29,24,00),B(stream ,25),I(3c,02,2a,1f),I(03,45,04,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 9 binding: anonymous */
  static const void *G003540[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,3f),I(47,00,00,47),I(00,03,02,47),I(00,01,1c,24),B(stream ,23),I(3c,02,2a,47),I(00,01,27,20),I(24,00,00,00),B(stream ,25),I(3c,02,2a,47),I(00,03,2b,1b),I(48,00,03,47),I(00,04,3d,00),I(03,22,02,32),I(00,00,00,06),I(86,45,01,00)};

  eul_allocate_static_string(str_3544, "#()", 3);
  eul_allocate_static_string(str_3545, "#(", 2);
  eul_allocate_static_string(str_3546, "#(", 2);
  /* Byte-vector with size: 61 is_init: 0 index: 13 binding: (method-generic-prin) */
  static const void *G003542[] = {I(ab,46,06,1c),I(48,00,00,1b),I(48,00,01,47),I(00,00,06,1b),I(2d,1b,34,00),I(00,00,00,26),I(23,00,00,00),B(stream3 ,10),I(26,00,00,00),I(00,00,00,03),I(47,00,01,24),B(stream ,4),I(3c,03,32,00),I(00,00,00,bc),I(1c,83,19,1b),I(34,00,00,00),I(00,00,00,4c),I(23,00,00,00),B(stream3 ,11),I(84,47,00,01),I(24,00,00,00),B(stream ,4),I(3c,03,2a,47),I(00,00,82,02),I(47,00,01,1c),I(24,00,00,00),B(stream ,23),I(3c,02,2a,47),I(00,01,27,29),I(24,00,00,00),B(stream ,25),I(3c,02,22,01),I(32,00,00,00),I(00,00,00,6c),I(1d,2c,82,1c),I(48,00,02,1b),I(48,00,03,23),B(stream3 ,12),I(84,47,00,01),I(24,00,00,00),B(stream ,4),I(3c,03,2a,86),I(1b,48,00,04),I(23,00,00,00),B(stream3 ,2),I(23,00,00,00),B(stream3 ,9),I(3b,00,48,00),I(04,47,00,04),I(3c,00,2a,47),I(00,00,47,00),I(02,02,47,00),I(01,1c,24,00),B(stream ,23),I(3c,02,2a,47),I(00,01,27,29),I(24,00,00,00),B(stream ,25),I(3c,02,22,04),I(22,01,2a,47),I(00,00,45,04)};

  eul_allocate_static_string(str_3549, "#<~a: ~a:~a>", 12);
  /* Byte-vector with size: 15 is_init: 0 index: 15 binding: (method-generic-write) */
  static const void *G003547[] = {I(ab,1c,04,1b),I(82,02,1f,03),I(84,24,00,00),B(socket ,8),I(08,1f,04,26),I(00,00,00,03),I(24,00,00,00),B(socket ,8),I(08,1f,04,23),B(stream3 ,14),I(1f,04,1f,04),I(1f,04,24,00),B(format ,4),I(3c,05,2a,1f),I(05,45,06,00)};

  eul_allocate_static_string(str_3552, "#<~a: ~a:~a>", 12);
  /* Byte-vector with size: 14 is_init: 0 index: 17 binding: (method-generic-write) */
  static const void *G003550[] = {I(ab,1c,04,1b),I(82,02,1f,03),I(83,24,00,00),B(socket ,2),I(08,1f,04,82),I(24,00,00,00),B(socket ,2),I(08,1f,04,23),B(stream3 ,16),I(1f,04,1f,04),I(1f,04,24,00),B(format ,4),I(3c,05,2a,1f),I(05,45,06,00)};

  eul_allocate_static_string(str_3556, "*unconnected*", 13);
  eul_allocate_static_string(str_3557, "*unconnected*", 13);
  eul_allocate_static_string(str_3558, "#<~a: ~a>", 9);
  /* Byte-vector with size: 47 is_init: 0 index: 22 binding: (method-generic-write) */
  static const void *G003553[] = {I(ab,1c,26,00),I(00,00,00,05),I(24,00,00,00),B(stream2 ,21),I(08,1d,26,00),I(00,00,00,04),I(24,00,00,00),B(stream2 ,21),I(08,1f,03,82),I(24,00,00,00),B(stream2 ,21),I(08,1f,04,04),I(1b,82,02,1d),I(23,00,00,00),B(stream3 ,18),I(50,1b,34,00),I(00,00,00,36),I(1f,04,24,00),B(stream2 ,25),I(3c,01,1b,34),I(00,00,00,15),I(1f,05,84,24),B(stream2 ,4),I(08,32,00,00),I(00,00,00,0f),I(23,00,00,00),B(stream3 ,19),I(22,01,32,00),I(00,00,00,30),I(1f,05,24,00),B(stream2 ,25),I(3c,01,1b,34),I(00,00,00,15),I(1f,06,84,24),B(stream2 ,4),I(08,32,00,00),I(00,00,00,0f),I(23,00,00,00),B(stream3 ,20),I(22,01,1f,07),I(23,00,00,00),B(stream3 ,21),I(1f,04,1f,03),I(24,00,00,00),B(format ,4),I(3c,04,2a,1f),I(08,45,09,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 23 binding: (method-generic-write) */
  static const void *G003559[] = {I(ab,1b,27,22),I(24,00,00,00),B(stream ,25),I(3c,02,2a,1c),I(06,1d,1c,1f),I(03,24,00,00),B(stream ,4),I(3c,03,2a,1c),I(27,22,24,00),B(stream ,25),I(3c,02,2a,1d),I(45,03,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 24 binding: (method-generic-write) */
  static const void *G003561[] = {I(ab,1b,27,23),I(24,00,00,00),B(stream ,25),I(3c,02,2a,1b),I(27,5c,24,00),B(stream ,25),I(3c,02,2a,1b),I(1d,24,00,00),B(stream ,25),I(3c,02,2a,1c),I(45,02,00,00)};

  eul_allocate_static_string(str_3565, " . ", 3);
  /* Byte-vector with size: 27 is_init: 0 index: 26 binding: (method-generic-write) */
  static const void *G003563[] = {I(ab,1b,27,28),I(24,00,00,00),B(stream ,25),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,28),I(1d,24,00,00),B(stream ,16),I(3c,03,1b,12),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,2d),I(23,00,00,00),B(stream3 ,25),I(26,00,00,00),I(00,00,00,03),I(1f,04,24,00),B(stream ,4),I(3c,03,2a,1d),I(1d,24,00,00),B(stream ,3),I(3c,02,2a,1d),I(27,29,24,00),B(stream ,25),I(3c,02,2a,1f),I(03,45,04,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 27 binding: anonymous */
  static const void *G003566[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,3f),I(47,00,00,47),I(00,03,02,47),I(00,01,1c,24),B(stream ,3),I(3c,02,2a,47),I(00,01,27,20),I(24,00,00,00),B(stream ,25),I(3c,02,2a,47),I(00,03,2b,1b),I(48,00,03,47),I(00,04,3d,00),I(03,22,02,32),I(00,00,00,06),I(86,45,01,00)};

  eul_allocate_static_string(str_3570, "#()", 3);
  eul_allocate_static_string(str_3571, "#(", 2);
  eul_allocate_static_string(str_3572, "#(", 2);
  /* Byte-vector with size: 61 is_init: 0 index: 31 binding: (method-generic-write) */
  static const void *G003568[] = {I(ab,46,06,1c),I(48,00,00,1b),I(48,00,01,47),I(00,00,06,1b),I(2d,1b,34,00),I(00,00,00,26),I(23,00,00,00),B(stream3 ,28),I(26,00,00,00),I(00,00,00,03),I(47,00,01,24),B(stream ,4),I(3c,03,32,00),I(00,00,00,bc),I(1c,83,19,1b),I(34,00,00,00),I(00,00,00,4c),I(23,00,00,00),B(stream3 ,29),I(84,47,00,01),I(24,00,00,00),B(stream ,4),I(3c,03,2a,47),I(00,00,82,02),I(47,00,01,1c),I(24,00,00,00),B(stream ,3),I(3c,02,2a,47),I(00,01,27,29),I(24,00,00,00),B(stream ,25),I(3c,02,22,01),I(32,00,00,00),I(00,00,00,6c),I(1d,2c,82,1c),I(48,00,02,1b),I(48,00,03,23),B(stream3 ,30),I(84,47,00,01),I(24,00,00,00),B(stream ,4),I(3c,03,2a,86),I(1b,48,00,04),I(23,00,00,00),B(stream3 ,2),I(23,00,00,00),B(stream3 ,27),I(3b,00,48,00),I(04,47,00,04),I(3c,00,2a,47),I(00,00,47,00),I(02,02,47,00),I(01,1c,24,00),B(stream ,3),I(3c,02,2a,47),I(00,01,27,29),I(24,00,00,00),B(stream ,25),I(3c,02,22,04),I(22,01,2a,47),I(00,00,45,04)};

  eul_allocate_static_string(str_3575, "#<~a: ~a>", 9);
  /* Byte-vector with size: 10 is_init: 0 index: 33 binding: (method-generic-write) */
  static const void *G003573[] = {I(ab,1c,04,1b),I(82,02,1f,03),I(82,02,1f,03),I(23,00,00,00),B(stream3 ,32),I(1f,03,1f,03),I(24,00,00,00),B(format ,4),I(3d,04,05,45),I(05,00,00,00)};

  eul_allocate_static_string(str_3578, "%f", 2);
  /* Byte-vector with size: 6 is_init: 0 index: 35 binding: (method-generic-write) */
  static const void *G003576[] = {I(ab,1b,23,00),B(stream3 ,34),I(1f,03,24,00),B(stream ,22),I(3c,03,2a,1b),I(45,02,00,00)};

  eul_allocate_static_string(str_3581, "%i", 2);
  /* Byte-vector with size: 6 is_init: 0 index: 37 binding: (method-generic-write) */
  static const void *G003579[] = {I(ab,1b,23,00),B(stream3 ,36),I(1f,03,24,00),B(stream ,22),I(3c,03,2a,1b),I(45,02,00,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 38 binding: (method-generic-write) */
  static const void *G003582[] = {I(ab,1c,82,02),I(1b,06,1c,1c),I(1f,04,24,00),B(stream ,4),I(3c,03,2a,1d),I(27,3a,24,00),B(stream ,25),I(3c,02,2a,1f),I(03,45,04,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 39 binding: (method-generic-write) */
  static const void *G003584[] = {I(ab,1c,82,02),I(24,00,00,00),B(character ,10),I(1c,24,00,00),B(collect ,16),I(3c,02,1b,34),I(00,00,00,15),I(1c,1f,03,24),B(stream2 ,2),I(3c,02,32,00),I(00,00,00,28),I(1d,27,7c,24),B(stream ,25),I(3c,02,2a,1c),I(1f,03,24,00),B(stream2 ,2),I(3c,02,2a,1d),I(27,7c,24,00),B(stream ,25),I(3c,02,2a,1f),I(03,45,04,00)};

  eul_allocate_static_string(str_3588, "()", 2);
  /* Byte-vector with size: 6 is_init: 0 index: 41 binding: (method-generic-write) */
  static const void *G003586[] = {I(ab,23,00,00),B(stream3 ,40),I(84,1d,24,00),B(stream ,4),I(3c,03,2a,86),I(45,02,00,00)};

  eul_allocate_static_string(str_3591, "#<", 2);
  eul_allocate_static_string(str_3592, ": ", 2);
  /* Byte-vector with size: 22 is_init: 0 index: 44 binding: (method-generic-write) */
  static const void *G003589[] = {I(ab,23,00,00),B(stream3 ,42),I(84,1d,24,00),B(stream ,4),I(3c,03,2a,1c),I(04,1b,82,02),I(82,02,1b,06),I(1c,1c,1f,05),I(24,00,00,00),B(stream ,4),I(3c,03,2a,23),B(stream3 ,43),I(84,1f,05,24),B(stream ,4),I(3c,03,2a,1f),I(04,1f,04,24),B(stream ,12),I(3c,02,2a,1f),I(03,27,3e,24),B(stream ,25),I(3c,02,2a,1f),I(04,45,05,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 45 binding: (method-generic-prin) */
  static const void *G003593[] = {I(ab,24,00,00),B(stream2 ,28),I(3d,02,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 46 binding: (method-generic-write) */
  static const void *G003595[] = {I(ab,1b,84,24),B(stream2 ,21),I(08,1b,34,00),I(00,00,00,1e),I(1c,84,24,00),B(stream2 ,21),I(08,1f,03,1f),I(03,1d,3d,02),I(04,22,01,32),I(00,00,00,06),I(86,45,03,00)};

  /* Byte-vector with size: 656 is_init: 0 index: 49 binding: top-level */
  static const void *G003597[] = {I(a9,24,00,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,03),I(02,84,86,24),B(stream2 ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,46),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,86,24),B(stream2 ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,48),I(23,00,00,00),B(stream3 ,45),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,28),I(26,00,00,00),I(00,00,00,03),I(02,84,86,24),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,44),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,28),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,25),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,41),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,28),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,5),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,39),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,28),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,81),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,38),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,28),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(integer ,2),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,37),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,28),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(float ,7),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,35),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,28),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,33),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,28),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(vector ,9),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,31),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,28),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,71),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,26),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,28),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(character ,5),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,24),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,28),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,23),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,28),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(stream2 ,5),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,22),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,28),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(socket ,2),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,17),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,28),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(socket ,8),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,28),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,47),I(23,00,00,00),B(stream3 ,15),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,28),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(vector ,9),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,48),I(23,00,00,00),B(stream3 ,13),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,71),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,48),I(23,00,00,00),B(stream3 ,8),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(character ,5),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,48),I(23,00,00,00),B(stream3 ,6),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,5),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,48),I(23,00,00,00),B(stream3 ,5),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,48),I(23,00,00,00),B(stream3 ,4),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,75),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(stream2 ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(stream3 ,48),I(23,00,00,00),B(stream3 ,3),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,84,45),I(84,00,00,00)};

  /* Byte-vector with size: 63 is_init: 1 index: 0 binding: initialize-stream3 */
  static const void *G003601[] = {I(87,25,00,00),B(stream3 ,1),I(24,00,00,00),B(format ,1),I(3e,0b,24,00),B(format ,0),I(3c,00,21,01),I(24,00,00,00),B(stream ,1),I(3e,0b,24,00),B(stream ,0),I(3c,00,21,01),I(24,00,00,00),B(stream1 ,1),I(3e,0b,24,00),B(stream1 ,0),I(3c,00,21,01),I(24,00,00,00),B(float ,1),I(3e,0b,24,00),B(float ,0),I(3c,00,21,01),I(24,00,00,00),B(vector ,1),I(3e,0b,24,00),B(vector ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(character ,1),I(3e,0b,24,00),B(character ,0),I(3c,00,21,01),I(24,00,00,00),B(list ,1),I(3e,0b,24,00),B(list ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(integer ,1),I(3e,0b,24,00),B(integer ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(stream3 ,50),I(23,00,00,00),B(stream3 ,49),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_3530,"anonymous");
  eul_allocate_bytevector( G003529,G003528);
  eul_allocate_bytevector( G003532,G003531);
  eul_allocate_bytevector( G003534,G003533);
  eul_allocate_bytevector( G003536,G003535);
  object_class(str_3539) = eul_static_string_class;
  eul_allocate_bytevector( G003538,G003537);
  eul_allocate_bytevector( G003541,G003540);
  object_class(str_3544) = eul_static_string_class;
  object_class(str_3545) = eul_static_string_class;
  object_class(str_3546) = eul_static_string_class;
  eul_allocate_bytevector( G003543,G003542);
  object_class(str_3549) = eul_static_string_class;
  eul_allocate_bytevector( G003548,G003547);
  object_class(str_3552) = eul_static_string_class;
  eul_allocate_bytevector( G003551,G003550);
  eul_intern_symbol(sym_3555,"r");
  object_class(str_3556) = eul_static_string_class;
  object_class(str_3557) = eul_static_string_class;
  object_class(str_3558) = eul_static_string_class;
  eul_allocate_bytevector( G003554,G003553);
  eul_allocate_bytevector( G003560,G003559);
  eul_allocate_bytevector( G003562,G003561);
  object_class(str_3565) = eul_static_string_class;
  eul_allocate_bytevector( G003564,G003563);
  eul_allocate_bytevector( G003567,G003566);
  object_class(str_3570) = eul_static_string_class;
  object_class(str_3571) = eul_static_string_class;
  object_class(str_3572) = eul_static_string_class;
  eul_allocate_bytevector( G003569,G003568);
  object_class(str_3575) = eul_static_string_class;
  eul_allocate_bytevector( G003574,G003573);
  object_class(str_3578) = eul_static_string_class;
  eul_allocate_bytevector( G003577,G003576);
  object_class(str_3581) = eul_static_string_class;
  eul_allocate_bytevector( G003580,G003579);
  eul_allocate_bytevector( G003583,G003582);
  eul_allocate_bytevector( G003585,G003584);
  object_class(str_3588) = eul_static_string_class;
  eul_allocate_bytevector( G003587,G003586);
  object_class(str_3591) = eul_static_string_class;
  object_class(str_3592) = eul_static_string_class;
  eul_allocate_bytevector( G003590,G003589);
  eul_allocate_bytevector( G003594,G003593);
  eul_allocate_bytevector( G003596,G003595);
  eul_intern_symbol(sym_3599,"(method generic-write)");
  eul_intern_symbol(sym_3600,"(method generic-prin)");
  eul_allocate_bytevector( G003598,G003597);
  eul_intern_symbol(sym_3603,"top-level");
  eul_allocate_bytevector( G003602,G003601);

  /* Set local bindings */
  stream3_bindings[ 2] = sym_3530;
  stream3_bindings[ 3] = G003529;
  stream3_bindings[ 4] = G003532;
  stream3_bindings[ 5] = G003534;
  stream3_bindings[ 6] = G003536;
  stream3_bindings[ 7] = str_3539;
  stream3_bindings[ 8] = G003538;
  stream3_bindings[ 9] = G003541;
  stream3_bindings[ 10] = str_3544;
  stream3_bindings[ 11] = str_3545;
  stream3_bindings[ 12] = str_3546;
  stream3_bindings[ 13] = G003543;
  stream3_bindings[ 14] = str_3549;
  stream3_bindings[ 15] = G003548;
  stream3_bindings[ 16] = str_3552;
  stream3_bindings[ 17] = G003551;
  stream3_bindings[ 18] = sym_3555;
  stream3_bindings[ 19] = str_3556;
  stream3_bindings[ 20] = str_3557;
  stream3_bindings[ 21] = str_3558;
  stream3_bindings[ 22] = G003554;
  stream3_bindings[ 23] = G003560;
  stream3_bindings[ 24] = G003562;
  stream3_bindings[ 25] = str_3565;
  stream3_bindings[ 26] = G003564;
  stream3_bindings[ 27] = G003567;
  stream3_bindings[ 28] = str_3570;
  stream3_bindings[ 29] = str_3571;
  stream3_bindings[ 30] = str_3572;
  stream3_bindings[ 31] = G003569;
  stream3_bindings[ 32] = str_3575;
  stream3_bindings[ 33] = G003574;
  stream3_bindings[ 34] = str_3578;
  stream3_bindings[ 35] = G003577;
  stream3_bindings[ 36] = str_3581;
  stream3_bindings[ 37] = G003580;
  stream3_bindings[ 38] = G003583;
  stream3_bindings[ 39] = G003585;
  stream3_bindings[ 40] = str_3588;
  stream3_bindings[ 41] = G003587;
  stream3_bindings[ 42] = str_3591;
  stream3_bindings[ 43] = str_3592;
  stream3_bindings[ 44] = G003590;
  stream3_bindings[ 45] = G003594;
  stream3_bindings[ 46] = G003596;
  stream3_bindings[ 47] = sym_3599;
  stream3_bindings[ 48] = sym_3600;
  stream3_bindings[ 49] = G003598;
  stream3_bindings[ 1] = eul_nil;
  stream3_bindings[ 50] = sym_3603;
  eul_allocate_lambda( stream3_bindings[0], "initialize-stream3", 0, G003602);

  }
}


/* eof */
