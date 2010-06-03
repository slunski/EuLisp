/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module read
 **  Copyright: See file read.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_condition();
extern void initialize_module_convert();
extern void initialize_module_convert1();
extern void initialize_module_vector();
extern void initialize_module_string();
extern void initialize_module_lock();
extern void initialize_module_dynamic();
extern void initialize_module_table();
extern void initialize_module_stream();
extern LispRef stream_bindings[];
extern LispRef vector_bindings[];
extern LispRef convert1_bindings[];
extern LispRef telos_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef stream1_bindings[];
extern LispRef table_bindings[];
extern LispRef convert_bindings[];
extern LispRef string_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef lock_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef table1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot1_bindings[];
extern LispRef condition_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef stream2_bindings[];

/* Module bindings with size 109 */
LispRef read_bindings[109];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module read */
void initialize_module_read()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_condition();
  initialize_module_convert();
  initialize_module_convert1();
  initialize_module_vector();
  initialize_module_string();
  initialize_module_lock();
  initialize_module_dynamic();
  initialize_module_table();
  initialize_module_stream();
  eul_fast_table_set(eul_modules,"read",(LispRef) read_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_9193, sym_9192, sym_9191, sym_9190, sym_9189, sym_9188, sym_9187, sym_9186, sym_9185, sym_9184, sym_9183, G009182, G009180, G009178, sym_9174, sym_9172, sym_9171, G009170, sym_9164, G009163, G009160, G009158, G009156, G009154, G009152, G009150, G009148, G009146, G009144, G009142, G009140, key_9138, sym_9137, G009136, G009134, key_9132, G009131, sym_9129, sym_9128, sym_9127, key_9125, sym_9113, key_9112, key_9111, sym_9110, key_9109, key_9108, key_9107, sym_9106, key_9105, sym_9104, key_9103, key_9102, G009101, G009099, G009097, G009095, G009093;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 1 is_init: 0 index: 32 binding: (method-specialp) */
  static const void *G009092[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 33 binding: (method-specialp) */
  static const void *G009094[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 4 is_init: 0 index: 34 binding: (setter-tag) */
  static const void *G009096[] = {I(ab,1c,82,1d),I(24,00,00,00),B(read ,31),I(09,45,02,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 35 binding: anonymous */
  static const void *G009098[] = {I(43,03,1d,26),I(00,00,00,04),I(24,00,00,00),B(stream2 ,21),I(08,1b,1f,03),I(1f,03,24,00),B(read ,28),I(3d,03,04,45),I(04,00,00,00)};

  eul_allocate_static_cons(cons_9114, NULL, NULL);
  eul_allocate_static_string(str_9115, "(", 1);
  eul_allocate_static_string(str_9116, ")", 1);
  eul_allocate_static_string(str_9117, "#(", 2);
  eul_allocate_static_string(str_9118, "'", 1);
  eul_allocate_static_string(str_9119, "`", 1);
  eul_allocate_static_string(str_9120, ",", 1);
  eul_allocate_static_string(str_9121, ",@", 2);
  eul_allocate_static_string(str_9122, ".", 1);
  eul_allocate_static_string(str_9123, "#;", 2);
  eul_allocate_static_string(str_9124, "<end of stream>", 15);
  eul_allocate_static_string(str_9126, "", 0);
  /* Byte-vector with size: 313 is_init: 0 index: 64 binding: top-level */
  static const void *G009100[] = {I(a9,24,00,00),B(stream2 ,21),I(23,00,00,00),B(read ,36),I(24,00,00,00),B(stream2 ,50),I(23,00,00,00),B(read ,37),I(23,00,00,00),B(read ,38),I(23,00,00,00),B(read ,35),I(3b,03,24,00),B(mop_gf ,2),I(3c,05,1b,89),B(read ,12),I(2a,24,00,00),B(condition ,9),I(24,00,00,00),B(boot1 ,27),I(3c,01,24,00),B(boot1 ,27),I(3c,00,24,00),B(mop_class ,71),I(23,00,00,00),B(read ,39),I(23,00,00,00),B(read ,40),I(23,00,00,00),B(read ,41),I(1f,05,23,00),B(read ,42),I(1f,06,23,00),B(read ,43),I(86,24,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(read ,9),I(2a,24,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,27),I(3c,01,23,00),B(read ,39),I(23,00,00,00),B(read ,44),I(23,00,00,00),B(read ,45),I(23,00,00,00),B(read ,46),I(24,00,00,00),B(boot1 ,27),I(3c,04,1b,24),B(boot1 ,27),I(3c,01,24,00),B(mop_class ,71),I(23,00,00,00),B(read ,39),I(23,00,00,00),B(read ,47),I(23,00,00,00),B(read ,41),I(1f,06,23,00),B(read ,42),I(1f,06,23,00),B(read ,43),I(23,00,00,00),B(read ,48),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(read ,31),I(2a,24,00,00),B(read ,31),I(23,00,00,00),B(read ,46),I(23,00,00,00),B(read ,49),I(24,00,00,00),B(mop_gf ,2),I(3c,03,1b,89),B(read ,14),I(2a,24,00,00),B(read ,31),I(23,00,00,00),B(read ,46),I(23,00,00,00),B(read ,50),I(24,00,00,00),B(mop_gf ,2),I(3c,03,1b,89),B(read ,7),I(2a,24,00,00),B(read ,31),I(23,00,00,00),B(read ,46),I(23,00,00,00),B(read ,51),I(24,00,00,00),B(mop_gf ,2),I(3c,03,1b,89),B(read ,18),I(2a,24,00,00),B(read ,7),I(89,00,00,00),B(read ,23),I(2a,24,00,00),B(read ,31),I(23,00,00,00),B(read ,46),I(23,00,00,00),B(read ,52),I(24,00,00,00),B(mop_gf ,2),I(3c,03,1b,89),B(read ,20),I(2a,24,00,00),B(read ,31),I(23,00,00,00),B(read ,46),I(23,00,00,00),B(read ,53),I(24,00,00,00),B(mop_gf ,2),I(3c,03,1b,89),B(read ,21),I(2a,24,00,00),B(read ,31),I(23,00,00,00),B(read ,46),I(23,00,00,00),B(read ,54),I(24,00,00,00),B(mop_gf ,2),I(3c,03,1b,89),B(read ,8),I(2a,24,00,00),B(read ,31),I(23,00,00,00),B(read ,46),I(23,00,00,00),B(read ,55),I(24,00,00,00),B(mop_gf ,2),I(3c,03,1b,89),B(read ,26),I(2a,24,00,00),B(read ,31),I(23,00,00,00),B(read ,46),I(23,00,00,00),B(read ,56),I(24,00,00,00),B(mop_gf ,2),I(3c,03,1b,89),B(read ,19),I(2a,24,00,00),B(read ,31),I(23,00,00,00),B(read ,46),I(23,00,00,00),B(read ,57),I(24,00,00,00),B(mop_gf ,2),I(3c,03,1b,89),B(read ,25),I(2a,24,00,00),B(read ,31),I(23,00,00,00),B(read ,46),I(23,00,00,00),B(read ,58),I(24,00,00,00),B(mop_gf ,2),I(3c,03,1b,89),B(read ,6),I(2a,26,00,00),I(00,00,00,0b),I(24,00,00,00),B(read ,14),I(24,00,00,00),B(read ,7),I(24,00,00,00),B(read ,18),I(24,00,00,00),B(read ,23),I(24,00,00,00),B(read ,20),I(24,00,00,00),B(read ,21),I(24,00,00,00),B(read ,8),I(24,00,00,00),B(read ,26),I(24,00,00,00),B(read ,19),I(24,00,00,00),B(read ,25),I(24,00,00,00),B(read ,6),I(24,00,00,00),B(boot1 ,40),I(3c,0c,1b,89),B(read ,30),I(2a,24,00,00),B(table1 ,4),I(24,00,00,00),B(mop_gf ,2),I(3c,01,1b,89),B(read ,17),I(2a,24,00,00),B(stream2 ,46),I(23,00,00,00),B(read ,59),I(23,00,00,00),B(read ,60),I(24,00,00,00),B(mop_gf ,2),I(3c,03,1b,89),B(read ,2),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,27),I(3c,00,24,00),B(boot1 ,27),I(3c,00,23,00),B(read ,61),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(read ,13),I(2a,24,00,00),B(read ,9),I(2a,24,00,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(read ,22),I(23,00,00,00),B(read ,62),I(23,00,00,00),B(read ,34),I(3b,02,1d,3c),I(02,2a,24,00),B(read ,13),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,27),I(3c,00,24,00),B(read ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(read ,63),I(23,00,00,00),B(read ,33),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(read ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(read ,13),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(read ,31),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,27),I(3c,00,24,00),B(read ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(read ,63),I(23,00,00,00),B(read ,32),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(read ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(read ,13),I(2a,24,00,00),B(read ,31),I(45,26,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 66 binding: read-error */
  static const void *G009130[] = {I(43,fd,24,00),B(mop_gf ,17),I(86,1f,03,1f),I(03,24,00,00),B(boot ,9),I(3c,04,1b,24),B(read ,9),I(23,00,00,00),B(read ,65),I(1f,06,24,00),B(boot ,22),I(3d,04,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 67 binding: anonymous */
  static const void *G009133[] = {I(a9,47,00,00),I(24,00,00,00),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  /* Byte-vector with size: 67 is_init: 0 index: 70 binding: sread-s-expression */
  static const void *G009135[] = {I(43,fe,46,02),I(86,86,1d,12),I(1b,34,00,00),I(00,00,00,13),I(87,20,03,1d),I(32,00,00,00),I(00,00,00,18),I(1f,03,10,1b),I(20,04,1f,04),I(11,1b,20,06),I(1f,05,22,02),I(2a,1f,03,12),I(1b,34,00,00),I(00,00,00,13),I(86,20,03,1d),I(32,00,00,00),I(00,00,00,18),I(1f,04,10,1b),I(20,04,1f,05),I(11,1b,20,07),I(1f,06,22,02),I(2a,24,00,00),B(read ,2),I(83,24,00,00),B(stream2 ,21),I(08,1b,48,00),I(00,23,00,00),B(read ,68),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(read ,38),I(23,00,00,00),B(read ,67),I(3b,00,1c,0f),I(23,00,00,00),B(read ,68),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,47),I(00,00,24,00),B(lock ,3),I(3c,01,2a,24),B(read ,2),I(26,00,00,00),I(00,00,00,04),I(24,00,00,00),B(stream2 ,21),I(08,23,00,00),B(read ,69),I(1f,0a,24,00),B(boot1 ,27),I(3c,02,24,00),B(mop_gf ,12),I(3c,02,2a,24),B(read ,2),I(1f,07,1f,07),I(24,00,00,00),B(read ,28),I(3c,03,47,00),I(00,24,00,00),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(45,0a,00,00)};

  /* Byte-vector with size: 40 is_init: 0 index: 71 binding: read-char */
  static const void *G009139[] = {I(a8,86,86,86),I(1f,03,12,1b),I(34,00,00,00),I(00,00,00,1c),I(24,00,00,00),B(stream2 ,50),I(20,04,1f,03),I(32,00,00,00),I(00,00,00,18),I(1f,04,10,1b),I(20,05,1f,05),I(11,1b,20,07),I(1f,06,22,02),I(2a,1f,04,12),I(1b,34,00,00),I(00,00,00,13),I(87,20,04,1f),I(03,32,00,00),I(00,00,00,17),I(1f,05,10,1b),I(20,05,1f,06),I(11,1b,20,08),I(1f,07,22,02),I(2a,1f,05,12),I(1b,34,00,00),I(00,00,00,1f),I(24,00,00,00),B(stream2 ,6),I(3c,00,1b,20),I(05,1f,04,22),I(01,32,00,00),I(00,00,00,17),I(1f,06,10,1b),I(20,05,1f,07),I(11,1b,20,09),I(1f,08,22,02),I(2a,1f,05,1f),I(05,1f,05,24),B(stream2 ,45),I(3d,03,07,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 72 binding: anonymous */
  static const void *G009141[] = {I(a9,47,00,00),I(24,00,00,00),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  /* Byte-vector with size: 67 is_init: 0 index: 73 binding: sread */
  static const void *G009143[] = {I(43,fe,46,02),I(86,86,1d,12),I(1b,34,00,00),I(00,00,00,13),I(87,20,03,1d),I(32,00,00,00),I(00,00,00,18),I(1f,03,10,1b),I(20,04,1f,04),I(11,1b,20,06),I(1f,05,22,02),I(2a,1f,03,12),I(1b,34,00,00),I(00,00,00,13),I(86,20,03,1d),I(32,00,00,00),I(00,00,00,18),I(1f,04,10,1b),I(20,04,1f,05),I(11,1b,20,07),I(1f,06,22,02),I(2a,24,00,00),B(read ,2),I(83,24,00,00),B(stream2 ,21),I(08,1b,48,00),I(00,23,00,00),B(read ,68),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(read ,38),I(23,00,00,00),B(read ,72),I(3b,00,1c,0f),I(23,00,00,00),B(read ,68),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,47),I(00,00,24,00),B(lock ,3),I(3c,01,2a,24),B(read ,2),I(26,00,00,00),I(00,00,00,04),I(24,00,00,00),B(stream2 ,21),I(08,23,00,00),B(read ,69),I(1f,0a,24,00),B(boot1 ,27),I(3c,02,24,00),B(mop_gf ,12),I(3c,02,2a,24),B(read ,2),I(1f,07,1f,07),I(24,00,00,00),B(read ,24),I(3c,03,47,00),I(00,24,00,00),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(45,0a,00,00)};

  /* Byte-vector with size: 40 is_init: 0 index: 74 binding: read-s-expression */
  static const void *G009145[] = {I(a8,86,86,86),I(1f,03,12,1b),I(34,00,00,00),I(00,00,00,1c),I(24,00,00,00),B(stream2 ,50),I(20,04,1f,03),I(32,00,00,00),I(00,00,00,18),I(1f,04,10,1b),I(20,05,1f,05),I(11,1b,20,07),I(1f,06,22,02),I(2a,1f,04,12),I(1b,34,00,00),I(00,00,00,13),I(87,20,04,1f),I(03,32,00,00),I(00,00,00,17),I(1f,05,10,1b),I(20,05,1f,06),I(11,1b,20,08),I(1f,07,22,02),I(2a,1f,05,12),I(1b,34,00,00),I(00,00,00,1f),I(24,00,00,00),B(stream2 ,6),I(3c,00,1b,20),I(05,1f,04,22),I(01,32,00,00),I(00,00,00,17),I(1f,06,10,1b),I(20,05,1f,07),I(11,1b,20,09),I(1f,08,22,02),I(2a,1f,05,1f),I(05,1f,05,24),B(read ,28),I(3d,03,07,00)};

  /* Byte-vector with size: 38 is_init: 0 index: 75 binding: anonymous */
  static const void *G009147[] = {I(ab,1c,27,0a),I(51,1b,34,00),I(00,00,00,2e),I(1d,1d,0f,1b),I(24,00,00,00),B(boot ,24),I(3c,01,24,00),B(string ,13),I(24,00,00,00),B(convert ,2),I(3d,02,04,22),I(01,32,00,00),I(00,00,00,66),I(1d,47,00,02),I(50,1b,34,00),I(00,00,00,3a),I(1d,12,1b,34),I(00,00,00,0d),I(47,00,02,32),I(00,00,00,20),I(1f,03,24,00),B(boot ,24),I(3c,01,24,00),B(string ,13),I(24,00,00,00),B(convert ,2),I(3d,02,05,22),I(01,32,00,00),I(00,00,00,24),I(47,00,00,47),I(00,01,47,00),I(02,24,00,00),B(stream2 ,45),I(3c,03,1f,04),I(1f,04,0f,47),I(00,03,3d,02),I(04,22,01,45),I(03,00,00,00)};

  /* Byte-vector with size: 52 is_init: 0 index: 76 binding: read-line */
  static const void *G009149[] = {I(a8,46,05,86),I(86,86,1d,48),I(00,00,1c,48),I(00,01,1b,48),I(00,02,1f,03),I(12,1b,34,00),I(00,00,00,1a),I(24,00,00,00),B(stream2 ,50),I(48,00,00,47),I(00,00,32,00),I(00,00,00,17),I(1f,04,10,1b),I(48,00,00,1f),I(05,11,1b,20),I(07,1f,06,22),I(02,2a,1f,04),I(12,1b,34,00),I(00,00,00,12),I(87,48,00,01),I(47,00,01,32),I(00,00,00,16),I(1f,05,10,1b),I(48,00,01,1f),I(06,11,1b,20),I(08,1f,07,22),I(02,2a,1f,05),I(12,1b,34,00),I(00,00,00,1e),I(24,00,00,00),B(stream2 ,6),I(3c,00,1b,48),I(00,02,47,00),I(02,22,01,32),I(00,00,00,16),I(1f,06,10,1b),I(48,00,02,1f),I(07,11,1b,20),I(09,1f,08,22),I(02,2a,86,1b),I(48,00,03,23),B(read ,38),I(23,00,00,00),B(read ,75),I(3b,02,48,00),I(03,47,00,00),I(47,00,01,47),I(00,02,24,00),B(stream2 ,45),I(3c,03,86,47),I(00,03,3d,02),I(08,00,00,00)};

  /* Byte-vector with size: 22 is_init: 0 index: 77 binding: set-dispatch-macro-character */
  static const void *G009151[] = {I(43,03,1d,1d),I(24,00,00,00),B(boot1 ,27),I(3c,02,1b,24),B(string ,13),I(24,00,00,00),B(convert ,2),I(3c,02,24,00),B(mop_class ,6),I(23,00,00,00),B(read ,39),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,24,00),B(table ,3),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(read ,17),I(1d,1f,06,1f),I(03,3d,03,07),I(45,07,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 78 binding: tag */
  static const void *G009153[] = {I(aa,82,24,00),B(read ,31),I(08,45,00,00)};

  /* Byte-vector with size: 40 is_init: 0 index: 79 binding: read */
  static const void *G009155[] = {I(a8,86,86,86),I(1f,03,12,1b),I(34,00,00,00),I(00,00,00,1c),I(24,00,00,00),B(read ,12),I(20,04,1f,03),I(32,00,00,00),I(00,00,00,18),I(1f,04,10,1b),I(20,05,1f,05),I(11,1b,20,07),I(1f,06,22,02),I(2a,1f,04,12),I(1b,34,00,00),I(00,00,00,13),I(87,20,04,1f),I(03,32,00,00),I(00,00,00,17),I(1f,05,10,1b),I(20,05,1f,06),I(11,1b,20,08),I(1f,07,22,02),I(2a,1f,05,12),I(1b,34,00,00),I(00,00,00,1f),I(24,00,00,00),B(stream2 ,6),I(3c,00,1b,20),I(05,1f,04,22),I(01,32,00,00),I(00,00,00,17),I(1f,06,10,1b),I(20,05,1f,07),I(11,1b,20,09),I(1f,08,22,02),I(2a,1f,05,1f),I(05,1f,05,24),B(stream2 ,45),I(3d,03,07,00)};

  /* Byte-vector with size: 53 is_init: 0 index: 80 binding: read-token */
  static const void *G009157[] = {I(a8,86,86,86),I(1f,03,12,1b),I(34,00,00,00),I(00,00,00,1c),I(24,00,00,00),B(stream2 ,50),I(20,04,1f,03),I(32,00,00,00),I(00,00,00,18),I(1f,04,10,1b),I(20,05,1f,05),I(11,1b,20,07),I(1f,06,22,02),I(2a,1f,04,12),I(1b,34,00,00),I(00,00,00,13),I(87,20,04,1f),I(03,32,00,00),I(00,00,00,17),I(1f,05,10,1b),I(20,05,1f,06),I(11,1b,20,08),I(1f,07,22,02),I(2a,1f,05,12),I(1b,34,00,00),I(00,00,00,1f),I(24,00,00,00),B(stream2 ,6),I(3c,00,1b,20),I(05,1f,04,22),I(01,32,00,00),I(00,00,00,17),I(1f,06,10,1b),I(20,05,1f,07),I(11,1b,20,09),I(1f,08,22,02),I(2a,1f,05,24),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,1b,24),B(read ,6),I(50,1b,34,00),I(00,00,00,26),I(1f,06,34,00),I(00,00,00,16),I(1f,07,24,00),B(stream2 ,19),I(3d,01,09,32),I(00,00,00,07),I(1f,05,32,00),I(00,00,00,07),I(1c,45,09,00)};

  eul_allocate_static_string(str_9161, "unexpected end of file during vector ~a", 39);
  /* Byte-vector with size: 48 is_init: 0 index: 82 binding: anonymous */
  static const void *G009159[] = {I(aa,47,01,00),I(24,00,00,00),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,1b,48),I(00,00,47,00),I(00,24,00,00),B(read ,23),I(50,1b,34,00),I(00,00,00,2a),I(1d,24,00,00),B(boot ,8),I(3c,01,1f,03),I(24,00,00,00),B(boot ,24),I(3c,01,41,00),B(boot1 ,55),I(22,02,32,00),I(00,00,00,73),I(47,00,00,24),B(read ,6),I(50,1b,34,00),I(00,00,00,4a),I(1f,03,24,00),B(boot ,24),I(3c,01,47,01),I(00,23,00,00),B(read ,81),I(1d,24,00,00),B(read ,3),I(3c,03,2a,1f),I(04,24,00,00),B(boot ,8),I(3c,01,1f,05),I(24,00,00,00),B(boot ,24),I(3c,01,41,00),B(boot1 ,55),I(22,03,32,00),I(00,00,00,1d),I(47,00,00,47),I(00,01,47,01),I(03,3c,02,1b),I(1f,05,0f,47),I(00,03,3d,01),I(05,22,01,22),I(01,45,03,00)};

  eul_allocate_static_string(str_9165, "misplaced dot/unquote after ~s", 30);
  eul_allocate_static_string(str_9166, "misplaced dot after ~s", 22);
  eul_allocate_static_string(str_9167, " ... ", 5);
  eul_allocate_static_string(str_9168, "unexpected end of file during list ~a", 37);
  /* Byte-vector with size: 138 is_init: 0 index: 88 binding: anonymous */
  static const void *G009162[] = {I(aa,47,01,00),I(24,00,00,00),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,1b,48),I(00,00,47,00),I(00,24,00,00),B(read ,7),I(50,1b,34,00),I(00,00,00,16),I(1d,24,00,00),B(boot ,24),I(3d,01,03,32),I(00,00,01,ec),I(47,00,00,24),B(read ,19),I(50,1b,34,00),I(00,00,01,2a),I(47,01,00,24),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,1b,24),B(read ,8),I(50,1b,34,00),I(00,00,00,aa),I(47,01,00,24),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,1b,47),I(00,01,47,01),I(03,3c,02,47),I(00,01,34,00),I(00,00,00,26),I(47,01,00,24),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,24,00),B(read ,7),I(50,32,00,00),I(00,00,00,08),I(86,1b,34,00),I(00,00,00,36),I(1c,86,47,01),I(03,3c,02,1b),I(24,00,00,00),B(boot1 ,27),I(3c,01,23,00),B(read ,83),I(1c,0f,1f,0b),I(1c,24,00,00),B(read ,29),I(3d,02,0c,22),I(03,32,00,00),I(00,00,00,28),I(1f,08,24,00),B(boot ,24),I(3c,01,47,01),I(00,23,00,00),B(read ,84),I(1d,24,00,00),B(read ,3),I(3d,03,0a,22),I(01,22,03,32),I(00,00,00,5e),I(47,01,00,24),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,1b,24),B(read ,7),I(50,12,1b,34),I(00,00,00,2d),I(1f,07,24,00),B(boot ,24),I(3c,01,47,01),I(00,23,00,00),B(read ,85),I(1d,24,00,00),B(read ,3),I(3d,03,09,22),I(01,32,00,00),I(00,00,00,16),I(1f,07,1f,04),I(24,00,00,00),B(read ,29),I(3d,02,08,22),I(02,22,02,32),I(00,00,00,b6),I(47,00,00,24),B(read ,6),I(50,1b,34,00),I(00,00,00,8e),I(1f,04,24,00),B(boot ,24),I(3c,01,1b,24),B(boot ,8),I(3c,01,1b,26),I(00,00,00,80),I(1a,1b,34,00),I(00,00,00,0e),I(1d,32,00,00),I(00,00,00,3f),I(1d,10,1f,03),I(11,1b,10,1f),I(05,11,1b,10),I(1b,10,1f,0d),I(11,1b,10,1b),I(10,1f,10,11),I(1b,10,1f,12),I(10,1f,0b,1f),I(0a,1f,08,23),B(read ,86),I(1f,07,1f,06),I(1f,06,24,00),B(boot1 ,27),I(3c,07,22,0c),I(47,01,00,23),B(read ,87),I(1d,24,00,00),B(read ,3),I(3c,03,2a,1f),I(08,24,00,00),B(boot ,24),I(3d,01,09,22),I(04,32,00,00),I(00,00,00,1e),I(47,00,00,47),I(00,01,47,01),I(03,3c,02,1b),I(1f,06,0f,47),I(00,02,3d,01),I(06,22,01,22),I(01,22,01,45),I(03,00,00,00)};

  eul_allocate_static_string(str_9173, "misplaced unquote", 17);
  eul_allocate_static_string(str_9175, "misplaced unquote-splicing", 26);
  eul_allocate_static_string(str_9176, "unexpected token ~a", 19);
  /* Byte-vector with size: 197 is_init: 0 index: 95 binding: anonymous */
  static const void *G009169[] = {I(ab,46,04,1c),I(48,00,00,1b),I(48,00,01,47),I(00,00,24,00),B(read ,13),I(3c,01,1b,34),I(00,00,02,c1),I(47,00,00,24),B(read ,14),I(50,1b,34,00),I(00,00,00,2e),I(86,1b,48,00),I(02,23,00,00),B(read ,38),I(23,00,00,00),B(read ,88),I(3b,01,48,00),I(02,86,47,00),I(02,3d,01,05),I(22,01,32,00),I(00,00,02,82),I(47,00,00,24),B(read ,18),I(50,1b,34,00),I(00,00,00,2e),I(86,1b,48,00),I(03,23,00,00),B(read ,38),I(23,00,00,00),B(read ,82),I(3b,01,48,00),I(03,86,47,00),I(03,3d,01,06),I(22,01,32,00),I(00,00,02,48),I(47,00,00,24),B(read ,20),I(50,1b,34,00),I(00,00,00,3e),I(47,01,00,24),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,1b,47),I(00,01,47,01),I(03,3c,02,1b),I(24,00,00,00),B(boot1 ,27),I(3c,01,23,00),B(read ,89),I(1c,0f,22,03),I(32,00,00,00),I(00,00,02,00),I(47,00,00,24),B(read ,21),I(50,1b,34,00),I(00,00,00,3a),I(47,01,00,24),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,1b,87),I(47,01,03,3c),I(02,1b,24,00),B(boot1 ,27),I(3c,01,23,00),B(read ,90),I(1c,0f,22,03),I(32,00,00,00),I(00,00,01,ba),I(47,00,00,24),B(read ,8),I(50,1b,34,00),I(00,00,00,7a),I(47,00,01,34),I(00,00,00,39),I(47,01,00,24),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,1b,86),I(47,01,03,3c),I(02,1b,24,00),B(boot1 ,27),I(3c,01,23,00),B(read ,83),I(1c,0f,22,03),I(32,00,00,00),I(00,00,00,3a),I(47,01,00,23),B(read ,91),I(24,00,00,00),B(read ,3),I(3c,02,2a,47),I(01,00,24,00),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,1b,47),I(00,01,47,01),I(03,3d,02,09),I(22,01,32,00),I(00,00,01,32),I(47,00,00,24),B(read ,26),I(50,1b,34,00),I(00,00,00,7a),I(47,00,01,34),I(00,00,00,39),I(47,01,00,24),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,1b,86),I(47,01,03,3c),I(02,1b,24,00),B(boot1 ,27),I(3c,01,23,00),B(read ,92),I(1c,0f,22,03),I(32,00,00,00),I(00,00,00,3a),I(47,01,00,23),B(read ,93),I(24,00,00,00),B(read ,3),I(3c,02,2a,47),I(01,00,24,00),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,1b,47),I(00,01,47,01),I(03,3d,02,0a),I(22,01,32,00),I(00,00,00,ac),I(47,00,00,24),B(read ,25),I(50,1b,34,00),I(00,00,00,42),I(47,01,00,24),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,86,47),I(01,03,3c,02),I(2a,47,01,00),I(24,00,00,00),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,86,47),I(01,03,3d,02),I(0a,32,00,00),I(00,00,00,5f),I(47,00,00,24),B(read ,6),I(50,1b,34,00),I(00,00,00,26),I(47,01,01,34),I(00,00,00,15),I(47,01,00,24),B(stream2 ,19),I(3d,01,0b,32),I(00,00,00,08),I(47,01,02,32),I(00,00,00,2b),I(47,00,00,82),I(24,00,00,00),B(read ,31),I(08,47,01,00),I(23,00,00,00),B(read ,94),I(1d,24,00,00),B(read ,3),I(3c,03,2a,86),I(22,01,22,01),I(22,01,22,01),I(22,01,22,01),I(22,01,22,01),I(22,01,32,00),I(00,00,00,3f),I(24,00,00,00),B(read ,17),I(47,00,00,24),B(table ,3),I(3c,02,1b,24),B(mop_inspect ,6),I(3c,01,1b,34),I(00,00,00,19),I(47,01,00,47),I(00,00,86,1f),I(04,3d,03,05),I(32,00,00,00),I(00,00,00,0b),I(47,00,00,22),I(02,45,03,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 96 binding: parse */
  static const void *G009177[] = {I(43,03,46,04),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(86,1b,48,00),I(03,23,00,00),B(read ,38),I(23,00,00,00),B(read ,95),I(3b,02,48,00),I(03,47,00,00),I(24,00,00,00),B(read ,30),I(41,00,00,00),B(stream1 ,26),I(22,02,86,47),I(00,03,3d,02),I(04,45,04,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 97 binding: reverse-onto */
  static const void *G009179[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,1c),I(1d,11,1f,03),I(10,1b,1f,04),I(0f,1d,1c,24),B(read ,29),I(3d,02,06,22),I(03,45,03,00)};

  /* Byte-vector with size: 166 is_init: 1 index: 0 binding: initialize-read */
  static const void *G009181[] = {I(87,25,00,00),B(read ,1),I(24,00,00,00),B(stream ,1),I(3e,0b,24,00),B(stream ,0),I(3c,00,21,01),I(24,00,00,00),B(table ,1),I(3e,0b,24,00),B(table ,0),I(3c,00,21,01),I(24,00,00,00),B(dynamic ,1),I(3e,0b,24,00),B(dynamic ,0),I(3c,00,21,01),I(24,00,00,00),B(lock ,1),I(3e,0b,24,00),B(lock ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(vector ,1),I(3e,0b,24,00),B(vector ,0),I(3c,00,21,01),I(24,00,00,00),B(convert1 ,1),I(3e,0b,24,00),B(convert1 ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(condition ,1),I(3e,0b,24,00),B(condition ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(read ,31),I(86,25,00,00),B(read ,30),I(23,00,00,00),B(read ,98),I(23,00,00,00),B(read ,97),I(3b,02,25,00),B(read ,29),I(23,00,00,00),B(read ,99),I(23,00,00,00),B(read ,96),I(3b,03,25,00),B(read ,28),I(23,00,00,00),B(read ,100),I(23,00,00,00),B(read ,80),I(3b,ff,25,00),B(read ,27),I(86,25,00,00),B(read ,26),I(86,25,00,00),B(read ,25),I(23,00,00,00),B(read ,101),I(23,00,00,00),B(read ,79),I(3b,ff,25,00),B(read ,24),I(86,25,00,00),B(read ,23),I(23,00,00,00),B(read ,44),I(23,00,00,00),B(read ,78),I(3b,01,25,00),B(read ,22),I(86,25,00,00),B(read ,21),I(86,25,00,00),B(read ,20),I(86,25,00,00),B(read ,19),I(86,25,00,00),B(read ,18),I(86,25,00,00),B(read ,17),I(23,00,00,00),B(read ,102),I(23,00,00,00),B(read ,77),I(3b,03,25,00),B(read ,16),I(23,00,00,00),B(read ,103),I(23,00,00,00),B(read ,76),I(3b,ff,25,00),B(read ,15),I(86,25,00,00),B(read ,14),I(86,25,00,00),B(read ,13),I(86,25,00,00),B(read ,12),I(23,00,00,00),B(read ,104),I(23,00,00,00),B(read ,74),I(3b,ff,25,00),B(read ,11),I(23,00,00,00),B(read ,105),I(23,00,00,00),B(read ,73),I(3b,fe,25,00),B(read ,10),I(86,25,00,00),B(read ,9),I(86,25,00,00),B(read ,8),I(86,25,00,00),B(read ,7),I(86,25,00,00),B(read ,6),I(23,00,00,00),B(read ,106),I(23,00,00,00),B(read ,71),I(3b,ff,25,00),B(read ,5),I(23,00,00,00),B(read ,107),I(23,00,00,00),B(read ,70),I(3b,fe,25,00),B(read ,4),I(23,00,00,00),B(read ,40),I(23,00,00,00),B(read ,66),I(3b,fd,25,00),B(read ,3),I(86,25,00,00),B(read ,2),I(23,00,00,00),B(read ,108),I(23,00,00,00),B(read ,64),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G009093,G009092);
  eul_allocate_bytevector( G009095,G009094);
  eul_allocate_bytevector( G009097,G009096);
  eul_allocate_bytevector( G009099,G009098);
  eul_intern_keyword(key_9102,"source");
  eul_intern_keyword(key_9103,"read-action");
  eul_intern_symbol(sym_9104,"anonymous");
  eul_intern_keyword(key_9105,"name");
  eul_intern_symbol(sym_9106,"read-error");
  eul_intern_keyword(key_9107,"direct-superclasses");
  eul_intern_keyword(key_9108,"direct-slots");
  eul_intern_keyword(key_9109,"direct-keywords");
  eul_intern_symbol(sym_9110,"tag");
  eul_intern_keyword(key_9111,"keyword");
  eul_intern_keyword(key_9112,"tag");
  eul_intern_symbol(sym_9113,"special");
  object_class(cons_9114) = eul_static_cons_class;
  eul_car(cons_9114) = key_9112;
  eul_cdr(cons_9114) = eul_nil;
  object_class(str_9115) = eul_static_string_class;
  object_class(str_9116) = eul_static_string_class;
  object_class(str_9117) = eul_static_string_class;
  object_class(str_9118) = eul_static_string_class;
  object_class(str_9119) = eul_static_string_class;
  object_class(str_9120) = eul_static_string_class;
  object_class(str_9121) = eul_static_string_class;
  object_class(str_9122) = eul_static_string_class;
  object_class(str_9123) = eul_static_string_class;
  object_class(str_9124) = eul_static_string_class;
  eul_intern_keyword(key_9125,"string");
  object_class(str_9126) = eul_static_string_class;
  eul_intern_symbol(sym_9127,"specialp");
  eul_intern_symbol(sym_9128,"(setter tag)");
  eul_intern_symbol(sym_9129,"(method specialp)");
  eul_allocate_bytevector( G009101,G009100);
  eul_intern_keyword(key_9132,"value");
  eul_allocate_bytevector( G009131,G009130);
  eul_allocate_bytevector( G009134,G009133);
  eul_intern_symbol(sym_9137,"*clean-ups*");
  eul_intern_keyword(key_9138,"buffer");
  eul_allocate_bytevector( G009136,G009135);
  eul_allocate_bytevector( G009140,G009139);
  eul_allocate_bytevector( G009142,G009141);
  eul_allocate_bytevector( G009144,G009143);
  eul_allocate_bytevector( G009146,G009145);
  eul_allocate_bytevector( G009148,G009147);
  eul_allocate_bytevector( G009150,G009149);
  eul_allocate_bytevector( G009152,G009151);
  eul_allocate_bytevector( G009154,G009153);
  eul_allocate_bytevector( G009156,G009155);
  eul_allocate_bytevector( G009158,G009157);
  object_class(str_9161) = eul_static_string_class;
  eul_allocate_bytevector( G009160,G009159);
  eul_intern_symbol(sym_9164,"unquote");
  object_class(str_9165) = eul_static_string_class;
  object_class(str_9166) = eul_static_string_class;
  object_class(str_9167) = eul_static_string_class;
  object_class(str_9168) = eul_static_string_class;
  eul_allocate_bytevector( G009163,G009162);
  eul_intern_symbol(sym_9171,"quote");
  eul_intern_symbol(sym_9172,"quasiquote");
  object_class(str_9173) = eul_static_string_class;
  eul_intern_symbol(sym_9174,"unquote-splicing");
  object_class(str_9175) = eul_static_string_class;
  object_class(str_9176) = eul_static_string_class;
  eul_allocate_bytevector( G009170,G009169);
  eul_allocate_bytevector( G009178,G009177);
  eul_allocate_bytevector( G009180,G009179);
  eul_intern_symbol(sym_9183,"reverse-onto");
  eul_intern_symbol(sym_9184,"parse");
  eul_intern_symbol(sym_9185,"read-token");
  eul_intern_symbol(sym_9186,"read");
  eul_intern_symbol(sym_9187,"set-dispatch-macro-character");
  eul_intern_symbol(sym_9188,"read-line");
  eul_intern_symbol(sym_9189,"read-s-expression");
  eul_intern_symbol(sym_9190,"sread");
  eul_intern_symbol(sym_9191,"read-char");
  eul_intern_symbol(sym_9192,"sread-s-expression");
  eul_intern_symbol(sym_9193,"top-level");
  eul_allocate_bytevector( G009182,G009181);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 32; i++)
      read_bindings[i] = eul_nil;
  }

  read_bindings[ 32] = G009093;
  read_bindings[ 33] = G009095;
  read_bindings[ 34] = G009097;
  read_bindings[ 35] = G009099;
  read_bindings[ 36] = key_9102;
  read_bindings[ 37] = key_9103;
  read_bindings[ 38] = sym_9104;
  read_bindings[ 39] = key_9105;
  read_bindings[ 40] = sym_9106;
  read_bindings[ 41] = key_9107;
  read_bindings[ 42] = key_9108;
  read_bindings[ 43] = key_9109;
  read_bindings[ 44] = sym_9110;
  read_bindings[ 45] = key_9111;
  read_bindings[ 46] = key_9112;
  read_bindings[ 47] = sym_9113;
  read_bindings[ 48] = cons_9114;
  read_bindings[ 49] = str_9115;
  read_bindings[ 50] = str_9116;
  read_bindings[ 51] = str_9117;
  read_bindings[ 52] = str_9118;
  read_bindings[ 53] = str_9119;
  read_bindings[ 54] = str_9120;
  read_bindings[ 55] = str_9121;
  read_bindings[ 56] = str_9122;
  read_bindings[ 57] = str_9123;
  read_bindings[ 58] = str_9124;
  read_bindings[ 59] = key_9125;
  read_bindings[ 60] = str_9126;
  read_bindings[ 61] = sym_9127;
  read_bindings[ 62] = sym_9128;
  read_bindings[ 63] = sym_9129;
  read_bindings[ 64] = G009101;
  read_bindings[ 65] = key_9132;
  read_bindings[ 66] = G009131;
  read_bindings[ 67] = G009134;
  read_bindings[ 68] = sym_9137;
  read_bindings[ 69] = key_9138;
  read_bindings[ 70] = G009136;
  read_bindings[ 71] = G009140;
  read_bindings[ 72] = G009142;
  read_bindings[ 73] = G009144;
  read_bindings[ 74] = G009146;
  read_bindings[ 75] = G009148;
  read_bindings[ 76] = G009150;
  read_bindings[ 77] = G009152;
  read_bindings[ 78] = G009154;
  read_bindings[ 79] = G009156;
  read_bindings[ 80] = G009158;
  read_bindings[ 81] = str_9161;
  read_bindings[ 82] = G009160;
  read_bindings[ 83] = sym_9164;
  read_bindings[ 84] = str_9165;
  read_bindings[ 85] = str_9166;
  read_bindings[ 86] = str_9167;
  read_bindings[ 87] = str_9168;
  read_bindings[ 88] = G009163;
  read_bindings[ 89] = sym_9171;
  read_bindings[ 90] = sym_9172;
  read_bindings[ 91] = str_9173;
  read_bindings[ 92] = sym_9174;
  read_bindings[ 93] = str_9175;
  read_bindings[ 94] = str_9176;
  read_bindings[ 95] = G009170;
  read_bindings[ 96] = G009178;
  read_bindings[ 97] = G009180;
  read_bindings[ 1] = eul_nil;
  read_bindings[ 98] = sym_9183;
  read_bindings[ 99] = sym_9184;
  read_bindings[ 100] = sym_9185;
  read_bindings[ 101] = sym_9186;
  read_bindings[ 102] = sym_9187;
  read_bindings[ 103] = sym_9188;
  read_bindings[ 104] = sym_9189;
  read_bindings[ 105] = sym_9190;
  read_bindings[ 106] = sym_9191;
  read_bindings[ 107] = sym_9192;
  read_bindings[ 108] = sym_9193;
  eul_allocate_lambda( read_bindings[0], "initialize-read", 0, G009182);

  }
}


/* eof */
