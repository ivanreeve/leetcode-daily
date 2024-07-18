#include <iostream>
#include <vector>
#include <algorithm>

void printVec(std::vector<int> s){
    std::cout << "{";
    for (int i = 0; i < s.size(); i++){
        std::cout << "\"" << s[i] << "\" ";
    }
    std::cout << "}" << std::endl;
}

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};

//test
int main(){
    Solution s;
    std::vector<int> v1= {3,2,2,3};
    std::vector<int> v2 = {0,1,2,2,3,0,4,2};

    std::cout << s.removeElement(v1, 3); // 2,2
    printVec(v1);                                    
    std::cout << s.removeElement(v2, 2); // 0,1,4,0,3
    printVec(v2);                                    

}
