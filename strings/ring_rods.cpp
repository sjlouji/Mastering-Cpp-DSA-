//There are n rings and each ring is either red, green, or blue. The rings are distributed across ten rods labeled from 0 to 9.
//
//You are given a string rings of length 2n that describes the n rings that are placed onto the rods. Every two characters in rings forms a color-position pair that is used to describe each ring where:
//
//The first character of the ith pair denotes the ith ring's color ('R', 'G', 'B').
//The second character of the ith pair denotes the rod that the ith ring is placed on ('0' to '9').
//For example, "R3G2B1" describes n == 3 rings: a red ring placed onto the rod labeled 3, a green ring placed onto the rod labeled 2, and a blue ring placed onto the rod labeled 1.
//
//Return the number of rods that have all three colors of rings on them.
//
//Input: rings = "B0B6G0R6R0R6G9"
//Output: 1
//Explanation:
//- The rod labeled 0 holds 3 rings with all colors: red, green, and blue.
//- The rod labeled 6 holds 3 rings, but it only has red and blue.
//- The rod labeled 9 holds only a green ring.
//Thus, the number of rods with all three colors is 1.
#include "iostream"
#include "unordered_map"
#include "vector"

using namespace std;

class Solution {
public:
    static int countPoints(string rings) {
        string visitedNodes;
        unordered_map<int, vector<char>> map;
        vector<char> validColors = {'B', 'G', 'R'};
        for (size_t i = 0; i < rings.length(); i += 2) {
            char color = rings[i];
            int index = rings[i + 1];
            if (find(map[index].begin(), map[index].end(), color) == map[index].end() &&
                    find(validColors.begin(), validColors.end(), color) != validColors.end()) {
                map[index].emplace_back(color);
            }
            if (visitedNodes.find(index) == std::string::npos && map[index].size() == 3) {
                visitedNodes += index;
            }
        }
        return visitedNodes.length();
    }
};

int main() {
    int s = Solution::countPoints("G8R4B1B8B9G4B5R1G1B1R7G2R8R4R1G8R2B4");
    std::cout << s << std::endl;
}

