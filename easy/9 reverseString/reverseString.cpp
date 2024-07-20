#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        std::vector<char> tmp = s;
        int s_pos = 0;
        for (int i = tmp.size()-1; i >= 0; --i){
            s[s_pos] = tmp[i];
            s_pos++;
        }
    }
};

int main(){
    Solution sol;
    std::vector<char> s = {'h','e','l','l','o'};
    
    sol.reverseString(s);
    for (int i = 0; i < s.size(); i++) std::cout << s[i] << " ";
}
