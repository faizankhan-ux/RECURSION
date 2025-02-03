#include<iostream>
#include<vector>
using namespace std;

/*Approach :  pick element or no pick
     pick-->substract it from target and we are on same index(if we want to repeat) , when function backtrack
     remove the element added (cause it is pass by refrence)

     not pick-->move on to next index 

     base case : when index = n and target =0 return
*/

void Findcombination(vector<int> arr,int target,int i,vector<int> &Data,vector<vector<int>> &Answer){
        if(i==arr.size()){
            if(target==0){
                Answer.push_back(Data);
            }
            return ;
        }

        //Picking the element if picked we can pick as many times we want
        if(arr[i]<=target){
            Data.push_back(arr[i]);
            Findcombination(arr,target-arr[i],i,Data,Answer);//substract element from target if picked
            Data.pop_back();//every time we have to remove the element we added
        }

          //function when we are not picking and moving to next index
        Findcombination(arr,target,i+1,Data,Answer);

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> DataToStoreElements;
        vector<vector<int>> Answer;

        Findcombination(candidates , target, 0 , DataToStoreElements , Answer);

        return Answer;
    }


int main(){
     vector<int> arr={2,2,4,5,6,7};
     int target = 4;
     vector<vector<int>> ans=combinationSum(arr,target);

     for(int i=0;i<ans.size();i++){
          for(int j=0;j<ans[i].size();j++){
               cout<<ans[i][j]<<" ";
          }cout<<endl;
     }



     return 0;
}