#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";

        std::string prefix = "";
        int ctr = 0;
        char c;

        for (int i = 0; i < strs[0].size(); i++){
            ctr = 0;
            c = strs[0][i];

            for(int j = 0; j < strs.size(); j++){
                if (strs[j][i] == c) ctr++;
            }
            if (c == '\0' || ctr != strs.size()) return prefix;
            else prefix += c;
        }
        return prefix;
    }
};

int main(){
    std::vector<std::string> strs1 = {"flower","flower","flower","flower"};
    std::vector<std::string> strs2 = {""};
    Solution sol;

    std::cout << "strs1: " << sol.longestCommonPrefix(strs1) << std::endl; // "flower"
    std::cout << "strs1: " << sol.longestCommonPrefix(strs2) << std::endl; // "" r: There is no common prefix among the input strings.
}
