/*
 *  Generic Call Interface for Rexx
 *  Copyright � 2003, Florian Gro�e-Coosmann
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public
 *  License along with this library; if not, write to the Free
 *  Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * ----------------------------------------------------------------------------
 *
 * This file configures the number converting system. Have a look at
 * gci_convert.c for the requirements. This file must include gci.h.
 */

#define _GNU_SOURCE
#include <limits.h>
#include <float.h>
#include "gci.h"

#define NEED_STRTOBIGL
#define NEED_STRTOBIGUL

#define GCI_Ir       strtobigl
#define GCI_Iw(s,v)  sprintf( s, "%Ld", v )
#define GCI_I_1      signed char
#define GCI_I_1m     SCHAR_MIN
#define GCI_I_1M     SCHAR_MAX
#define GCI_I_2      signed short
#define GCI_I_2m     SHRT_MIN
#define GCI_I_2M     SHRT_MAX
#define GCI_I_4      signed int
#define GCI_I_4m     INT_MIN
#define GCI_I_4M     INT_MAX
#define GCI_I_8      signed __int64
#define GCI_I_8m     LONGLONG_MIN
#define GCI_I_8M     LONGLONG_MAX

#define GCI_Ur       strtobigul
#define GCI_Uw(s,v)  sprintf( s, "%Lu", v )
#define GCI_U_1      unsigned char
#define GCI_U_1M     UCHAR_MAX
#define GCI_U_2      unsigned short
#define GCI_U_2M     USHRT_MAX
#define GCI_U_4      unsigned
#define GCI_U_4M     UINT_MAX
#define GCI_U_8      unsigned __int64
#define GCI_U_8M     ULONGLONG_MAX

#define GCI_Fr       strtod
#define GCI_Fw(s,v)  sprintf( s, "%.*lE", LDBL_MANT_DIG/3, v )
#define GCI_F_4      float
#define GCI_F_4m     (-FLT_MAX)
#define GCI_F_4M     FLT_MAX
#define GCI_F_8      double
#define GCI_F_8m     (-DBL_MAX)
#define GCI_F_8M     DBL_MAX