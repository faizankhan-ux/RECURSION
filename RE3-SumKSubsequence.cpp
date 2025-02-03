#include<iostream>
#include<vector>
using namespace std;

int Subsequence(int arr[],int n,int ind,int &sum,int tg){
     if(ind==n){
          if(sum==tg) return 1;
          else return 0;
     }

     //pick
     sum+=arr[ind];
     int l =Subsequence(arr,n,ind+1,sum,tg);

     //dont pick
     sum-=arr[ind];
     int r =Subsequence(arr,n,ind+1,sum,tg);

     return l+r;
}

int main(){
     vector<int> ds;
     int arr[]={1,2,1};
     int n=3;
     int tg=2;
     int sum=0;

     cout<<Subsequence(arr,n,0,sum,tg);


     return 0;
}