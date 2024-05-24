#include "iostream"
#include "string"

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::string str;
        std::string temp;
        for (size_t i = 0; i < s.length(); i += 1) {
            bool lastIndex = i == s.length() - 1;
            if (s[i] != ' ' && !lastIndex) {
                temp += s[i];
            } else {
                if (lastIndex) {
                    temp += s[i];
                }
                str += i == 0 ? this->reverse(temp) : " " + this->reverse(temp);
                temp.clear();
            }
        }
        str.erase(str.begin());
        return str;
    }

public:
    std::string reverse(std::string s) {
        std::string res;
        for (size_t i = s.length() - 1; i < -1; i -= 1) {
            res += s[i];
        }
        return res;
    }
};

int main() {
    Solution sol;
    std::string s = sol.reverseWords("Let's take LeetCode contest");
    std::cout << s << std::endl;
}

