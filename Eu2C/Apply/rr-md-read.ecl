;;; Copyright 1994-2010 Fraunhofer ISST
;;; Copyright 2010 Henry G. Weller
;;;-----------------------------------------------------------------------------
;;  This file is part of
;;; ---                           EuLisp System 'Eu2C'
;;;-----------------------------------------------------------------------------
;;
;;  Eu2C is free software: you can redistribute it and/or modify it under the
;;  terms of the GNU General Public License version 2 as published by the Free
;;  Software Foundation.
;;
;;  Eu2C is distributed in the hope that it will be useful, but WITHOUT ANY
;;  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
;;  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
;;  details.
;;
;;  You should have received a copy of the GNU General Public License along with
;;  this program.  If not, see <http://www.gnu.org/licenses/>.
;;
;;;-----------------------------------------------------------------------------
;;; Title:   Read of Mashine Description:
;;;        Register and Operation Code Generation
;;;  Authors: Rainer Rosenmuller
;;;-----------------------------------------------------------------------------

#module RR-MD-READ

(import
 (eulisp1
  (only (get-option) option-lists)
  )

 syntax
 (eulisp1
  lzs-modules
  (only (mapcan ) common-lisp)
  )

 export
 (define-special-sys-funs)
 )



(defmacro define-special-sys-funs  description-list
  (let ((funs  (mapcan (lambda (li)
                         (list
                          `(define-tail ,(car li)
                             export (special-sys-fun)
                             :arg-num ,(get-option :arg-num (cdr li) ())
                             :inline ()
                             )

                          ))
                       description-list)))

    `(progn ,@funs)))

#module-end