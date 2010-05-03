;;; EuLisp system 'youtoo'
;;;   Interface file for module cg-gen

(definterface cg-gen
  (import (i-all cg-state cg-stack sx-obj sx-node p-env an-side)
   syntax (_macros _i-aux0)
   full-import (i-error i-notify i-param i-level1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level1 aux-table i-all cg-state sx-obj sx-obj1 sx-obj2 cg-stack p-env i-ffi sx-node an-side)
   export (
    ((name . encode) (pos . 9) (origin cg-gen . encode))
    ((name . interactive-encode) (pos . 18) (origin cg-gen . interactive-encode))
   )
   local-literals (
    (top-level . 218)
    (binding-access-params . 217)
    (encode-lambda-display . 216)
    (set-inline-binding-info . 215)
    (add-inline-binding-info . 214)
    (clear-stack . 213)
    (add-asm . 212)
    (add-asm-set-and-get-binding . 211)
    (add-asm-get-binding . 210)
    (binding-read-instr . 209)
    (interactive-encode-top-lexical-bindings . 208)
    (encode-let . 207)
    (stack-to-display . 206)
    (add-asm-set-binding . 205)
    (encode-args . 204)
    (interactive-encode . 203)
    (encode-return . 202)
    (encode-top-lexical-bindings . 201)
    (pre-encode-inlined-lambda . 200)
    (encode-top-lexical-binding . 199)
    (pre-encode-inlined-setter . 198)
    (encode-check-arguments . 197)
    (add-asms . 196)
    (binding-write-instr . 195)
    (gensym-module . 194)
    ("~a~a" . 192)
    (set-stack-ref . 190)
    (set-binding-ref . 189)
    ((tail-call-operator tail-call-next-method) . 187)
    ((label branch branch-nil branch-true) . 185)
    (branch-true . 184)
    (check-arguments . 182)
    (check-arguments2 . 181)
    (check-arguments1 . 180)
    (check-arguments0 . 179)
    (check-arguments-1 . 178)
    (check-arguments-2 . 177)
    ("new inlined setter info: ~a" . 175)
    (setter . 174)
    ("  Pre-encode inlined setter ~a" . 173)
    ("  Code for module binding ~a:" . 171)
    ("  Pre-encode inlined lambda ~a" . 169)
    (return . 164)
    ("  Code for ~a's top-level forms:" . 162)
    ("  Encoding module ~a ..." . 161)
    (|(method G002897)| . 160)
    ("code generation error" . 158)
    ("compile time error condition: " . 157)
    (set-display-ref . 148)
    (stack-ref . 141)
    (display-ref . 140)
    (noop . 139)
    (binding-ref . 138)
    (value: . 136)
    (value . 135)
    (constant . 134)
    (set-and-get-binding-ref . 132)
    ("error in code generation" . 130)
    (asm: . 126)
    (handle: . 125)
    ("  Set inlined binding info of ~a" . 123)
    (alloc . 120)
    ("    Captured delegated vars ~a" . 119)
    ("    Captured local vars ~a" . 118)
    ("can't generate code for dummy binding" . 115)
    ("binding-access-params: unknown obj type ~a" . 114)
    (|(method encode-literal)| . 112)
    (|(method encode)| . 111)
    (encode-literal . 110)
    (encode . 108)
    ("  Encoding module ~a ..." . 107)
    (*actual-module* . 106)
    (|(method G003126)| . 105)
    (ct-error-value: . 103)
    ("code generation error" . 102)
    ("compile time error condition: " . 101)
    ("  Code for ~a's top-level forms:" . 98)
    (static-ref-t . 94)
    (static-ref-nil . 92)
    (static-character-ref . 90)
    (static-fpi-ref . 88)
    (static-fpi-byte-ref . 87)
    (static-ref-1 . 86)
    (static-ref2 . 85)
    (static-ref1 . 84)
    (static-ref0 . 83)
    (label . 78)
    (branch . 77)
    (branch-nil . 76)
    ("    Gen code for if" . 75)
    (make-lambda . 73)
    (code-vector-ref . 72)
    (static-ref . 71)
    ("    Gen code for lambda naming" . 70)
    ("    Gen code for lambda body" . 69)
    ("    Gen code for lambda display" . 68)
    ("    Args are on stack ~a" . 67)
    ("  Gen code for <lambda>" . 66)
    ("  Gen code for ~a" . 62)
    ("  Gen code for let body ~a" . 60)
    ((pop1) . 59)
    (pop1 . 58)
    (*clean-ups* . 57)
    ("bad call to ~a" . 54)
    ("call to general binding" . 53)
    (nobble . 52)
    (call-foreign-function . 51)
    ("argument mismatch at foreign function ~a" . 50)
    (ff . 49)
    ("argument mismatch at opencoding ~a" . 48)
    (arity . 47)
    (opencoding . 46)
    ("call inlined binding ~a" . 45)
    (inline . 44)
    (class . 43)
    ("call binding ~a" . 42)
    ("call opencoded-lambda ~a" . 41)
    ("call let lambda ~a" . 40)
    (call-operator . 39)
    (tail-call-operator . 38)
    ("call init lambda ~a" . 37)
    ("  Gen code for <appl>" . 36)
    ("  Gen code for <opencoding>" . 34)
    (call-next-method . 32)
    (anonymous . 31)
    (tail-call-next-method . 30)
    (*in-tail-pos* . 29)
   )
   literals (
   )
))
