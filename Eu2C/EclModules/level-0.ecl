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
;;; Title: EL-in-CL: Level-0 of EuLisp
;;;  Description:
;;;  Authors: Ingo Mohr
;;;  Maintainer: Henry G. Weller
;;;-----------------------------------------------------------------------------

#module level-0
(syntax (eulisp-kernel)
 expose (eulisp-kernel
         character
         collection
         compare
         condition
         ;;convert
         copy
         double
         ;;elementary-functions
         ;;event
         formatted-io
         fpi
         function
         list
         ;;lock
         number
         telos0     ;syntax-0
         el-stream  ;stream
         string
         symbol
         table
         vector))

;;;-----------------------------------------------------------------------------
#module-end
;;;-----------------------------------------------------------------------------
