#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::string s;
        std::vector<std::string> answer;
        for (int i = 1; i <= n; i++){
            if (i % 3 == 0) s = "Fizz";
            if (i % 5 == 0) s += "Buzz";
            if (s.empty()){
                answer.push_back(std::to_string(i));
            }
            else{
                answer.push_back(s);
            }
            s = "";
        }
        return answer;
    }
};

void printVec(std::vector<std::string> s){
    std::cout << "[";
    for (int i = 0; i < s.size(); i++){
        std::cout << "\"" << s[i] << "\" ";
    }
    std::cout << "]" << std::endl;
}

// test cases
int main(){
    Solution sol;
    printVec(sol.fizzBuzz(3)); // ["1","2","Fizz"]
    printVec(sol.fizzBuzz(5)); // ["1","2","Fizz","4","Buzz"]
    printVec(sol.fizzBuzz(15)); // ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
}                               //
