//
//  cseatreebinint.h


#ifndef SEARCHTREEBININT_H
#define SEARCHTREEBININT_H

class CSearchTreeBinInt
  {
 public:
   CSearchTreeBinInt(void);

      void Insert(int);

      void Print()const;
      void Loeschen(void);
      int Number_of_Nodes(void);
    

 private:
      struct Node
      {
          int   dat;
          Node* pLeft;
          Node* pRight;
      };
      struct Node *pRoot;
      
      mutable int counter;

      void Insert(Node*&, int);
      void Print(Node*)const;
      void Loeschen(Node*&);
      void Count_Number_of_Nodes(Node*& rpNode)const;
  };

#endif  // SEARCHTREEBININT_H

