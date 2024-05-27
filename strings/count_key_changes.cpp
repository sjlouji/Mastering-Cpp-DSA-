#include "iostream"
#include "cstring"

using namespace std;

class Solution {
public:
    static int countKeyChanges(string s) {
        int counter = 0;
        for (size_t i = 0; i < s.length(); i += 1) {
            if ((tolower(s[i]) != tolower(s[i+1])) && i < s.length() - 1) {
                counter += 1;
            }
        }
        return counter;
    }
};

int main() {
    int s = Solution::countKeyChanges("AaAaAaaA");
    cout << s << endl;
}