#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        unordered_map<string, vector<string>> memo;
        return dfs(s, wordSet, memo);
    }

private:
    vector<string> dfs(string s, unordered_set<string>& wordSet, unordered_map<string, vector<string>>& memo) {
        if (memo.count(s)) {
            return memo[s];
        }

        vector<string> result;

        if (wordSet.count(s)) {
            result.push_back(s);
        }

        for (int i = 1; i < s.size(); ++i) {
            string left = s.substr(0, i);
            string right = s.substr(i);

            if (wordSet.count(left)) {
                vector<string> rightResult = dfs(right, wordSet, memo);
                for (const string& str : rightResult) {
                    result.push_back(left + " " + str);
                }
            }
        }

        memo[s] = result;
        return result;
    }
};

int main() {
    Solution solution;

    string s1 = "catsanddog";
    vector<string> wordDict1 = {"cat", "cats", "and", "sand", "dog"};
    vector<string> result1 = solution.wordBreak(s1, wordDict1);
    for (const string& sentence : result1) {
        cout << sentence << endl;
    }
    cout << endl;
    return 0;
}
