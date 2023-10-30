#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<char>v;
    for(int i =0;i<10;i++){
        char x;
        cin>>x;
        v.push_back(x);
    }
    int i =0;
    int j = v.size()-1;
    bool flag = true;
    for(;i<(v.size()/2)&&j>(v.size()/2);i++,j--){
        if(v[i]!=v[j]){
            cout<<"array is not a palindrome ";
            flag = false;
            break;
        }
        
    }
    if(flag){
        cout<<"THE character array is palindrome";
    }
}