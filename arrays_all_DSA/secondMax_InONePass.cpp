/**
 * This C++ program finds the second maximum element in an array of 10 integers.
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
    for(int i = 0;i<10;i++){
        if(max<v[i]){
            smax = max;
            max = v[i];
        }else if(smax<v[i]&&v[i]!=max){
            smax = v[i];
        }
    }
    cout<<"The second maximum element is "<<smax;

}