#include "cseatreebin.h"
#include <iostream>

using namespace std;


void main() 
  {
   CSearchTreeBin MyTree;

   MyTree.Insert(5);
   MyTree.Insert(15);
   MyTree.Insert(7);
   MyTree.Insert(-5);
   MyTree.Insert(6);
   MyTree.Insert(3);
   MyTree.Insert(650);
   MyTree.Insert(20);
   MyTree.Insert(-20);
   MyTree.Insert(510);

   MyTree.Print(); cout << endl;
  // cout << "Zahl der Baumknoten: " << MyTree.GetNrOfNodes() << endl;
   // Zahl sollte beim 2. Aufruf nicht mehr neu berechnet werden
  // cout << "Zahl der Baumknoten: " << MyTree.GetNrOfNodes() << endl;
   // ... erst danach wieder, falls Baum geaendert
   //MyTree.Insert(99);
   //cout << "Zahl der Baumknoten: " << MyTree.GetNrOfNodes() << endl;
  }
