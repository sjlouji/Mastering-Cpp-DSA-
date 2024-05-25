#include "iostream"
#include "string"
#include "vector"
#include "unordered_map"

class Solution {
public:
    std::string maximumOddBinaryNumber(std::string s) {
        std::string res;
        size_t count = std::count_if( s.begin(), s.end(), []( char c ){return c =='1';});
        for (size_t i = 0 ; i < s.length(); i += 1) {
            if (count == 1 && i == s.length() - 1) {
                res.push_back('1');
                count -= 1;
            } else if (count > 1 && i <s.length() - 1) {
                res += '1';
                count -= 1;
            } else {
                res += '0';
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    std::string s = sol.maximumOddBinaryNumber("01110");
    std::cout << s << std::endl;
}

