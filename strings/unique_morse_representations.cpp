#include "iostream"
#include "vector"
#include "unordered_map"

class Solution {
public:
    int uniqueMorseRepresentations(std::vector<std::string>& words) {
        std::unordered_map<std::string, bool> map;
        int count = 0;
        std::unordered_map<char, std::string> alphabetMap;
        std::vector<std::string> vec = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        std::vector<std::string> tempVec;
        for (size_t i = 97; i <= 122; i += 1) {
            alphabetMap[(char)i] = vec[i - 97];
        }
        for (size_t i = 0; i < words.size(); i += 1) {
            std::string temp;
            for (size_t j = 0; j < words[i].length(); j += 1) {
                temp += alphabetMap[words[i][j]];
            }
            if (!map[temp]) {
                count += 1;
                map[temp] = true;
            }
        }
        return count;
    }
};


int main() {
    Solution sol;
    std::vector<std::string> vec = {"gin","zen","gig","msg"};
    int s = sol.uniqueMorseRepresentations(vec);
    std::cout << s << std::endl;
}

