#include "iostream"
#include "unordered_map"

using namespace std;

class Solution {
public:
    static bool judgeCircle(string moves) {
        int x = 0, y = 0;
        unordered_map<char, pair<int, int>> directionMap = {
                {'U', {0, 1}},
                {'D', {0, -1}},
                {'L', {-1, 0}},
                {'R', {1, 0}}
        };
        for (char move : moves) {
            pair<int, int> delta = directionMap[move];
            x += delta.first;
            y += delta.second;
        }
        return (x == 0 && y == 0);
    }
};

int main() {
    bool val = Solution::judgeCircle("UD");
    cout << val << endl;
    return 0;
}