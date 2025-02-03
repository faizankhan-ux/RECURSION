#include<iostream>
#include<vector>
using namespace std;

 //Time coplexity : O(2^n)
 //Space complexity : 
 void function(vector<int> arr,int n,int index,vector<int> &ds,vector<vector<int>> &ans){
     if(index==n){
          vector<int> row;
          for(auto it:ds){
               row.push_back(it);
          }
          ans.push_back(row);
          return;
     }

     ds.push_back(arr[index]);
     function(arr,n,index+1,ds,ans);

     ds.pop_back();
    function(arr,n,index+1,ds,ans);

 }

int main(){

     vector<int> arr={3,1,4,5};
     int n = arr.size();
     vector<int> ds;
     vector<vector<int>> ans;

     function(arr,4,0,ds,ans);

     for(int i=0;i<ans.size();i++){
          for(int j=0;j<ans[i].size();j++){
               cout<<ans[i][j]<<" ";
          }cout<<"\n";
     }


     return 0;
}