#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int sumOfNumber(int arr[],int n){

   int sum=0;
   for(int i=0;i<n;i++){
      sum+=arr[i];
   }
   return sum;

}

vector<string> splitData(string s){

   stringstream ss(s);
   vector<string>v;


  string word;
   while(ss >> word){
      cout<<word;
      v.push_back(word);
   }
   
   return v ;
}

int main(){
   int n;
   cin>>n;
   int arr[n];

   for(int i=0;i<n;i++){
      cin>>arr[i];
   }

   int sum=0;

   for(int i=0;i<n;i++){

       sum += arr[i];
   }
   
   cout<<"Sum of n numbers="<<sum<<endl;

  
   string s;
   cout<<"Enter string: ";

   cin.get();
   getline(cin,s);

  vector<string>stringsplit = splitData(s);

  for(auto x : stringsplit){
   cout<<x<<endl;
  }

   return 0;

}
