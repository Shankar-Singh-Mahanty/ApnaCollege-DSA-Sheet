#include<iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max = INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int sum = 0;    // reset sum before each sub array
                for(int k=i; k<=j; k++){
                    sum += nums[k]; // sum the value not the index k
                    if(sum > max){
                        max = sum;
                    }
                }
            }
        }
        return max;
    }
};

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    Solution sol;
    cout<<sol.maxSubArray(arr);

    return 0;
}

// Time complexity: O(n^3)