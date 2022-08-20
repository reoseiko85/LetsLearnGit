#include<iostream>
using namespace std;

int greatest(int a,int b){

  return a>b?a:b;
}
int main(){
  int a = 20;
  int b = 30;
  int c = a * b;
  cout<<"Multiplication of a and b ="<<c;

  cout<<"Largest of two number="<<greatest(a,b);
    return 0;
}
