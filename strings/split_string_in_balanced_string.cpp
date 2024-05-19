#include "iostream"

int split_string_in_balanced_string(std::string s) {
    int balance = 0;
    int count = 0;

    for (char c : s) {
        if (c == 'R') {
            balance++;
        } else if (c == 'L') {
            balance--;
        }

        if (balance == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int maximumBalancedString = split_string_in_balanced_string("RLRRRLLRLL");
    std::cout << maximumBalancedString;
}