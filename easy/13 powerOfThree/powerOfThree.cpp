#include <iostream>

class Solution {
public:
    bool isPowerOfThree(int n) {
        double val = n;
        while (val > 1){
            val /= 3; // I removed typecasting and it ran faster, so less overhead is the goal
        }
        return val == 1;
    }
};



int main(){
    Solution sol;
    int input1 = 9;

    std::cout << "input1 = " << input1 << ", powerOfThree = " << std::boolalpha << sol.isPowerOfThree(input1) << std::endl;
}
