/**
 * This C++ program checks if an array  is sorted or not.
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
    }bool flag = true;
    for(int i = 0;i<10;i++){
        if(v[i]>v[i+1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Array is sorted";
    }else{
        cout<<"Array is not sorted";
    }
}