// documentation of Solution shall be added later

#include <iostream>

class Solution {
public:
    int climbStairs(int n) {
        int total = 1;
        for (int i = 0; i < (n/2); i++){ // ++i gets evaluated in 1st iteration, so 1st iteration i = 1 despite being initialized as 0
            total += (n-((i*2)+1));
        }
        return total;
    }
};

int main(){
    Solution sol;
    int input1 = 2;
    int input2 = 3;
    int input3 = 5;
    int input4 = 4;

    std::cout << "steps = " << input1 << ", permutations = " << sol.climbStairs(input1) << std::endl;
    std::cout << "steps = " << input2 << ", permutations = " << sol.climbStairs(input2) << std::endl;
    std::cout << "steps = " << input3 << ", permutations = " << sol.climbStairs(input3) << std::endl;
    std::cout << "steps = " << input4 << ", permutations = " << sol.climbStairs(input4) << std::endl;
}
