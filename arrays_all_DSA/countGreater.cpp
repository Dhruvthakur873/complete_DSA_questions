/**
 * This C++ program takes input from the user for an array of 10 elements, and then asks the user for a
 * value 'x'. It then counts the number of elements in the array that are strictly greater than 'x' and
 * prints the count.
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
    int x;
    cout<<"Enter the element x: ";
    cin>>x;    
    int count = 0;
    for(int i = 0;i<10;i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<count<<" elements are strictly greatere then x ";
    
}