//Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
//Output: "leetcode"
//Explanation: As shown, "codeleet" becomes "leetcode" after shuffling.

#include "iostream"
#include "vector"

std::string restoreString(std::string s, std::vector<int>& indices) {
    std::string res = s;
    for (int i = 0; i < indices.size(); i += 1) {
        res[indices[i]] = s[i];
    }
    return res;
}

int main() {
    std::vector<int> vect = {4,5,6,7,0,2,1,3};
    std::string result = restoreString("codeleet", vect);
    std::cout << result;
}