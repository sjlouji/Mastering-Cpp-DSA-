#include <iostream>

int scoreOfString(std::string s) {
    int output = 0;
    for (int i = 0; i < s.length() - 1; i += 1) {
        output += std::abs(int(s[i]) - int(s[i+1]));
    }
    return output;
}

int main() {
    std::string word = "hello";
    int output = scoreOfString(word);
    std::cout << "Word: " << output << std::endl;
}