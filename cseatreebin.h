

#ifndef SEARCHTREEBIN_H
#define SEARCHTREEBIN_H

class CSearchTreeBinInt;

class CSearchTreeBin{
  public:
      CSearchTreeBin(void);

      void Insert(int);
      void Print() const;
      int GetNrOfNodes (void) const;
      ~CSearchTreeBin(void);
  
    private:
        CSearchTreeBinInt *pInternalRep;
        mutable int counter;
        mutable bool flag;
   
  };

#endif  // SEARCHTREEBIN_H

