;;; EuLisp system 'youtoo'
;;;   Interface file for module ex-expr

(definterface ex-expr
  (import (i-all p-env sx-node sx-obj ex-import ex-syntax ex-direct cg-dld)
   syntax (_macros _i-aux0 _ex-aux0)
   full-import (i-error i-notify i-param i-level-1 boot1 boot symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl telos level-1 aux-table i-all sx-obj sx-obj1 sx-obj2 p-env i-ffi sx-node cg-interf i-modify ex-import ex-syntax ex-expose ex-direct cg-dld)
   export (
    ((name . filter-vars) (pos . 6) (origin ex-expr . filter-vars))
    ((name . expand-expr) (pos . 30) (origin ex-expr . expand-expr))
    ((name . complete-lambda-node) (pos . 29) (origin ex-expr . complete-lambda-node))
    ((name . filter-init-forms) (pos . 33) (origin ex-expr . filter-init-forms))
    ((name . macroexpand) (pos . 10) (origin ex-expr . macroexpand))
    ((name . protect-tilde) (pos . 16) (origin ex-expr . protect-tilde))
    ((name . *nil*) (pos . 2) (origin ex-expr . *nil*) (class . constant))
    ((name . expand-exprs) (pos . 15) (origin ex-expr . expand-exprs))
    ((name . protect-newline) (pos . 36) (origin ex-expr . protect-newline))
    ((name . protect-backslash) (pos . 3) (origin ex-expr . protect-backslash))
    ((name . protect-doublequote) (pos . 28) (origin ex-expr . protect-doublequote))
    ((name . get-macro-expander) (pos . 32) (origin ex-expr . get-macro-expander))
   )
   local-literals (
    (top-level . 339)
    (protect-backslash . 338)
    (check-appl-arity . 337)
    (box-binding . 336)
    (filter-vars . 335)
    (labelssetq . 334)
    (get-appl-expander . 333)
    (expand-local-static-vars . 332)
    (macroexpand . 331)
    (labelsvar . 330)
    (expand-local-static-vars* . 329)
    (get-id-expander . 328)
    (default-appl-expander . 327)
    (expand-exprs . 326)
    (protect-tilde . 325)
    (check-id-binding . 324)
    (expand-fun-form . 323)
    (get-keyword-node . 322)
    (unfold-rest-arg-appl . 321)
    (lift-appl . 320)
    (letfunsvar . 319)
    (lambda-rest-args? . 318)
    (lift-let*-vars . 317)
    (expr-expander . 316)
    (letfunssetq . 315)
    (protect-doublequote . 314)
    (complete-lambda-node . 313)
    (expand-expr . 312)
    (compute-range-and-domain . 311)
    (get-macro-expander . 310)
    (filter-init-forms . 309)
    (dummy-args . 308)
    (rest-args? . 307)
    (protect-newline . 306)
    (get-t-node . 305)
    (install-expr-expander . 304)
    ("redefinition of expander ~a" . 302)
    ("\n" . 299)
    ("\n" . 298)
    ("\n" . 297)
    ("\n" . 296)
    ("RESULT: ~a" . 288)
    (execute . 287)
    ("APPLY MACRO: ~a" . 286)
    (|(method G005898)| . 285)
    ("bad macro expansion of ~a" . 283)
    ("compile time error condition: " . 282)
    ("\"" . 274)
    ("\"" . 273)
    ("\"" . 272)
    ("\"" . 271)
    ("    Expanding ~a" . 268)
    (fpi-binary . 259)
    (setter . 255)
    ("no lexical binding ~a available" . 254)
    (ff . 252)
    (opencoding . 251)
    ("~~" . 249)
    ("~~" . 248)
    ("~~" . 247)
    ("~~" . 246)
    (args: . 242)
    (fun: . 241)
    ("no lexical binding ~a available" . 237)
    ("macroexpand: cannot find syntax binding ~a" . 232)
    ("macroexpand cannot find dynamic binding ~a for syntax binding ~a" . 231)
    (fpi-zero? . 226)
    (binary= . 225)
    (binary- . 224)
    (fpi-binary- . 223)
    (dec . 222)
    (inc . 221)
    (binary+ . 220)
    (boot1 . 219)
    (fpi-binary+ . 218)
    (<= . 217)
    (fpi-binary= . 216)
    (>= . 215)
    (< . 214)
    (= . 213)
    (fpi-binary< . 212)
    (compare . 211)
    (> . 210)
    (number . 209)
    ((+ - * / %) . 208)
    (% . 207)
    (/ . 206)
    (* . 205)
    (- . 204)
    (+ . 203)
    ("  wrapping lambda in operator position: ~s" . 202)
    (arity . 197)
    ("box binding ~a" . 196)
    ("too few arguments calling ~a" . 194)
    ("too many arguments calling ~a" . 193)
    ("too few arguments calling ~a" . 192)
    ("\\" . 190)
    ("\\" . 189)
    ("\\" . 188)
    ("\\" . 187)
    (letfuns . 185)
    (opencoded-lambda . 184)
    (named-lambda . 183)
    (lambda . 182)
    (|(method lift-setq)| . 181)
    (setq . 180)
    (|(method lift-if)| . 179)
    (call-next-method . 178)
    (|(method check-appl)| . 177)
    (lift-setq . 176)
    (lift-if . 175)
    (check-appl . 174)
    ("no applicable object ~a" . 172)
    ("macro binding ~a should be in syntax import" . 171)
    (*encl-lambda* . 164)
    ("missing else branch in (if ~a ...)" . 161)
    ("bad if syntax (if ~a ...)" . 160)
    (|(method G006368)| . 159)
    ("bad if syntax ~a" . 157)
    ("compile time error condition: " . 156)
    (else: . 153)
    (then: . 152)
    (pred: . 151)
    (if . 146)
    (value: . 141)
    (|(method G006459)| . 140)
    ("bad quote syntax" . 138)
    ("compile time error condition: " . 137)
    (quote . 134)
    (|(method G006481)| . 133)
    ("bad quasiquote syntax" . 131)
    ("compile time error condition: " . 130)
    (append . 127)
    (unquote-splicing . 126)
    (cons . 125)
    (unquote . 124)
    (quasiquote . 123)
    ("immutable binding ~a cannot be modified" . 121)
    ("no binding ~a available" . 120)
    (*clean-ups* . 119)
    (tail-pos? . 118)
    (|(method G006529)| . 117)
    ("bad setq syntax" . 115)
    ("compile time error condition: " . 114)
    ("body ~a not a list" . 103)
    (|(method G006615)| . 102)
    ("bad lambda syntax" . 100)
    ("compile time error condition: " . 99)
    ("body ~a not a list" . 96)
    ("~a" . 95)
    (|(method G006642)| . 94)
    ("bad named lambda syntax" . 92)
    ("compile time error condition: " . 91)
    ("body ~a not a list" . 88)
    (|(method G006674)| . 87)
    ("bad lambda syntax" . 85)
    ("compile time error condition: " . 84)
    ("body ~a not a list" . 81)
    (|(method G006701)| . 80)
    ("bad opencoded-lambda syntax" . 78)
    ("compile time error condition: " . 77)
    (labels . 74)
    (inlined-lambda . 73)
    (let* . 72)
    (|(method G006730)| . 71)
    ("bad let syntax" . 69)
    ("compile time error condition: " . 68)
    ("" . 64)
    (progn . 63)
    (|(method G006778)| . 62)
    ("bad let* syntax" . 60)
    ("compile time error condition: " . 59)
    (|(method G006815)| . 56)
    ("bad labels syntax" . 54)
    ("compile time error condition: " . 53)
    (let . 50)
    (|(method G006845)| . 49)
    (anonymous . 48)
    (ct-error-value: . 46)
    ("bad letfuns syntax" . 45)
    ("compile time error condition: " . 44)
   )
   literals (
   )
))
