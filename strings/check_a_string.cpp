#include "iostream"

using namespace std;

class Solution {
public:
    bool checkString(string s) {
        return s.find("ba") == string::npos;
    }
};