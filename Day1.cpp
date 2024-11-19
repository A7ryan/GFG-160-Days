#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Space Complexity: (0)1
// Time Complexity: (0)n
int getSecondLargest(vector<int> &arr) {
    // Code Here
    int max_element = arr[0];
    int second_element = -1;
        
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > max_element) {
            second_element = max_element;
            max_element = arr[i];
        }
        else if(arr[i] > second_element && arr[i] < max_element){
            second_element = arr[i];
        }       
    }
    return second_element;
}


int main() {
    vector<int> arr {1, 0 , 0, 4, 2};
    int s = getSecondLargest(arr);
    cout << s << endl;
    return 0;
}
