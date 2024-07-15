#include <iostream>
#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) { // assume array is sorted
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == target || target < nums[i]) return i;
            else if (i == nums.size()-1) return i+1;
        }
        return 0;
    }
};

// Test

int main(){
    std::vector<int> vec = {1,3,5,6};
    Solution sol;

    std::cout << sol.searchInsert(vec, 5) << std::endl; // should return 2
    std::cout << sol.searchInsert(vec, 2) << std::endl; // should return 1
    std::cout << sol.searchInsert(vec, 7) << std::endl; // should return 4
}
