#include<bits/stdc++.h>
using namespace std;
void nextpermutation(vector<int>&nums){
    int lastindex = nums.size()-1;
    // finding pivot index..
    int pivotIndex = -1;
    for(int i = lastindex - 1;i>=0;i--){
        if(nums[i]<nums[i+1]){
            pivotIndex = i;
            break;
        }
    }
    // if the array is the last permutation make it the first permutation
    if(pivotIndex == -1){
    int i = 0,j = lastindex;
    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    }
    //reversing part of array after the pivot index
    int i = pivotIndex + 1,j = lastindex;
    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    // swapping pivot element and its next element 
    swap(nums[pivotIndex],nums[pivotIndex+1]);
}
int main(){
    vector<int>nums = {1,2,4,3};
    nextpermutation(nums);
    for(int i:nums){
        cout<<i<<" ";
    }
}