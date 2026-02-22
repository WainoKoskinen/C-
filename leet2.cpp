#include <vector>
#include <iostream>
#include <algorithm>
#include <string>  
using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] != nums[j]){
                    return nums[i];
                } 
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 4, 2, 1, 2};

    cout << "Single number: " << sol.singleNumber(nums) << endl;

    return 0;
}