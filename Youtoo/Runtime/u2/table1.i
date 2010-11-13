;;; EuLisp system 'youtoo'
;;;   Interface file for module table1

(definterface table1
  (import (telos condition convert copy collect compare list format fpi string vector)
   syntax (_telos0)
   full-import ()
   export (
    ((name . hash-table?) (pos . 8) (origin table1 . hash-table?))
    ((name . *min-table-entries*) (pos . 17) (origin table1 . *min-table-entries*) (class . constant) (value 16))
    ((name . table-keys) (pos . 2) (origin table1 . table-keys))
    ((name . table-size) (pos . 5) (origin table1 . table-size) (inline (G004586 (static-ref1) (binding-ref ? <table>) (primitive-relative-ref))) (setter (G004598 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <table>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <hash-table>) (pos . 13) (origin table1 . <hash-table>) (class . constant))
    ((name . table-threshold) (pos . 16) (origin table1 . table-threshold) (inline (G004584 (static-ref0) (binding-ref ? <table>) (primitive-relative-ref))) (setter (G004596 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <table>) (set-primitive-relative-ref) (nobble 2))))
    ((name . table-entries) (pos . 19) (origin table1 . table-entries) (inline (G004590 (static-fpi-ref 3) (binding-ref ? <table>) (primitive-relative-ref))) (setter (G004600 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (binding-ref ? <table>) (set-primitive-relative-ref) (nobble 2))))
    ((name . table-comparator) (pos . 12) (origin table1 . table-comparator) (inline (G004594 (static-ref1) (binding-ref ? <hash-table>) (primitive-relative-ref))) (setter (G004604 (stack-ref 1) (static-ref1) (stack-ref 2) (binding-ref ? <hash-table>) (set-primitive-relative-ref) (nobble 2))))
    ((name . table?) (pos . 7) (origin table1 . table?))
    ((name . *table-fill-factor*) (pos . 11) (origin table1 . *table-fill-factor*) (class . constant) (value 2))
    ((name . table-hash-function) (pos . 15) (origin table1 . table-hash-function) (inline (G004592 (static-ref0) (binding-ref ? <hash-table>) (primitive-relative-ref))) (setter (G004602 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <hash-table>) (set-primitive-relative-ref) (nobble 2))))
    ((name . table-fill-value) (pos . 20) (origin table1 . table-fill-value) (inline (G004588 (static-ref2) (binding-ref ? <table>) (primitive-relative-ref))))
    ((name . table-values) (pos . 9) (origin table1 . table-values))
    ((name . simple-hash-table?) (pos . 6) (origin table1 . simple-hash-table?))
    ((name . <table>) (pos . 3) (origin table1 . <table>) (class . constant))
    ((name . <simple-hash-table>) (pos . 18) (origin table1 . <simple-hash-table>) (class . constant))
    ((name . clear-table) (pos . 14) (origin table1 . clear-table))
   )
   local-literals (
    (top-level . 104)
    (table-size . 103)
    (table-comparator . 102)
    (table-hash-function . 101)
    (table-threshold . 100)
    (table-entries . 99)
    (table-fill-value . 98)
    (|(method table-keys)| . 90)
    (|(method table-values)| . 89)
    (|(method size)| . 88)
    (|(method reset)| . 87)
    (|(method clear-table)| . 86)
    (|(method initialize)| . 85)
    (|(method hash-table?)| . 84)
    (|(setter table-comparator)| . 83)
    (|(setter table-hash-function)| . 82)
    (|(method simple-hash-table?)| . 81)
    (simple-hash-table . 80)
    (|(method table?)| . 79)
    (|(setter table-entries)| . 78)
    (|(setter table-size)| . 77)
    (|(setter table-threshold)| . 76)
    (table-keys . 75)
    (table-values . 74)
    (clear-table . 73)
    (hash-table? . 72)
    (simple-hash-table? . 71)
    (table? . 70)
    ((hash-function: comparator:) . 69)
    (hash-table . 68)
    (hash-function . 67)
    (comparator . 66)
    ((fill-value:) . 65)
    (direct-keywords: . 64)
    (direct-slots: . 63)
    (direct-superclasses: . 62)
    (table . 61)
    (threshold . 60)
    (default: . 59)
    (size . 58)
    (fill-value: . 57)
    (keyword: . 56)
    (fill-value . 55)
    (entries . 54)
    (name: . 53)
    ("table initialization of ~a without hash function" . 35)
    ((comparator: hash-function:) . 34)
    (hash-function: . 33)
    (comparator: . 32)
    (anonymous . 25)
    ("keys of table ~a not accessable" . 22)
   )
   literals (
   )
))
