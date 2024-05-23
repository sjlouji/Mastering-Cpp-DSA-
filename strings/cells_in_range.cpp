#include "iostream"
#include "vector"
#include <string>

class Solution {
public:
    std::vector<std::string> cellsInRange(std::string s) {
        char left = s[0];
        char right = s[3];
        char j;
        int leftPosition = s[1] - '0';
        int rightPosition = s[4] - '0';
        std::vector<std::string> res;
        for (j = left; j <= right; j += 1) {
            for (int i = leftPosition; i <= rightPosition; i += 1) {
                res.emplace_back(j + std::to_string((i)));
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    std::vector<std::string> cells = sol.cellsInRange("A1:F2");
    for (int i = 0; i < cells.size(); i += 1) {
        std::cout << cells[i] << std::endl;
    }
}