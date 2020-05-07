#ifndef SEARCHTREEBIN_H
#define SEARCHTREEBIN_H

class CSearchTreeBinInt;

class CSearchTreeBin 
  {
 public:
   CSearchTreeBin(void);

   void Insert(int);
   void Print() const;
  
 private:
   CSearchTreeBinInt *pInternalRep;

   
  };

#endif  // SEARCHTREEBIN_H
