#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        long long min = LLONG_MAX;
        long long max = LLONG_MIN;
        
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] < min) {
                min = arr[i];
            }
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        
        return make_pair(min, max);
    }
};

int main() {
    Solution sol;
    vector<long long int> arr = {3, 5, 1, 8, -2, 7, 10, -5};
    
    pair<long long, long long> result = sol.getMinMax(arr);
    
    cout << "Minimum: " << result.first << endl;
    cout << "Maximum: " << result.second << endl;
    
    return 0;
}
