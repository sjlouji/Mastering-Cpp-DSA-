//Example 1:
//
//Input: s = "book"
//Output: true
//Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.
//Example 2:
//
//Input: s = "textbook"
//Output: false
//Explanation: a = "text" and b = "book". a has 1 vowel whereas b has 2. Therefore, they are not alike.
//Notice that the vowel o is counted twice.


#include <iostream>

using namespace std;


class Solution {
public:
    bool areAlike(string s) {
        int n = s.size();
        if (n % 2 != 0) {
            return false;
        }
        int vowelCountFirstHalf = 0;
        for (int i = 0; i < n / 2; ++i) {
            vowelCountFirstHalf += isVowel(s[i]);
        }
        int vowelCountSecondHalf = 0;
        for (int i = n / 2; i < n; ++i) {
            vowelCountSecondHalf += isVowel(s[i]);
        }
        return vowelCountFirstHalf == vowelCountSecondHalf;
    }

private:
    bool isVowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
};

int main() {
    Solution sol;
    bool val = sol.areAlike("book");
    cout << val << endl;
    return 0;
}
