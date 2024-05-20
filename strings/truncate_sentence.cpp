#include "iostream"
#include "vector"

std::string truncate_sentence(std::string s, int k) {
    std::vector<std::string> stringArray;
    std::string temp;
    std::string res;
    for (int i = 0; i < s.size(); i += 1) {
        if (s[i] != ' ') {
            temp += s[i];
        } else {
            stringArray.emplace_back(temp);
            temp.clear();
        }
    }
    if (k != stringArray.size() + 1) {
        stringArray.resize(k);
        for (int i = 0; i < stringArray.size(); i += 1) {
            res += i == 0 ? stringArray[i] : ' ' + stringArray[i];
        }
    } else {
        res = s;
    }
    return res;
}

int main() {
    std::string truncatedString = truncate_sentence("chopper is not a tanuki", 5);
    std::cout << truncatedString;
}