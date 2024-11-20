#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Input: arr = [1, 4, 3, 2, 6, 5]
// Output: [5, 6, 2, 3, 4, 1]

void reverseArrayUsingRecursion(vector<int> &arr, int i, int j) {
    if(i < j) {
        swap(arr[i], arr[j]);
        reverseArrayUsingRecursion(arr, ++i, --j);
    }
}

void reverseArray(vector<int> &arr) {
    // code here
    int i = 0;
    int j = arr.size() - 1;

    while(i < j) {
        swap(arr[i], arr[j]);
        ++i;
        --j;
    }
}

int main() {
    vector<int> arr {1, 4, 3, 2, 6, 5};
    // reverseArray(arr);
    reverseArrayUsingRecursion(arr, 0, arr.size() - 1);
    for(auto a : arr) {
        cout << a;
    }

    return 0;
}
