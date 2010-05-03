;;; EuLisp system 'youtoo'
;;;   Interface file for module i-param

(definterface i-param
  (import (i-level1)
   syntax (_macros _i-aux0)
   full-import (aux-table level1 telos mop-defcl mop-meth mop-gf mop-inspect mop-init mop-class mop-key mop-prim mop-access mop-alloc bit condition event thread dynamic let-cc callback string convert copy integer number fpi collect compare character float stream stream1 lock stream2 socket list format convert1 vector table1 table read handler random stream3 symbol boot boot1 i-level1)
   export (
    ((name . *get-loaded-syntax-module*) (pos . 31) (origin i-param . *get-loaded-syntax-module*))
    ((name . *ostype*) (pos . 50) (origin i-param . *ostype*))
    ((name . *first-year-students*) (pos . 32) (origin i-param . *first-year-students*))
    ((name . *number-of-warnings*) (pos . 42) (origin i-param . *number-of-warnings*))
    ((name . *recompile*) (pos . 58) (origin i-param . *recompile*))
    ((name . *get-literal*) (pos . 49) (origin i-param . *get-literal*))
    ((name . get-named-encl-lambda) (pos . 40) (origin i-param . get-named-encl-lambda))
    ((name . stop-after-pass) (pos . 41) (origin i-param . stop-after-pass))
    ((name . *load-path*) (pos . 17) (origin i-param . *load-path*))
    ((name . *number-of-errors*) (pos . 48) (origin i-param . *number-of-errors*))
    ((name . *C-ar*) (pos . 39) (origin i-param . *C-ar*))
    ((name . *strip-stand-alone*) (pos . 57) (origin i-param . *strip-stand-alone*))
    ((name . *modified-module-names*) (pos . 30) (origin i-param . *modified-module-names*))
    ((name . *tmp-load-dir*) (pos . 38) (origin i-param . *tmp-load-dir*))
    ((name . *interpreter*) (pos . 10) (origin i-param . *interpreter*))
    ((name . *create-C-library*) (pos . 29) (origin i-param . *create-C-library*))
    ((name . *no-ct-handlers*) (pos . 56) (origin i-param . *no-ct-handlers*))
    ((name . *no-recompile*) (pos . 37) (origin i-param . *no-recompile*))
    ((name . *C-ld*) (pos . 66) (origin i-param . *C-ld*))
    ((name . *C-cc-flags*) (pos . 55) (origin i-param . *C-cc-flags*))
    ((name . *debug*) (pos . 47) (origin i-param . *debug*))
    ((name . *linked-C-libraries*) (pos . 15) (origin i-param . *linked-C-libraries*))
    ((name . *inline-level*) (pos . 65) (origin i-param . *inline-level*))
    ((name . *C-library-load-path*) (pos . 9) (origin i-param . *C-library-load-path*))
    ((name . *C-ranlib*) (pos . 8) (origin i-param . *C-ranlib*))
    ((name . load-syntax-module) (pos . 5) (origin i-param . load-syntax-module))
    ((name . *stand-alone*) (pos . 7) (origin i-param . *stand-alone*))
    ((name . *tmp-start-source-file-name*) (pos . 24) (origin i-param . *tmp-start-source-file-name*))
    ((name . *dest-file-name*) (pos . 6) (origin i-param . *dest-file-name*))
    ((name . *no-else*) (pos . 14) (origin i-param . *no-else*))
    ((name . ct-reset) (pos . 61) (origin i-param . ct-reset))
    ((name . *main-link-string*) (pos . 54) (origin i-param . *main-link-string*))
    ((name . *delimiter*) (pos . 23) (origin i-param . *delimiter*) (class . constant))
    ((name . get-ct-error-condition-class) (pos . 3) (origin i-param . get-ct-error-condition-class))
    ((name . *linked-C-ff-libraries*) (pos . 4) (origin i-param . *linked-C-ff-libraries*))
    ((name . *C-cc*) (pos . 46) (origin i-param . *C-cc*))
    ((name . *tmp-source-file-name*) (pos . 62) (origin i-param . *tmp-source-file-name*))
    ((name . *no-gc*) (pos . 63) (origin i-param . *no-gc*))
    ((name . parse-module) (pos . 18) (origin i-param . parse-module))
    ((name . *C-cc-libs*) (pos . 22) (origin i-param . *C-cc-libs*))
    ((name . *silent*) (pos . 21) (origin i-param . *silent*))
    ((name . *object-dir*) (pos . 53) (origin i-param . *object-dir*))
    ((name . *version*) (pos . 45) (origin i-param . *version*))
    ((name . *create-C-module*) (pos . 64) (origin i-param . *create-C-module*))
    ((name . *eulysses-arch*) (pos . 36) (origin i-param . *eulysses-arch*))
    ((name . *script*) (pos . 44) (origin i-param . *script*))
    ((name . *eulysses-dir*) (pos . 2) (origin i-param . *eulysses-dir*))
    ((name . *linked-C-ff-files*) (pos . 13) (origin i-param . *linked-C-ff-files*))
    ((name . *get-loaded-module*) (pos . 20) (origin i-param . *get-loaded-module*))
    ((name . compile-module) (pos . 19) (origin i-param . compile-module))
    ((name . *start-module*) (pos . 12) (origin i-param . *start-module*))
    ((name . *errors*) (pos . 26) (origin i-param . *errors*))
    ((name . *stop-after-pass*) (pos . 25) (origin i-param . *stop-after-pass*))
    ((name . *source-file-names*) (pos . 34) (origin i-param . *source-file-names*))
    ((name . *verbose*) (pos . 52) (origin i-param . *verbose*))
    ((name . *pass*) (pos . 60) (origin i-param . *pass*))
    ((name . *get-full-import*) (pos . 43) (origin i-param . *get-full-import*))
    ((name . *get-load-dir*) (pos . 11) (origin i-param . *get-load-dir*))
    ((name . *redefine-imported-bindings*) (pos . 33) (origin i-param . *redefine-imported-bindings*))
    ((name . *warnings*) (pos . 59) (origin i-param . *warnings*))
    ((name . *peephole*) (pos . 51) (origin i-param . *peephole*))
   )
   local-literals (
    (top-level . 123)
    (load-config-info . 122)
    (get-config-info . 121)
    (get-cc-libs . 120)
    (stop-after-pass . 119)
    (ct-reset . 118)
    (get-cc-flags . 117)
    (CFLAGS . 115)
    ("EUL_LIBRARY_LOAD_PATH" . 113)
    ("EUL_LOAD_PATH" . 112)
    (CLIBS . 109)
    ("" . 107)
    ("test -f ~a" . 105)
    (anonymous . 104)
    (*clean-ups* . 103)
    (file-name: . 102)
    ("~a~a.eulrc.~a" . 101)
    ("~a~a.eulrc.~a" . 100)
    ("HOME" . 99)
    ("" . 95)
    (*trace-indent* . 94)
    ("" . 93)
    (*indent* . 92)
    (*pprint* . 91)
    (*encl-lambda* . 90)
    (*actual-module* . 89)
    (get-named-encl-lambda . 88)
    (get-ct-error-condition-class . 87)
    (parse-module . 86)
    (load-syntax-module . 85)
    (compile-module . 84)
    (start . 83)
    (comparator: . 82)
    ("~a~a~a" . 81)
    ("Lib.~a/eul-appl.o" . 80)
    (ARCH . 79)
    (RANLIB . 78)
    (AR . 77)
    (CC . 76)
    (OSTYPE . 75)
    (VERSION . 74)
    ("EUL_START_MODULE" . 73)
    ("EUL_LIBRARY_LOAD_PATH" . 72)
    ("EUL_ARCH" . 71)
    ("EUL_DIR" . 70)
    ("EUL_LOAD_PATH" . 69)
    ("/" . 68)
   )
   literals (
   )
))
