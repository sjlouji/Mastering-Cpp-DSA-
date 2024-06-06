//A permutation perm of n + 1 integers of all the integers in the range [0, n] can be represented as a string s of length n where:
//
//s[i] == 'I' if perm[i] < perm[i + 1], and
//s[i] == 'D' if perm[i] > perm[i + 1].
//Given a string s, reconstruct the permutation perm and return it. If there are multiple valid permutations perm, return any of them.
//
//
//
//Example 1:
//
//Input: s = "IDID"
//Output: [0,4,1,3,2]
//Example 2:
//
//Input: s = "III"
//Output: [0,1,2,3]
//Example 3:
//
//Input: s = "DDI"
//Output: [3,2,0,1]

#include <iostream>
#include "vector"

using namespace std;



class Solution {
public:
    vector<int> reconstructPermutation(string s) {
        int n = s.size();
        int low = 0, high = n;
        vector<int> ans(n + 1);
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'I') {
                ans[i] = low++;
            } else {
                ans[i] = high--;
            }
        }
        ans[n] = low;
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> val = sol.reconstructPermutation("IDID");
    return 0;
}
