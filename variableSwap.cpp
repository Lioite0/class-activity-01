//
// Created by ellio on 1/27/2025.
//
#include <iostream>
using namespace std;
int main(){
    int a = 5;
   int  b = 2;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;
    return 0;
  }

 void swap(int& a, int& b){
   int c = a;
   a = b;
   b = c;
 }