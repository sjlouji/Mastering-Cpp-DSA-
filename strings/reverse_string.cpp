//Example 1:
//Input: s = ["h","e","l","l","o"]
//Output: ["o","l","l","e","h"]
//Example 2:
//Input: s = ["H","a","n","n","a","h"]
//Output: ["h","a","n","n","a","H"]

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    static vector<char> reverseString(vector<char>& s) {
        int n = s.size();
        int left = 0;
        int right = n - 1;
        while (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
        return s;
    }
};

int main() {
    vector<char> input = {'h','e','l','l','o'};
    vector<char> nums1 = Solution::reverseString(input);
    for (int i = 0; i < nums1.size(); i += 1) {
        cout << "Special value for Example 1: " << nums1[i] << endl;
    }
    return 0;
}
