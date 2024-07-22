#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        if (s == t) return true;
        else return false;
    }
};

int main(){
    Solution sol;
    std::cout << std::boolalpha << sol.isAnagram("anagram", "nagaram") << std::endl; // true
    std::cout << std::boolalpha << sol.isAnagram("rat", "car") << std::endl; //false
}
