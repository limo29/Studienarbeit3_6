

#include "cseatreebin.h"
#include "cseatreebinint.h"
#include <stdlib.h>
#include <iostream>

using namespace std;



CSearchTreeBin::CSearchTreeBin()
  {
      pInternalRep=new CSearchTreeBinInt;
      this->flag = false;
      this->counter = 0;
  };

void CSearchTreeBin::Insert(int dat)
  {
      this->flag = false;
      pInternalRep->Insert(dat);
  
  }

 void CSearchTreeBin::Print() const{
    pInternalRep->Print();
}

 CSearchTreeBin::~CSearchTreeBin(){
    pInternalRep->Loeschen();
     pInternalRep->Print();
}
  

int CSearchTreeBin::GetNrOfNodes (void) const{
    
    if(this->flag == false){
        int temp = (pInternalRep->Number_of_Nodes());
        this->counter = temp;
        this->flag = true;
        return this->counter;
    }
    
    else{
        return this->counter;
    }
    return 0;
}

