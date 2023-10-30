/**
 * This C++ program finds the three largest element in an array of 10 integers.
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    cout<<"enter the elements of array";
    for(int i = 0;i<10;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    int thirdmax = INT_MIN;
    for(int i = 0;i<10;i++){
        if(max<v[i]){
            thirdmax = smax;
            smax = max;
            max = v[i];
            
        }else if(smax<v[i]&&v[i]!=max){
            smax = v[i];
        }
        else if(thirdmax<v[i]&&v[i]!=smax){
            thirdmax = v[i];
        }
    }
    cout<<"The three largest element are "<<max<<" "<<smax<<" and"<<thirdmax;

}