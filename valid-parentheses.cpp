#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
                p.push(s[i]);
            } else {
                if (p.empty()) return false; // Check if the stack is empty
                if (s[i] == ']' && p.top() != '[') return false;
                if (s[i] == '}' && p.top() != '{') return false;
                if (s[i] == ')' && p.top() != '(') return false;
                p.pop();
            }
        }
        return p.empty(); // Return true if the stack is empty, false otherwise
    }
};

int main() {
    Solution sol;
    cout << boolalpha << sol.isValid("(){}[]") << endl;  // should print true
    cout << boolalpha << sol.isValid("([{}])") << endl;  // should print true
    cout << boolalpha << sol.isValid("([)]") << endl;    // should print false
    cout << boolalpha << sol.isValid("(]") << endl;      // should print false
}
