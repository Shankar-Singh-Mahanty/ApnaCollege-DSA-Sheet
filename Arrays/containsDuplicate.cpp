#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int element = nums[i];
            for(int j=i+1; j<nums.size(); j++){
                if(element == nums[j]){
                    return true;
                }
                /*
                writing else case here and returning false 
                will lead to error: non-void function does not return a value in all control paths
                so return it outside loop.
                */
            }
        }
        return false;
    }
};

int main(){
    vector<int> arr = {1,2,3,1};
    vector<int> arr2 = {1,2,3,4};

    Solution sol;
    cout<<sol.containsDuplicate(arr)<<endl;
    cout<<sol.containsDuplicate(arr2);

    return 0;
}