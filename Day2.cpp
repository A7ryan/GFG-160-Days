#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Space Complexity: (0)1
// Time Complexity: (0)n
void pushZerosToEnd(vector<int>& arr) {
    // code here
    int j = -1;
        
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }
        
    if(j == -1) return;
        
    for(int i = j+1; i < arr.size(); i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }        
}

int main() {
    vector<int> arr {1, 0 , 0, 4, 2};
    pushZerosToEnd(arr);
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
    }
    return 0;
}
