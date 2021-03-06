### Copyright 1994 Russell Bradford
### Copyright 2010-2011 Henry G. Weller
###-----------------------------------------------------------------------------
##  This file is part of
### ---                           EuLisp System 'Eu2C'
###-----------------------------------------------------------------------------
##
##  Eu2C is free software: you can redistribute it and/or modify it under the
##  terms of the GNU General Public License version 2 as published by the Free
##  Software Foundation.
##
##  Eu2C is distributed in the hope that it will be useful, but WITHOUT ANY
##  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
##  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
##  details.
##
##  You should have received a copy of the GNU General Public License along with
##  this program.  If not, see <http://www.gnu.org/licenses/>.
##
###-----------------------------------------------------------------------------
### Title: EuXLisp Top-level Makefile
###  Note: set Eu2CROOT e.g. export Eu2CROOT=`pwd`
### Usage: make [options]
### Options:
###   ARCH=<achitecture: i686, x86_64...>
### Optional Flags:
###   -DSOCK to include socket code, but beware: it is possibly buggy
###  Maintainer: Henry G. Weller
###-----------------------------------------------------------------------------
ARCH := $(shell uname -m)
include ../Lib.$(ARCH)/Makefile

###-----------------------------------------------------------------------------
### Search and installation paths
###-----------------------------------------------------------------------------

###  Search path for modules
# look first in environment variable EU_MODULE_PATH
# then the builtin equivalent.
# EU_MODULE_PATH is a colon separated list of directory names
MODULE_SEARCH_PATH = ".", "Modules", "$(PWD)/../Modules"

###  Search path for the EuXLisp image
# look first in environment variable EU_IMAGE_PATH
# then the builtin equivalent
IMAGE_SEARCH_PATH = "$(EUL_LIB_DIR)"

###  Name and location of the EuXLisp image
IMAGE = euxlisp.wks
IMAGE_PLATFORM = $(EUL_LIB_DIR)/$(IMAGE)

###  Name and location of the EuXLisp image for executing modules
IMAGE_MOD = euxlisp_mod.wks
IMAGE_MOD_PLATFORM = $(EUL_LIB_DIR)/$(IMAGE_MOD)

### Set CFLAGS
# used in the $(ARCH_DIR)/%.o : %.c rule
CFLAGS = $(EUXL_CFLAGS)

###  Transfer paths to the compiler
# Note: CPPFLAGS is set here because it is used in the
# $(ARCH_DIR)/%.o : %.c rule
CPPFLAGS = -DIMAGE='"$(IMAGE)"' -DIMAGE_MOD='"$(IMAGE_MOD)"' \
         -DMODULE_SEARCH_PATH='$(MODULE_SEARCH_PATH)' \
         -DIMAGE_SEARCH_PATH='$(IMAGE_SEARCH_PATH)'

###-----------------------------------------------------------------------------
### Source and object files
###-----------------------------------------------------------------------------
EUXL_C = euxlAlloc.c euxlFun2.c euxlVM.c euxlTelos.c euxlSymbol.c \
         euxlisp.c euxlFunTab.c euxlImage.c euxlIO.c euxlPrint.c \
         euxlBCodeCompiler.c euxlFun1.c euxlInit.c euxlMath.c euxlRead.c \
         euxlModule.c euxlTable.c euxlOS.c euxlSocket.c

EUXL_H = euxlisp.h euxlSymbols.h euxlTelos.h euxlBCodes.h euxlProto.h

EULX_O = $(EUXL_C:%.c=$(ARCH_DIR)/%.o)

LISP = Level-0/*.em

OTHERS = Makefile saveimage README Modules/*.em euxlisp.man euxlisp.1 \
         eunotes.html

DISTFILES = $(EUXL_C) $(EUXL_H) $(LISP) $(OTHERS)

###-----------------------------------------------------------------------------
### Commands to build EuXLisp
###-----------------------------------------------------------------------------
.PHONY: euxlisp
euxlisp: $(EUL_BIN_DIR)/euxlisp $(IMAGE_PLATFORM) $(IMAGE_MOD_PLATFORM)

$(EULX_O) : $(EUXL_H)

$(EUL_BIN_DIR)/euxlisp: $(EULX_O) | $(EUL_BIN_DIR)/.
	$(CC) $(EUXL_CFLAGS) $(EULX_O) $(EUXL_LIBS) -o $@

$(IMAGE_PLATFORM): $(EUL_BIN_DIR)/euxlisp $(LISP) saveimage
	EU_MODULE_PATH=Level-0 $(EUL_BIN_DIR)/euxlisp -n < saveimage
	mv euxlisp.wks $(IMAGE_PLATFORM)

$(IMAGE_MOD_PLATFORM): $(EUL_BIN_DIR)/euxlisp $(LISP) savemodimage
	EU_MODULE_PATH=Level-0 $(EUL_BIN_DIR)/euxlisp -n < savemodimage
	mv euxlisp_mod.wks $(IMAGE_MOD_PLATFORM)

###-----------------------------------------------------------------------------
###  Build both 32bit and 64bit on a 64bit machine
###-----------------------------------------------------------------------------
.PHONY: all
all:
	$(MAKE)
	$(MAKE) ARCH=i686

###-----------------------------------------------------------------------------
### Miscellaneous commands
###-----------------------------------------------------------------------------
version: euxlisp.c
	@awk -F'[ "]' '/const char\* euxlBanner/ {print $$13}' < euxlisp.c > version

TAGS: $(EUXL_C) $(EUXL_H) $(LISP)
	etags $(EUXL_C) $(EUXL_H) $(LISP)

.PHONY: tags
tags: TAGS

.PHONY: clean
clean:
	@rm -rf $(ARCH_DIR) TAGS

.PHONY: distclean
distclean: clean

###-----------------------------------------------------------------------------
