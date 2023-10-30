#include<bits/stdc++.h>
using namespace std;
vector<int> merge1(vector<int>arr1,vector<int>arr2){
    // this is merging the two sorted arrays in the another sorted array
vector<int>res(arr1.size()+arr2.size());
    int i=0,j=0,k=0;
    while(i<arr1.size()&&j<arr2.size()){
        if(arr1[i]<arr2[j]){
            res[k] = arr1[i];
            k++;
            i++;
        }else if(arr1[i]>arr2[j]){
            res[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i<arr1.size()){
        res[k] = arr1[i];
        k++;
        i++;
    }
    while(j<arr2.size()){
        res[k] = arr2[j];
        k++;
        j++;
    }
    return res;
}
vector<int> merge2(vector<int>arr1,vector<int>arr2){
    int k = arr1.size()-1;
    int i = (arr1.size()-arr2.size())-1;
    int j = arr2.size()-1;
    while(i>=0&&j>=0){
        if(arr1[i]>arr2[j]){
            arr1[k] = arr1[i];
            k--;
            i--;
        }else{
            arr1[k]=arr2[j];
            k--;
            j--;
        }
    }while(i>=0){
        arr1[k] = arr1[i];
        i--;
        k--;
    }
    while(j>=0){
        arr1[k] = arr2[j];
        k--;
        j--;
    }
    return arr1;
}
int main(){
    // vector<int>arr1 = {1,4,5,8,11};
    // vector<int>arr2 = {2,3,6,7,9,10,12};
    // vector<int>res  = merge(arr1,arr2);
    // vector<int>arr1 = {1,4,5,8,0,0,0,0,0,0};
    // vector<int>arr2 = {2,3,6,7,9,10};
    // arr1 = merge2(arr1,arr2);
}