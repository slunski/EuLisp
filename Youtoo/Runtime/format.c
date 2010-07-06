/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module format
 **  Copyright: See file format.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_collect();
extern void initialize_module_fpi();
extern void initialize_module_list();
extern void initialize_module_string();
extern void initialize_module_character();
extern void initialize_module_stream();
extern void initialize_module_condition();
extern void initialize_module_let_cc();
extern void initialize_module_socket();
extern void initialize_module_lock();
extern void initialize_module_convert();
extern void initialize_module_dynamic();
extern LispRef list_bindings[];
extern LispRef fpi_bindings[];
extern LispRef telos_bindings[];
extern LispRef collect_bindings[];
extern LispRef character_bindings[];
extern LispRef stream_bindings[];
extern LispRef let_cc_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot1_bindings[];
extern LispRef condition_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef stream2_bindings[];
extern LispRef convert_bindings[];
extern LispRef string_bindings[];
extern LispRef stream1_bindings[];
extern LispRef socket_bindings[];
extern LispRef boot_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef lock_bindings[];

/* Module bindings with size 45 */
LispRef format_bindings[45];

/* Foreign functions */
static LispRef ff_stub_eul_format_info7405 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007458, res;

  POPVAL1(G007458);
  FF_RES_CONVERT6(res,eul_format_info(FF_ARG_CONVERT3(G007458)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module format */
void initialize_module_format()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_collect();
  initialize_module_fpi();
  initialize_module_list();
  initialize_module_string();
  initialize_module_character();
  initialize_module_stream();
  initialize_module_condition();
  initialize_module_let_cc();
  initialize_module_socket();
  initialize_module_lock();
  initialize_module_convert();
  initialize_module_dynamic();
  eul_fast_table_set(eul_modules,"format",(LispRef) format_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_7457, sym_7456, sym_7455, sym_7454, sym_7453, G007452, G007450, G007448, G007441, sym_7439, G007438, G007436, G007434, G007431, G007429, sym_7427, sym_7426, G007425, key_7423, G007422, sym_7420, sym_7419, sym_7418, key_7417, sym_7416, key_7415, key_7414, key_7412, key_7410, G007409, G007407;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 7 is_init: 0 index: 7 binding: anonymous */
  static const void *G007406[] = {I(a9,47,00,00),I(24,00,00,00),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_string(str_7411, "tcp", 3);
  eul_allocate_static_string(str_7413, "~a:~a", 5);
  /* Byte-vector with size: 153 is_init: 0 index: 19 binding: (method-initialize) */
  static const void *G007408[] = {I(ab,46,04,1c),I(1c,37,02,2a),I(1b,23,00,00),B(format ,8),I(24,00,00,00),B(boot ,29),I(3c,02,86,86),I(86,1f,03,24),B(socket ,10),I(3c,01,1b,34),I(00,00,00,65),I(1f,04,84,24),B(socket ,8),I(08,1b,20,05),I(1f,05,26,00),I(00,00,00,03),I(24,00,00,00),B(socket ,8),I(08,1b,20,05),I(1f,08,1f,06),I(1c,83,1d,24),B(socket ,2),I(09,22,02,2a),I(1f,08,1f,05),I(1c,82,1d,24),B(socket ,2),I(09,22,02,2a),I(1f,06,83,24),B(socket ,8),I(08,41,00,00),B(stream1 ,22),I(22,01,1b,20),I(05,1f,04,22),I(03,32,00,00),I(00,00,00,4c),I(1f,06,83,24),B(socket ,2),I(08,1b,20,05),I(1f,07,82,24),B(socket ,2),I(08,1b,20,05),I(1f,04,24,00),B(string ,13),I(24,00,00,00),B(convert ,2),I(3c,02,1f,06),I(1c,23,00,00),B(format ,9),I(41,00,00,00),B(stream1 ,23),I(22,03,1b,20),I(06,1f,05,22),I(04,2a,1c,85),I(19,1b,34,00),I(00,00,00,32),I(24,00,00,00),B(stream1 ,6),I(3c,00,1b,24),B(stream2 ,38),I(23,00,00,00),B(format ,10),I(1f,0b,24,00),B(boot ,12),I(3c,04,22,01),I(32,00,00,00),I(00,00,00,43),I(1d,85,1a,1b),I(34,00,00,00),I(00,00,00,34),I(1f,03,41,00),B(stream1 ,24),I(22,01,1b,24),B(stream2 ,38),I(23,00,00,00),B(format ,10),I(1f,0c,24,00),B(boot ,12),I(3c,04,22,01),I(32,00,00,00),I(00,00,00,09),I(86,22,01,2a),I(23,00,00,00),B(format ,11),I(1f,05,1f,05),I(24,00,00,00),B(format ,2),I(3c,03,24,00),B(stream2 ,4),I(23,00,00,00),B(format ,12),I(1d,23,00,00),B(format ,13),I(23,00,00,00),B(format ,14),I(23,00,00,00),B(format ,15),I(1f,09,24,00),B(mop_gf ,2),I(3c,07,24,00),B(stream2 ,4),I(23,00,00,00),B(format ,12),I(1f,03,23,00),B(format ,13),I(23,00,00,00),B(format ,16),I(23,00,00,00),B(format ,15),I(1f,0a,24,00),B(mop_gf ,2),I(3c,07,1f,0a),I(1d,1c,26,00),I(00,00,00,04),I(1d,24,00,00),B(stream2 ,21),I(09,22,02,2a),I(1f,0a,1c,1c),I(26,00,00,00),I(00,00,00,05),I(1d,24,00,00),B(stream2 ,21),I(09,22,02,2a),I(24,00,00,00),B(stream2 ,12),I(1b,48,00,00),I(23,00,00,00),B(format ,17),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(format ,18),I(23,00,00,00),B(format ,7),I(3b,00,1c,0f),I(23,00,00,00),B(format ,17),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,47),I(00,00,24,00),B(lock ,3),I(3c,01,2a,1f),I(0d,24,00,00),B(stream2 ,36),I(0f,1b,89,00),B(stream2 ,36),I(47,00,00,24),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1f),I(0f,45,10,00)};

  /* Byte-vector with size: 38 is_init: 0 index: 21 binding: error */
  static const void *G007421[] = {I(43,fd,1c,24),B(mop_inspect ,4),I(3c,01,1b,34),I(00,00,00,1d),I(1d,24,00,00),B(condition ,8),I(24,00,00,00),B(mop_inspect ,2),I(3c,02,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,32),I(24,00,00,00),B(mop_gf ,2),I(1f,04,23,00),B(format ,20),I(1f,07,1f,06),I(24,00,00,00),B(boot ,5),I(3c,05,86,24),B(condition ,2),I(3d,02,05,32),I(00,00,00,3e),I(24,00,00,00),B(format ,2),I(1f,05,1f,05),I(1f,05,24,00),B(boot ,5),I(3c,04,24,00),B(condition ,8),I(23,00,00,00),B(format ,20),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,86,24),B(condition ,2),I(3d,02,06,22),I(01,45,05,00)};

  /* Byte-vector with size: 36 is_init: 0 index: 24 binding: top-level */
  static const void *G007424[] = {I(a9,23,00,00),B(format ,22),I(23,00,00,00),B(format ,21),I(3b,fd,89,00),B(boot ,13),I(2a,24,00,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(socket ,2),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(format ,23),I(23,00,00,00),B(format ,19),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 25 binding: anonymous */
  static const void *G007428[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1f,03,1c),I(24,00,00,00),B(string ,11),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  eul_allocate_static_string(str_7432, "", 0);
  /* Byte-vector with size: 41 is_init: 0 index: 27 binding: fmt */
  static const void *G007430[] = {I(43,fe,46,03),I(24,00,00,00),B(stream2 ,45),I(24,00,00,00),B(mop_gf ,2),I(3c,01,1b,26),I(00,00,00,05),I(24,00,00,00),B(stream2 ,21),I(08,24,00,00),B(format ,4),I(1d,1f,05,1f),I(05,24,00,00),B(boot ,5),I(3c,04,2a,86),I(1b,48,00,00),I(23,00,00,00),B(format ,18),I(23,00,00,00),B(format ,25),I(3b,02,48,00),I(00,1d,82,24),B(stream2 ,45),I(08,1b,23,00),B(format ,26),I(47,00,00,3c),I(02,1f,03,26),I(00,00,00,03),I(24,00,00,00),B(stream2 ,23),I(08,1f,04,83),I(24,00,00,00),B(stream2 ,23),I(08,1c,82,1d),I(24,00,00,00),B(string ,6),I(3c,03,1f,03),I(1c,24,00,00),B(string ,11),I(3d,02,0a,45),I(0a,00,00,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 28 binding: call/ep-lambda */
  static const void *G007433[] = {I(aa,24,00,00),B(format ,2),I(47,00,00,47),I(00,01,47,00),I(02,24,00,00),B(boot ,5),I(3c,04,24,00),B(condition ,8),I(23,00,00,00),B(format ,20),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1b,1f),I(03,24,00,00),B(condition ,2),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 29 binding: call/ep-lambda */
  static const void *G007435[] = {I(aa,24,00,00),B(mop_gf ,2),I(47,00,01,23),B(format ,20),I(47,00,00,47),I(00,02,24,00),B(boot ,5),I(3c,05,1b,1d),I(24,00,00,00),B(condition ,2),I(3d,02,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 33 is_init: 0 index: 31 binding: cerror */
  static const void *G007437[] = {I(43,fd,46,03),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(47,00,01,24),B(mop_inspect ,4),I(3c,01,1b,34),I(00,00,00,1d),I(47,00,01,24),B(condition ,8),I(24,00,00,00),B(mop_inspect ,2),I(3c,02,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,2a),I(23,00,00,00),B(format ,30),I(23,00,00,00),B(format ,29),I(3b,01,24,00),B(let_cc ,2),I(3c,01,1b,22),I(01,32,00,00),I(00,00,00,24),I(23,00,00,00),B(format ,30),I(23,00,00,00),B(format ,28),I(3b,01,24,00),B(let_cc ,2),I(3c,01,1b,22),I(01,45,05,00)};

  eul_allocate_static_string(str_7442, "%s", 2);
  eul_allocate_static_string(str_7443, "bad format string ~s", 20);
  eul_allocate_static_string(str_7444, "bad format string ~s", 20);
  eul_allocate_static_string(str_7445, "bad format string ~s", 20);
  eul_allocate_static_string(str_7446, "%", 1);
  /* Byte-vector with size: 180 is_init: 0 index: 37 binding: anonymous */
  static const void *G007440[] = {I(ab,1c,10,1d),I(11,1b,20,04),I(1f,03,10,1f),I(04,11,1b,20),I(06,1f,05,10),I(47,00,00,1f),I(03,24,00,00),B(stream ,24),I(3c,02,2a,47),I(00,03,83,24),B(stream2 ,23),I(08,47,00,03),I(26,00,00,00),I(00,00,00,03),I(24,00,00,00),B(stream2 ,23),I(08,1b,1d,1f),I(06,1f,09,23),B(format ,32),I(47,00,01,41),B(stream1 ,20),I(22,06,2a,1c),I(1f,05,14,47),I(00,03,1c,1c),I(83,1d,24,00),B(stream2 ,23),I(09,22,05,2a),I(1b,27,00,50),I(1b,34,00,00),I(00,00,00,0f),I(1f,06,32,00),I(00,00,02,52),I(1c,27,61,50),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,0b),I(1d,27,64,50),I(1b,34,00,00),I(00,00,00,77),I(1f,08,12,1b),I(34,00,00,00),I(00,00,00,20),I(23,00,00,00),B(format ,33),I(47,00,01,24),B(boot ,12),I(3d,02,0b,32),I(00,00,00,4a),I(1f,09,10,1b),I(24,00,00,00),B(boot1 ,38),I(3c,01,1b,34),I(00,00,00,19),I(1c,47,00,00),I(24,00,00,00),B(stream2 ,2),I(3c,02,32,00),I(00,00,00,14),I(47,00,00,1d),I(24,00,00,00),B(stream ,23),I(3c,02,2a,1f),I(0c,11,1f,0c),I(11,47,00,02),I(3d,02,0d,22),I(02,22,01,32),I(00,00,01,bf),I(1f,03,27,73),I(50,1b,34,00),I(00,00,00,76),I(1f,09,12,1b),I(34,00,00,00),I(00,00,00,20),I(23,00,00,00),B(format ,34),I(47,00,01,24),B(boot ,12),I(3d,02,0c,32),I(00,00,00,4a),I(1f,0a,10,1b),I(24,00,00,00),B(boot1 ,38),I(3c,01,1b,34),I(00,00,00,19),I(1c,47,00,00),I(24,00,00,00),B(stream2 ,28),I(3c,02,32,00),I(00,00,00,14),I(47,00,00,1d),I(24,00,00,00),B(stream ,3),I(3c,02,2a,1f),I(0d,11,1f,0d),I(11,47,00,02),I(3d,02,0e,22),I(02,22,01,32),I(00,00,01,41),I(1f,04,27,25),I(50,1b,34,00),I(00,00,00,2a),I(47,00,00,27),I(0a,24,00,00),B(stream ,25),I(3c,02,2a,1f),I(0b,11,1b,1f),I(0c,47,00,02),I(3d,02,0d,22),I(01,32,00,00),I(00,00,01,11),I(1f,05,27,78),I(50,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,4e),I(1f,06,27,6f),I(50,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,38),I(1f,07,27,66),I(50,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,22),I(1f,08,27,65),I(50,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,0c),I(1f,09,27,67),I(50,22,01,22),I(01,22,01,1b),I(34,00,00,00),I(00,00,00,6c),I(1f,0c,12,1b),I(34,00,00,00),I(00,00,00,20),I(23,00,00,00),B(format ,35),I(47,00,01,24),B(boot ,12),I(3d,02,0f,32),I(00,00,00,3e),I(1f,08,24,00),B(character ,11),I(3c,01,23,00),B(format ,36),I(1c,24,00,00),B(collect ,17),I(3c,02,1f,0f),I(10,47,00,00),I(1d,1d,24,00),B(stream ,22),I(3c,03,2a,1f),I(11,11,1f,11),I(11,47,00,02),I(3d,02,12,22),I(03,22,01,32),I(00,00,00,45),I(1f,07,27,7e),I(50,1b,34,00),I(00,00,00,2a),I(47,00,00,27),I(7e,24,00,00),B(stream ,23),I(3c,02,2a,1f),I(0e,11,1b,1f),I(0f,47,00,02),I(3d,02,10,22),I(01,32,00,00),I(00,00,00,15),I(1f,0e,11,1b),I(1f,0f,47,00),I(02,3d,02,10),I(22,01,22,01),I(22,02,22,01),I(22,01,22,02),I(45,08,00,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 38 binding: sformat */
  static const void *G007447[] = {I(43,fd,46,05),I(1d,48,00,00),I(1c,48,00,01),I(47,00,00,26),I(00,00,00,05),I(24,00,00,00),B(stream2 ,21),I(08,1b,48,00),I(03,86,1b,48),I(00,02,23,00),B(format ,18),I(23,00,00,00),B(format ,37),I(3b,02,48,00),I(02,47,00,01),I(41,00,00,00),B(format ,6),I(22,01,1b,24),B(boot ,25),I(3c,01,1b,1f),I(05,47,00,02),I(3c,02,47,00),I(00,24,00,00),B(stream ,13),I(3c,01,2a,1b),I(45,08,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 39 binding: format */
  static const void *G007449[] = {I(43,fe,24,00),B(format ,4),I(24,00,00,00),B(stream2 ,34),I(1f,03,1f,03),I(24,00,00,00),B(boot ,5),I(3d,04,02,00)};

  /* Byte-vector with size: 97 is_init: 1 index: 0 binding: initialize-format */
  static const void *G007451[] = {I(87,25,00,00),B(format ,1),I(24,00,00,00),B(dynamic ,1),I(3e,0b,24,00),B(dynamic ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(lock ,1),I(3e,0b,24,00),B(lock ,0),I(3c,00,21,01),I(24,00,00,00),B(socket ,1),I(3e,0b,24,00),B(socket ,0),I(3c,00,21,01),I(24,00,00,00),B(let_cc ,1),I(3e,0b,24,00),B(let_cc ,0),I(3c,00,21,01),I(24,00,00,00),B(condition ,1),I(3e,0b,24,00),B(condition ,0),I(3c,00,21,01),I(24,00,00,00),B(stream ,1),I(3e,0b,24,00),B(stream ,0),I(3c,00,21,01),I(24,00,00,00),B(character ,1),I(3e,0b,24,00),B(character ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(list ,1),I(3e,0b,24,00),B(list ,0),I(3c,00,21,01),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(format ,40),I(23,00,00,00),B(format ,39),I(3b,fe,25,00),B(format ,5),I(23,00,00,00),B(format ,41),I(23,00,00,00),B(format ,38),I(3b,fd,25,00),B(format ,4),I(23,00,00,00),B(format ,42),I(23,00,00,00),B(format ,31),I(3b,fd,25,00),B(format ,3),I(23,00,00,00),B(format ,43),I(23,00,00,00),B(format ,27),I(3b,fe,25,00),B(format ,2),I(23,00,00,00),B(format ,44),I(23,00,00,00),B(format ,24),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G007407,G007406);
  eul_intern_keyword(key_7410,"socket");
  object_class(str_7411) = eul_static_string_class;
  eul_intern_keyword(key_7412,"value");
  object_class(str_7413) = eul_static_string_class;
  eul_intern_keyword(key_7414,"file-name");
  eul_intern_keyword(key_7415,"mode");
  eul_intern_symbol(sym_7416,"r");
  eul_intern_keyword(key_7417,"descriptor");
  eul_intern_symbol(sym_7418,"w");
  eul_intern_symbol(sym_7419,"*clean-ups*");
  eul_intern_symbol(sym_7420,"anonymous");
  eul_allocate_bytevector( G007409,G007408);
  eul_intern_keyword(key_7423,"message");
  eul_allocate_bytevector( G007422,G007421);
  eul_intern_symbol(sym_7426,"error");
  eul_intern_symbol(sym_7427,"(method initialize)");
  eul_allocate_bytevector( G007425,G007424);
  eul_allocate_bytevector( G007429,G007428);
  object_class(str_7432) = eul_static_string_class;
  eul_allocate_bytevector( G007431,G007430);
  eul_allocate_bytevector( G007434,G007433);
  eul_allocate_bytevector( G007436,G007435);
  eul_intern_symbol(sym_7439,"call/ep-lambda");
  eul_allocate_bytevector( G007438,G007437);
  object_class(str_7442) = eul_static_string_class;
  object_class(str_7443) = eul_static_string_class;
  object_class(str_7444) = eul_static_string_class;
  object_class(str_7445) = eul_static_string_class;
  object_class(str_7446) = eul_static_string_class;
  eul_allocate_bytevector( G007441,G007440);
  eul_allocate_bytevector( G007448,G007447);
  eul_allocate_bytevector( G007450,G007449);
  eul_intern_symbol(sym_7453,"format");
  eul_intern_symbol(sym_7454,"sformat");
  eul_intern_symbol(sym_7455,"cerror");
  eul_intern_symbol(sym_7456,"fmt");
  eul_intern_symbol(sym_7457,"top-level");
  eul_allocate_bytevector( G007452,G007451);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 6; i++)
      format_bindings[i] = eul_nil;
  }

  format_bindings[ 6] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_format_info7405;
  format_bindings[ 7] = G007407;
  format_bindings[ 8] = key_7410;
  format_bindings[ 9] = str_7411;
  format_bindings[ 10] = key_7412;
  format_bindings[ 11] = str_7413;
  format_bindings[ 12] = key_7414;
  format_bindings[ 13] = key_7415;
  format_bindings[ 14] = sym_7416;
  format_bindings[ 15] = key_7417;
  format_bindings[ 16] = sym_7418;
  format_bindings[ 17] = sym_7419;
  format_bindings[ 18] = sym_7420;
  format_bindings[ 19] = G007409;
  format_bindings[ 20] = key_7423;
  format_bindings[ 21] = G007422;
  format_bindings[ 22] = sym_7426;
  format_bindings[ 23] = sym_7427;
  format_bindings[ 24] = G007425;
  format_bindings[ 25] = G007429;
  format_bindings[ 26] = str_7432;
  format_bindings[ 27] = G007431;
  format_bindings[ 28] = G007434;
  format_bindings[ 29] = G007436;
  format_bindings[ 30] = sym_7439;
  format_bindings[ 31] = G007438;
  format_bindings[ 32] = str_7442;
  format_bindings[ 33] = str_7443;
  format_bindings[ 34] = str_7444;
  format_bindings[ 35] = str_7445;
  format_bindings[ 36] = str_7446;
  format_bindings[ 37] = G007441;
  format_bindings[ 38] = G007448;
  format_bindings[ 39] = G007450;
  format_bindings[ 1] = eul_nil;
  format_bindings[ 40] = sym_7453;
  format_bindings[ 41] = sym_7454;
  format_bindings[ 42] = sym_7455;
  format_bindings[ 43] = sym_7456;
  format_bindings[ 44] = sym_7457;
  eul_allocate_lambda( format_bindings[0], "initialize-format", 0, G007452);

  }
}


/* eof */
