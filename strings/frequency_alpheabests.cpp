//You are given a string s formed by digits and '#'. We want to map s to English lowercase characters as follows:
//
//Characters ('a' to 'i') are represented by ('1' to '9') respectively.
//Characters ('j' to 'z') are represented by ('10#' to '26#') respectively.
//Return the string formed after mapping.
//
//The test cases are generated so that a unique mapping will always exist.
//
//
//
//Example 1:
//
//Input: s = "10#11#12"
//Output: "jkab"
//Explanation: "j" -> "10#" , "k" -> "11#" , "a" -> "1" , "b" -> "2".
//Example 2:
//
//Input: s = "1326#"
//Output: "acz"
#include <iostream>
#include <string>

using namespace std;

string freqAlphabets(string s) {
    string result;
    int n = s.size();

    for (int i = 0; i < n; ++i) {
        if (i + 2 < n && s[i + 2] == '#') {
            int num = stoi(s.substr(i, 2));
            result += ('a' + num - 1);
            i += 2;
        } else {
            result += ('a' + (s[i] - '1'));
        }
    }
    return result;
}

int main() {
    // Example 1
    string s1 = "10#11#12";
    cout << "Decoded string (Example 1): " << freqAlphabets(s1) << endl;

    // Example 2
    string s2 = "1326#";
    cout << "Decoded string (Example 2): " << freqAlphabets(s2) << endl;

    return 0;
}
