class Solution {
public:
    bool isPalindrome(int x) {
        long long temp_x = x, reversed_num = 0;
        while (temp_x > 0){
            reversed_num = (reversed_num * 10) + (temp_x % 10);
            temp_x = temp_x / 10;
        }

        if (reversed_num == x){
            return true;
        }

        else return false;
    }
};
