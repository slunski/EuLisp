;;; EuLisp system 'youtoo'
;;;   Interface file for module boot

(definterface boot
  (import (boot1)
   syntax (_boot0)
   full-import (boot1)
   export (
    ((name . stdout) (pos) (origin boot1 . stdout) (class . constant) (value 1))
    ((name . print) (pos . 3) (origin boot1 . print))
    ((name . objectp) (pos . 47) (origin boot1 . objectp))
    ((name . equal) (pos . 46) (origin boot1 . equal))
    ((name . *backtrace-nframes*) (pos . 31) (origin boot . *backtrace-nframes*))
    ((name . list-remove-duplicates) (pos . 30) (origin boot . list-remove-duplicates))
    ((name . simple-generic-function?) (pos . 45) (origin boot1 . simple-generic-function?) (inline (G0053 (gfp))))
    ((name . write-object) (pos) (origin boot1 . write-object) (class . opencoding) (arity . 2) (opencoding (write-object)))
    ((name . member1-list) (pos . 29) (origin boot . member1-list) (inline (G00140 (static-ref-nil) (memq))))
    ((name . init-list-ref) (pos . 28) (origin boot . init-list-ref))
    ((name . *absent*) (pos . 44) (origin boot1 . *absent*) (class . constant))
    ((name . dec) (pos . 43) (origin boot1 . dec) (inline (G0078 (fpi-dec))))
    ((name . anyp1-list) (pos . 27) (origin boot . anyp1-list))
    ((name . <) (pos . 40) (origin boot1 . <) (inline (G0072 (fpi-lt))))
    ((name . symbolp) (pos . 41) (origin boot1 . symbolp) (inline (G0045 (symbolp))))
    ((name . eql) (pos . 42) (origin boot1 . eql) (inline (G0037 (eql))))
    ((name . listify-env-string) (pos . 25) (origin boot . listify-env-string))
    ((name . setter) (pos . 39) (origin boot1 . setter))
    ((name . mod) (pos . 38) (origin boot1 . mod) (inline (G0070 (fpi-remainder))))
    ((name . make-vector) (pos . 37) (origin boot1 . make-vector))
    ((name . reverse-list) (pos . 24) (origin boot . reverse-list))
    ((name . prin) (pos . 36) (origin boot1 . prin))
    ((name . atom?) (pos . 35) (origin boot1 . atom?) (inline (G0057 (consp) (null))))
    ((name . error) (pos . 22) (origin boot . error))
    ((name . *error*) (pos . 23) (origin boot . *error*))
    ((name . cdr) (pos . 34) (origin boot1 . cdr) (inline (G0084 (cdr))) (setter (G0098 (set-cdr))))
    ((name . make-vector1) (pos . 54) (origin boot1 . make-vector1) (class . ff) (arity . 2) (ff (0 8) 6 (eul_make_vector . ff_stub_eul_make_vector251)))
    ((name . list-ref) (pos . 21) (origin boot . list-ref))
    ((name . member-list) (pos . 20) (origin boot . member-list))
    ((name . warning) (pos . 19) (origin boot . warning))
    ((name . anyp2-list) (pos . 18) (origin boot . anyp2-list))
    ((name . stringp) (pos . 33) (origin boot1 . stringp) (inline (G0043 (stringp))))
    ((name . *) (pos . 32) (origin boot1 . *) (inline (G0064 (fpi-product))))
    ((name . append!) (pos . 17) (origin boot . append!))
    ((name . %) (pos . 31) (origin boot1 . %) (inline (G0068 (fpi-remainder))))
    ((name . int-zerop) (pos . 30) (origin boot1 . int-zerop) (inline (G0080 (fpi-zerop))))
    ((name . assoc-list-ref) (pos . 16) (origin boot . assoc-list-ref))
    ((name . map1-list) (pos . 15) (origin boot . map1-list))
    ((name . stderr) (pos) (origin boot1 . stderr) (class . constant) (value 2))
    ((name . *stack-nvalues*) (pos . 14) (origin boot . *stack-nvalues*))
    ((name . make-symbol) (pos . 52) (origin boot1 . make-symbol) (class . ff) (arity . 1) (ff (3) 6 (eul_make_symbol . ff_stub_eul_make_symbol249)))
    ((name . member1-string) (pos . 51) (origin boot1 . member1-string) (class . ff) (arity . 2) (ff (1 3) 6 (eul_str_member1 . ff_stub_eul_str_member1248)))
    ((name . int-as-character) (pos) (origin boot1 . int-as-character) (class . opencoding) (arity . 1) (opencoding (fpi-as-character)))
    ((name . tailstring) (pos . 50) (origin boot1 . tailstring) (class . ff) (arity . 2) (ff (3 0) 3 (eul_tailstr . ff_stub_eul_tailstr247)))
    ((name . intp) (pos . 29) (origin boot1 . intp) (inline (G0049 (fpip))))
    ((name . car) (pos . 28) (origin boot1 . car) (inline (G0082 (car))) (setter (G0096 (set-car))))
    ((name . *argc*) (pos . 27) (origin boot1 . *argc*) (class . constant))
    ((name . backtrace) (pos . 13) (origin boot . backtrace))
    ((name . time-start) (pos . 26) (origin boot1 . time-start))
    ((name . *argv*) (pos . 25) (origin boot1 . *argv*) (class . constant))
    ((name . list) (pos . 23) (origin boot1 . list))
    ((name . characterp) (pos . 24) (origin boot1 . characterp) (inline (G0041 (characterp))))
    ((name . character-as-int) (pos) (origin boot1 . character-as-int) (class . opencoding) (arity . 1) (opencoding (character-as-fpi)))
    ((name . time-stop) (pos . 22) (origin boot1 . time-stop))
    ((name . append) (pos . 11) (origin boot . append))
    ((name . inc) (pos . 20) (origin boot1 . inc) (inline (G0076 (fpi-inc))))
    ((name . eq) (pos . 21) (origin boot1 . eq) (inline (G0035 (eq))))
    ((name . exit) (pos . 19) (origin boot1 . exit))
    ((name . getenv) (pos . 18) (origin boot1 . getenv))
    ((name . mapcan) (pos . 10) (origin boot . mapcan))
    ((name . apply) (pos . 9) (origin boot . apply))
    ((name . format1) (pos . 17) (origin boot1 . format1))
    ((name . string-size) (pos . 16) (origin boot1 . string-size) (inline (G0088 (primitive-size))))
    ((name . substring) (pos . 49) (origin boot1 . substring) (class . ff) (arity . 3) (ff (3 0 0) 3 (eul_substr . ff_stub_eul_substr246)))
    ((name . list-size) (pos . 8) (origin boot . list-size))
    ((name . -) (pos . 15) (origin boot1 . -) (inline (G0062 (fpi-difference))))
    ((name . +) (pos . 14) (origin boot1 . +) (inline (G0060 (fpi-sum))))
    ((name . make-keyword) (pos . 53) (origin boot1 . make-keyword) (class . ff) (arity . 1) (ff (3) 6 (eul_make_keyword . ff_stub_eul_make_keyword250)))
    ((name . stack-values) (pos . 7) (origin boot . stack-values))
    ((name . listp) (pos . 13) (origin boot1 . listp) (inline (G0055 (listp))))
    ((name . *warning*) (pos . 6) (origin boot . *warning*))
    ((name . consp) (pos . 12) (origin boot1 . consp) (inline (G0047 (consp))))
    ((name . list-remove) (pos . 5) (origin boot . list-remove))
    ((name . /) (pos . 11) (origin boot1 . /) (inline (G0066 (fpi-quotient))))
    ((name . =) (pos . 10) (origin boot1 . =) (inline (G0074 (fpi-equal))))
    ((name . null?) (pos . 9) (origin boot1 . null?) (inline (G0039 (null))))
    ((name . string-ref) (pos . 8) (origin boot1 . string-ref) (inline (G0090 (string-ref))) (setter (G00100 (set-string-ref))))
    ((name . vector-size) (pos . 7) (origin boot1 . vector-size) (inline (G0092 (primitive-size))))
    ((name . vector-ref) (pos . 6) (origin boot1 . vector-ref) (inline (G0094 (primitive-ref))) (setter (G00102 (set-primitive-ref))))
    ((name . getchar) (pos . 32) (origin boot . getchar) (class . ff) (arity . 0) (ff () 1 (getchar . ff_stub_getchar415)))
    ((name . do1-list) (pos . 4) (origin boot . do1-list))
    ((name . sort-list) (pos . 3) (origin boot . sort-list))
    ((name . system) (pos . 48) (origin boot1 . system))
    ((name . simple-function?) (pos . 4) (origin boot1 . simple-function?) (inline (G0051 (lambdap))))
    ((name . cons) (pos . 2) (origin boot1 . cons) (inline (G0086 (cons))))
   )
   local-literals (
    (top-level . 116)
    (show-frames . 115)
    (sort-list . 114)
    (do1-list . 113)
    (list-remove . 112)
    (stack-values . 111)
    (list-size . 110)
    (apply . 109)
    (mapcan . 108)
    (append . 107)
    (show-stack-values . 106)
    (backtrace . 105)
    (map1-list . 104)
    (assoc-list-ref . 103)
    (append! . 102)
    (anyp2-list . 101)
    (warning . 100)
    (member-list . 99)
    (list-ref . 98)
    (error . 97)
    (reverse-list . 96)
    (listify-env-string . 95)
    (list-remove1 . 94)
    (anyp1-list . 93)
    (init-list-ref . 92)
    (member1-list . 91)
    (list-remove-duplicates . 90)
    ("***    See Backtrace? (y/n) " . 75)
    ("
" . 74)
    ("*** ERROR [level1]: " . 73)
    ("
" . 68)
    ("*** WARNING [level1]: " . 67)
    ("*** BACKTRACE:" . 58)
    ("       ~a: ~a
" . 56)
    ("*** STACK VALUES:" . 47)
    ("       ~a: ~a
" . 38)
    (|(setter list-ref)| . 36)
    (anonymous . 34)
   )
   literals (
   )
))