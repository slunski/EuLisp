;;; Copyright 1997 A. Kind & University of Bath
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                         EuLisp System 'Youtoo'
;;;-----------------------------------------------------------------------------
;;
;;  Youtoo is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  Youtoo is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title: callback initialization
;;;  Library: level-1
;;;  Authors: Andreas Kind, Julian Padget
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

(defmodule callback
  (syntax (_telos0)
   import (telos
           condition)
   export (first-arithmetic-cb
           install-callback
           *callback-vector*
           CB-sum-overflow
           CB-difference-underflow
           CB-product-overflow
           CB-read-overflow))

;;;-----------------------------------------------------------------------------
;;; Callback vector
;;;-----------------------------------------------------------------------------
(defconstant *callback-vector* (get-global-register callbacks))

(defun install-callback (i fun)
  ((setter vector-ref) *callback-vector* i fun))

;;;-----------------------------------------------------------------------------
;;; Callback positions
;;;-----------------------------------------------------------------------------
(defconstant first-arithmetic-cb 1)
(defconstant first-cons-cb 10)
(defconstant first-error-cb 15)
(defconstant first-signal-cb 20)
(defconstant first-setter-cb 45)
(defconstant CB-system-error 0)
(defconstant CB-arg-mismatch 15)
(defconstant CB-no-next-method 16)
(defconstant CB-bad-string-access 25)
(defconstant CB-bad-set-class-of 26)
(defconstant CB-sum-overflow 30)
(defconstant CB-difference-underflow 31)
(defconstant CB-product-overflow 32)
(defconstant CB-division-by-zero 33)
(defconstant CB-read-overflow 34)
(defconstant CB-bad-operator 35)
(defconstant CB-bad-slot-access 36)

;;;-----------------------------------------------------------------------------
;;; Default error thunk
;;;-----------------------------------------------------------------------------
(defun callback-thunk (str)
  (lambda args  ; args still on the value stack
    (error <general-condition> str arguments: args)))

;;;-----------------------------------------------------------------------------
;;; Install the callbacks (see also modules number and compare)
;;;-----------------------------------------------------------------------------
(install-callback CB-system-error
                  (callback-thunk "unspecified system error"))
(install-callback (fpi-binary+ first-cons-cb 0)
                  (callback-thunk "bad car domain"))
(install-callback (fpi-binary+ first-cons-cb 1)
                  (callback-thunk "bad cdr domain"))
(install-callback (fpi-binary+ first-cons-cb 2)
                  (callback-thunk "bad assq domain"))
(install-callback (fpi-binary+ first-cons-cb 3)
                  (callback-thunk "bad iniq domain"))
(install-callback (fpi-binary+ first-error-cb 0)
                  (callback-thunk "argument number mismatch"))
(install-callback (fpi-binary+ first-error-cb 1)
                  (callback-thunk "bad stream primitive"))
(install-callback (fpi-binary+ first-error-cb 2)
                  (callback-thunk "last argument of apply must be a list"))
(install-callback (fpi-binary+ first-setter-cb 0)
                  (callback-thunk "bad setter argument"))
(install-callback (fpi-binary+ first-setter-cb 1)
                  (callback-thunk "bad setter"))
(install-callback (fpi-binary+ first-setter-cb 2)
                  (callback-thunk "cannot set setter"))
(install-callback (fpi-binary+ first-setter-cb 3)
                  (callback-thunk "bad (setter car) domain"))
(install-callback (fpi-binary+ first-setter-cb 4)
                  (callback-thunk "bad (setter cdr) domain"))
(install-callback CB-no-next-method
                  (callback-thunk "no next method available"))
(install-callback (fpi-binary+ first-signal-cb 0)
                  (callback-thunk "user interrupt"))
(install-callback (fpi-binary+ first-signal-cb 1)
                  (callback-thunk "segmentation fault"))
(install-callback (fpi-binary+ first-signal-cb 2)
                  (callback-thunk "bus error"))
(install-callback (fpi-binary+ first-signal-cb 3)
                  (callback-thunk "bad foreign function conversion"))
(install-callback CB-bad-operator (callback-thunk "bad operator"))
(install-callback CB-bad-slot-access (callback-thunk "bad slot access"))
(install-callback CB-bad-string-access (callback-thunk "bad string access"))
(install-callback CB-bad-set-class-of (callback-thunk "cannot set class"))
(install-callback CB-sum-overflow (callback-thunk "integer overflow"))
(install-callback CB-difference-underflow (callback-thunk "integer underflow"))
(install-callback CB-product-overflow (callback-thunk "integer overflow"))
(install-callback CB-division-by-zero (callback-thunk "division by zero"))
(install-callback CB-read-overflow
                  (lambda (str negp)
                    (error <general-condition>
                           (if negp
                               "integer underflow"
                             "integer overerflow")
                           arguments: (list str))))

;;;-----------------------------------------------------------------------------
)  ;; End of module callback
;;;-----------------------------------------------------------------------------
