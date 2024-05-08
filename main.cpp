#include <iostream>
using namespace std; 


// indexes start at 0
//you dont have to add the size into the []
// elemts are inside []
// can store size in sperate variable 
// rand()%100+1;
//ctime, srand(time (null))
//const -- doesnt allow change : const int {0}; read only 
int main() {
  
  
  int ct{0};
  int x_arr[] = {5,10,7,4,10,8};
  

while (ct <6) {
  
  // or you can say enter element (ct+1)
  cout << "Enter a number for index " << ct << endl;
  cin >> x_arr[ct]; 
  ct++;
  
}








  
    // for (int ct{0}; ct <=5; ct++){
    // cout << "value of x is " <<x_arr[ct]<<endl; 
    // }

    // // adding[] and the number of the index will print the specific digit 

    return 0;
}