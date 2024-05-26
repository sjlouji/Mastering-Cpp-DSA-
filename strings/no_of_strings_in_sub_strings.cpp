//Given an array of strings patterns and a string word, return the number of strings in patterns that exist as a substring in word.
//
//A substring is a contiguous sequence of characters within a string.
//
//Example 1:
//
//Input: patterns = ["a","abc","bc","d"], word = "abc"
//Output: 3
//Explanation:
//- "a" appears as a substring in "abc".
//- "abc" appears as a substring in "abc".
//- "bc" appears as a substring in "abc".
//- "d" does not appear as a substring in "abc".
//3 of the strings in patterns appear as a substring in word.

#include "iostream"
#include "vector"

using namespace std;

class Solution {
public:
    static int numOfStrings(vector<string>& patterns, const string& word) {
        int result = 0;
        for (int i = 0; i < patterns.size(); i += 1) {
            if (word.find(patterns[i]) != string::npos) {
                result += 1;
            }
        }
        return result;
    }
};


int main() {
    vector<std::string> vec = {"a","b","c"};
    int s = Solution::numOfStrings(vec, "aaaaabbbbb");
    std::cout << s << std::endl;
}

