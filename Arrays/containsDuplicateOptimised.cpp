#include<iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int num:nums){
            if(seen.count(num)){
                return true;
            }
            seen.insert(num);
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