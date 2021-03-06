;;; EuLisp system 'youtoo'
;;;   Interface file for module cg-link

(definterface cg-link
  (import (i-all i-modify p-env sx-obj sx-node cg-state cg-asm cg-interf i-ffi ex-expr cg-dld)
   syntax (_syntax-1 _i-aux0)
   full-import (i-error i-notify i-param i-level-1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level-1 aux-table i-all i-modify sx-obj sx-obj1 sx-obj2 p-env i-ffi sx-node cg-state op-peep-r op-peep cg-bycode2 cg-bycode1 cg-bycode cg-asm cg-interf sx-write cg-dld ex-direct ex-expose ex-syntax ex-import ex-expr)
   export (
    ((name . write-C-module-file) (pos . 4) (origin cg-link . write-C-module-file))
    ((name . decode) (pos . 23) (origin cg-link . decode))
   )
   local-literals (
    (top-level . 367)
    (write-C-state . 366)
    (set-bytevector-pos . 365)
    (write-C-module-file . 364)
    (add-initialization . 363)
    (compute-bytevector-aux . 362)
    (check-bv-delimiter . 361)
    (set-up-foreign-functions . 360)
    (compute-binding . 359)
    (reset-code-vector-str . 358)
    (write-C-file-end . 357)
    (add-statement . 356)
    (add-code-vector-def . 355)
    (as-C-string . 354)
    (compute-foreign-function-binding . 353)
    (global-index . 352)
    (compute-code-vector . 351)
    (write-C-include-file . 350)
    (wrap-init-code-aux . 349)
    (add-global . 348)
    (as-hex . 347)
    (write-ff-stub-to-C-file . 346)
    (write-to-C-file . 345)
    (open-bytevector . 344)
    (add-used-module-name . 343)
    (reset-decoder . 342)
    (initialize-imported-modules . 341)
    (set-up-bindings . 340)
    (write-next-bv-byte . 339)
    (wrap-init-code . 338)
    (set-fixed-bytes . 337)
    (set-up-init-bytevector . 336)
    (compute-bytevector . 335)
    (check-method-name . 334)
    (static-allocatable? . 333)
    (write-to-bv-str . 332)
    (flush-bytevector-cache . 331)
    (get-imported-module-or-library . 330)
    (write-C-hook-file . 329)
    (add-decl . 328)
    (write-C-file-header . 327)
    (write-decls-to-C-file . 326)
    (set-global-index . 325)
    (close-bytevector . 324)
    (set-up-bytevectors . 323)
    (set-up-init-flag . 322)
    (register-new-global . 321)
    (get-bytevector-pos . 320)
    (compute-static . 319)
    (write-copyright-to-C-file . 318)
    (" **  Title: ~a of EuLisp module ~a
 **  Copyright: See file ~a.em
 ** ----------------------------------------------------------------------- **/

" . 316)
    (" **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
" . 315)
    ("/** ----------------------------------------------------------------------- **
" . 314)
    ("  ~a_bindings[ ~a] = ~a;
" . 310)
    ("eul_nil" . 308)
    ("  Processing bv: ~s binding-name: ~a code: ~a" . 305)
    ("  eul_allocate_bytevector( ~a,~a);
" . 303)
    ("};

" . 302)
    ("  static const void *~a[] = {" . 301)
    ("  /* Byte-vector with size: ~a is_init: ~a index: ~a binding: ~a */
" . 300)
    (";
" . 297)
    ("  LispRef ~a" . 296)
    (", ~a" . 294)
    ("  is_initialized = 1;
  {
" . 292)
    ("  eul_fast_table_set(eul_modules,"~a",(LispRef) ~a_bindings);
" . 291)
    ("  if (is_initialized) return;
" . 290)
    ("void initialize_module_~a()
{
" . 289)
    ("
/* Initialize module ~a */
" . 288)
    ("static int is_initialized = 0;
" . 287)
    ("
/* Initialize module only once */
" . 286)
    ("
/* Foreign functions */
" . 285)
    ("LispRef ~a_bindings[~a];
" . 284)
    ("
/* Module bindings with size ~a */
" . 283)
    ("
/* Imported modules */
" . 282)
    ("#include "eulisp.h"

" . 281)
    ("C source file" . 280)
    ("extern void initialize_module_~a();
" . 278)
    ("extern LispRef ~a_bindings[];
" . 276)
    ("


/* eof */
" . 272)
    ("  execute_lambda(~a_bindings[0]);
}" . 271)
    ("  initialize_module_~a();
" . 270)
    ("void run_application()
{
" . 269)
    ("
/* Run application ~a ... */
" . 268)
    ("extern LispRef ~a_bindings[];
" . 267)
    ("extern void initialize_module_~a();
" . 266)
    ("
/* Initialize module ~a ... */
" . 265)
    ("#include "eulisp.h"

" . 264)
    ("C hook file" . 263)
    ("  Creating hook ~a ..." . 262)
    ("~a~a~a" . 261)
    ("_.c" . 260)
    ("00" . 254)
    ("I(~a,~a,~a,~a)" . 253)
    ("00" . 252)
    ("00" . 251)
    ("  eul_allocate_lambda( ~a, "~a", 0, ~a);
" . 246)
    ("initialize-" . 244)
    ("~a_bindings[0]" . 243)
    ("B(~a ,~a)" . 241)
    ("B(~a ,1)" . 239)
    ("  Wrap bv: ~a" . 238)
    ("~a" . 236)
    ("I(~a,~a,~a,~a)" . 235)
    ("  }

" . 233)
    ("      ~a_bindings[i] = eul_nil;
" . 232)
    ("    for (i = ~a; i < ~a; i++)
" . 231)
    ("  {
    int i;
" . 230)
    ("  initialize_module_~a();
" . 226)
    (comparator: . 224)
    ("  Reset decoder ..." . 223)
    ("~a" . 221)
    ("}

" . 217)
    ("  return res;
" . 216)
    ("));
" . 215)
    ("" . 214)
    ("  FF_RES_CONVERT~a(res,~a(~a" . 213)
    ("FF_ARG_CONVERT~a(~a)" . 212)
    ("" . 211)
    ("  LispRef ~ares;

" . 210)
    ("LispRef *sreg_value_sb)
{
" . 209)
    ("LispRef *sreg_value_sp, " . 208)
    ("Stack *reg_value_stack, " . 207)
    ("static LispRef ~a (" . 206)
    ("" . 205)
    ("~a, " . 202)
    ("  POPVAL1(~a);
" . 200)
    (", FF_ARG_CONVERT~a(~a)" . 198)
    ("too many top-level forms after syntax expansion" . 196)
    ("00" . 195)
    (decode . 192)
    (|(method G002451)| . 191)
    ("decoder error" . 189)
    ("compile time error condition: " . 188)
    ("B(~a ,1)" . 184)
    ("B(~a ,0)" . 183)
    ("


/* eof */
" . 181)
    ("/* Module binding indices */
" . 180)
    ("extern LispRef ~a_bindings[];

" . 179)
    ("C include file" . 178)
    ("  Creating ~a ..." . 177)
    ("~a~a~a" . 176)
    (".h" . 175)
    ("#define ~a_fn_index ~a 
" . 171)
    ("body of inlined function contains non exported binding ~a" . 167)
    ("" . 165)
    ("~a" . 164)
    ("~a_X~a" . 162)
    ("


/* eof */
" . 158)
    ("
  }
}" . 157)
    (("") . 155)
    ("set-fixed-byes ~a ~a ~a" . 153)
    (? . 152)
    ("compute-binding ~a ~a" . 151)
    (|(method G002621)| . 150)
    (ct-error-value: . 148)
    ("can't compute binding ~a of module ~a" . 147)
    ("compile time error condition: " . 146)
    ("(LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) " . 142)
    ("ff binding ~a: index ~a" . 141)
    ("ff_stub_" . 140)
    (ff . 139)
    ("," . 137)
    (FF . 135)
    (BINDING . 134)
    (STATIC . 133)
    (CODE-VECTOR . 132)
    ("~a" . 131)
    (*C-state* . 129)
    ("  Creating ~a.c ..." . 127)
    ("  Set up bytevector: ~a" . 125)
    ("
  /* Set local bindings */
" . 123)
    ("
  /* Initializations */
" . 122)
    ("
  /* Code vector and literal definitions */
" . 121)
    ("  /* Declarations */
" . 120)
    ("Writing link state of module ~a" . 119)
    (*c-stream* . 118)
    (anonymous . 117)
    (*clean-ups* . 116)
    (w . 115)
    (mode: . 114)
    (file-name: . 113)
    ("~a~a~a" . 112)
    (".c" . 111)
    (|(method convert-constant)| . 107)
    (|(method get-literal-entry)| . 106)
    (|(method get-constant-loc)| . 105)
    (convert-constant . 104)
    (size: . 103)
    (get-literal-entry . 102)
    (get-constant-loc . 101)
    (*actual-module* . 97)
    ("c_int_as_eul_fpi(~a)" . 94)
    ("  eul_allocate_double(~a,~a);
" . 92)
    ("dbl_" . 91)
    ("c_char_as_eul_char('~a')" . 89)
    ("  eul_allocate_vector(~a,~a,~a);
" . 87)
    ("vec_" . 86)
    (eul_nil . 84)
    ("  eul_cdr(~a) = ~a;
" . 82)
    ("NULL);
" . 81)
    ("eul_as_static(~a));
" . 80)
    ("~a);
" . 79)
    ("  eul_car(~a) = ~a;
" . 78)
    ("NULL, " . 77)
    ("eul_as_static(~a), " . 76)
    ("~a, " . 75)
    ("  object_class(~a) = eul_static_cons_class;~%" . 74)
    ("  eul_allocate_static_cons(~a, " . 73)
    ("cons_" . 72)
    ("  object_class(~a) = eul_static_string_class;~%" . 70)
    ("  eul_allocate_static_string(~a, ~s, ~a);
" . 69)
    ("str_" . 68)
    ("  eul_intern_symbol(~a,~s);
" . 66)
    ("sym_" . 65)
    (eul_true . 64)
    ("  eul_intern_keyword(~a,~s);
" . 62)
    ("key_" . 61)
   )
   literals (
   )
))
