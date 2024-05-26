#include "iostream"
#include "vector"

class Solution {
public:
    int countAsterisks(std::string s) {
        int res = 0;
        int count = 0;
        for (int i = 0; i < s.length(); i += 1) {
            if (s[i] == '|' && count == 0) {
                count += 1;
            } else if (s[i] == '|' && count > 0) {
                count -= 1;
            }

            if (count == 0 && s[i] == '*') {
                res += 1;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    int count = sol.countAsterisks("yo|uar|e**|b|e***au|tifu|l");
    std::cout << count << std::endl;
}