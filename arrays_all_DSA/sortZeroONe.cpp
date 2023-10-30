/**
 * The above C++ code sorts a vector of integers such that all the 0s are placed before the 1s.
 * 
 * @return The program is returning 0.
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {1,1,0,1,0,1,1,0};
/* The code snippet is implementing a sorting algorithm that places all the 0s before the 1s in a
vector of integers. */
    int i,j;
    i=0;j = v.size()-1;
    while(i<j){
        if(v[i]==1&&v[j]==0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        else if(v[i]==0){
            i++;
        }
        else if(v[j]==1){
            j--;
        }
    }
     // Print the sorted vector
    for (int k = 0; k < v.size(); k++) {
        cout << v[k] << " ";
    }

    return 0;

}