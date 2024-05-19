//
// Created by joan on 5/5/24.
//
// Balanced strings are those that have an equal quantity of 'L' and 'R' characters.
// Given a balanced string s, split it into some number of substrings such that:
// Each substring is balanced.
// Return the maximum number of balanced strings you can obtain.
//
// Input: s = "RLRRLLRLRL"
// Output: 4
// Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.
#include <iostream>

int balancedStringSplit(std::string s) {
    int counter = 0;
    std::string temp;
    for (int i = 0; i <s.length(); i += 1) {
        if (s[i] == 'L') {
            temp += s[i];
        }
    }
    return counter;
}

int main() {
    std::string word = "RLRLLR";
    int output = balancedStringSplit(word);
    std::cout << "String" << word << std::endl;
    std::cout << "No. of balanced string" << output << std::endl;
}