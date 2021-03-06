/// Copyright 2010 Henry G. Weller
///-----------------------------------------------------------------------------
/// ---                 EuLisp System 'youtoo'
///-----------------------------------------------------------------------------
/// Title: Low-level readline prompt support
///  Library: Comptime2
///  Authors: Henry G. Weller
///  Maintainer: Henry G. Weller
///-----------------------------------------------------------------------------
#ifdef READLINE
#include "../Runtime/Ff/eul-ext.h"

// Get the prompt-string from the i-rep module using `prompt-string'
#include "../Comptime2/u2/i-rep.h"
EUL_DEFINTERN(prompt_string, "prompt-string", 0, i_rep)

char* eul_prompt_string()
{
    return eul_string_as_c_string(prompt_string());
}

#endif

///-----------------------------------------------------------------------------
