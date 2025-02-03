#include<iostream>
using namespace std;

int PrintName(int n){
     if(n==0) return 0; //base case
     cout<<"Faizan"<<endl;

     PrintName(--n); // calling function
}

int PrintReverseNumbers(int n){
     if(n==0) return 0;
     cout<<n;
     PrintReverseNumbers(--n);
}

int PrintNumbers(int n,int cnt=1){

     
     cout<<cnt;
     if(cnt==n) return 0;
     PrintNumbers(n,++cnt);
     
}

int PrintName2(int n){
     
     cout<<"Faizan"<<endl;
     if(n==0) return 0; //base case

     PrintName(--n); // calling function
}
void NumberWithoutPlusOne(int n){
   
     if(n<1) return ;
     NumberWithoutPlusOne(--n);
      cout<<n+1<<" ";
     
}

int main(){

     //PrintName2(5);
    // PrintReverseNumbers(5);
    NumberWithoutPlusOne(7);
     return 0;
}