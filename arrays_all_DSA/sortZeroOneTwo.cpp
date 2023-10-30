#include<iostream>
#include<vector>
using namespace std;

int main() {
/* The code is initializing a vector `v` with values {1, 0, 2, 1, 2, 0, 1, 2, 0, 1} and three integer
variables `countzero`, `countone`, and `countTwo` with initial values of 0. */
    vector<int> v = {1, 0, 2, 1, 2, 0, 1, 2, 0, 1};
    int countzero = 0, countone = 0,countTwo = 0;

    /* The `for` loop is iterating over the elements of the vector `v` and counting the occurrences of
    0s, 1s, and 2s. */
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 0) {
            countzero++;
        } else if(v[i]==1){
            countone++;
        }else if(v[i] == 2){
            countTwo++;
        }
    }

   /* The `for` loop is iterating over the vector `v` and assigning values to its elements based on the
   counts of zeros, ones, and twos. */
    for (int i = 0; i < v.size(); i++) {
        if (i < countzero) {
            v[i] = 0;
        } else if(i >= countzero && i < countone+countzero){
            v[i] = 1;
        } else{
            v[i] = 2;
        }
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; // Removed extra spaces and endl
    }

    return 0;
}
