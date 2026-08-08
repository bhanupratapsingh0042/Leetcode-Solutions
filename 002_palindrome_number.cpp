#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long original = x;
        long long reversed = 0;
        while(x > 0) {
            int lastdigit = x % 10;
            reversed = (reversed * 10) + lastdigit;
            x = x / 10;
        }
        return original == reversed;
    }
};
