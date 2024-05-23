//Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.
//
//Example 1:
//
//Input: s = "Hello"
//Output: "hello"
//Example 2:
//
//Input: s = "here"
//Output: "here"
//Example 3:
//
//Input: s = "LOVELY"
//Output: "lovely"


#include "iostream"
#include <string>

class Solution {
public:
    std::string lowerCase(std::string s) {
        std::string res;
        for (int i = 0; i < s.length(); i += 1) {
            if ((int)s[i] >= 65 && (int)s[i] <= 90) {
                res += (char)(int(s[i]) + 32);
            } else {
                res += s[i];
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    std::string lower = sol.lowerCase("HellO");
    std::cout << lower << std::endl;
}