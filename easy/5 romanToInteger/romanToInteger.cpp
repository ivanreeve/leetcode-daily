#include <iostream>
#include <string>

/*
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/


class Solution {
public:
    int romanToInt(std::string s) {
        int num = 0;
        for (int i = 0; i < s.length(); i++){
            switch(s[i]){
                case 'I': num += 1; break;
                case 'V': {
                    if (i != 0 && s[i-1] == 'I') num += (5-(2*1));
                    else num += 5;
                    break;
                }
                case 'X': {
                    if (i != 0 && s[i-1] == 'I') num += (10-(2*1));
                    else num += 10;
                    break;
                }
                case 'L': {
                    if (i != 0 && s[i-1] == 'X') num += (50-(2*10));
                    else num += 50;
                    break;
                }
                case 'C': {
                    if (i != 0 && s[i-1] == 'X') num += (100-(2*10));
                    else num += 100;
                    break;
                }
                case 'D': {
                    if (i != 0 && s[i-1] == 'C') num += (500-(2*100));
                    else num += 500;
                    break;
                }
                case 'M': {
                    if (i != 0 && s[i-1] == 'C') num += (1000-(2*100));
                    else num += 1000;
                    break;
                }
            }
        }
        return num;
    }
};

// test
int main(){
    Solution sol;
    std::cout << sol.romanToInt("VII") << std::endl; // should return 8
    std::cout << sol.romanToInt("III") << std::endl; // should return 3
    std::cout << sol.romanToInt("XXI") << std::endl; // should return 21
    std::cout << sol.romanToInt("LVIII") << std::endl; // should return 58
    std::cout << sol.romanToInt("XIX") << std::endl; // should return 19
}
