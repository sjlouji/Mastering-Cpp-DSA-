#include "iostream"
#include "unordered_map"

std::string decode_message(const std::string& key, const std::string& message) {
    std::unordered_map<char, char> keyMap;
    std::string res;
    std::string alphabets;
    std::string sanitizeString;
    for (size_t j = 97; j < 123; j += 1) {
        alphabets += (char)j;
    }
    for (size_t i = 0; i < key.length(); i += 1) {
        if(key[i] != ' ' && sanitizeString.find(key[i]) == std::string::npos) {
            sanitizeString += key[i];
        }
    }
    for (size_t i = 0; i < sanitizeString.length(); i += 1) {
        keyMap[sanitizeString[i]] = alphabets[i];
    }
    for (size_t i = 0; i < message.length(); i += 1) {
        res += keyMap[message[i]];
    }
    return res;
}

int main() {
    std::string decodedMessage = decode_message("the quick brown fox jumps over the lazy dog", "vkbs bs t suepuv");
    std::cout << decodedMessage;
}