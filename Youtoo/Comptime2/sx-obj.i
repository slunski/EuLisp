;;; EuLisp system 'youtoo'
;;;   Interface file for module sx-obj

(definterface sx-obj
  (import (i-level1 sx-obj1 sx-obj2)
   syntax (_macros _sx-obj0)
   full-import (aux-table level1 telos mop-defcl mop-meth mop-gf mop-inspect mop-init mop-class mop-key mop-prim mop-access mop-alloc bit condition event thread dynamic let-cc callback string convert copy integer number fpi collect compare character float double1 double stream stream1 lock stream2 socket list format convert1 vector table1 table read handler random stream3 symbol boot boot1 i-level1 sx-obj1 sx-obj2)
   export (
    ((name . local-static-var-captured!) (pos . 20) (origin sx-obj2 . local-static-var-captured!) (inline (G001468 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <local-static-var>) (set-primitive-relative-ref) (nobble 2))))
    ((name . binding-local-name!) (pos . 19) (origin sx-obj1 . binding-local-name!) (inline (G00599 (stack-ref 1) (static-fpi-ref 6) (stack-ref 2) (binding-ref ? <binding>) (set-primitive-relative-ref) (nobble 2))))
    ((name . local-static-var-captured?) (pos . 33) (origin sx-obj2 . local-static-var-captured?) (inline (G001466 (static-ref0) (binding-ref ? <local-static-var>) (primitive-relative-ref))))
    ((name . binding-obj!) (pos . 54) (origin sx-obj1 . binding-obj!) (inline (G00583 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <binding>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-inlined-lambdas!) (pos . 53) (origin sx-obj1 . module-inlined-lambdas!) (inline (G00647 (stack-ref 1) (static-fpi-ref 11) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . appl-args?) (pos . 52) (origin sx-obj . appl-args?) (inline (G001998 (static-ref0) (binding-ref ? <appl>) (primitive-relative-ref))))
    ((name . module-inlined-setters!) (pos . 73) (origin sx-obj1 . module-inlined-setters!) (inline (G00643 (stack-ref 1) (static-fpi-ref 10) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-used-syntax-modules?) (pos . 71) (origin sx-obj1 . module-used-syntax-modules?) (inline (G00609 (static-ref2) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . <interface-binding>) (pos . 72) (origin sx-obj1 . <interface-binding>) (class . constant))
    ((name . setq-binding?) (pos . 19) (origin sx-obj2 . setq-binding?) (inline (G001478 (static-ref1) (binding-ref ? <setq>) (primitive-relative-ref))))
    ((name . <named-const>) (pos . 13) (origin sx-obj2 . <named-const>) (class . constant))
    ((name . named-const-binding!) (pos . 41) (origin sx-obj2 . named-const-binding!) (inline (G001488 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <named-const>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <var>) (pos . 28) (origin sx-obj2 . <var>) (class . constant))
    ((name . fun-has-unknown-appls!) (pos . 51) (origin sx-obj . fun-has-unknown-appls!) (inline (G001956 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <fun>) (set-primitive-relative-ref) (nobble 2))))
    ((name . appl-fun?) (pos . 34) (origin sx-obj . appl-fun?) (inline (G002002 (static-ref1) (binding-ref ? <appl>) (primitive-relative-ref))))
    ((name . binding-obj?) (pos . 18) (origin sx-obj1 . binding-obj?) (inline (G00581 (static-ref2) (binding-ref ? <binding>) (primitive-relative-ref))))
    ((name . <call-next-method>) (pos . 24) (origin sx-obj . <call-next-method>) (class . constant))
    ((name . module-binding-vector-size?) (pos . 17) (origin sx-obj1 . module-binding-vector-size?) (inline (G00673 (static-fpi-ref 18) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . syntax-obj?) (pos . 70) (origin sx-obj1 . syntax-obj?))
    ((name . fun-has-unknown-appls?) (pos . 20) (origin sx-obj . fun-has-unknown-appls?) (inline (G001954 (static-ref0) (binding-ref ? <fun>) (primitive-relative-ref))))
    ((name . fun-appls?) (pos . 45) (origin sx-obj . fun-appls?) (inline (G001958 (static-ref1) (binding-ref ? <fun>) (primitive-relative-ref))))
    ((name . save-binding-local-name?) (pos . 13) (origin sx-obj . save-binding-local-name?))
    ((name . binding-info?) (pos . 33) (origin sx-obj1 . binding-info?) (inline (G00573 (static-ref0) (binding-ref ? <binding>) (primitive-relative-ref))))
    ((name . fun?) (pos . 50) (origin sx-obj . fun?))
    ((name . module-top-level-forms?) (pos . 52) (origin sx-obj1 . module-top-level-forms?) (inline (G00625 (static-fpi-ref 6) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . <appl>) (pos . 19) (origin sx-obj . <appl>) (class . constant))
    ((name . binding-immutable?) (pos . 51) (origin sx-obj1 . binding-immutable?) (inline (G00589 (static-fpi-ref 4) (binding-ref ? <binding>) (primitive-relative-ref))))
    ((name . module-c-module-name!) (pos . 16) (origin sx-obj1 . module-c-module-name!) (inline (G00679 (stack-ref 1) (static-fpi-ref 19) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . var-value?) (pos . 39) (origin sx-obj2 . var-value?) (inline (G001454 (static-ref1) (binding-ref ? <var>) (primitive-relative-ref))))
    ((name . module-lexical-env?) (pos . 15) (origin sx-obj1 . module-lexical-env?) (inline (G00665 (static-fpi-ref 16) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . var?) (pos . 18) (origin sx-obj2 . var?))
    ((name . lambda-delegated-vars!) (pos . 36) (origin sx-obj . lambda-delegated-vars!) (inline (G001992 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <lambda>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-used-module-names?) (pos . 50) (origin sx-obj1 . module-used-module-names?) (inline (G00613 (static-fpi-ref 3) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . <literal-const>) (pos . 38) (origin sx-obj2 . <literal-const>) (class . constant))
    ((name . var-binding!) (pos . 12) (origin sx-obj2 . var-binding!) (inline (G001460 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <var>) (set-primitive-relative-ref) (nobble 2))))
    ((name . binding-module?) (pos . 49) (origin sx-obj1 . binding-module?) (inline (G00593 (static-fpi-ref 5) (binding-ref ? <binding>) (primitive-relative-ref))))
    ((name . binding-local-index!) (pos . 69) (origin sx-obj1 . binding-local-index!) (inline (G00579 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <binding>) (set-primitive-relative-ref) (nobble 2))))
    ((name . global-static-var?) (pos . 17) (origin sx-obj2 . global-static-var?))
    ((name . fun-args!) (pos . 49) (origin sx-obj . fun-args!) (inline (G001976 (stack-ref 1) (static-fpi-ref 5) (stack-ref 2) (binding-ref ? <fun>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <fun>) (pos . 8) (origin sx-obj . <fun>) (class . constant))
    ((name . module-external-env!) (pos . 32) (origin sx-obj1 . module-external-env!) (inline (G00663 (stack-ref 1) (static-fpi-ref 15) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . binding?) (pos . 14) (origin sx-obj1 . binding?))
    ((name . module-name!) (pos . 13) (origin sx-obj1 . module-name!) (inline (G00687 (stack-ref 1) (static-fpi-ref 21) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . syntax-def?) (pos . 68) (origin sx-obj1 . syntax-def?))
    ((name . module-binding-vector-size!) (pos . 48) (origin sx-obj1 . module-binding-vector-size!) (inline (G00675 (stack-ref 1) (static-fpi-ref 18) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-load-dir?) (pos . 12) (origin sx-obj1 . module-load-dir?) (inline (G00681 (static-fpi-ref 20) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . setq-obj!) (pos . 11) (origin sx-obj2 . setq-obj!) (inline (G001476 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <setq>) (set-primitive-relative-ref) (nobble 2))))
    ((name . var-name?) (pos . 6) (origin sx-obj2 . var-name?) (inline (G001462 (static-fpi-ref 3) (binding-ref ? <var>) (primitive-relative-ref))))
    ((name . if-else?) (pos . 12) (origin sx-obj . if-else?) (inline (G002006 (static-ref0) (binding-ref ? <if>) (primitive-relative-ref))))
    ((name . lambda-binding-refs!) (pos . 44) (origin sx-obj . lambda-binding-refs!) (inline (G001988 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <lambda>) (set-primitive-relative-ref) (nobble 2))))
    ((name . save-binding-module-name?) (pos . 33) (origin sx-obj . save-binding-module-name?))
    ((name . binding-immutable!) (pos . 67) (origin sx-obj1 . binding-immutable!) (inline (G00591 (stack-ref 1) (static-fpi-ref 4) (stack-ref 2) (binding-ref ? <binding>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <const>) (pos . 37) (origin sx-obj2 . <const>) (class . constant))
    ((name . fun-arity?) (pos . 32) (origin sx-obj . fun-arity?) (inline (G001970 (static-fpi-ref 4) (binding-ref ? <fun>) (primitive-relative-ref))))
    ((name . module-syntax-env!) (pos . 47) (origin sx-obj1 . module-syntax-env!) (inline (G00659 (stack-ref 1) (static-fpi-ref 14) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . const-value?) (pos . 10) (origin sx-obj2 . const-value?) (inline (G001482 (static-ref0) (binding-ref ? <const>) (primitive-relative-ref))))
    ((name . var-name!) (pos . 36) (origin sx-obj2 . var-name!) (inline (G001464 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <var>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-all-used-module-names!) (pos . 31) (origin sx-obj1 . module-all-used-module-names!) (inline (G00607 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <global-static-var>) (pos . 35) (origin sx-obj2 . <global-static-var>) (class . constant))
    ((name . if-then?) (pos . 31) (origin sx-obj . if-then?) (inline (G002010 (static-ref1) (binding-ref ? <if>) (primitive-relative-ref))))
    ((name . <syntax-def>) (pos . 30) (origin sx-obj1 . <syntax-def>) (class . constant))
    ((name . <local-static-var>) (pos . 27) (origin sx-obj2 . <local-static-var>) (class . constant))
    ((name . module-used-module-names!) (pos . 10) (origin sx-obj1 . module-used-module-names!) (inline (G00615 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . local-static-var-lambda!) (pos . 5) (origin sx-obj2 . local-static-var-lambda!) (inline (G001472 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <local-static-var>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module?) (pos . 45) (origin sx-obj1 . module?))
    ((name . module-all-used-module-names?) (pos . 46) (origin sx-obj1 . module-all-used-module-names?) (inline (G00605 (static-ref1) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . <lambda>) (pos . 30) (origin sx-obj . <lambda>) (class . constant))
    ((name . if-else!) (pos . 11) (origin sx-obj . if-else!) (inline (G002008 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <if>) (set-primitive-relative-ref) (nobble 2))))
    ((name . const-value!) (pos . 16) (origin sx-obj2 . const-value!) (inline (G001484 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <const>) (set-primitive-relative-ref) (nobble 2))))
    ((name . interface-binding?) (pos . 11) (origin sx-obj1 . interface-binding?))
    ((name . lambda-binding-refs?) (pos . 48) (origin sx-obj . lambda-binding-refs?) (inline (G001986 (static-ref0) (binding-ref ? <lambda>) (primitive-relative-ref))))
    ((name . module-inlined-lambdas?) (pos . 66) (origin sx-obj1 . module-inlined-lambdas?) (inline (G00645 (static-fpi-ref 11) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . appl?) (pos . 22) (origin sx-obj . appl?))
    ((name . appl-args!) (pos . 23) (origin sx-obj . appl-args!) (inline (G002000 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <appl>) (set-primitive-relative-ref) (nobble 2))))
    ((name . var-used!) (pos . 15) (origin sx-obj2 . var-used!) (inline (G001452 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <var>) (set-primitive-relative-ref) (nobble 2))))
    ((name . local-static-var?) (pos . 32) (origin sx-obj2 . local-static-var?))
    ((name . <if>) (pos . 29) (origin sx-obj . <if>) (class . constant))
    ((name . const?) (pos . 9) (origin sx-obj2 . const?))
    ((name . module-named-constants!) (pos . 65) (origin sx-obj1 . module-named-constants!) (inline (G00655 (stack-ref 1) (static-fpi-ref 13) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-lexical-env!) (pos . 8) (origin sx-obj1 . module-lexical-env!) (inline (G00667 (stack-ref 1) (static-fpi-ref 16) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . local-var?) (pos . 23) (origin sx-obj2 . local-var?))
    ((name . module-used-syntax-modules!) (pos . 9) (origin sx-obj1 . module-used-syntax-modules!) (inline (G00611 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <global-var>) (pos . 4) (origin sx-obj2 . <global-var>) (class . constant))
    ((name . local-name?) (pos . 28) (origin sx-obj . local-name?))
    ((name . module-interactive-lexical-env!) (pos . 44) (origin sx-obj1 . module-interactive-lexical-env!) (inline (G00603 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . fun-arity!) (pos . 18) (origin sx-obj . fun-arity!) (inline (G001972 (stack-ref 1) (static-fpi-ref 4) (stack-ref 2) (binding-ref ? <fun>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-load-dir!) (pos . 43) (origin sx-obj1 . module-load-dir!) (inline (G00683 (stack-ref 1) (static-fpi-ref 20) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . setq-obj?) (pos . 26) (origin sx-obj2 . setq-obj?) (inline (G001474 (static-ref0) (binding-ref ? <setq>) (primitive-relative-ref))))
    ((name . lambda?) (pos . 21) (origin sx-obj . lambda?))
    ((name . syntax-expr-encl-lambda?) (pos . 64) (origin sx-obj1 . syntax-expr-encl-lambda?) (inline (G00569 (static-ref0) (binding-ref ? <syntax-expr>) (primitive-relative-ref))))
    ((name . module-max-binding-vector-size?) (pos . 7) (origin sx-obj1 . module-max-binding-vector-size?) (inline (G00669 (static-fpi-ref 17) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . named-const-name!) (pos . 31) (origin sx-obj2 . named-const-name!) (inline (G001492 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <named-const>) (set-primitive-relative-ref) (nobble 2))))
    ((name . call-next-method?) (pos . 7) (origin sx-obj . call-next-method?))
    ((name . <binding>) (pos . 42) (origin sx-obj1 . <binding>) (class . constant))
    ((name . binding-info!) (pos . 41) (origin sx-obj1 . binding-info!) (inline (G00575 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <binding>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-c-module-name?) (pos . 6) (origin sx-obj1 . module-c-module-name?) (inline (G00677 (static-fpi-ref 19) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . module-top-level-forms!) (pos . 62) (origin sx-obj1 . module-top-level-forms!) (inline (G00627 (stack-ref 1) (static-fpi-ref 6) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-local-literals?) (pos . 63) (origin sx-obj1 . module-local-literals?) (inline (G00617 (static-fpi-ref 4) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . var-value!) (pos . 3) (origin sx-obj2 . var-value!) (inline (G001456 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <var>) (set-primitive-relative-ref) (nobble 2))))
    ((name . origin-name?) (pos . 43) (origin sx-obj . origin-name?))
    ((name . fun-range-and-domain?) (pos . 6) (origin sx-obj . fun-range-and-domain?) (inline (G001966 (static-fpi-ref 3) (binding-ref ? <fun>) (primitive-relative-ref))))
    ((name . lambda-inlined!) (pos . 42) (origin sx-obj . lambda-inlined!) (inline (G001996 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <lambda>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <opencoding>) (pos . 27) (origin sx-obj . <opencoding>) (class . constant))
    ((name . if-pred!) (pos . 17) (origin sx-obj . if-pred!) (inline (G002016 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <if>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-name?) (pos . 29) (origin sx-obj1 . module-name?) (inline (G00685 (static-fpi-ref 21) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . var-used?) (pos . 8) (origin sx-obj2 . var-used?) (inline (G001450 (static-ref0) (binding-ref ? <var>) (primitive-relative-ref))))
    ((name . binding!) (pos . 16) (origin sx-obj . binding!))
    ((name . fun-args?) (pos . 41) (origin sx-obj . fun-args?) (inline (G001974 (static-fpi-ref 5) (binding-ref ? <fun>) (primitive-relative-ref))))
    ((name . if?) (pos . 10) (origin sx-obj . if?))
    ((name . fun-appls!) (pos . 40) (origin sx-obj . fun-appls!) (inline (G001960 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <fun>) (set-primitive-relative-ref) (nobble 2))))
    ((name . binding-imported!) (pos . 61) (origin sx-obj1 . binding-imported!) (inline (G00587 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <binding>) (set-primitive-relative-ref) (nobble 2))))
    ((name . fun-body!) (pos . 39) (origin sx-obj . fun-body!) (inline (G001964 (stack-ref 1) (static-ref2) (stack-ref 2) (binding-ref ? <fun>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-local-literals!) (pos . 60) (origin sx-obj1 . module-local-literals!) (inline (G00619 (stack-ref 1) (static-fpi-ref 4) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <setq>) (pos . 34) (origin sx-obj2 . <setq>) (class . constant))
    ((name . opencoding?) (pos . 5) (origin sx-obj . opencoding?))
    ((name . if-then!) (pos . 15) (origin sx-obj . if-then!) (inline (G002012 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <if>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-external-env?) (pos . 40) (origin sx-obj1 . module-external-env?) (inline (G00661 (static-fpi-ref 15) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . setq?) (pos . 2) (origin sx-obj2 . setq?))
    ((name . <module>) (pos . 59) (origin sx-obj1 . <module>) (class . constant))
    ((name . <local-var>) (pos . 14) (origin sx-obj2 . <local-var>) (class . constant))
    ((name . module-lexical-binding-refs!) (pos . 39) (origin sx-obj1 . module-lexical-binding-refs!) (inline (G00623 (stack-ref 1) (static-fpi-ref 5) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-named-lambdas?) (pos . 5) (origin sx-obj1 . module-named-lambdas?) (inline (G00637 (static-fpi-ref 9) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . module-static-variables?) (pos . 28) (origin sx-obj1 . module-static-variables?) (inline (G00649 (static-fpi-ref 12) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . module-interactive-lexical-env?) (pos . 38) (origin sx-obj1 . module-interactive-lexical-env?) (inline (G00601 (static-ref0) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . module-foreign-functions!) (pos . 4) (origin sx-obj1 . module-foreign-functions!) (inline (G00631 (stack-ref 1) (static-fpi-ref 7) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <syntax-obj>) (pos . 27) (origin sx-obj1 . <syntax-obj>) (class . constant))
    ((name . module-inlined-setters?) (pos . 37) (origin sx-obj1 . module-inlined-setters?) (inline (G00641 (static-fpi-ref 10) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . literal-const?) (pos . 7) (origin sx-obj2 . literal-const?))
    ((name . lambda-inlined?) (pos . 9) (origin sx-obj . lambda-inlined?) (inline (G001994 (static-ref2) (binding-ref ? <lambda>) (primitive-relative-ref))))
    ((name . let*?) (pos . 14) (origin sx-obj . let*?))
    ((name . fun-range-and-domain!) (pos . 4) (origin sx-obj . fun-range-and-domain!) (inline (G001968 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <fun>) (set-primitive-relative-ref) (nobble 2))))
    ((name . appl-fun!) (pos . 38) (origin sx-obj . appl-fun!) (inline (G002004 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <appl>) (set-primitive-relative-ref) (nobble 2))))
    ((name . if-pred?) (pos . 35) (origin sx-obj . if-pred?) (inline (G002014 (static-ref2) (binding-ref ? <if>) (primitive-relative-ref))))
    ((name . lambda-delegated-vars?) (pos . 26) (origin sx-obj . lambda-delegated-vars?) (inline (G001990 (static-ref1) (binding-ref ? <lambda>) (primitive-relative-ref))))
    ((name . local-static-var-lambda?) (pos . 22) (origin sx-obj2 . local-static-var-lambda?) (inline (G001470 (static-ref1) (binding-ref ? <local-static-var>) (primitive-relative-ref))))
    ((name . binding-imported?) (pos . 58) (origin sx-obj1 . binding-imported?) (inline (G00585 (static-fpi-ref 3) (binding-ref ? <binding>) (primitive-relative-ref))))
    ((name . fun-body?) (pos . 3) (origin sx-obj . fun-body?) (inline (G001962 (static-ref2) (binding-ref ? <fun>) (primitive-relative-ref))))
    ((name . module-syntax-env?) (pos . 23) (origin sx-obj1 . module-syntax-env?) (inline (G00657 (static-fpi-ref 14) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . module-anonymous-lambdas?) (pos . 25) (origin sx-obj1 . module-anonymous-lambdas?) (inline (G00633 (static-fpi-ref 8) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . module-named-constants?) (pos . 36) (origin sx-obj1 . module-named-constants?) (inline (G00653 (static-fpi-ref 13) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . syntax-expr-encl-lambda!) (pos . 26) (origin sx-obj1 . syntax-expr-encl-lambda!) (inline (G00571 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <syntax-expr>) (set-primitive-relative-ref) (nobble 2))))
    ((name . binding-module!) (pos . 56) (origin sx-obj1 . binding-module!) (inline (G00595 (stack-ref 1) (static-fpi-ref 5) (stack-ref 2) (binding-ref ? <binding>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-max-binding-vector-size!) (pos . 57) (origin sx-obj1 . module-max-binding-vector-size!) (inline (G00671 (stack-ref 1) (static-fpi-ref 17) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . named-const-name?) (pos . 30) (origin sx-obj2 . named-const-name?) (inline (G001490 (static-ref1) (binding-ref ? <named-const>) (primitive-relative-ref))))
    ((name . named-const-binding?) (pos . 21) (origin sx-obj2 . named-const-binding?) (inline (G001486 (static-ref0) (binding-ref ? <named-const>) (primitive-relative-ref))))
    ((name . global-var?) (pos . 25) (origin sx-obj2 . global-var?))
    ((name . setq-binding!) (pos . 24) (origin sx-obj2 . setq-binding!) (inline (G001480 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <setq>) (set-primitive-relative-ref) (nobble 2))))
    ((name . fun-binding?) (pos . 2) (origin sx-obj . fun-binding?) (inline (G001978 (static-fpi-ref 6) (binding-ref ? <fun>) (primitive-relative-ref))))
    ((name . fun-name!) (pos . 47) (origin sx-obj . fun-name!) (inline (G001984 (stack-ref 1) (static-fpi-ref 7) (stack-ref 2) (binding-ref ? <fun>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-anonymous-lambdas!) (pos . 35) (origin sx-obj1 . module-anonymous-lambdas!) (inline (G00635 (stack-ref 1) (static-fpi-ref 8) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . binding-local-index?) (pos . 24) (origin sx-obj1 . binding-local-index?) (inline (G00577 (static-ref1) (binding-ref ? <binding>) (primitive-relative-ref))))
    ((name . module-foreign-functions?) (pos . 34) (origin sx-obj1 . module-foreign-functions?) (inline (G00629 (static-fpi-ref 7) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . module-static-variables!) (pos . 22) (origin sx-obj1 . module-static-variables!) (inline (G00651 (stack-ref 1) (static-fpi-ref 12) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . syntax-expr?) (pos . 21) (origin sx-obj1 . syntax-expr?))
    ((name . fun-binding!) (pos . 46) (origin sx-obj . fun-binding!) (inline (G001980 (stack-ref 1) (static-fpi-ref 6) (stack-ref 2) (binding-ref ? <fun>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <syntax-expr>) (pos . 3) (origin sx-obj1 . <syntax-expr>) (class . constant))
    ((name . fun-name?) (pos . 37) (origin sx-obj . fun-name?) (inline (G001982 (static-fpi-ref 7) (binding-ref ? <fun>) (primitive-relative-ref))))
    ((name . <let*>) (pos . 25) (origin sx-obj . <let*>) (class . constant))
    ((name . named-const?) (pos . 29) (origin sx-obj2 . named-const?))
    ((name . module-named-lambdas!) (pos . 2) (origin sx-obj1 . module-named-lambdas!) (inline (G00639 (stack-ref 1) (static-fpi-ref 9) (stack-ref 2) (binding-ref ? <module>) (set-primitive-relative-ref) (nobble 2))))
    ((name . module-lexical-binding-refs?) (pos . 55) (origin sx-obj1 . module-lexical-binding-refs?) (inline (G00621 (static-fpi-ref 5) (binding-ref ? <module>) (primitive-relative-ref))))
    ((name . binding-local-name?) (pos . 20) (origin sx-obj1 . binding-local-name?) (inline (G00597 (static-fpi-ref 6) (binding-ref ? <binding>) (primitive-relative-ref))))
    ((name . var-binding?) (pos . 40) (origin sx-obj2 . var-binding?) (inline (G001458 (static-ref2) (binding-ref ? <var>) (primitive-relative-ref))))
   )
   local-literals (
    (top-level . 220)
    (fun-binding? . 219)
    (fun-body? . 218)
    (fun-range-and-domain! . 217)
    (fun-range-and-domain? . 216)
    (lambda-inlined? . 215)
    (if-else! . 214)
    (if-else? . 213)
    (save-binding-local-name? . 212)
    (if-then! . 211)
    (binding! . 210)
    (if-pred! . 209)
    (fun-arity! . 208)
    (fun-has-unknown-appls? . 207)
    (appl-args! . 206)
    (lambda-delegated-vars? . 205)
    (local-name? . 204)
    (if-then? . 203)
    (fun-arity? . 202)
    (save-binding-module-name? . 201)
    (appl-fun? . 200)
    (if-pred? . 199)
    (lambda-delegated-vars! . 198)
    (fun-name? . 197)
    (appl-fun! . 196)
    (fun-body! . 195)
    (fun-appls! . 194)
    (fun-args? . 193)
    (lambda-inlined! . 192)
    (origin-name? . 191)
    (lambda-binding-refs! . 190)
    (fun-appls? . 189)
    (fun-binding! . 188)
    (fun-name! . 187)
    (lambda-binding-refs? . 186)
    (fun-args! . 185)
    (fun-has-unknown-appls! . 184)
    (appl-args? . 183)
    (*actual-module* . 163)
    (|(method if?)| . 142)
    (|(method call-next-method?)| . 141)
    (|(method appl?)| . 140)
    (|(method let*?)| . 139)
    (|(method opencoding?)| . 138)
    (|(method lambda?)| . 137)
    (|(method fun?)| . 136)
    (if? . 135)
    (call-next-method? . 134)
    (appl? . 133)
    (let*? . 132)
    (opencoding? . 131)
    (lambda? . 130)
    (fun? . 129)
    ((else: then: pred:) . 128)
    (if . 127)
    (else: . 126)
    (else . 125)
    (then: . 124)
    (then . 123)
    (pred: . 122)
    (pred . 121)
    (call-next-method . 120)
    ((args: fun:) . 119)
    (appl . 118)
    (fun: . 117)
    (let* . 116)
    (opencoding . 115)
    ((binding-refs: delegated-vars: inlined:) . 114)
    (lambda . 113)
    (binding-refs: . 112)
    (binding-refs . 111)
    (delegated-vars: . 110)
    (delegated-vars . 109)
    (inlined: . 108)
    (inlined . 107)
    ((has-unknown-appls: appls: body: range-and-domain: arity: args: binding: name:) . 106)
    (direct-keywords: . 105)
    (direct-slots: . 104)
    (direct-superclasses: . 103)
    (fun . 102)
    (has-unknown-appls: . 101)
    (has-unknown-appls . 100)
    (appls: . 99)
    (appls . 98)
    (body: . 97)
    (body . 96)
    (range-and-domain: . 95)
    (range-and-domain . 94)
    (arity: . 93)
    (arity . 92)
    (args: . 91)
    (args . 90)
    (binding: . 89)
    (binding . 88)
    (keyword: . 87)
    (anonymous . 86)
    (default: . 85)
    (name . 84)
    (name: . 83)
   )
   literals (
   )
))
