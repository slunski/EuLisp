;;; EuLisp system 'youtoo'
;;;   Interface file for module p-env

(definterface p-env
  (import (i-all sx-obj)
   syntax (_syntax-1)
   full-import (i-error i-notify i-param i-level-1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level-1 aux-table i-all sx-obj2 sx-obj1 sx-obj)
   export (
    ((name . set-lexical-binding) (pos . 5) (origin p-env . set-lexical-binding))
    ((name . get-syntax-binding) (pos . 10) (origin p-env . get-syntax-binding))
    ((name . loaded-modules) (pos . 6) (origin p-env . loaded-modules))
    ((name . set-external-binding) (pos . 11) (origin p-env . set-external-binding))
    ((name . set-syntax-binding) (pos . 15) (origin p-env . set-syntax-binding))
    ((name . find-syntax-module) (pos . 13) (origin p-env . find-syntax-module))
    ((name . get-module) (pos . 14) (origin p-env . get-module))
    ((name . get-syntax-module) (pos . 17) (origin p-env . get-syntax-module))
    ((name . new-syntax-module) (pos . 9) (origin p-env . new-syntax-module))
    ((name . find-module) (pos . 4) (origin p-env . find-module))
    ((name . loaded-syntax-modules) (pos . 2) (origin p-env . loaded-syntax-modules))
    ((name . get-lexical-binding) (pos . 7) (origin p-env . get-lexical-binding))
    ((name . add-local-static-bindings) (pos . 3) (origin p-env . add-local-static-bindings))
    ((name . new-module) (pos . 16) (origin p-env . new-module))
    ((name . get-external-binding) (pos . 19) (origin p-env . get-external-binding))
    ((name . get-local-static-binding) (pos . 18) (origin p-env . get-local-static-binding))
   )
   local-literals (
    (loaded-syntax-modules . 76)
    (add-local-static-bindings . 75)
    (find-module . 74)
    (set-lexical-binding . 73)
    (loaded-modules . 72)
    (get-lexical-binding . 71)
    (expand-hard-coded-level-1-binding . 70)
    (new-syntax-module . 69)
    (get-syntax-binding . 68)
    (set-external-binding . 67)
    (expand-interpreter-defined-syntax-binding . 66)
    (find-syntax-module . 65)
    (get-module . 64)
    (set-syntax-binding . 63)
    (new-module . 62)
    (get-syntax-module . 61)
    (get-local-static-binding . 60)
    (get-external-binding . 59)
    ("no actual module specified" . 52)
    ("new syntax binding ~a shadows lexical binding ~a" . 51)
    ("new syntax binding ~a shadows syntax binding ~a" . 50)
    ("no actual module specified" . 45)
    ("conflicting exported bindings ~a and ~a" . 44)
    ("reloading of syntax module ~a" . 40)
    (local-index: . 38)
    (imported: . 37)
    (obj: . 36)
    (module: . 35)
    (local-name: . 34)
    ("no actual module" . 29)
    ("new lexical binding ~a is shadowed by syntax binding ~a" . 28)
    ("new lexical binding ~a shadows lexical binding ~a" . 27)
    (*actual-module* . 26)
    (anonymous . 23)
   )
   literals (
   )
))
