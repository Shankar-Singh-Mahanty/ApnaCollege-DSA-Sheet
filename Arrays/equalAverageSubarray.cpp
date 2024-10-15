#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;

bool hasEqualAverageSubarrays(vector<int>& arr) {
    int n = arr.size();
    unordered_map<double, int> averages;

    // Iterate through all possible subarrays
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += arr[j];
            double avg = static_cast<double>(sum) / (j - i + 1);

            // If the average has already been seen, return true
            if (averages.count(avg)) {
                return true;
            } else {
                averages[avg] = 1; // Store the average
            }
        }
    }
    return false;
}

int main() {
    string input;
    vector<int> arr;

    // Get the comma-separated input
    getline(cin, input);
    stringstream ss(input);
    string number;

    while (getline(ss, number, ',')) {
        arr.push_back(stoi(number));
    }

    bool result = hasEqualAverageSubarrays(arr);
    cout << (result ? "true" : "false") << endl;

    return 0;
}