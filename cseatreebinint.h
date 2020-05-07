#ifndef SEARCHTREEBININT_H
#define SEARCHTREEBININT_H

class CSearchTreeBinInt 
  {
 public:
   CSearchTreeBinInt(void);

   void Insert(int);
   
   void Print()const;

 private:
   struct Node 
     {
      int   dat;
      Node* pLeft;
      Node* pRight;
     };
   struct Node *pRoot;

   void Insert(Node*&, int);
    void Print(Node*)const;
  };

#endif  // SEARCHTREEBININT_H
