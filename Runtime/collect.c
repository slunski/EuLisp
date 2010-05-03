/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module collect
 **  Copyright: See file collect.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_compare();
extern LispRef telos_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef compare_bindings[];
extern LispRef boot_bindings[];

/* Module bindings with size 84 */
LispRef collect_bindings[84];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module collect */
void initialize_module_collect()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_compare();
  eul_fast_table_set(eul_modules,"collect",(LispRef) collect_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1585, G001584, sym_1582, sym_1580, sym_1578, sym_1577, sym_1576, sym_1575, sym_1574, sym_1573, sym_1572, sym_1571, sym_1570, sym_1569, sym_1568, sym_1567, sym_1566, sym_1565, sym_1564, sym_1563, sym_1562, sym_1561, sym_1560, sym_1559, sym_1558, sym_1557, sym_1556, sym_1555, sym_1554, sym_1553, sym_1552, sym_1551, sym_1550, key_1549, key_1547, sym_1545, key_1544, key_1543, key_1542, key_1541, sym_1540, key_1539, G001538, G001536, G001534, G001532, G001530, G001528, G001526, G001524, G001522, G001520, G001518, G001516;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 2 is_init: 0 index: 29 binding: (method-name) */
  static const void *G001515[] = {I(aa,84,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 30 binding: (method-name) */
  static const void *G001517[] = {I(aa,82,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 31 binding: (method-name) */
  static const void *G001519[] = {I(aa,82,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 32 binding: (method-name) */
  static const void *G001521[] = {I(aa,82,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 33 binding: (method-name) */
  static const void *G001523[] = {I(aa,82,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 34 binding: (method-find) */
  static const void *G001525[] = {I(43,fd,24,00),B(collect ,12),I(1f,03,1f,03),I(1f,03,24,00),B(boot ,9),I(3d,04,03,00)};

  /* Byte-vector with size: 31 is_init: 0 index: 35 binding: (method-equal) */
  static const void *G001527[] = {I(ab,1c,04,1c),I(04,50,1b,34),I(00,00,00,71),I(1d,7b,1b,34),I(00,00,00,21),I(24,00,00,00),B(compare ,7),I(1f,04,1f,04),I(24,00,00,00),B(collect ,15),I(3d,03,04,32),I(00,00,00,44),I(1f,03,24,00),B(collect ,9),I(3c,01,1f,03),I(24,00,00,00),B(collect ,9),I(3c,01,19,1b),I(34,00,00,00),I(00,00,00,24),I(24,00,00,00),B(compare ,7),I(1f,05,1f,05),I(24,00,00,00),B(collect ,15),I(3d,03,05,32),I(00,00,00,06),I(86,22,01,22),I(01,32,00,00),I(00,00,00,08),I(86,45,03,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 36 binding: (method-sequencep) */
  static const void *G001529[] = {I(aa,87,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 37 binding: (method-sequencep) */
  static const void *G001531[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 38 binding: (method-collectionp) */
  static const void *G001533[] = {I(aa,87,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 39 binding: (method-collectionp) */
  static const void *G001535[] = {I(aa,86,45,01)};

  eul_allocate_static_cons(cons_1548, NULL, NULL);
  eul_allocate_static_cons(cons_1546, NULL, eul_as_static(cons_1548));
  eul_allocate_static_cons(cons_1581, NULL, NULL);
  eul_allocate_static_cons(cons_1579, NULL, eul_as_static(cons_1581));
  /* Byte-vector with size: 960 is_init: 0 index: 82 binding: top-level */
  static const void *G001537[] = {I(a9,24,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_class ,71),I(23,00,00,00),B(collect ,40),I(23,00,00,00),B(collect ,41),I(23,00,00,00),B(collect ,42),I(1f,05,23,00),B(collect ,43),I(1f,06,23,00),B(collect ,44),I(86,23,00,00),B(collect ,45),I(87,24,00,00),B(mop_gf ,2),I(3c,0b,1b,89),B(collect ,25),I(2a,24,00,00),B(collect ,25),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_class ,71),I(23,00,00,00),B(collect ,40),I(23,00,00,00),B(collect ,46),I(23,00,00,00),B(collect ,42),I(1f,05,23,00),B(collect ,43),I(1f,06,23,00),B(collect ,44),I(23,00,00,00),B(collect ,49),I(23,00,00,00),B(collect ,45),I(87,24,00,00),B(mop_gf ,2),I(3c,0b,1b,89),B(collect ,7),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,50),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,24),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,51),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,22),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,52),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,26),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,53),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,13),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,54),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,16),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,55),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,15),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,56),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,6),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,57),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,2),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,58),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,21),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,59),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,12),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,60),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,17),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,61),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,5),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,62),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,23),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,63),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,28),I(2a,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,64),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,14),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,65),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,20),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,66),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,3),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,67),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,9),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,68),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,27),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,69),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,11),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,70),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,18),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,71),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,10),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,72),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,19),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,73),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,4),I(2a,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,74),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,8),I(2a,24,00,00),B(collect ,25),I(2a,24,00,00),B(collect ,7),I(2a,24,00,00),B(collect ,24),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,24),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,75),I(23,00,00,00),B(collect ,39),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,24),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,24),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(collect ,25),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,24),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,75),I(23,00,00,00),B(collect ,38),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,24),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,24),I(2a,24,00,00),B(collect ,22),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,22),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,76),I(23,00,00,00),B(collect ,37),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,22),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,22),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(collect ,7),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,22),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,76),I(23,00,00,00),B(collect ,36),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,22),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,22),I(2a,24,00,00),B(compare ,7),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(collect ,25),I(24,00,00,00),B(collect ,25),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(compare ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,77),I(23,00,00,00),B(collect ,35),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,26),I(2a,24,00,00),B(collect ,13),I(2a,24,00,00),B(collect ,16),I(2a,24,00,00),B(collect ,15),I(2a,24,00,00),B(collect ,6),I(2a,24,00,00),B(collect ,2),I(2a,24,00,00),B(collect ,21),I(2a,24,00,00),B(collect ,12),I(2a,24,00,00),B(collect ,17),I(2a,24,00,00),B(collect ,5),I(2a,24,00,00),B(collect ,17),I(26,00,00,00),I(00,00,00,03),I(02,84,86,24),B(collect ,25),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,17),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,78),I(23,00,00,00),B(collect ,34),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,17),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,23),I(2a,24,00,00),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,26,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(collect ,80),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(collect ,23),I(1c,1f,06,3c),I(02,2a,24,00),B(collect ,23),I(24,00,00,00),B(boot1 ,41),I(3c,01,2a,24),B(collect ,28),I(2a,24,00,00),B(collect ,14),I(2a,24,00,00),B(collect ,20),I(2a,24,00,00),B(collect ,3),I(2a,24,00,00),B(collect ,9),I(2a,24,00,00),B(collect ,27),I(2a,24,00,00),B(collect ,11),I(2a,24,00,00),B(collect ,18),I(2a,24,00,00),B(collect ,10),I(2a,24,00,00),B(collect ,19),I(2a,24,00,00),B(collect ,4),I(2a,24,00,00),B(collect ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,6),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,81),I(23,00,00,00),B(collect ,33),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,81),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,81),I(23,00,00,00),B(collect ,32),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,28),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,81),I(23,00,00,00),B(collect ,31),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,75),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,81),I(23,00,00,00),B(collect ,30),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,50),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,81),I(23,00,00,00),B(collect ,29),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,8),I(45,b1,00,00)};

  /* Byte-vector with size: 72 is_init: 1 index: 0 binding: initialize-collect */
  static const void *G001583[] = {I(87,25,00,00),B(collect ,1),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(collect ,28),I(86,25,00,00),B(collect ,27),I(86,25,00,00),B(collect ,26),I(86,25,00,00),B(collect ,25),I(86,25,00,00),B(collect ,24),I(86,25,00,00),B(collect ,23),I(86,25,00,00),B(collect ,22),I(86,25,00,00),B(collect ,21),I(86,25,00,00),B(collect ,20),I(86,25,00,00),B(collect ,19),I(86,25,00,00),B(collect ,18),I(86,25,00,00),B(collect ,17),I(86,25,00,00),B(collect ,16),I(86,25,00,00),B(collect ,15),I(86,25,00,00),B(collect ,14),I(86,25,00,00),B(collect ,13),I(86,25,00,00),B(collect ,12),I(86,25,00,00),B(collect ,11),I(86,25,00,00),B(collect ,10),I(86,25,00,00),B(collect ,9),I(86,25,00,00),B(collect ,8),I(86,25,00,00),B(collect ,7),I(86,25,00,00),B(collect ,6),I(86,25,00,00),B(collect ,5),I(86,25,00,00),B(collect ,4),I(86,25,00,00),B(collect ,3),I(86,25,00,00),B(collect ,2),I(23,00,00,00),B(collect ,83),I(23,00,00,00),B(collect ,82),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G001516,G001515);
  eul_allocate_bytevector( G001518,G001517);
  eul_allocate_bytevector( G001520,G001519);
  eul_allocate_bytevector( G001522,G001521);
  eul_allocate_bytevector( G001524,G001523);
  eul_allocate_bytevector( G001526,G001525);
  eul_allocate_bytevector( G001528,G001527);
  eul_allocate_bytevector( G001530,G001529);
  eul_allocate_bytevector( G001532,G001531);
  eul_allocate_bytevector( G001534,G001533);
  eul_allocate_bytevector( G001536,G001535);
  eul_intern_keyword(key_1539,"name");
  eul_intern_symbol(sym_1540,"collection");
  eul_intern_keyword(key_1541,"direct-superclasses");
  eul_intern_keyword(key_1542,"direct-slots");
  eul_intern_keyword(key_1543,"direct-keywords");
  eul_intern_keyword(key_1544,"abstractp");
  eul_intern_symbol(sym_1545,"sequence");
  eul_intern_keyword(key_1547,"size");
  eul_intern_keyword(key_1549,"fill-value");
  object_class(cons_1548) = eul_static_cons_class;
  eul_car(cons_1548) = key_1549;
  eul_cdr(cons_1548) = eul_nil;
  object_class(cons_1546) = eul_static_cons_class;
  eul_car(cons_1546) = key_1547;
  eul_intern_symbol(sym_1550,"collectionp");
  eul_intern_symbol(sym_1551,"sequencep");
  eul_intern_symbol(sym_1552,"accumulate");
  eul_intern_symbol(sym_1553,"accumulate1");
  eul_intern_symbol(sym_1554,"anyp");
  eul_intern_symbol(sym_1555,"allp");
  eul_intern_symbol(sym_1556,"do");
  eul_intern_symbol(sym_1557,"map");
  eul_intern_symbol(sym_1558,"fill");
  eul_intern_symbol(sym_1559,"member");
  eul_intern_symbol(sym_1560,"find");
  eul_intern_symbol(sym_1561,"select");
  eul_intern_symbol(sym_1562,"element");
  eul_intern_symbol(sym_1563,"delete");
  eul_intern_symbol(sym_1564,"remove");
  eul_intern_symbol(sym_1565,"reset");
  eul_intern_symbol(sym_1566,"emptyp");
  eul_intern_symbol(sym_1567,"size");
  eul_intern_symbol(sym_1568,"reverse");
  eul_intern_symbol(sym_1569,"reverse!");
  eul_intern_symbol(sym_1570,"sort");
  eul_intern_symbol(sym_1571,"sort!");
  eul_intern_symbol(sym_1572,"concatenate");
  eul_intern_symbol(sym_1573,"slice");
  eul_intern_symbol(sym_1574,"name");
  eul_intern_symbol(sym_1575,"(method collectionp)");
  eul_intern_symbol(sym_1576,"(method sequencep)");
  eul_intern_symbol(sym_1577,"(method equal)");
  eul_intern_symbol(sym_1578,"(method find)");
  eul_intern_symbol(sym_1580,"setter");
  object_class(cons_1581) = eul_static_cons_class;
  eul_car(cons_1581) = sym_1562;
  eul_cdr(cons_1581) = eul_nil;
  object_class(cons_1579) = eul_static_cons_class;
  eul_car(cons_1579) = sym_1580;
  eul_intern_symbol(sym_1582,"(method name)");
  eul_allocate_bytevector( G001538,G001537);
  eul_intern_symbol(sym_1585,"top-level");
  eul_allocate_bytevector( G001584,G001583);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 29; i++)
      collect_bindings[i] = eul_nil;
  }

  collect_bindings[ 29] = G001516;
  collect_bindings[ 30] = G001518;
  collect_bindings[ 31] = G001520;
  collect_bindings[ 32] = G001522;
  collect_bindings[ 33] = G001524;
  collect_bindings[ 34] = G001526;
  collect_bindings[ 35] = G001528;
  collect_bindings[ 36] = G001530;
  collect_bindings[ 37] = G001532;
  collect_bindings[ 38] = G001534;
  collect_bindings[ 39] = G001536;
  collect_bindings[ 40] = key_1539;
  collect_bindings[ 41] = sym_1540;
  collect_bindings[ 42] = key_1541;
  collect_bindings[ 43] = key_1542;
  collect_bindings[ 44] = key_1543;
  collect_bindings[ 45] = key_1544;
  collect_bindings[ 46] = sym_1545;
  collect_bindings[ 47] = key_1547;
  collect_bindings[ 48] = key_1549;
  collect_bindings[ 49] = cons_1546;
  collect_bindings[ 50] = sym_1550;
  collect_bindings[ 51] = sym_1551;
  collect_bindings[ 52] = sym_1552;
  collect_bindings[ 53] = sym_1553;
  collect_bindings[ 54] = sym_1554;
  collect_bindings[ 55] = sym_1555;
  collect_bindings[ 56] = sym_1556;
  collect_bindings[ 57] = sym_1557;
  collect_bindings[ 58] = sym_1558;
  collect_bindings[ 59] = sym_1559;
  collect_bindings[ 60] = sym_1560;
  collect_bindings[ 61] = sym_1561;
  collect_bindings[ 62] = sym_1562;
  collect_bindings[ 63] = sym_1563;
  collect_bindings[ 64] = sym_1564;
  collect_bindings[ 65] = sym_1565;
  collect_bindings[ 66] = sym_1566;
  collect_bindings[ 67] = sym_1567;
  collect_bindings[ 68] = sym_1568;
  collect_bindings[ 69] = sym_1569;
  collect_bindings[ 70] = sym_1570;
  collect_bindings[ 71] = sym_1571;
  collect_bindings[ 72] = sym_1572;
  collect_bindings[ 73] = sym_1573;
  collect_bindings[ 74] = sym_1574;
  collect_bindings[ 75] = sym_1575;
  collect_bindings[ 76] = sym_1576;
  collect_bindings[ 77] = sym_1577;
  collect_bindings[ 78] = sym_1578;
  collect_bindings[ 79] = sym_1580;
  collect_bindings[ 80] = cons_1579;
  collect_bindings[ 81] = sym_1582;
  collect_bindings[ 82] = G001538;
  collect_bindings[ 1] = eul_nil;
  collect_bindings[ 83] = sym_1585;
  eul_allocate_lambda( collect_bindings[0], "initialize-collect", 0, G001584);

  }
}


/* eof */
