;;; EuLisp system 'youtoo'
;;;   Interface file for module i-param

(definterface i-param
  (import (i-level1)
   syntax (_macros _i-aux0)
   full-import (aux-table level1 telos mop-defcl mop-meth mop-gf mop-inspect mop-init mop-class mop-key mop-prim mop-access mop-alloc bit condition event thread dynamic let-cc callback string convert copy integer number fpi collect compare character float double1 double stream stream1 lock stream2 socket list format convert1 vector table1 table read handler random stream3 symbol boot boot1 i-level1)
   export (
    ((name . *get-loaded-syntax-module*) (pos . 30) (origin i-param . *get-loaded-syntax-module*))
    ((name . *ostype*) (pos . 49) (origin i-param . *ostype*))
    ((name . *script-file*) (pos . 48) (origin i-param . *script-file*))
    ((name . *number-of-warnings*) (pos . 40) (origin i-param . *number-of-warnings*))
    ((name . *recompile*) (pos . 57) (origin i-param . *recompile*))
    ((name . *get-literal*) (pos . 47) (origin i-param . *get-literal*))
    ((name . get-named-encl-lambda) (pos . 39) (origin i-param . get-named-encl-lambda))
    ((name . stop-after-pass) (pos . 38) (origin i-param . stop-after-pass))
    ((name . *load-path*) (pos . 16) (origin i-param . *load-path*))
    ((name . *number-of-errors*) (pos . 46) (origin i-param . *number-of-errors*))
    ((name . *C-ar*) (pos . 37) (origin i-param . *C-ar*))
    ((name . *strip-stand-alone*) (pos . 56) (origin i-param . *strip-stand-alone*))
    ((name . *modified-module-names*) (pos . 29) (origin i-param . *modified-module-names*))
    ((name . *tmp-load-dir*) (pos . 36) (origin i-param . *tmp-load-dir*))
    ((name . *interpreter*) (pos . 10) (origin i-param . *interpreter*))
    ((name . *create-C-library*) (pos . 28) (origin i-param . *create-C-library*))
    ((name . *no-ct-handlers*) (pos . 55) (origin i-param . *no-ct-handlers*))
    ((name . *no-recompile*) (pos . 35) (origin i-param . *no-recompile*))
    ((name . *C-ld*) (pos . 65) (origin i-param . *C-ld*))
    ((name . *C-cc-flags*) (pos . 54) (origin i-param . *C-cc-flags*))
    ((name . *debug*) (pos . 45) (origin i-param . *debug*))
    ((name . *linked-C-libraries*) (pos . 14) (origin i-param . *linked-C-libraries*))
    ((name . *inline-level*) (pos . 64) (origin i-param . *inline-level*))
    ((name . *C-library-load-path*) (pos . 9) (origin i-param . *C-library-load-path*))
    ((name . *C-ranlib*) (pos . 8) (origin i-param . *C-ranlib*))
    ((name . load-syntax-module) (pos . 5) (origin i-param . load-syntax-module))
    ((name . *stand-alone*) (pos . 7) (origin i-param . *stand-alone*))
    ((name . *tmp-start-source-file-name*) (pos . 23) (origin i-param . *tmp-start-source-file-name*))
    ((name . *dest-file-name*) (pos . 6) (origin i-param . *dest-file-name*))
    ((name . *no-else*) (pos . 13) (origin i-param . *no-else*))
    ((name . ct-reset) (pos . 63) (origin i-param . ct-reset))
    ((name . *main-link-string*) (pos . 53) (origin i-param . *main-link-string*))
    ((name . *delimiter*) (pos . 22) (origin i-param . *delimiter*) (class . constant))
    ((name . get-ct-error-condition-class) (pos . 3) (origin i-param . get-ct-error-condition-class))
    ((name . *linked-C-ff-libraries*) (pos . 4) (origin i-param . *linked-C-ff-libraries*))
    ((name . *C-cc*) (pos . 44) (origin i-param . *C-cc*))
    ((name . *tmp-source-file-name*) (pos . 61) (origin i-param . *tmp-source-file-name*))
    ((name . *no-gc*) (pos . 62) (origin i-param . *no-gc*))
    ((name . parse-module) (pos . 17) (origin i-param . parse-module))
    ((name . *C-cc-libs*) (pos . 21) (origin i-param . *C-cc-libs*))
    ((name . *silent*) (pos . 20) (origin i-param . *silent*))
    ((name . *object-dir*) (pos . 52) (origin i-param . *object-dir*))
    ((name . *version*) (pos . 43) (origin i-param . *version*))
    ((name . *create-C-module*) (pos . 60) (origin i-param . *create-C-module*))
    ((name . *eulysses-arch*) (pos . 34) (origin i-param . *eulysses-arch*))
    ((name . *script*) (pos . 42) (origin i-param . *script*))
    ((name . *eulysses-dir*) (pos . 2) (origin i-param . *eulysses-dir*))
    ((name . *linked-C-ff-files*) (pos . 12) (origin i-param . *linked-C-ff-files*))
    ((name . *get-loaded-module*) (pos . 19) (origin i-param . *get-loaded-module*))
    ((name . compile-module) (pos . 18) (origin i-param . compile-module))
    ((name . *errors*) (pos . 25) (origin i-param . *errors*))
    ((name . *stop-after-pass*) (pos . 24) (origin i-param . *stop-after-pass*))
    ((name . *source-file-names*) (pos . 33) (origin i-param . *source-file-names*))
    ((name . *verbose*) (pos . 51) (origin i-param . *verbose*))
    ((name . *pass*) (pos . 59) (origin i-param . *pass*))
    ((name . *get-full-import*) (pos . 41) (origin i-param . *get-full-import*))
    ((name . *get-load-dir*) (pos . 11) (origin i-param . *get-load-dir*))
    ((name . *redefine-imported-bindings*) (pos . 31) (origin i-param . *redefine-imported-bindings*))
    ((name . *warnings*) (pos . 58) (origin i-param . *warnings*))
    ((name . *peephole*) (pos . 50) (origin i-param . *peephole*))
   )
   local-literals (
    (top-level . 121)
    (load-config-info . 120)
    (get-config-info . 119)
    (get-cc-libs . 118)
    (stop-after-pass . 117)
    (ct-reset . 116)
    (get-cc-flags . 115)
    (CFLAGS . 113)
    ("EUL_LIBRARY_LOAD_PATH" . 111)
    ("EUL_LOAD_PATH" . 110)
    (CLIBS . 107)
    ("" . 105)
    ("test -f ~a" . 103)
    (anonymous . 102)
    (*clean-ups* . 101)
    (file-name: . 100)
    ("~a~a.eulrc.~a" . 99)
    ("~a~a.eulrc.~a" . 98)
    ("HOME" . 97)
    ("" . 93)
    (*trace-indent* . 92)
    ("" . 91)
    (*indent* . 90)
    (*pprint* . 89)
    (*encl-lambda* . 88)
    (*actual-module* . 87)
    (get-named-encl-lambda . 86)
    (get-ct-error-condition-class . 85)
    (parse-module . 84)
    (load-syntax-module . 83)
    (compile-module . 82)
    (start . 81)
    (comparator: . 80)
    ("~a~a~a" . 79)
    ("Lib.~a/eul-appl.o" . 78)
    (ARCH . 77)
    (RANLIB . 76)
    (AR . 75)
    (CC . 74)
    (OSTYPE . 73)
    (VERSION . 72)
    ("EUL_LIBRARY_LOAD_PATH" . 71)
    ("EUL_ARCH" . 70)
    ("EUL_DIR" . 69)
    ("EUL_LOAD_PATH" . 68)
    ("/" . 67)
   )
   literals (
   )
))
