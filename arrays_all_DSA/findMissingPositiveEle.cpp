/**
 * The code checks for missing numbers in a given vector.
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {1,2,3,4,6,7,8,9,10};
    for(int i = 0;i<v.size()-1;i++){
        if(v[i]+1 != v[i+1]){
            cout<<v[i]+1<<" is missing at index "<<i+1<<endl;
        }
    }
    
}