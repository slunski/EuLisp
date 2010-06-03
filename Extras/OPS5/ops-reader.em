;;;-----------------------------------------------------------------------------
;;;                 OPS5 for EuLisp System 'youtoo'
;;;-----------------------------------------------------------------------------
;;; File   : ops-reader.em
;;; Date   : 10 Jul 1995
;;; Author : Tracy Gardner (tag@maths.bath.ac.uk)
;;; Description: Reads literal/production from OPS5 file
;;;-----------------------------------------------------------------------------
(defmodule ops-reader ;; (import (level1))
    (syntax (macros macros-tag)
     import (level1 basic))

  (deflocal *prog*
    '((literalize monkey
                  at
                  on
                  holds)
      (literalize object
                  name
                  at
                  weight
                  on)
      (literalize goal
                  status
                  type
                  object
                  to)

      (p mb1
         (goal ^status active ^type holds ^object <w>)
         (object ^name <w> ^at <p> ^on ceiling)
         -->
         (make goal ^status active ^type move ^object ladder ^to <p>))


      (p mb2
         (goal ^status active ^type holds ^object <w>)
         (object ^name <w> ^at <p> ^on ceiling)
         (object ^name ladder ^at <p>)
         -->
         (make goal ^status active ^type on ^object ladder))


      (p mb3
         (goal ^status active ^type holds ^object <w>)
         (object ^name <w> ^at <p> ^on ceiling)
         (object ^name ladder ^at <p>)
         (monkey ^on ladder)
         -->
         (make goal ^status active ^type holds ^object ()))


      (p mb4
         (goal ^status active ^type holds ^object <w>)
         (object ^name <w> ^at <p> ^on ceiling)
         (object ^name ladder ^at <p>)
         (monkey ^on ladder ^holds ())
         -->
         (write (crlf) grab <w>)
         (modify 4 ^holds <w>)
         (modify 1 ^status satisfied))

      (p mb5
         (goal ^status active ^type holds ^object <w>)
         (object ^name <w> ^at <p> ^on floor)
         -->
         (make goal ^status active ^type walk-to ^object <p>))


      (p mb6
         (goal ^status active ^type holds ^object <w>)
         (object ^name <w> ^at <p> ^on floor)
         (monkey ^at <p>)
         -->
         (make goal ^status active ^type holds ^object ()))


      (p mb7
         (goal ^status active ^type holds ^object <w>)
         (object ^name <w> ^at <p> ^on floor)
         (monkey ^at <p> ^holds ())
         -->
         (write (crlf) grab <w>)
         (modify 3 ^holds <w>)
         (modify 1 ^status satisfied))

      (p mb8
         (goal ^status active ^type move ^object <o> ^to <p>)
         (object ^name <o> ^weight light ^at <> <p>)
         -->
         (make goal ^status active ^type holds ^object <o>))


      (p mb9
         (goal ^status active ^type move ^object <o> ^to <p>)
         (object ^name <o> ^weight light ^at <> <p>)
         (monkey ^holds <o>)
         -->
         (make goal ^status active ^type walk-to ^object <p>))


      (p mb10
         (goal ^status active ^type move ^object <o> ^to <p>)
         (object ^name <o> ^weight light ^at <p>)
         -->
         (modify 1 ^status satisfied))


      (p mb11
         (goal ^status active ^type walk-to ^object <p>)
         -->
         (make goal ^status active ^type on ^object floor))

      (p mb12
         (goal ^status active ^type walk-to ^object <p>)
         (monkey ^on floor ^at {<c> <> <p>} ^holds ())
         -->
         (write (crlf) walk to <p>)
         (modify 2 ^at <p>)
         (modify 1 ^status satisfied))


      (p mb13
         (goal ^status active ^type walk-to ^object <p>)
         (monkey ^on floor ^at {<c> <> <p>} ^holds {<w> <> ()})
         (object ^name <w>)
         -->
         (write (crlf) walk to <p>)
         (modify 2 ^at <p>)
         (modify 3 ^at <p>)
         (modify 1 ^status satisfied))

      (p mb14
         (goal ^status active ^type on ^object floor)
         (monkey ^on {<x> <> floor})
         -->
         (write (crlf) jump onto the floor)
         (modify 2 ^on floor)
         (modify 1 ^status satisfied))

      (p mb15
         (goal ^status active ^type on ^object <o>)
         (object ^name <o> ^at <p>)
         -->
         (make goal ^status active ^type walk-to ^object <p>))

      (p mb16
         (goal ^status active ^type on ^object <o>)
         (object ^name <o> ^at <p>)
         (monkey ^at <p>)
         -->
         (make goal ^status active ^type holds ^object ()))


      (p mb17
         (goal ^status active ^type on ^object <o>)
         (object ^name <o> ^at <p>)
         (monkey ^at <p> ^holds ())
         -->
         (write (crlf) climb onto <o>)
         (modify 3 ^on <o>)
         (modify 1 ^status satisfied))

      (p mb18
         (goal ^status active ^type holds ^object ())
         (monkey ^holds {<x> <> ()})
         -->
         (write (crlf) drop <x>)
         (modify 2 ^holds ())
         (modify 1 ^status satisfied))

      (p mb19
         (goal ^status active)
         -->
         (modify 1 ^status not-processed))

      (p start_production
         (start)
         -->
         (make monkey ^at |5-7| ^on couch)
         (make object ^name couch ^at |5-7| ^weight heavy)
         (make object ^name bananas ^on ceiling ^at |2-2|)
         (make object ^name ladder ^on floor ^at |9-5| ^weight light)
         (make goal   ^status active ^type holds ^object bananas))))

  (defun ops-read (s)
    (let ((ret (if *prog*
                   (car *prog*)
                 ())))
      (when *prog* (setq *prog* (cdr *prog*)))
      ret))

  (export *prog* ops-read)

;;;-----------------------------------------------------------------------------
  )  ;; end of module
;;;-----------------------------------------------------------------------------
