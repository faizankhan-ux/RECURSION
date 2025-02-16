#include<iostream>
#include<vector>
using namespace std;

//function takes ds by refrence in every call
void Subsequence(int index,vector<int> &ds,int arr[],int n){

     if(index==n){ //if a subsequence s generated print it
          cout<<"[ ";
          for(auto it:ds){
               cout<<it<<" ";
          }cout<<"]"<<endl;
          return ; //and return 
     }
     //add a element and call function with i+1
     ds.push_back(arr[index]);
     Subsequence(index+1,ds,arr,n);

     //now dont pick that element and call the function
     ds.pop_back();
     Subsequence(index+1,ds,arr,n);
}

int main(){
     int arr[]={1,2,4,1};
     vector<int> ds;
     Subsequence(0,ds,arr,4);
     return 0;
}
