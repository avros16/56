#include <iostream>
using namespace std; 


// indexes start at 0
//you dont have to add the size into the []
// elemts are inside []


int main() {
  
  int x_arr[6] = {5,10,7,4,10,8};
 x_arr[0] = 6;

  for (int ct{0}; ct <=5; ct++){
  cout << "value of x is " <<x_arr[ct]<<endl; 
  }

  // adding[] and the number of the index will print the specific digit 

  return 0;

  
}