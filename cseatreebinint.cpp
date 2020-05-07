#include "cseatreebinint.h"
#include <stdlib.h>
#include <iostream>

using namespace std;



CSearchTreeBinInt::CSearchTreeBinInt()
  {
   pRoot   = 0;
  };

void CSearchTreeBinInt::Insert(int dat)  
  {
   Insert(pRoot, dat);
  }

void CSearchTreeBinInt::Insert(Node*& rpNode, int dat) 
  {
   if (rpNode == NULL)
     {
      rpNode        = new Node;
      rpNode->dat   = dat;
      rpNode->pLeft = rpNode->pRight = NULL;
     }
   else
     {
      if (dat < rpNode->dat)            // kleiner?
         Insert(rpNode->pLeft, dat);    // dann nach links,
      else                              // sonst
         Insert(rpNode->pRight, dat);   // nach rechts.
     }
  }

