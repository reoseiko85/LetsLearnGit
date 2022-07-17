#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
   
    int arr[]={10,10,32,44,20,32,44,55};
    int n=sizeof(arr)/sizeof(int);

    unordered_set<int>s(arr,arr+n);
  
    cout<<"Unique elements";
    for(auto x:s){

        cout<<x<<endl;
    }

    return 0;
}