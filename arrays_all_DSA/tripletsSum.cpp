#include<bits/stdc++.h>
using namespace std;
void TripletSum(vector<int>&nums,int target){
    for(int i = 0;i<nums.size()-2;i++){
        for(int j = i+1;j<nums.size()-1;j++){
            for(int k = j+1;k<nums.size();k++){
                if(nums[i]+nums[j]+nums[k]==target){
                    cout<<nums[i]<<" , "<<nums[j]<<" and "<<nums[k]<<endl;;
                }
            }
        }
    }
}
int main(){
vector<int>nums = {2,1,3,5,4,8,7,6,9,10};
int target = 9;
TripletSum(nums,target);
}