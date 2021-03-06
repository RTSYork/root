// @(#)root/base:$Id$
// Author: Fons Rademakers   28/11/96

/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TTime                                                                //
//                                                                      //
// Basic time type with millisecond precision.                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TTime.h"
#include "TString.h"
#include "TError.h"


ClassImp(TTime)

//______________________________________________________________________________
const char *TTime::AsString() const
{
   // Return the time as a string.

   return Form("%lld", fMilliSec);
}

//______________________________________________________________________________
TTime::operator long() const
{
#ifndef R__B64
   if (fMilliSec > (Long64_t)kMaxInt)
      Error("TTime::operator long()", "time truncated, use operator long long");
#endif
   return (Long_t) fMilliSec;
}

//______________________________________________________________________________
TTime::operator unsigned long() const
{
#ifndef R__B64
   if (fMilliSec > (Long64_t)kMaxUInt)
      Error("TTime::operator unsigned long()", "time truncated, use operator unsigned long long");
#endif
   return (ULong_t) fMilliSec;
}
