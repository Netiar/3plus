// This C++ program compiles fine
// as index out of bound
// is not checked in C.
//There is no index out of bounds checking in C/C++.

#include<iostream>
using namespace std;
int main ()
{
    int arr[2];
  
    cout << arr[3] << " ";
    cout << arr[-2] << " ";

}