#include <iostream>
#include <set> 
using namespace std; 

int main() {

set<int> A,B, UnionSet, IntersectionSet, DifferenceSet; 
// insert values A
A.insert(1);
A.insert(2);
A.insert(4);
A.insert(6);

// Insert values B
B.insert(1);
B.insert(2);
B.insert(5);
B.insert(8);

// adding values to UnionSet 
 for (int element : A )
   {
     UnionSet.insert(element); 
   }
for (int element : B) // loops through and only add elements that are diffferent
  {
    UnionSet.insert(element); 
  }

  // print out union set
cout << "Union: AUB - {";
for (int element : UnionSet) // loops through elements of set 
  {
  cout << element << " "; // prints out all elements 
  }
cout << "}"<<endl;



// Section 2 intersection

  for (int element : A)
    {
      if (B.find(element) != B.end() ) // meaning it will serach set B to find the current element of A 
      {
        IntersectionSet.insert(element); 
      }
    }
cout << "Intersection: AnB - {";
for (int element : IntersectionSet) // loops through elements of set 
  {
  cout << element << " "; // prints out all elements 
  }
cout << "}" << endl;



// Section 3 DifferenceSet
  
    for (int element : A)
    {
      if (B.find(element) == B.end() ) // meaning it will serach to confirm that b isnt present
      {
        DifferenceSet.insert(element); 
      }
    }
cout << "Difference: A-B - { ";
for (int element : DifferenceSet) // loops through elements of set 
  {
  cout << element << " "; // prints out all elements 
  }
cout << "}";  
  
  return 0;
}

