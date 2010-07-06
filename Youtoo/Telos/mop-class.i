;;; EuLisp system 'youtoo'
;;;   Interface file for module mop-class

(definterface mop-class
  (import (boot mop-prim)
   syntax (_boot0)
   full-import (boot1 boot mop-prim)
   export (
    ((name . <keyword>) (pos . 81) (origin mop-class . <keyword>) (class . constant))
    ((name . cons-slot-defaults) (pos . 40) (origin mop-class . cons-slot-defaults) (class . constant))
    ((name . slot-name) (pos . 80) (origin mop-class . slot-name) (inline (G00755 (static-ref2) (primitive-ref))) (setter (G00815 (stack-ref 1) (static-ref2) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . gf-slots) (pos . 79) (origin mop-class . gf-slots) (class . constant))
    ((name . sf-direct-slots) (pos . 38) (origin mop-class . sf-direct-slots) (class . constant))
    ((name . gf-slot-defaults) (pos . 37) (origin mop-class . gf-slot-defaults) (class . constant))
    ((name . name-slot-defaults) (pos . 78) (origin mop-class . name-slot-defaults) (class . constant))
    ((name . cons-keywords) (pos . 77) (origin mop-class . cons-keywords) (class . constant))
    ((name . generic-function-discriminating-function) (pos . 35) (origin mop-class . generic-function-discriminating-function) (inline (G00741 (static-fpi-ref 7) (primitive-ref))) (setter (G00801 (stack-ref 1) (static-fpi-ref 7) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . method-function) (pos . 76) (origin mop-class . method-function) (inline (G00749 (static-ref2) (primitive-ref))) (setter (G00809 (stack-ref 1) (static-ref2) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . method-slot-defaults) (pos . 34) (origin mop-class . method-slot-defaults) (class . constant))
    ((name . class-abstract?) (pos . 74) (origin mop-class . class-abstract?) (inline (G00721 (static-fpi-ref 7) (primitive-ref))) (setter (G00781 (stack-ref 1) (static-fpi-ref 7) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . <class>) (pos . 75) (origin mop-class . <class>) (class . constant))
    ((name . <name>) (pos . 33) (origin mop-class . <name>) (class . constant))
    ((name . slot-reader) (pos . 32) (origin mop-class . slot-reader) (inline (G00751 (static-ref0) (primitive-ref))) (setter (G00811 (stack-ref 1) (static-ref0) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . class-instance-length) (pos . 73) (origin mop-class . class-instance-length) (inline (G00709 (static-ref1) (primitive-ref))) (setter (G00769 (stack-ref 1) (static-ref1) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . sd-slots) (pos . 30) (origin mop-class . sd-slots) (class . constant))
    ((name . generic-function-method-lookup-function) (pos . 31) (origin mop-class . generic-function-method-lookup-function) (inline (G00739 (static-fpi-ref 6) (primitive-ref))) (setter (G00799 (stack-ref 1) (static-fpi-ref 6) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . function-name) (pos . 72) (origin mop-class . function-name) (inline (G00725 (static-ref0) (primitive-ref))) (setter (G00785 (stack-ref 1) (static-ref0) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . <cons>) (pos . 71) (origin mop-class . <cons>) (class . constant))
    ((name . <simple-class>) (pos . 70) (origin mop-class . <simple-class>) (class . constant))
    ((name . class-keywords) (pos . 69) (origin mop-class . class-keywords) (inline (G00717 (static-fpi-ref 5) (primitive-ref))) (setter (G00777 (stack-ref 1) (static-fpi-ref 5) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . class-direct-superclasses) (pos . 68) (origin mop-class . class-direct-superclasses) (inline (G00711 (static-ref2) (primitive-ref))) (setter (G00771 (stack-ref 1) (static-ref2) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . sf-slot-defaults) (pos . 29) (origin mop-class . sf-slot-defaults) (class . constant))
    ((name . gf-size) (pos) (origin mop-class . gf-size) (class . constant) (value 9))
    ((name . class-slot-defaults) (pos . 67) (origin mop-class . class-slot-defaults) (class . constant))
    ((name . function-slot-defaults) (pos . 66) (origin mop-class . function-slot-defaults) (class . constant))
    ((name . lsd-slots) (pos . 28) (origin mop-class . lsd-slots) (class . constant))
    ((name . simple-function-code) (pos . 65) (origin mop-class . simple-function-code))
    ((name . <function>) (pos . 27) (origin mop-class . <function>) (class . constant))
    ((name . sd-size) (pos) (origin mop-class . sd-size) (class . constant) (value 2))
    ((name . method-slots) (pos . 26) (origin mop-class . method-slots) (class . constant))
    ((name . class-size) (pos) (origin mop-class . class-size) (class . constant) (value 10))
    ((name . class-slotz) (pos . 64) (origin mop-class . class-slotz) (class . constant))
    ((name . <null>) (pos . 25) (origin mop-class . <null>) (class . constant))
    ((name . <function-class>) (pos . 24) (origin mop-class . <function-class>) (class . constant))
    ((name . class-keywordz) (pos . 23) (origin mop-class . class-keywordz) (class . constant))
    ((name . <list>) (pos . 63) (origin mop-class . <list>) (class . constant))
    ((name . method-size) (pos) (origin mop-class . method-size) (class . constant) (value 3))
    ((name . cons-size) (pos) (origin mop-class . cons-size) (class . constant) (value 2))
    ((name . <method>) (pos . 22) (origin mop-class . <method>) (class . constant))
    ((name . lsd-keywords) (pos . 21) (origin mop-class . lsd-keywords) (class . constant))
    ((name . class-direct-subclasses) (pos . 62) (origin mop-class . class-direct-subclasses) (inline (G00713 (static-fpi-ref 3) (primitive-ref))) (setter (G00773 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . <object>) (pos . 20) (origin mop-class . <object>) (class . constant))
    ((name . symbol-name) (pos . 61) (origin mop-class . symbol-name) (inline (G00763 (static-ref0) (primitive-ref))))
    ((name . slot-keyword) (pos . 60) (origin mop-class . slot-keyword) (inline (G00757 (static-fpi-ref 3) (primitive-ref))) (setter (G00817 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . generic-function-domain) (pos . 59) (origin mop-class . generic-function-domain) (inline (G00731 (static-ref1) (primitive-ref))) (setter (G00791 (stack-ref 1) (static-ref1) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . sf-size) (pos) (origin mop-class . sf-size) (class . constant) (value 5))
    ((name . class-code) (pos . 19) (origin mop-class . class-code) (inline (G00723 (static-fpi-ref 9) (primitive-ref))) (setter (G00783 (stack-ref 1) (static-fpi-ref 9) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . function-size) (pos) (origin mop-class . function-size) (class . constant) (value 3))
    ((name . sd-keywords) (pos . 18) (origin mop-class . sd-keywords) (class . constant))
    ((name . method-domain) (pos . 58) (origin mop-class . method-domain) (inline (G00747 (static-ref1) (primitive-ref))) (setter (G00807 (stack-ref 1) (static-ref1) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . <simple-generic-function>) (pos . 15) (origin mop-class . <simple-generic-function>) (class . constant))
    ((name . object-keywords) (pos . 17) (origin mop-class . object-keywords) (class . constant))
    ((name . name-keywords) (pos . 8) (origin mop-class . name-keywords) (class . constant))
    ((name . function-domain) (pos . 16) (origin mop-class . function-domain) (inline (G00727 (static-ref1) (primitive-ref))) (setter (G00787 (stack-ref 1) (static-ref1) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . <local-slot>) (pos . 51) (origin mop-class . <local-slot>) (class . constant))
    ((name . generic-function-method-cache) (pos . 57) (origin mop-class . generic-function-method-cache) (inline (G00743 (static-fpi-ref 8) (primitive-ref))) (setter (G00803 (stack-ref 1) (static-fpi-ref 8) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . method-generic-function) (pos . 54) (origin mop-class . method-generic-function) (inline (G00745 (static-ref0) (primitive-ref))) (setter (G00805 (stack-ref 1) (static-ref0) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . gf-keywords) (pos . 56) (origin mop-class . gf-keywords) (class . constant))
    ((name . keyword-name) (pos . 7) (origin mop-class . keyword-name) (inline (G00765 (static-ref0) (primitive-ref))))
    ((name . <simple-method>) (pos . 55) (origin mop-class . <simple-method>) (class . constant))
    ((name . object-slots) (pos . 12) (origin mop-class . object-slots) (class . constant))
    ((name . object-size) (pos) (origin mop-class . object-size) (class . constant) (value 0))
    ((name . class-name) (pos . 14) (origin mop-class . class-name) (inline (G00707 (static-ref0) (primitive-ref))) (setter (G00767 (stack-ref 1) (static-ref0) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . converter) (pos . 13) (origin mop-class . converter))
    ((name . generic-function-method-keywords) (pos . 11) (origin mop-class . generic-function-method-keywords) (inline (G00735 (static-fpi-ref 4) (primitive-ref))) (setter (G00795 (stack-ref 1) (static-fpi-ref 4) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . slot-writer) (pos . 53) (origin mop-class . slot-writer) (inline (G00753 (static-ref1) (primitive-ref))) (setter (G00813 (stack-ref 1) (static-ref1) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . slot-default) (pos . 10) (origin mop-class . slot-default) (inline (G00759 (static-fpi-ref 4) (primitive-ref))) (setter (G00819 (stack-ref 1) (static-fpi-ref 4) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . slot-required?) (pos . 9) (origin mop-class . slot-required?) (inline (G00761 (static-fpi-ref 5) (primitive-ref))) (setter (G00821 (stack-ref 1) (static-fpi-ref 5) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . class-precedence-list) (pos . 6) (origin mop-class . class-precedence-list) (inline (G00719 (static-fpi-ref 6) (primitive-ref))) (setter (G00779 (stack-ref 1) (static-fpi-ref 6) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . <slot>) (pos . 49) (origin mop-class . <slot>) (class . constant))
    ((name . lsd-size) (pos) (origin mop-class . lsd-size) (class . constant) (value 6))
    ((name . class-slots) (pos . 50) (origin mop-class . class-slots) (inline (G00715 (static-fpi-ref 4) (primitive-ref))) (setter (G00775 (stack-ref 1) (static-fpi-ref 4) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . generic-function-method-class) (pos . 48) (origin mop-class . generic-function-method-class) (inline (G00733 (static-fpi-ref 3) (primitive-ref))) (setter (G00793 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . simple-function-environment) (pos . 47) (origin mop-class . simple-function-environment) (inline (G00729 (static-fpi-ref 3) (primitive-ref))) (setter (G00789 (stack-ref 1) (static-fpi-ref 3) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . <symbol>) (pos . 5) (origin mop-class . <symbol>) (class . constant))
    ((name . cons-slots) (pos . 46) (origin mop-class . cons-slots) (class . constant))
    ((name . lsd-slot-defaults) (pos . 4) (origin mop-class . lsd-slot-defaults) (class . constant))
    ((name . method-keywords) (pos . 45) (origin mop-class . method-keywords) (class . constant))
    ((name . name-slots) (pos . 3) (origin mop-class . name-slots) (class . constant))
    ((name . <generic-function>) (pos . 44) (origin mop-class . <generic-function>) (class . constant))
    ((name . sf-direct-slot-defaults) (pos . 43) (origin mop-class . sf-direct-slot-defaults) (class . constant))
    ((name . name-size) (pos) (origin mop-class . name-size) (class . constant) (value 1))
    ((name . generic-function-methods) (pos . 42) (origin mop-class . generic-function-methods) (inline (G00737 (static-fpi-ref 5) (primitive-ref))) (setter (G00797 (stack-ref 1) (static-fpi-ref 5) (stack-ref 2) (set-primitive-ref) (nobble 2))))
    ((name . <simple-function>) (pos . 2) (origin mop-class . <simple-function>) (class . constant))
    ((name . sf-slots) (pos . 41) (origin mop-class . sf-slots) (class . constant))
   )
   local-literals (
    (top-level . 283)
    (keyword-name . 282)
    (slot-required? . 281)
    (slot-default . 280)
    (generic-function-method-keywords . 279)
    (class-name . 278)
    (function-domain . 277)
    (class-code . 276)
    (generic-function-method-lookup-function . 275)
    (slot-reader . 274)
    (generic-function-discriminating-function . 273)
    (*default-slot-value* . 272)
    (generic-function-methods . 271)
    (simple-function-environment . 270)
    (generic-function-method-class . 269)
    (class-slots . 268)
    (slot-writer . 267)
    (method-generic-function . 266)
    (generic-function-method-cache . 265)
    (method-domain . 264)
    (generic-function-domain . 263)
    (slot-keyword . 262)
    (symbol-name . 261)
    (class-direct-subclasses . 260)
    (simple-function-code . 259)
    (class-direct-superclasses . 258)
    (class-keywords . 257)
    (function-name . 256)
    (class-instance-length . 255)
    (class-abstract? . 254)
    (method-function . 253)
    (slot-name . 252)
    ("non-functional converter ~a at class <~a>" . 223)
    (|(setter slot-required?)| . 216)
    (|(setter slot-default)| . 215)
    (|(setter slot-keyword)| . 214)
    (|(setter slot-name)| . 213)
    (|(setter slot-writer)| . 212)
    (|(setter slot-reader)| . 211)
    (|(setter method-function)| . 210)
    (|(setter method-domain)| . 209)
    (|(setter method-generic-function)| . 208)
    (|(setter generic-function-method-cache)| . 207)
    (|(setter generic-function-discriminating-function)| . 206)
    (|(setter generic-function-method-lookup-function)| . 205)
    (|(setter generic-function-methods)| . 204)
    (|(setter generic-function-method-keywords)| . 203)
    (|(setter generic-function-method-class)| . 202)
    (|(setter generic-function-domain)| . 201)
    (|(setter simple-function-code)| . 200)
    (|(setter simple-function-environment)| . 199)
    (|(setter function-domain)| . 198)
    (|(setter function-name)| . 197)
    (|(setter class-code)| . 196)
    (|(setter converter)| . 195)
    (|(setter class-abstract?)| . 194)
    (|(setter class-precedence-list)| . 193)
    (|(setter class-keywords)| . 192)
    (|(setter class-slots)| . 191)
    (|(setter class-direct-subclasses)| . 190)
    (|(setter class-direct-superclasses)| . 189)
    (|(setter class-instance-length)| . 188)
    (|(setter class-name)| . 187)
    ((car: cdr:) . 186)
    (cdr: . 185)
    (car: . 184)
    ((car cdr) . 183)
    (cdr . 182)
    (car . 181)
    ((name:) . 180)
    ((required:) . 179)
    ((name) . 178)
    ((name: keyword: default: required?:) . 177)
    (required?: . 176)
    (default: . 175)
    (keyword: . 174)
    ((name keyword default required?) . 173)
    (required? . 172)
    (default . 171)
    (keyword . 170)
    ((reader: writer:) . 169)
    (writer: . 168)
    (reader: . 167)
    ((reader writer) . 166)
    (writer . 165)
    (reader . 164)
    ((domain: function: generic-function:) . 163)
    (generic-function: . 162)
    (function: . 161)
    ((generic-function domain function) . 160)
    (function . 159)
    (generic-function . 158)
    ((name: domain: class: method-class: method-keywords: methods: method-lookup-function: discriminating-function:) . 157)
    (discriminating-function: . 156)
    (method-lookup-function: . 155)
    (methods: . 154)
    (method-keywords: . 153)
    (method-class: . 152)
    (class: . 151)
    (domain: . 150)
    ((method-class method-keywords methods method-lookup-function discriminating-function method-cache) . 149)
    (method-cache . 148)
    (discriminating-function . 147)
    (method-lookup-function . 146)
    (methods . 145)
    (method-keywords . 144)
    (method-class . 143)
    (required: . 142)
    ((environment code) . 141)
    (environment . 140)
    ((name domain setter) . 139)
    (setter . 138)
    (domain . 137)
    ((name: direct-superclasses: direct-slots: direct-keywords: abstract?:) . 136)
    (abstract?: . 135)
    (direct-keywords: . 134)
    (direct-slots: . 133)
    (direct-superclasses: . 132)
    (name: . 131)
    ((name instance-length direct-superclasses direct-subclasses slots keywords class-precedence-list abstract? converter code) . 130)
    (code . 129)
    (converter . 128)
    (abstract? . 127)
    (class-precedence-list . 126)
    (keywords . 125)
    (slots . 124)
    (direct-subclasses . 123)
    (direct-superclasses . 122)
    (instance-length . 121)
    (name . 120)
    (anonymous . 115)
   )
   literals (
   )
))
