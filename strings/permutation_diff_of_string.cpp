//Input: s = "abc", t = "bac"
//
//Output: 2
//
//Explanation:
//
//For s = "abc" and t = "bac", the permutation difference of s and t is equal to the sum of:
//
//The absolute difference between the index of the occurrence of "a" in s and the index of the occurrence of "a" in t.
//The absolute difference between the index of the occurrence of "b" in s and the index of the occurrence of "b" in t.
//The absolute difference between the index of the occurrence of "c" in s and the index of the occurrence of "c" in t.
//That is, the permutation difference between s and t is equal to |0 - 1| + |2 - 2| + |1 - 0| = 2.

#include <iostream>

int permutationDiffOfString(const std::string& s, const std::string& t) {
    int result = 0;
    for (int i = 0; i < s.length(); i += 1) {
        for (int j = 0 ; j < t.length(); j += 1) {
            if (s[i] == t[j]) {
                result += std::abs(i - j);
                break;
            }
        }
    }
    return result;
}

int main() {
    std::string s = "abcde";
    std::string t = "edbac";
    int diff = permutationDiffOfString(s, t);
    std::cout << "Permutation Difference of " << s << " and " << t << " = " << diff;
}