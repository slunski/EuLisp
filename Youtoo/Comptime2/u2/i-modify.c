/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module i-modify
 **  Copyright: See file i-modify.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern LispRef i_all_bindings[];
extern LispRef condition_bindings[];
extern LispRef format_bindings[];
extern LispRef boot1_bindings[];
extern LispRef collect_bindings[];
extern LispRef string_bindings[];
extern LispRef i_error_bindings[];
extern LispRef boot_bindings[];
extern LispRef i_param_bindings[];
extern LispRef stream_bindings[];

/* Module bindings with size 32 */
LispRef i_modify_bindings[32];

/* Foreign functions */
static LispRef ff_stub_eul_file_newer_p3505 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G003537, G003538, res;

  POPVAL1(G003538);
  POPVAL1(G003537);
  FF_RES_CONVERT6(res,eul_file_newer_p(FF_ARG_CONVERT3(G003537), FF_ARG_CONVERT3(G003538)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module i-modify */
void initialize_module_i_modify()
{
  if (is_initialized) return;
  initialize_module_i_all();
  eul_fast_table_set(eul_modules,"i_modify",(LispRef) i_modify_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_3536, sym_3535, sym_3534, sym_3533, sym_3532, sym_3531, sym_3530, G003529, G003526, G003524, G003519, G003517, G003513, G003509, G003507;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 1 is_init: 0 index: 10 binding: library-newer? */
  static const void *G003506[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_3510, "", 0);
  eul_allocate_static_string(str_3511, "file ~a does not exist", 22);
  /* Byte-vector with size: 18 is_init: 0 index: 13 binding: absolute-file-name */
  static const void *G003508[] = {I(aa,24,00,00),B(stream ,19),I(1c,24,00,00),B(i_param ,16),I(24,00,00,00),B(boot ,5),I(3c,03,1b,34),I(00,00,00,0d),I(1b,10,32,00),I(00,00,00,21),I(23,00,00,00),B(i_modify ,11),I(23,00,00,00),B(i_modify ,12),I(1f,03,24,00),B(i_error ,4),I(3d,03,02,45),I(02,00,00,00)};

  eul_allocate_static_string(str_3514, ".em", 3);
  eul_allocate_static_string(str_3515, ".i", 2);
  /* Byte-vector with size: 34 is_init: 0 index: 16 binding: module-modified? */
  static const void *G003512[] = {I(aa,24,00,00),B(i_param ,58),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,74),I(1c,7d,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,0a),I(1d,82,02,1b),I(23,00,00,00),B(i_modify ,14),I(24,00,00,00),B(string ,11),I(3c,02,1f,04),I(7d,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,0b),I(1f,05,82,02),I(24,00,00,00),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1d,23,00,00),B(i_modify ,15),I(24,00,00,00),B(collect ,17),I(3c,04,1f,03),I(1c,24,00,00),B(i_modify ,8),I(3d,02,08,22),I(06,45,02,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 17 binding: external-file-exist? */
  static const void *G003516[] = {I(aa,24,00,00),B(stream ,19),I(1c,24,00,00),B(i_param ,9),I(24,00,00,00),B(boot ,5),I(3c,03,1b,34),I(00,00,00,0d),I(1b,11,32,00),I(00,00,00,07),I(86,45,02,00)};

  eul_allocate_static_string(str_3520, ".c", 2);
  eul_allocate_static_string(str_3521, ".o", 2);
  eul_allocate_static_string(str_3522, ".o", 2);
  /* Byte-vector with size: 52 is_init: 0 index: 21 binding: C-module-modified? */
  static const void *G003518[] = {I(aa,1b,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0a),I(1c,82,02,24),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1d,23,00,00),B(i_modify ,18),I(24,00,00,00),B(collect ,17),I(3c,04,24,00),B(i_param ,53),I(34,00,00,00),I(00,00,00,5c),I(1f,03,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,04,82,02),I(24,00,00,00),B(i_param ,53),I(24,00,00,00),B(i_param ,22),I(24,00,00,00),B(i_param ,35),I(24,00,00,00),B(i_param ,22),I(1f,04,23,00),B(i_modify ,19),I(24,00,00,00),B(collect ,17),I(3c,06,22,02),I(32,00,00,00),I(00,00,00,34),I(1f,03,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,04,82,02),I(23,00,00,00),B(i_modify ,20),I(24,00,00,00),B(string ,11),I(3c,02,22,01),I(24,00,00,00),B(i_modify ,8),I(3d,02,03,00)};

  /* Byte-vector with size: 25 is_init: 0 index: 22 binding: file-exist? */
  static const void *G003523[] = {I(aa,1b,24,00),B(i_param ,11),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,4e),I(24,00,00,00),B(stream ,19),I(1d,24,00,00),B(i_param ,16),I(24,00,00,00),B(boot ,5),I(3c,03,1b,34),I(00,00,00,29),I(1b,11,24,00),B(i_param ,11),I(24,00,00,00),B(boot1 ,42),I(3c,01,1f,04),I(1d,1d,3c,02),I(2a,1c,22,02),I(32,00,00,00),I(00,00,00,09),I(86,22,01,45),I(02,00,00,00)};

  eul_allocate_static_string(str_3527, "no such file ~a", 15);
  /* Byte-vector with size: 33 is_init: 0 index: 24 binding: file-newer? */
  static const void *G003525[] = {I(ab,24,00,00),B(stream ,19),I(1d,24,00,00),B(i_param ,16),I(24,00,00,00),B(boot ,5),I(3c,03,24,00),B(stream ,19),I(1d,24,00,00),B(i_param ,16),I(24,00,00,00),B(boot ,5),I(3c,03,1c,34),I(00,00,00,29),I(1b,34,00,00),I(00,00,00,1b),I(1c,10,1c,10),I(41,00,00,00),B(i_modify ,9),I(22,02,32,00),I(00,00,00,08),I(1f,03,32,00),I(00,00,00,2b),I(23,00,00,00),B(i_modify ,23),I(1f,04,24,00),B(format ,2),I(3c,02,24,00),B(condition ,8),I(1c,24,00,00),B(boot ,13),I(3d,02,05,22),I(01,45,04,00)};

  /* Byte-vector with size: 50 is_init: 1 index: 0 binding: initialize-i-modify */
  static const void *G003528[] = {I(87,25,00,00),B(i_modify ,1),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(i_modify ,25),I(23,00,00,00),B(i_modify ,24),I(3b,02,25,00),B(i_modify ,8),I(23,00,00,00),B(i_modify ,26),I(23,00,00,00),B(i_modify ,22),I(3b,01,25,00),B(i_modify ,7),I(23,00,00,00),B(i_modify ,27),I(23,00,00,00),B(i_modify ,21),I(3b,01,25,00),B(i_modify ,6),I(23,00,00,00),B(i_modify ,28),I(23,00,00,00),B(i_modify ,17),I(3b,01,25,00),B(i_modify ,5),I(23,00,00,00),B(i_modify ,29),I(23,00,00,00),B(i_modify ,16),I(3b,01,25,00),B(i_modify ,4),I(23,00,00,00),B(i_modify ,30),I(23,00,00,00),B(i_modify ,13),I(3b,01,25,00),B(i_modify ,3),I(23,00,00,00),B(i_modify ,31),I(23,00,00,00),B(i_modify ,10),I(3b,02,25,00),B(i_modify ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G003507,G003506);
  object_class(str_3510) = eul_static_string_class;
  object_class(str_3511) = eul_static_string_class;
  eul_allocate_bytevector( G003509,G003508);
  object_class(str_3514) = eul_static_string_class;
  object_class(str_3515) = eul_static_string_class;
  eul_allocate_bytevector( G003513,G003512);
  eul_allocate_bytevector( G003517,G003516);
  object_class(str_3520) = eul_static_string_class;
  object_class(str_3521) = eul_static_string_class;
  object_class(str_3522) = eul_static_string_class;
  eul_allocate_bytevector( G003519,G003518);
  eul_allocate_bytevector( G003524,G003523);
  object_class(str_3527) = eul_static_string_class;
  eul_allocate_bytevector( G003526,G003525);
  eul_intern_symbol(sym_3530,"file-newer?");
  eul_intern_symbol(sym_3531,"file-exist?");
  eul_intern_symbol(sym_3532,"C-module-modified?");
  eul_intern_symbol(sym_3533,"external-file-exist?");
  eul_intern_symbol(sym_3534,"module-modified?");
  eul_intern_symbol(sym_3535,"absolute-file-name");
  eul_intern_symbol(sym_3536,"library-newer?");
  eul_allocate_bytevector( G003529,G003528);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 9; i++)
      i_modify_bindings[i] = eul_nil;
  }

  i_modify_bindings[ 9] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_file_newer_p3505;
  i_modify_bindings[ 10] = G003507;
  i_modify_bindings[ 11] = str_3510;
  i_modify_bindings[ 12] = str_3511;
  i_modify_bindings[ 13] = G003509;
  i_modify_bindings[ 14] = str_3514;
  i_modify_bindings[ 15] = str_3515;
  i_modify_bindings[ 16] = G003513;
  i_modify_bindings[ 17] = G003517;
  i_modify_bindings[ 18] = str_3520;
  i_modify_bindings[ 19] = str_3521;
  i_modify_bindings[ 20] = str_3522;
  i_modify_bindings[ 21] = G003519;
  i_modify_bindings[ 22] = G003524;
  i_modify_bindings[ 23] = str_3527;
  i_modify_bindings[ 24] = G003526;
  i_modify_bindings[ 1] = eul_nil;
  i_modify_bindings[ 25] = sym_3530;
  i_modify_bindings[ 26] = sym_3531;
  i_modify_bindings[ 27] = sym_3532;
  i_modify_bindings[ 28] = sym_3533;
  i_modify_bindings[ 29] = sym_3534;
  i_modify_bindings[ 30] = sym_3535;
  i_modify_bindings[ 31] = sym_3536;
  eul_allocate_lambda( i_modify_bindings[0], "initialize-i-modify", 0, G003529);

  }
}


/* eof */
