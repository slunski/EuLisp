/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module mop-inspect
 **  Copyright: See file mop-inspect.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern void initialize_module_mop_prim();
extern void initialize_module_mop_class();
extern void initialize_module_mop_init();
extern LispRef mop_init_bindings[];
extern LispRef mop_prim_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 46 */
LispRef mop_inspect_bindings[46];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-inspect */
void initialize_module_mop_inspect()
{
  if (is_initialized) return;
  initialize_module_boot();
  initialize_module_mop_prim();
  initialize_module_mop_class();
  initialize_module_mop_init();
  eul_fast_table_set(eul_modules,"mop_inspect",(LispRef) mop_inspect_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1622, sym_1621, sym_1620, sym_1619, sym_1618, sym_1617, sym_1616, sym_1615, sym_1614, sym_1613, sym_1612, sym_1611, sym_1610, G001609, G001607, G001605, G001603, G001601, G001599, G001597, G001594, G001592, G001590, G001588, G001586, sym_1584, G001583, G001581, sym_1579, G001578, G001576;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 9 is_init: 0 index: 15 binding: (setter-primitive-slot-value) */
  static const void *G001575[] = {I(43,03,1d,04),I(1b,26,00,00),I(00,00,00,04),I(02,1c,1f,04),I(1d,82,24,00),B(mop_inspect ,7),I(3c,04,1f,05),I(1c,1f,05,03),I(45,06,00,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 17 binding: top-level */
  static const void *G001577[] = {I(a9,24,00,00),B(mop_class ,70),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(mop_class ,24),I(24,00,00,00),B(mop_class ,75),I(24,00,00,00),B(boot1 ,25),I(3c,04,1b,89),B(mop_inspect ,14),I(2a,24,00,00),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,24,00),B(mop_inspect ,10),I(23,00,00,00),B(mop_inspect ,16),I(23,00,00,00),B(mop_inspect ,15),I(3b,03,1d,3d),I(02,02,45,02)};

  /* Byte-vector with size: 16 is_init: 0 index: 18 binding: anonymous */
  static const void *G001580[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2e),I(1c,10,1b,47),I(00,01,24,00),B(mop_inspect ,2),I(3c,02,1b,34),I(00,00,00,0d),I(47,00,00,32),I(00,00,00,0e),I(1f,03,11,47),I(00,02,3d,01),I(04,22,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 34 is_init: 0 index: 20 binding: subclass? */
  static const void *G001582[] = {I(ab,46,03,1c),I(48,00,00,1b),I(48,00,01,47),I(00,00,47,00),I(01,50,1b,34),I(00,00,00,0d),I(87,32,00,00),I(00,00,00,6b),I(47,00,00,26),I(00,00,00,09),I(02,47,00,01),I(26,00,00,00),I(00,00,00,09),I(02,1c,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,08),I(86,1b,34,00),I(00,00,00,16),I(1d,1d,24,00),B(mop_inspect ,9),I(3d,02,06,32),I(00,00,00,2b),I(86,1b,48,00),I(02,23,00,00),B(mop_inspect ,19),I(23,00,00,00),B(mop_inspect ,18),I(3b,01,48,00),I(02,47,00,00),I(84,02,47,00),I(02,3d,01,07),I(22,01,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 21 binding: generic-function? */
  static const void *G001585[] = {I(aa,1b,04,24),B(mop_class ,44),I(24,00,00,00),B(mop_inspect ,2),I(3c,02,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 22 binding: class? */
  static const void *G001587[] = {I(aa,1b,04,24),B(mop_class ,75),I(24,00,00,00),B(mop_inspect ,2),I(3c,02,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 23 binding: class-of */
  static const void *G001589[] = {I(aa,04,45,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 24 binding: primitive-metaclass? */
  static const void *G001591[] = {I(aa,24,00,00),B(mop_inspect ,14),I(86,6c,45,00)};

  eul_allocate_static_string(str_1595, "slot ~a not found in class ~a", 29);
  /* Byte-vector with size: 24 is_init: 0 index: 26 binding: primitive-find-slot-position */
  static const void *G001593[] = {I(43,04,1c,12),I(1b,34,00,00),I(00,00,00,23),I(23,00,00,00),B(mop_inspect ,25),I(1f,04,1f,06),I(24,00,00,00),B(boot ,12),I(3d,03,05,32),I(00,00,00,38),I(1d,10,1b,84),I(02,1f,05,1c),I(50,1b,34,00),I(00,00,00,0e),I(1f,04,32,00),I(00,00,00,1f),I(1f,05,11,1f),I(05,83,14,1f),I(09,1f,09,1f),I(03,1f,03,24),B(mop_inspect ,7),I(3d,04,0a,22),I(02,22,03,45),I(05,00,00,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 27 binding: function? */
  static const void *G001596[] = {I(aa,1b,04,24),B(mop_class ,27),I(24,00,00,00),B(mop_inspect ,2),I(3c,02,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 28 binding: subcode? */
  static const void *G001598[] = {I(ab,1c,10,1c),I(10,1a,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,1e),I(1c,11,1f,03),I(11,1a,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,08),I(87,22,01,45),I(03,00,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 29 binding: primitive-slot-value */
  static const void *G001600[] = {I(ab,1c,04,1b),I(26,00,00,00),I(00,00,00,04),I(02,1c,1f,03),I(1d,82,24,00),B(mop_inspect ,7),I(3c,04,1f,04),I(1c,02,45,05)};

  /* Byte-vector with size: 24 is_init: 0 index: 30 binding: cpl-subclass? */
  static const void *G001602[] = {I(ab,1c,1c,50),I(1b,34,00,00),I(00,00,00,0f),I(87,32,00,00),I(00,00,00,51),I(1d,26,00,00),I(00,00,00,09),I(02,1d,26,00),I(00,00,00,09),I(02,1c,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,08),I(86,1b,34,00),I(00,00,00,16),I(1d,1d,24,00),B(mop_inspect ,9),I(3d,02,06,32),I(00,00,00,15),I(1f,05,26,00),I(00,00,00,06),I(02,1f,05,1c),I(86,6c,22,01),I(22,03,45,03)};

  /* Byte-vector with size: 9 is_init: 0 index: 31 binding: methodp */
  static const void *G001604[] = {I(aa,1b,04,24),B(mop_class ,22),I(24,00,00,00),B(mop_inspect ,2),I(3c,02,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 32 binding: slotp */
  static const void *G001606[] = {I(aa,1b,04,24),B(mop_class ,49),I(24,00,00,00),B(mop_inspect ,2),I(3c,02,1b,34),I(00,00,00,0d),I(1c,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 102 is_init: 1 index: 0 binding: initialize-mop-inspect */
  static const void *G001608[] = {I(87,25,00,00),B(mop_inspect ,1),I(24,00,00,00),B(mop_init ,1),I(3e,0b,24,00),B(mop_init ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_class ,1),I(3e,0b,24,00),B(mop_class ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_prim ,1),I(3e,0b,24,00),B(mop_prim ,0),I(3c,00,21,01),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(86,25,00,00),B(mop_inspect ,14),I(23,00,00,00),B(mop_inspect ,33),I(23,00,00,00),B(mop_inspect ,32),I(3b,01,25,00),B(mop_inspect ,13),I(23,00,00,00),B(mop_inspect ,34),I(23,00,00,00),B(mop_inspect ,31),I(3b,01,25,00),B(mop_inspect ,12),I(23,00,00,00),B(mop_inspect ,35),I(23,00,00,00),B(mop_inspect ,30),I(3b,02,25,00),B(mop_inspect ,11),I(23,00,00,00),B(mop_inspect ,36),I(23,00,00,00),B(mop_inspect ,29),I(3b,02,25,00),B(mop_inspect ,10),I(23,00,00,00),B(mop_inspect ,37),I(23,00,00,00),B(mop_inspect ,28),I(3b,02,25,00),B(mop_inspect ,9),I(23,00,00,00),B(mop_inspect ,38),I(23,00,00,00),B(mop_inspect ,27),I(3b,01,25,00),B(mop_inspect ,8),I(23,00,00,00),B(mop_inspect ,39),I(23,00,00,00),B(mop_inspect ,26),I(3b,04,25,00),B(mop_inspect ,7),I(23,00,00,00),B(mop_inspect ,40),I(23,00,00,00),B(mop_inspect ,24),I(3b,01,25,00),B(mop_inspect ,6),I(23,00,00,00),B(mop_inspect ,41),I(23,00,00,00),B(mop_inspect ,23),I(3b,01,25,00),B(mop_inspect ,5),I(23,00,00,00),B(mop_inspect ,42),I(23,00,00,00),B(mop_inspect ,22),I(3b,01,25,00),B(mop_inspect ,4),I(23,00,00,00),B(mop_inspect ,43),I(23,00,00,00),B(mop_inspect ,21),I(3b,01,25,00),B(mop_inspect ,3),I(23,00,00,00),B(mop_inspect ,44),I(23,00,00,00),B(mop_inspect ,20),I(3b,02,25,00),B(mop_inspect ,2),I(23,00,00,00),B(mop_inspect ,45),I(23,00,00,00),B(mop_inspect ,17),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G001576,G001575);
  eul_intern_symbol(sym_1579,"(setter primitive-slot-value)");
  eul_allocate_bytevector( G001578,G001577);
  eul_allocate_bytevector( G001581,G001580);
  eul_intern_symbol(sym_1584,"anonymous");
  eul_allocate_bytevector( G001583,G001582);
  eul_allocate_bytevector( G001586,G001585);
  eul_allocate_bytevector( G001588,G001587);
  eul_allocate_bytevector( G001590,G001589);
  eul_allocate_bytevector( G001592,G001591);
  object_class(str_1595) = eul_static_string_class;
  eul_allocate_bytevector( G001594,G001593);
  eul_allocate_bytevector( G001597,G001596);
  eul_allocate_bytevector( G001599,G001598);
  eul_allocate_bytevector( G001601,G001600);
  eul_allocate_bytevector( G001603,G001602);
  eul_allocate_bytevector( G001605,G001604);
  eul_allocate_bytevector( G001607,G001606);
  eul_intern_symbol(sym_1610,"slotp");
  eul_intern_symbol(sym_1611,"methodp");
  eul_intern_symbol(sym_1612,"cpl-subclass?");
  eul_intern_symbol(sym_1613,"primitive-slot-value");
  eul_intern_symbol(sym_1614,"subcode?");
  eul_intern_symbol(sym_1615,"function?");
  eul_intern_symbol(sym_1616,"primitive-find-slot-position");
  eul_intern_symbol(sym_1617,"primitive-metaclass?");
  eul_intern_symbol(sym_1618,"class-of");
  eul_intern_symbol(sym_1619,"class?");
  eul_intern_symbol(sym_1620,"generic-function?");
  eul_intern_symbol(sym_1621,"subclass?");
  eul_intern_symbol(sym_1622,"top-level");
  eul_allocate_bytevector( G001609,G001608);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 15; i++)
      mop_inspect_bindings[i] = eul_nil;
  }

  mop_inspect_bindings[ 15] = G001576;
  mop_inspect_bindings[ 16] = sym_1579;
  mop_inspect_bindings[ 17] = G001578;
  mop_inspect_bindings[ 18] = G001581;
  mop_inspect_bindings[ 19] = sym_1584;
  mop_inspect_bindings[ 20] = G001583;
  mop_inspect_bindings[ 21] = G001586;
  mop_inspect_bindings[ 22] = G001588;
  mop_inspect_bindings[ 23] = G001590;
  mop_inspect_bindings[ 24] = G001592;
  mop_inspect_bindings[ 25] = str_1595;
  mop_inspect_bindings[ 26] = G001594;
  mop_inspect_bindings[ 27] = G001597;
  mop_inspect_bindings[ 28] = G001599;
  mop_inspect_bindings[ 29] = G001601;
  mop_inspect_bindings[ 30] = G001603;
  mop_inspect_bindings[ 31] = G001605;
  mop_inspect_bindings[ 32] = G001607;
  mop_inspect_bindings[ 1] = eul_nil;
  mop_inspect_bindings[ 33] = sym_1610;
  mop_inspect_bindings[ 34] = sym_1611;
  mop_inspect_bindings[ 35] = sym_1612;
  mop_inspect_bindings[ 36] = sym_1613;
  mop_inspect_bindings[ 37] = sym_1614;
  mop_inspect_bindings[ 38] = sym_1615;
  mop_inspect_bindings[ 39] = sym_1616;
  mop_inspect_bindings[ 40] = sym_1617;
  mop_inspect_bindings[ 41] = sym_1618;
  mop_inspect_bindings[ 42] = sym_1619;
  mop_inspect_bindings[ 43] = sym_1620;
  mop_inspect_bindings[ 44] = sym_1621;
  mop_inspect_bindings[ 45] = sym_1622;
  eul_allocate_lambda( mop_inspect_bindings[0], "initialize-mop-inspect", 0, G001609);

  }
}


/* eof */
