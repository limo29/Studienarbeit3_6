#include "cseatreebinint.h"
#include <stdlib.h>
#include <iostream>

using namespace std;



CSearchTreeBinInt::CSearchTreeBinInt()
  {
   pRoot   = nullptr;
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

void CSearchTreeBinInt::Print() const {
	Print(pRoot);
}
void CSearchTreeBinInt::Print(Node*  rpNode) const {
	if (rpNode == NULL) {
	}
	else {
		if (rpNode->pLeft != nullptr) { Print(rpNode->pLeft); }
		cout << rpNode->dat << endl;
		if (rpNode->pRight != nullptr) { Print(rpNode->pRight); }


	}
	return;
}

void CSearchTreeBinInt::Loeschen() const {
	Loeschen(pRoot);
}
void CSearchTreeBinInt::Loeschen(Node* rpNode) const {
	if (rpNode == NULL) {
	}
	else {
		if (rpNode->pLeft != nullptr) { Loeschen(rpNode->pLeft); }
		if (rpNode->pRight != nullptr) { Loeschen(rpNode->pRight); }
		cout << rpNode->dat << endl;
		delete rpNode;

	}
	return;
}

