#include "iostream"
#include "vector"
#include <string>

class Solution {
public:
    int maxDepth(std::string s) {
        int depth = 0;
        int tempDepth = 0;
        std::string depthing;
        for (int i = 0; i < s.length(); i += 1) {
            if (s[i] == '(') {
                depthing += s[i];
                tempDepth += 1;
            } else if(s[i] == ')') {
                depthing.pop_back();
                if (depth <= tempDepth) {
                    depth = tempDepth;
                }
                tempDepth -= 1;
            }
        }
        std::cout << depthing;
        return depth;
    }
};

int main() {
    Solution sol;
    int maxDepth = sol.maxDepth("(1)+((2))+(((3)))");
    std::cout << maxDepth << std::endl;
}