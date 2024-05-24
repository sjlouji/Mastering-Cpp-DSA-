#include "iostream"
#include "string"
#include "vector"
#include "unordered_map"

class Solution {
public:
    int countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
        int res = 0 ;
        std::unordered_map<char, bool> val;
        for (size_t i = 0; i < allowed.length(); i += 1) {
            val[allowed[i]] = true;
        }
        for(size_t i = 0; i < words.size(); i += 1) {
            bool hasAllElements = false;
            for (size_t j = 0; j < words[i].length(); j += 1) {
                if (val[words[i][j]]) {
                    hasAllElements = true;
                } else {
                    hasAllElements = false;
                    break;
                }
            }
            if (hasAllElements) {
                res += 1;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    std::vector<std::string> vect = {"a","b","c","ab","ac","bc","abc"};
    int s = sol.countConsistentStrings("abc", vect);
    std::cout << s << std::endl;
}

