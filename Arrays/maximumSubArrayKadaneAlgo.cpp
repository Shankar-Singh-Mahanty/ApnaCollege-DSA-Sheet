#include<iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum = nums[0];
        int max_sum = nums[0];

        for(int i=1; i<nums.size(); i++){
            current_sum = max(nums[i], current_sum + nums[i]);  // restting of new subarray or continue with existing one is decided by this max
            max_sum = max(current_sum, max_sum);
        }
        return max_sum;
    }
};

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    Solution sol;
    cout<<sol.maxSubArray(arr);

    return 0;
}

// time complexity = O(n)