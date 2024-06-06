#include "iostream"
#include "unordered_set"

using namespace std;

class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> ss(s.begin(), s.end());
        return ss.size();
    }
};