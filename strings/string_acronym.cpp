#include "iostream"
#include "vector"

class Solution {
public:
    bool isAcronym(std::vector<std::string>& words, std::string s) {
        bool isAcronym = true;
        if(words.size() == s.length()) {
            for (size_t i = 0; i < words.size(); i += 1) {
                if (words[i][0] != (s[i])) {
                    isAcronym = false;
                    break;
                }
            }
        } else {
            isAcronym = false;
        }
        return isAcronym;
    }
};


int main() {
    Solution sol;
    std::vector<std::string> vec = {"alice","bob","charlie", "louji"};
    bool s = sol.isAcronym(vec, "abca");
    std::cout << s << std::endl;
}

