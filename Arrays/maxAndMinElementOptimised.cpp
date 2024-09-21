#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        if (arr.empty()) {
            return make_pair(LLONG_MAX, LLONG_MIN); // Handle empty vector case
        }

        long long min, max;
        int n = arr.size();

        // Initialize min and max
        if (n % 2 == 0) {   // even lengthed array
            if (arr[0] < arr[1]) {
                min = arr[0];
                max = arr[1];
            } else {
                min = arr[1];
                max = arr[0];
            }
            // Start loop from the 2nd pair
            for (int i = 2; i < n; i += 2) {
                if (arr[i] < arr[i + 1]) {
                    if (arr[i] < min) min = arr[i];
                    if (arr[i + 1] > max) max = arr[i + 1];
                } else {
                    if (arr[i + 1] < min) min = arr[i + 1];
                    if (arr[i] > max) max = arr[i];
                }
            }
        } else {    // odd lengthed array
            min = max = arr[0];
            // Start loop from the 1st element
            for (int i = 1; i < n; i += 2) {
                if (i + 1 < n) { // imp condition to avoid out of bound
                    if (arr[i] < arr[i + 1]) {
                        if (arr[i] < min) min = arr[i];
                        if (arr[i + 1] > max) max = arr[i + 1];
                    } else {
                        if (arr[i + 1] < min) min = arr[i + 1];
                        if (arr[i] > max) max = arr[i];
                    }
                } else { // Handle the last element if n is odd
                    if (arr[i] < min) min = arr[i];
                    if (arr[i] > max) max = arr[i];
                }
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


/*
Explanation:-
Pairwise Comparison: The elements are compared in pairs, reducing the number of comparisons.
Initialization: The initial values of min and max are set based on the first pair of elements.
Looping: The loop increments by 2, comparing pairs of elements and updating min and max accordingly.
This approach ensures fewer comparisons, making it more efficient, especially for large vectors.
*/