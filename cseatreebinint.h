#ifndef SEARCHTREEBININT_H
#define SEARCHTREEBININT_H

class CSearchTreeBinInt 
  {
 public:
   CSearchTreeBinInt(void);

   void Insert(int);

 private:
   struct Node 
     {
      int   dat;
      Node* pLeft;
      Node* pRight;
     };
   struct Node *pRoot;

   void Insert(Node*&, int);
  };

#endif  // SEARCHTREEBININT_H
