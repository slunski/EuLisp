/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module random
 **  Copyright: See file random.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern LispRef telos_bindings[];

/* Module bindings with size 17 */
LispRef random_bindings[17];

/* Foreign functions */
static LispRef ff_stub_eul_rand_max10628 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef res;

  FF_RES_CONVERT0(res,eul_rand_max());
  return res;
}

static LispRef ff_stub_rand10629 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef res;

  FF_RES_CONVERT0(res,rand());
  return res;
}

static LispRef ff_stub_eul_srand10630 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010645, res;

  POPVAL1(G0010645);
  FF_RES_CONVERT0(res,eul_srand(FF_ARG_CONVERT0(G0010645)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module random */
void initialize_module_random()
{
  if (is_initialized) return;
  initialize_module_telos();
  eul_fast_table_set(eul_modules,"random",(LispRef) random_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_10644, sym_10643, sym_10642, sym_10641, G0010640, G0010638, G0010636, G0010634, G0010632;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 5 is_init: 0 index: 9 binding: top-level */
  static const void *G0010631[] = {I(a9,41,00,00),B(random ,6),I(1b,89,00,00),B(random ,3),I(45,01,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 10 binding: random-true-nil */
  static const void *G0010633[] = {I(a9,84,24,00),B(random ,4),I(3c,01,2d,45),I(00,00,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 11 binding: random */
  static const void *G0010635[] = {I(a8,1b,34,00),I(00,00,00,22),I(41,00,00,00),B(random ,7),I(1c,10,24,00),B(random ,3),I(1c,17,1d,1c),I(17,22,03,32),I(00,00,00,0d),I(41,00,00,00),B(random ,7),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 12 binding: random-seed */
  static const void *G0010637[] = {I(aa,41,00,00),B(random ,8),I(45,01,00,00)};

  /* Byte-vector with size: 33 is_init: 1 index: 0 binding: initialize-random */
  static const void *G0010639[] = {I(87,25,00,00),B(random ,1),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(random ,13),I(23,00,00,00),B(random ,12),I(3b,01,25,00),B(random ,5),I(23,00,00,00),B(random ,14),I(23,00,00,00),B(random ,11),I(3b,ff,25,00),B(random ,4),I(86,25,00,00),B(random ,3),I(23,00,00,00),B(random ,15),I(23,00,00,00),B(random ,10),I(3b,00,25,00),B(random ,2),I(23,00,00,00),B(random ,16),I(23,00,00,00),B(random ,9),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G0010632,G0010631);
  eul_allocate_bytevector( G0010634,G0010633);
  eul_allocate_bytevector( G0010636,G0010635);
  eul_allocate_bytevector( G0010638,G0010637);
  eul_intern_symbol(sym_10641,"random-seed");
  eul_intern_symbol(sym_10642,"random");
  eul_intern_symbol(sym_10643,"random-true-nil");
  eul_intern_symbol(sym_10644,"top-level");
  eul_allocate_bytevector( G0010640,G0010639);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 6; i++)
      random_bindings[i] = eul_nil;
  }

  random_bindings[ 6] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_rand_max10628;
  random_bindings[ 7] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_rand10629;
  random_bindings[ 8] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_srand10630;
  random_bindings[ 9] = G0010632;
  random_bindings[ 10] = G0010634;
  random_bindings[ 11] = G0010636;
  random_bindings[ 12] = G0010638;
  random_bindings[ 1] = eul_nil;
  random_bindings[ 13] = sym_10641;
  random_bindings[ 14] = sym_10642;
  random_bindings[ 15] = sym_10643;
  random_bindings[ 16] = sym_10644;
  eul_allocate_lambda( random_bindings[0], "initialize-random", 0, G0010640);

  }
}


/* eof */
