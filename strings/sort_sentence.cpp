#include "iostream"
#include "vector"
#include "string"

class Solution {
public:
    std::string sortSentence(std::string s) {
        std::string res;
        std::string temp;
        std::vector<std::string> vect;
        std::vector<std::string> tempVect;
        for (size_t i = 0; i < s.length(); i += 1) {
            if (s[i] != ' ' && i != s.length() - 1) {
                temp += s[i];
            } else {
                tempVect.emplace_back(i == s.length() - 1 ? temp + s[i] : temp);
                temp = " ";
            }
        }
        for (size_t i = 0; i < tempVect.size(); i += 1) {
            std::string tempVar = tempVect[i];
            int lengthOfEachWord = tempVar.length();
            int index = tempVar[lengthOfEachWord - 1] - '0';
            if (vect.size() <= index) {
                vect.resize(index);
            }
            tempVect[i].pop_back();
            tempVect[i].erase(0, tempVect[i].find_first_not_of(' '));
            vect[index - 1] = tempVect[i];
        }
        for (size_t i = 0; i < vect.size(); i += 1) {
            res += i != 0 ? " " + vect[i] : vect[i];
        }
        return res;
    }
};

int main() {
    Solution sol;
    std::string s = sol.sortSentence("is2 sentence4 This1 a3");
    std::cout << s << std::endl;
}

