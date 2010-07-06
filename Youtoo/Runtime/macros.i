;;; EuLisp system 'youtoo'
;;;   Interface file for module macros

(definterface macros
  (import (level1 telos0 stream0)
   syntax (boot0)
   full-import (symbol stream3 random handler read table table1 vector convert1 format list socket stream2 lock stream1 stream double double1 float character compare collect fpi number integer copy convert string callback let-cc dynamic thread event condition bit mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos level1 mop-defcl0 mop-meth0 mop-gf0 boot0 telos0 stream0)
   export (
    ((name . defgeneric) (pos . 2) (origin mop-gf0 . defgeneric))
    ((name . dynamic-let) (pos . 11) (origin macros . dynamic-let))
    ((name . defmethod-sig) (pos . 8) (origin mop-meth0 . defmethod-sig))
    ((name . dynamic-setq) (pos . 15) (origin macros . dynamic-setq))
    ((name . defmethod-domain) (pos . 4) (origin mop-meth0 . defmethod-domain))
    ((name . match-let) (pos . 2) (origin stream0 . match-let))
    ((name . with-source) (pos . 5) (origin stream0 . with-source))
    ((name . butlast) (pos . 13) (origin macros . butlast))
    ((name . dynamic) (pos . 18) (origin macros . dynamic))
    ((name . time-execution) (pos . 12) (origin macros . time-execution))
    ((name . method-function-lambda) (pos . 6) (origin mop-meth0 . method-function-lambda))
    ((name . last) (pos . 5) (origin macros . last))
    ((name . return-from) (pos . 14) (origin macros . return-from))
    ((name . not) (pos . 9) (origin macros . not))
    ((name . defmethod-body) (pos . 7) (origin mop-meth0 . defmethod-body))
    ((name . get-global-register) (pos . 5) (origin boot0 . get-global-register))
    ((name . unless) (pos . 7) (origin boot0 . unless))
    ((name . set-global-register) (pos . 6) (origin boot0 . set-global-register))
    ((name . named-method-function-lambda) (pos . 10) (origin mop-meth0 . named-method-function-lambda))
    ((name . with-output-file) (pos . 3) (origin stream0 . with-output-file))
    ((name . block) (pos . 6) (origin macros . block))
    ((name . or) (pos . 8) (origin boot0 . or))
    ((name . case) (pos . 2) (origin macros . case))
    ((name . catch) (pos . 19) (origin macros . catch))
    ((name . throw) (pos . 17) (origin macros . throw))
    ((name . with-input-file) (pos . 8) (origin stream0 . with-input-file))
    ((name . with-handler) (pos . 3) (origin macros . with-handler))
    ((name . generic-lambda) (pos . 5) (origin mop-gf0 . generic-lambda))
    ((name . defmethod) (pos . 5) (origin mop-meth0 . defmethod))
    ((name . cond) (pos . 3) (origin boot0 . cond))
    ((name . method-lambda) (pos . 2) (origin mop-meth0 . method-lambda))
    ((name . defclass) (pos . 11) (origin mop-defcl0 . defclass))
    ((name . let/cc) (pos . 4) (origin macros . let/cc))
    ((name . defprimclass) (pos . 5) (origin mop-defcl0 . defprimclass))
    ((name . defmethod-args) (pos . 3) (origin mop-meth0 . defmethod-args))
    ((name . unwind-protect) (pos . 8) (origin macros . unwind-protect))
    ((name . with-input-file-of-path) (pos . 4) (origin stream0 . with-input-file-of-path))
    ((name . and) (pos . 4) (origin boot0 . and))
    ((name . when) (pos . 2) (origin boot0 . when))
    ((name . with-lock) (pos . 7) (origin stream0 . with-lock))
    ((name . with-sink) (pos . 6) (origin stream0 . with-sink))
    ((name . defcondition) (pos . 16) (origin macros . defcondition))
    ((name . defglobal) (pos . 7) (origin macros . defglobal))
    ((name . while) (pos . 10) (origin macros . while))
    ((name . defmethod-keywords) (pos . 9) (origin mop-meth0 . defmethod-keywords))
   )
   local-literals (
    (case . 106)
    (with-handler . 105)
    (last . 104)
    (block . 103)
    (defglobal . 102)
    (not . 101)
    (while . 100)
    (time-execution . 99)
    (butlast . 98)
    (return-from . 97)
    (dynamic-setq . 96)
    (defcondition . 95)
    (throw . 94)
    (catch . 93)
    (dynamic-let . 91)
    (defclass . 87)
    (<condition> . 86)
    (setter . 84)
    (dynamic-variable-ref . 83)
    (reverse-list . 80)
    (let* . 78)
    (sprint . 77)
    ("real: " . 76)
    ("
user: " . 75)
    ("
system: " . 74)
    (vector-ref . 73)
    (setq . 72)
    (map . 71)
    (/ . 70)
    (convert . 69)
    (ticks-per-second . 68)
    (<double-float> . 67)
    (binary- . 66)
    (x . 65)
    (y . 64)
    (cpu-time . 63)
    ("time" . 62)
    ("time" . 61)
    (unwind-protect . 59)
    (break . 56)
    (labels . 55)
    (when . 54)
    (cons . 51)
    (dynamic . 50)
    (lambda . 49)
    (pop-dynamic-variables . 48)
    (*clean-ups* . 47)
    (push-dynamic-variable . 45)
    (let/cc . 43)
    (list-drop . 41)
    (- . 40)
    (list-size . 39)
    (call/ep . 37)
    (named-lambda . 36)
    (call/ep-lambda . 35)
    (pop-error-handlers . 33)
    (progn . 32)
    (push-error-handler . 31)
    (let . 29)
    (cond . 28)
    (anonymous . 27)
    ("*** WARNING: missing else branch in (case ... ~a)" . 26)
    (member . 24)
    (null? . 23)
    (eql . 22)
    (quote . 21)
    (else . 20)
   )
   literals (
   )
))
