#include "iostream"
#include "unordered_map"

class Solution {
public:
    bool checkIfPangram(std::string s) {
        std::unordered_map<char, bool> alphabets;
        for (size_t i = 97; i < 123; i += 1) {
            alphabets[(char)i] = true;
        }
        for (size_t i = 0; i < s.length(); i += 1) {
            alphabets.erase(s[i]);
        }
        return alphabets.empty();
    }
};

int main() {
    Solution sol;
    bool s = sol.checkIfPangram("thequickbrownfoxjumpsoverthelazydog");
    std::cout << s << std::endl;
}

