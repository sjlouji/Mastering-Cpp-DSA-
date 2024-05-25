#include "iostream"
#include "vector"
#include "unordered_map"

class Solution {
public:
    std::string removeOuterParentheses(std::string s) {
        std::string result;
        int count = 0;
        for (size_t i = 0; i < s.length(); i += 1) {
            std::cout << "Iteration" << i + 1 << std::endl;
            std::cout << "s[i]: "<<s[i]<< "; " << count << std::endl;
            if (s[i] == '(') {
                if (count > 0) {
                    result += '(';
                    count += 1;
                } else {
                    count += 1;
                }
            } else {
                if (count > 1) {
                    result += ')';
                    count -= 1;
                } else {
                    count -= 1;
                }
            }

        }
        return result;
    }
};


int main() {
    Solution sol;
    std::string s = sol.removeOuterParentheses("(()())(())(()(()))");
    std::cout << s << std::endl;
}

