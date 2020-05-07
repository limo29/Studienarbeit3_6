#include "cseatreebin.h"
#include "cseatreebinint.h"
#include <stdlib.h>
#include <iostream>

using namespace std;



CSearchTreeBin::CSearchTreeBin()
  {
   pInternalRep=new CSearchTreeBinInt;
  };

void CSearchTreeBin::Insert(int dat)  
  {
   pInternalRep->Insert(dat);
  }

