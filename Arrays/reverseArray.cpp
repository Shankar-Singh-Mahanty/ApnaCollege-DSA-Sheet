#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> reverseArray(vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i < n / 2; ++i) {
            swap(arr[i], arr[n - i - 1]);
        }
        return arr;
    }
};

int main() {
    vector<int> arr = {2, 4, 6, 8, 10};

    Solution sol;
    vector<int> reversedArr = sol.reverseArray(arr);

    for (int x : reversedArr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
