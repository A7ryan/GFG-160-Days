#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void rotateArr(vector<int>& arr, int d) {
    int temp = arr.size(); // 5
    d %= 5;

    reverse(arr.begin(), arr.begin()+d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}

int main() {
    vector<int> arr {3,7,8,9,10,11};
    rotateArr(arr, 2);

    for(auto a : arr) {
        cout << a << " ";
    }
    return 0;
}
