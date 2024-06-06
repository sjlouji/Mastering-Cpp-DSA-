#include "iostream"
#include "unordered_set"

using namespace std;

class Solution {
public:
    int countGoodSubstrings(string s) {
        int goodSubstrings = 0;
        int n = s.size();
        unordered_set<char> seenChars;
        for (int left = 0, right = 0; right < n; right++) {
            char currentChar = s[right];
            while (seenChars.count(currentChar)) {
                seenChars.erase(s[left]);
                left++;
            }
            seenChars.insert(currentChar);
            if (right - left + 1 == 3) {
                goodSubstrings++;
            }
        }
        return goodSubstrings;
    }
};