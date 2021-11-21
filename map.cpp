#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
   
   
   int arr[]={1,20,3,1,20,44,20,6,20};
   int n=sizeof(arr)/sizeof(int);
  unordered_map<int,int>m;
  
     for(int i=0;i<n;i++){
         m[arr[i]]++;

     }

      unordered_map<int,int>::iterator it=m.begin();

      for(;it!=m.end();it++){

           cout<<it->first<<" "<<it->second<<endl;

      }

    return 0;
}