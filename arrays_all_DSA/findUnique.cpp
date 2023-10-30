#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    for(int i =0;i<10;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i =0;i<9;i++){
        if(v[i]==v[i+1]){
            v[i] =INT_MIN;
            v[i+1] = INT_MIN;
        }
    }
    for(int i =0;i<10;i++){
        if(v[i]>INT_MIN){
            cout<<v[i]<<" is the unique element";
            break;
        }
    }
}