;;; EuLisp system 'youtoo'
;;;   Interface file for module boot1

(definterface boot1
  (import ()
   syntax (_boot0)
   full-import ()
   export (
    ((name . stdout) (pos) (origin boot1 . stdout) (class . constant) (value 1))
    ((name . system) (pos . 50) (origin boot1 . system))
    ((name . objectp) (pos . 49) (origin boot1 . objectp))
    ((name . equal) (pos . 48) (origin boot1 . equal))
    ((name . simple-generic-function?) (pos . 47) (origin boot1 . simple-generic-function?) (inline (G0056 (gfp))))
    ((name . write-object) (pos) (origin boot1 . write-object) (class . opencoding) (arity . 2) (opencoding (write-object)))
    ((name . *absent*) (pos . 46) (origin boot1 . *absent*) (class . constant))
    ((name . dec) (pos . 45) (origin boot1 . dec) (inline (G0084 (fpi-dec))))
    ((name . <) (pos . 42) (origin boot1 . <) (inline (G0078 (fpi-lt))))
    ((name . symbolp) (pos . 43) (origin boot1 . symbolp) (inline (G0048 (symbolp))))
    ((name . eql) (pos . 44) (origin boot1 . eql) (inline (G0038 (eql))))
    ((name . setter) (pos . 41) (origin boot1 . setter))
    ((name . mod) (pos . 40) (origin boot1 . mod) (inline (G0076 (fpi-remainder))))
    ((name . make-vector) (pos . 39) (origin boot1 . make-vector))
    ((name . prin) (pos . 38) (origin boot1 . prin))
    ((name . atom?) (pos . 37) (origin boot1 . atom?))
    ((name . cdr) (pos . 36) (origin boot1 . cdr) (inline (G0090 (cdr))) (setter (G00104 (set-cdr))))
    ((name . make-vector1) (pos . 56) (origin boot1 . make-vector1) (class . ff) (arity . 2) (ff (0 8) 6 (eul_make_vector . ff_stub_eul_make_vector262)))
    ((name . stringp) (pos . 35) (origin boot1 . stringp) (inline (G0046 (stringp))))
    ((name . *) (pos . 34) (origin boot1 . *) (inline (G0070 (fpi-product))))
    ((name . %) (pos . 33) (origin boot1 . %) (inline (G0074 (fpi-remainder))))
    ((name . int-zerop) (pos . 32) (origin boot1 . int-zerop) (inline (G0086 (fpi-zerop))))
    ((name . stderr) (pos) (origin boot1 . stderr) (class . constant) (value 2))
    ((name . make-symbol) (pos . 54) (origin boot1 . make-symbol) (class . ff) (arity . 1) (ff (3) 6 (eul_make_symbol . ff_stub_eul_make_symbol260)))
    ((name . member1-string) (pos . 53) (origin boot1 . member1-string) (class . ff) (arity . 2) (ff (1 3) 6 (eul_str_member1 . ff_stub_eul_str_member1259)))
    ((name . int-as-character) (pos) (origin boot1 . int-as-character) (class . opencoding) (arity . 1) (opencoding (fpi-as-character)))
    ((name . tailstring) (pos . 52) (origin boot1 . tailstring) (class . ff) (arity . 2) (ff (3 0) 3 (eul_tailstr . ff_stub_eul_tailstr258)))
    ((name . intp) (pos . 31) (origin boot1 . intp) (inline (G0052 (fpip))))
    ((name . car) (pos . 30) (origin boot1 . car) (inline (G0088 (car))) (setter (G00102 (set-car))))
    ((name . *argc*) (pos . 29) (origin boot1 . *argc*) (class . constant))
    ((name . time-start) (pos . 28) (origin boot1 . time-start))
    ((name . *argv*) (pos . 27) (origin boot1 . *argv*) (class . constant))
    ((name . list) (pos . 25) (origin boot1 . list))
    ((name . characterp) (pos . 26) (origin boot1 . characterp) (inline (G0044 (characterp))))
    ((name . character-as-int) (pos) (origin boot1 . character-as-int) (class . opencoding) (arity . 1) (opencoding (character-as-fpi)))
    ((name . time-stop) (pos . 24) (origin boot1 . time-stop))
    ((name . inc) (pos . 22) (origin boot1 . inc) (inline (G0082 (fpi-inc))))
    ((name . eq) (pos . 23) (origin boot1 . eq) (inline (G0036 (eq))))
    ((name . exit) (pos . 21) (origin boot1 . exit))
    ((name . getenv) (pos . 20) (origin boot1 . getenv))
    ((name . format1) (pos . 19) (origin boot1 . format1))
    ((name . string-size) (pos . 18) (origin boot1 . string-size) (inline (G0094 (primitive-size))))
    ((name . substring) (pos . 51) (origin boot1 . substring) (class . ff) (arity . 3) (ff (3 0 0) 3 (eul_substr . ff_stub_eul_substr257)))
    ((name . -) (pos . 17) (origin boot1 . -) (inline (G0068 (fpi-difference))))
    ((name . +) (pos . 16) (origin boot1 . +) (inline (G0066 (fpi-sum))))
    ((name . make-keyword) (pos . 55) (origin boot1 . make-keyword) (class . ff) (arity . 1) (ff (3) 6 (eul_make_keyword . ff_stub_eul_make_keyword261)))
    ((name . listp) (pos . 15) (origin boot1 . listp) (inline (G0058 (listp))))
    ((name . consp) (pos . 14) (origin boot1 . consp) (inline (G0050 (consp))))
    ((name . /) (pos . 13) (origin boot1 . /) (inline (G0072 (fpi-quotient))))
    ((name . atom) (pos . 12) (origin boot1 . atom) (inline (G0063 (consp) (null))) (inline (G0060 (consp) (null))))
    ((name . null?) (pos . 11) (origin boot1 . null?) (inline (G0042 (null))))
    ((name . =) (pos . 10) (origin boot1 . =) (inline (G0080 (fpi-equal))))
    ((name . string-ref) (pos . 9) (origin boot1 . string-ref) (inline (G0096 (string-ref))) (setter (G00106 (set-string-ref))))
    ((name . vector-size) (pos . 8) (origin boot1 . vector-size) (inline (G0098 (primitive-size))))
    ((name . vector-ref) (pos . 7) (origin boot1 . vector-ref) (inline (G00100 (primitive-ref))) (setter (G00108 (set-primitive-ref))))
    ((name . null) (pos . 6) (origin boot1 . null) (inline (G0040 (null))))
    ((name . simple-function?) (pos . 4) (origin boot1 . simple-function?) (inline (G0054 (lambdap))))
    ((name . print) (pos . 3) (origin boot1 . print))
    ((name . cons) (pos . 2) (origin boot1 . cons) (inline (G0092 (cons))))
   )
   local-literals (
    (top-level . 169)
    (cons . 168)
    (print . 167)
    (simple-function? . 166)
    (set-setter . 165)
    (null . 164)
    (vector-ref . 163)
    (vector-size . 162)
    (string-ref . 161)
    (= . 160)
    (null? . 159)
    (atom . 158)
    (/ . 157)
    (consp . 156)
    (listp . 155)
    (+ . 154)
    (- . 153)
    (string-size . 152)
    (format1 . 151)
    (getenv . 150)
    (exit . 149)
    (inc . 148)
    (eq . 147)
    (time-stop . 146)
    (list . 145)
    (characterp . 144)
    (time-start . 143)
    (car . 142)
    (intp . 141)
    (int-zerop . 140)
    (% . 139)
    (* . 138)
    (stringp . 137)
    (cdr . 136)
    (atom? . 135)
    (prin . 134)
    (make-vector . 133)
    (mod . 132)
    (setter . 131)
    (< . 130)
    (symbolp . 129)
    (eql . 128)
    (dec . 127)
    (simple-generic-function? . 126)
    (equal . 125)
    (objectp . 124)
    (system . 123)
    (anonymous . 92)
    ("
" . 74)
    (|(setter vector-ref)| . 71)
    (|(setter string-ref)| . 70)
    (|(setter cdr)| . 69)
    (|(setter car)| . 68)
    ((*absent*) . 67)
    (*absent* . 66)
   )
   literals (
   )
))