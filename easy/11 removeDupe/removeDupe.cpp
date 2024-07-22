#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int slow = 0;

        for (int fast = 1; fast < nums.size(); ++fast){
            if(nums[fast] != nums[slow]){
                ++slow;
                nums[slow] = nums[fast];
            }
        }
        
        return slow+1;
    }
};

int main(){
    Solution sol;
    std::vector<int> v1 = {1,1,2};
    std::vector<int> v2 = {0,0,1,1,1,2,2,3,3,4};

    std::cout << sol.removeDuplicates(v1) << std::endl; // 2 because {1,_,2}
    std::cout << sol.removeDuplicates(v2) << std::endl; // 5 because {0,1,2,3,4,_,_,_,_,_}
}
