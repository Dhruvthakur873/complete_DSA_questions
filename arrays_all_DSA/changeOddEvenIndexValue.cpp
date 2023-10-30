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
    for(int i =0; i<10;i++){
        if(i%2==0){
            v[i]+=10;
        }else{
            v[i] *=v[i];
        }
    }
    for(int i = 0;i<10;i++){
        cout<<v[i];
        cout<<" ";
        cout<<endl;
    }
}