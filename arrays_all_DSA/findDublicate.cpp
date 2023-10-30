/**
 * This C++ program takes input from the user for an array of 10 elements, sorts the array, and then
 * checks for duplicate elements.
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
   /* The code snippet is creating a vector named `v` of type `int`. It then prompts the user to enter
   the elements of the array. It uses a for loop to iterate 10 times and within each iteration, it
   reads an integer value from the user using `cin` and adds it to the vector `v` using the
   `push_back()` function. */
    vector<int>v;
    cout<<"enter the elements of array";
    for(int i = 0;i<10;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
/* The code snippet is checking for duplicate elements in the sorted array `v`. */

    for(int i = 0;i<10;i++){
        if(v[i]==v[i+1]){
            cout<<" It contain dublicate of "<<v[i]<<endl;
        }
    }

}