;;; EuLisp system 'youtoo'
;;;   Interface file for module handler

(definterface handler
  (import (telos callback convert convert1 fpi float string collect)
   syntax (_telos0)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos condition event thread dynamic let-cc callback convert table table1 vector list character string fpi copy number integer collect compare convert1 float)
   export (
    ((name . <int*>) (pos . 5) (origin handler . <int*>) (class . constant))
    ((name . <handler>) (pos . 2) (origin handler . <handler>) (class . constant))
    ((name . handlerp) (pos . 10) (origin handler . handlerp))
    ((name . handle) (pos . 4) (origin handler . handle) (inline (G009363 (static-ref0) (binding-ref ? <handler>) (primitive-relative-ref))) (setter (G009365 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <handler>) (set-primitive-relative-ref) (nobble 2))))
    ((name . <string*>) (pos . 7) (origin handler . <string*>) (class . constant))
    ((name . <double*>) (pos . 6) (origin handler . <double*>) (class . constant))
   )
   local-literals (
    (top-level . 82)
    (|(method (converter <string>))| . 79)
    (|(method (converter <string*>))| . 78)
    ((converter <string*>) . 77)
    (<string*> . 76)
    (|(method string*p)| . 75)
    (string* . 74)
    (|(method (converter <double>))| . 73)
    (|(method (converter <double*>))| . 72)
    ((converter <double*>) . 71)
    (<double*> . 70)
    (|(method double*p)| . 69)
    (double* . 68)
    (|(method (setter element))| . 67)
    (|(method element)| . 66)
    (|(method (converter <int>))| . 65)
    (|(method (converter <int*>))| . 64)
    ((converter <int*>) . 63)
    (<int*> . 62)
    (converter . 61)
    (|(method int*p)| . 60)
    (int* . 59)
    (|(method handlerp)| . 58)
    (|(setter handle)| . 57)
    (string*p . 56)
    (double*p . 55)
    (int*p . 54)
    (handlerp . 53)
    ((handle:) . 52)
    (direct-keywords: . 51)
    (direct-slots: . 50)
    (direct-superclasses: . 49)
    (handler . 48)
    (handle: . 47)
    (keyword: . 46)
    (handle . 45)
    (name: . 44)
   )
   literals (
   )
))
