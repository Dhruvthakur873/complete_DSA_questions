#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {1,-2,3,-4,5,-6,7,-8,9};
    int i,j;
    i=0;j = v.size()-1;
    while(i<j){
        if(v[i]>0&&v[j]<0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        else if(v[i]<0){
            i++;
        }
        else if(v[j]>0){
            j--;
        }
    }
     // Print the sorted vector
    for (int k = 0; k < v.size(); k++) {
        cout << v[k] << " ";
    }

    return 0;

}