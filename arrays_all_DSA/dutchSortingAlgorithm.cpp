#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {2,0,1,1,0,1,2,2,0,1};
    int m,l,h;
    m=0;
    l=0;
    h = nums.size()-1;
    while(m<h){
        if(nums[m]==0){
            swap(nums[m],nums[l]);
            l++;
            m++;
        }
        else if(nums[m]==2){
            swap(nums[m],nums[h]);
            h--;
        }
        else{
            m++;
        }
    }
    for (int k = 0; k < nums.size(); k++) {
        cout << nums[k] << " ";
    }
}