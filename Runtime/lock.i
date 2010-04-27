;;; EuLisp system 'youtoo'
;;;   Interface file for module lock

(definterface lock
  (import (telos thread)
   syntax (_telos0)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos event thread)
   export (
    ((name . <lock>) (pos . 2) (origin lock . <lock>))
    ((name . <semaphore>) (pos . 8) (origin lock . <semaphore>) (class . constant))
    ((name . semaphorep) (pos . 7) (origin lock . semaphorep))
    ((name . lockp) (pos . 6) (origin lock . lockp))
    ((name . semaphore-counter) (pos . 5) (origin lock . semaphore-counter) (inline (G004334 (static-ref0) (binding-ref ? <semaphore>) (primitive-relative-ref))) (setter (G004336 (stack-ref 1) (static-ref0) (stack-ref 2) (binding-ref ? <semaphore>) (set-primitive-relative-ref) (nobble 2))))
    ((name . lock) (pos . 3) (origin lock . lock))
    ((name . unlock) (pos . 4) (origin lock . unlock))
   )
   local-literals (
    (top-level . 41)
    (semaphore-counter . 40)
    (|(method unlock)| . 37)
    (|(method lock)| . 36)
    (|(method lockp)| . 35)
    (|(method semaphorep)| . 34)
    (|(setter semaphore-counter)| . 33)
    (unlock . 32)
    (lock . 31)
    (lockp . 30)
    (semaphorep . 29)
    ((counter:) . 28)
    (direct-keywords: . 27)
    (direct-slots: . 26)
    (direct-superclasses: . 25)
    (semaphore . 24)
    (counter: . 23)
    (keyword: . 22)
    (default: . 21)
    (counter . 20)
    (name: . 19)
    (anonymous . 11)
   )
   literals (
   )
))
