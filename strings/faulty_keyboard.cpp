#include "iostream"

class Solution {
public:
    std::string finalString(std::string s) {
        std::string res;
        for (size_t i = 0; i < s.length(); i += 1) {
            if (s[i] == 'i') {
                res = this->reverse(res);
            } else {
                res += s[i];
            }
        }
        return res;
    }

public:
    std::string reverse(std::string s) {
        std::string res;
        for (int i = s.length() - 1; i >= 0; i -= 1) {
            res += s[i];
        }
        return res;
    }
};

int main() {
    Solution sol;
    std::string s = sol.finalString("string");
    std::cout << s << std::endl;
}

