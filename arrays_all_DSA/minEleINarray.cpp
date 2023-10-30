#include<bits/stdc++.h>
using namespace std;
int main(){
/* The code `vector<int>v;` is declaring a vector named `v` that will store integers. */
    vector<int>v;
    cout<<"enter the elements of array";
   /* The code block `for(int i = 0;i<10;i++){ int x; cin>>x; v.push_back(x); }` is taking input from
   the user for 10 elements and storing them in a vector `v`. Each element is read using `cin` and
   then added to the vector using the `push_back()` function. */
    for(int i = 0;i<10;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
 /* The line `int min = INT_MAX;` is initializing the variable `min` with the maximum possible value
 for an `int` data type. This is done so that any element in the array `v` will be smaller than the
 initial value of `min`. By setting `min` to `INT_MAX`, we ensure that the first element of the
 array will always be smaller than `min` and can be used as a starting point for comparison. */
    int min = INT_MAX;
   /* The code block `for(int i = 0;i<10;i++){ if(min>v[i]){ min = v[i]; } }` is finding the minimum
   element in the array `v`. */
    for(int i = 0;i<10;i++){
        if(min>v[i]){
            min = v[i];
        }
    }
    cout<<"The minimum element in the arrray is "<<min;

}