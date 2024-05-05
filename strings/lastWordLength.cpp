#include <iostream>
#include <string>

int lastWordLength(const std::string& words) {
    int lastIndex = words.length() - 1;
    int i = lastIndex;
    int length = 0;
    while(i >=0 && words[i] == ' ') {
        i--;
    }
    while (i >= 0 && words[i] != ' ') {
        length ++;
        i--;
    }
    return length;
}

int main() {
    std::string  word = "Last Word";
    int length = lastWordLength(word);

    std::cout << "Word: " << word << std::endl;
    std::cout << "Length of Last word: " << length << std::endl;
}