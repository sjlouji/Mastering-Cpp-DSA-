//Input: paths = [["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]
//Output: "Sao Paulo"
//Explanation: Starting at "London" city you will reach "Sao Paulo" city which is the destination city. Your trip consist of: "London" -> "New York" -> "Lima" -> "Sao Paulo".
//Example 2:
//Input: paths = [["B","C"],["D","B"],["C","A"]]
//Output: "A"
//Explanation: All possible trips are: 
//"D" -> "B" -> "C" -> "A". 
//"B" -> "C" -> "A". 
//"C" -> "A". 
//"A". 
//Clearly the destination city is "A".
//Example 3:
//Input: paths = [["A","Z"]]
//Output: "Z"

#include <iostream>
#include <vector>
#include "unordered_map"

using namespace std;

class Solution {
public:
    static string findDestination(vector<vector<string>>& paths) {
        unordered_map<string, string> destinations;

        for (const auto& path : paths) {
            destinations[path[0]] = path[1];
        }

        for (const auto& entry : destinations) {
            if (destinations.find(entry.second) == destinations.end()) {
                return entry.second;
            }
        }

        return "";
    }
};

int main() {
    vector<vector<string>> input = {{"London","New York"}, {"New York","Lima"}, {"Lima","Sao Paulo"}};
    string val = Solution::findDestination(input);
    cout << "Special value for Example 1: " << val << endl;
    return 0;
}
