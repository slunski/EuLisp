/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module stream1
 **  Copyright: See file stream1.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern LispRef telos_bindings[];
extern LispRef boot1_bindings[];

/* Module bindings with size 41 */
LispRef stream1_bindings[41];

/* Foreign functions */
static LispRef ff_stub_eul_posix_codes4206 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef res;

  FF_RES_CONVERT6(res,eul_posix_codes());
  return res;
}

static LispRef ff_stub_open4207 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G004238, G004239, G004240, res;

  POPVAL1(G004240);
  POPVAL1(G004239);
  POPVAL1(G004238);
  FF_RES_CONVERT0(res,open(FF_ARG_CONVERT3(G004238), FF_ARG_CONVERT0(G004239), FF_ARG_CONVERT0(G004240)));
  return res;
}

static LispRef ff_stub_close4208 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G004241, res;

  POPVAL1(G004241);
  FF_RES_CONVERT0(res,close(FF_ARG_CONVERT0(G004241)));
  return res;
}

static LispRef ff_stub_read4209 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G004242, G004243, G004244, res;

  POPVAL1(G004244);
  POPVAL1(G004243);
  POPVAL1(G004242);
  FF_RES_CONVERT0(res,read(FF_ARG_CONVERT0(G004242), FF_ARG_CONVERT3(G004243), FF_ARG_CONVERT0(G004244)));
  return res;
}

static LispRef ff_stub_write4210 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G004245, G004246, G004247, res;

  POPVAL1(G004247);
  POPVAL1(G004246);
  POPVAL1(G004245);
  FF_RES_CONVERT0(res,write(FF_ARG_CONVERT0(G004245), FF_ARG_CONVERT3(G004246), FF_ARG_CONVERT0(G004247)));
  return res;
}

static LispRef ff_stub_eul_sprintf4211 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G004248, G004249, G004250, G004251, res;

  POPVAL1(G004251);
  POPVAL1(G004250);
  POPVAL1(G004249);
  POPVAL1(G004248);
  FF_RES_CONVERT0(res,eul_sprintf(FF_ARG_CONVERT3(G004248), FF_ARG_CONVERT0(G004249), FF_ARG_CONVERT3(G004250), FF_ARG_CONVERT8(G004251)));
  return res;
}

static LispRef ff_stub_eul_sprintf_string4212 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G004252, G004253, G004254, G004255, G004256, G004257, res;

  POPVAL1(G004257);
  POPVAL1(G004256);
  POPVAL1(G004255);
  POPVAL1(G004254);
  POPVAL1(G004253);
  POPVAL1(G004252);
  FF_RES_CONVERT0(res,eul_sprintf_string(FF_ARG_CONVERT3(G004252), FF_ARG_CONVERT0(G004253), FF_ARG_CONVERT0(G004254), FF_ARG_CONVERT0(G004255), FF_ARG_CONVERT3(G004256), FF_ARG_CONVERT3(G004257)));
  return res;
}

static LispRef ff_stub_eul_make_socket4213 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G004258, G004259, G004260, res;

  POPVAL1(G004260);
  POPVAL1(G004259);
  POPVAL1(G004258);
  FF_RES_CONVERT0(res,eul_make_socket(FF_ARG_CONVERT3(G004258), FF_ARG_CONVERT3(G004259), FF_ARG_CONVERT0(G004260)));
  return res;
}

static LispRef ff_stub_eul_socket_accept4214 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G004261, res;

  POPVAL1(G004261);
  FF_RES_CONVERT0(res,eul_socket_accept(FF_ARG_CONVERT0(G004261)));
  return res;
}

static LispRef ff_stub_eul_make_connection4215 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G004262, G004263, G004264, res;

  POPVAL1(G004264);
  POPVAL1(G004263);
  POPVAL1(G004262);
  FF_RES_CONVERT0(res,eul_make_connection(FF_ARG_CONVERT3(G004262), FF_ARG_CONVERT3(G004263), FF_ARG_CONVERT3(G004264)));
  return res;
}

static LispRef ff_stub_eul_socket_strerror4216 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G004265, res;

  POPVAL1(G004265);
  FF_RES_CONVERT3(res,eul_socket_strerror(FF_ARG_CONVERT0(G004265)));
  return res;
}

static LispRef ff_stub_eul_strerror4217 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef res;

  FF_RES_CONVERT3(res,eul_strerror());
  return res;
}

static LispRef ff_stub_ntok4218 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G004266, G004267, res;

  POPVAL1(G004267);
  POPVAL1(G004266);
  FF_RES_CONVERT6(res,ntok(FF_ARG_CONVERT8(G004266), FF_ARG_CONVERT8(G004267)));
  return res;
}

static LispRef ff_stub_read_into_buffer4219 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G004268, G004269, G004270, res;

  POPVAL1(G004270);
  POPVAL1(G004269);
  POPVAL1(G004268);
  FF_RES_CONVERT0(res,read_into_buffer(FF_ARG_CONVERT0(G004268), FF_ARG_CONVERT3(G004269), FF_ARG_CONVERT0(G004270)));
  return res;
}

static LispRef ff_stub_eul_hostname4220 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef res;

  FF_RES_CONVERT3(res,eul_hostname());
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module stream1 */
void initialize_module_stream1()
{
  if (is_initialized) return;
  initialize_module_telos();
  eul_fast_table_set(eul_modules,"stream1",(LispRef) stream1_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_4237, sym_4236, sym_4235, G004234, G004232, G004230, sym_4228, sym_4227, sym_4226, sym_4225, sym_4224, sym_4223, G004222;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 83 is_init: 0 index: 35 binding: top-level */
  static const void *G004221[] = {I(a9,41,00,00),B(stream1 ,14),I(1b,89,00,00),B(stream1 ,9),I(2a,24,00,00),B(stream1 ,9),I(82,02,1b,89),B(stream1 ,4),I(2a,24,00,00),B(stream1 ,9),I(83,02,1b,89),B(stream1 ,12),I(2a,24,00,00),B(stream1 ,9),I(84,02,1b,89),B(stream1 ,2),I(2a,24,00,00),B(stream1 ,9),I(26,00,00,00),I(00,00,00,03),I(02,1b,89,00),B(stream1 ,7),I(2a,24,00,00),B(stream1 ,9),I(26,00,00,00),I(00,00,00,04),I(02,1b,89,00),B(stream1 ,10),I(2a,24,00,00),B(stream1 ,9),I(26,00,00,00),I(00,00,00,05),I(02,1b,89,00),B(stream1 ,8),I(2a,24,00,00),B(stream1 ,9),I(26,00,00,00),I(00,00,00,06),I(02,1b,89,00),B(stream1 ,13),I(2a,24,00,00),B(stream1 ,9),I(26,00,00,00),I(00,00,00,07),I(02,1b,89,00),B(stream1 ,11),I(2a,24,00,00),B(stream1 ,8),I(24,00,00,00),B(stream1 ,13),I(14,24,00,00),B(stream1 ,12),I(1c,14,24,00),B(stream1 ,12),I(24,00,00,00),B(stream1 ,7),I(14,24,00,00),B(stream1 ,2),I(24,00,00,00),B(stream1 ,7),I(14,23,00,00),B(stream1 ,29),I(24,00,00,00),B(stream1 ,4),I(23,00,00,00),B(stream1 ,30),I(1f,05,23,00),B(stream1 ,31),I(1f,06,23,00),B(stream1 ,32),I(24,00,00,00),B(stream1 ,2),I(23,00,00,00),B(stream1 ,33),I(24,00,00,00),B(stream1 ,2),I(23,00,00,00),B(stream1 ,34),I(1f,0b,24,00),B(boot1 ,26),I(3c,0c,1b,89),B(stream1 ,5),I(45,0e,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 36 binding: hostname */
  static const void *G004229[] = {I(a9,41,00,00),B(stream1 ,28),I(45,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 37 binding: strerror */
  static const void *G004231[] = {I(a9,41,00,00),B(stream1 ,25),I(45,00,00,00)};

  /* Byte-vector with size: 45 is_init: 1 index: 0 binding: initialize-stream1 */
  static const void *G004233[] = {I(87,25,00,00),B(stream1 ,1),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(stream1 ,13),I(86,25,00,00),B(stream1 ,12),I(86,25,00,00),B(stream1 ,11),I(86,25,00,00),B(stream1 ,10),I(86,25,00,00),B(stream1 ,9),I(86,25,00,00),B(stream1 ,8),I(86,25,00,00),B(stream1 ,7),I(23,00,00,00),B(stream1 ,38),I(23,00,00,00),B(stream1 ,37),I(3b,00,25,00),B(stream1 ,6),I(86,25,00,00),B(stream1 ,5),I(86,25,00,00),B(stream1 ,4),I(23,00,00,00),B(stream1 ,39),I(23,00,00,00),B(stream1 ,36),I(3b,00,25,00),B(stream1 ,3),I(86,25,00,00),B(stream1 ,2),I(23,00,00,00),B(stream1 ,40),I(23,00,00,00),B(stream1 ,35),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_4223,"r");
  eul_intern_symbol(sym_4224,"w");
  eul_intern_symbol(sym_4225,"a");
  eul_intern_symbol(sym_4226,"r+");
  eul_intern_symbol(sym_4227,"w+");
  eul_intern_symbol(sym_4228,"a+");
  eul_allocate_bytevector( G004222,G004221);
  eul_allocate_bytevector( G004230,G004229);
  eul_allocate_bytevector( G004232,G004231);
  eul_intern_symbol(sym_4235,"strerror");
  eul_intern_symbol(sym_4236,"hostname");
  eul_intern_symbol(sym_4237,"top-level");
  eul_allocate_bytevector( G004234,G004233);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 14; i++)
      stream1_bindings[i] = eul_nil;
  }

  stream1_bindings[ 14] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_posix_codes4206;
  stream1_bindings[ 15] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_open4207;
  stream1_bindings[ 16] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_close4208;
  stream1_bindings[ 17] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_read4209;
  stream1_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_write4210;
  stream1_bindings[ 19] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_sprintf4211;
  stream1_bindings[ 20] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_sprintf_string4212;
  stream1_bindings[ 21] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_make_socket4213;
  stream1_bindings[ 22] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_socket_accept4214;
  stream1_bindings[ 23] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_make_connection4215;
  stream1_bindings[ 24] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_socket_strerror4216;
  stream1_bindings[ 25] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_strerror4217;
  stream1_bindings[ 26] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_ntok4218;
  stream1_bindings[ 27] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_read_into_buffer4219;
  stream1_bindings[ 28] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_hostname4220;
  stream1_bindings[ 29] = sym_4223;
  stream1_bindings[ 30] = sym_4224;
  stream1_bindings[ 31] = sym_4225;
  stream1_bindings[ 32] = sym_4226;
  stream1_bindings[ 33] = sym_4227;
  stream1_bindings[ 34] = sym_4228;
  stream1_bindings[ 35] = G004222;
  stream1_bindings[ 36] = G004230;
  stream1_bindings[ 37] = G004232;
  stream1_bindings[ 1] = eul_nil;
  stream1_bindings[ 38] = sym_4235;
  stream1_bindings[ 39] = sym_4236;
  stream1_bindings[ 40] = sym_4237;
  eul_allocate_lambda( stream1_bindings[0], "initialize-stream1", 0, G004234);

  }
}


/* eof */
