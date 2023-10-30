/**
 * This C++ program calculates the difference between the sum of even-indexed elements and the sum of
 * odd-indexed elements in an array.
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
    /* The code is calculating the sum of even-indexed elements and the sum of odd-indexed elements in
    the vector `v`. */
    int sumEven = 0;
    int sumOdd = 0;
    for(int i =0; i<10;i++){
        if(i%2==0){
            sumEven += v[i];
        }else{
            sumOdd += v[i];
        }
    }
    cout<<"difference = "<<sumEven - sumOdd;
}
