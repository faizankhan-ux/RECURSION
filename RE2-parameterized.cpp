#include<iostream>
using namespace std;

int Sum(int n){
     if(n==0) return 0;
     
    return n+Sum(n-1);
     
}

void reverseArray(int arr[],int n,int i,int j){
     if(i>=j){
          for(int i=0;i<n;i++){
               cout<<arr[i]<<" ";
          }
          return ;
     }
     swap(arr[i],arr[j]);
     reverseArray(arr,n,i+1,j-1);
}

//using only one pointer
void reverseArray2(int arr[],int n,int i){
     if(i>=n/2){
           for(int i=0;i<n;i++){
               cout<<arr[i]<<" ";
          }
          return ;
     }

     swap(arr[i],arr[n-i-1]);
     reverseArray2(arr,n,i+1);
}

bool Palindrome(string &s,int i){
     int n = s.size();
     if(i>=n/2) return true;
     if(s[i]!=s[n-i-1]) return false;

     Palindrome(s,i+1);
}

int Fibbonacci(int n){
   //  if(n==0) return 0;
     if(n<=1) return n ;

     return Fibbonacci(n-1) + Fibbonacci(n-2) ;
}




int main(){
     int arr[]={1,2,3,4,5,6};
    // reverseArray2(arr,6,0);
   
  cout<< Fibbonacci(3);
     return 0;
}