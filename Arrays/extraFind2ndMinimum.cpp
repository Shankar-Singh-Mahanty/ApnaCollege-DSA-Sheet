#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int min = INT_MAX;
        int min2 = INT_MAX;
        
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] < min) {
                min2 = min;
                min = arr[i];
            } else if(arr[i] < min2 && arr[i] != min) {
                min2 = arr[i];
            }
        }
        
        if(min2 == INT_MAX) {
            return {-1}; // If there is no second minimum
        }
        
        return {min, min2};
    }
};

int main() {
    Solution sol;
    vector<int> arr = {3, 5, 1, 8, -2, 7, 10, -5};
    // vector<int> arr = {1, 1, 1};   // try this for -1
    
    vector<int> result = sol.minAnd2ndMin(arr);
    
    if(result.size() == 1 && result[0] == -1) {
        cout << "No second minimum found:" << result[0] << endl;
    } else {
        cout << "Minimum: " << result[0] << endl;
        cout << "Second Minimum: " << result[1] << endl;
    }
    
    return 0;
}
