#include <iostream>

using namespace std;

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return (coordinates[0] + coordinates[1]) % 2;
    }
};