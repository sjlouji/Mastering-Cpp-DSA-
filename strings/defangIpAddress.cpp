#include <iostream>
#include <string>

std::string defangIpAddress(const std::string ipAddress) {
    std::string defagedIpAddress;
    for (char c: ipAddress) {
        if (c == '.') {
            defagedIpAddress += "[.]";
        } else {
            defagedIpAddress += c;
        }
    }
    return defagedIpAddress;
}

int main() {
    std::string ip = "192.168.1.0";
    std::string defangedAddress = defangIpAddress(ip);

    std::cout << "Original Ip Address " << ip << std::endl;
    std::cout << "Defanged Ip Address " << defangedAddress << std::endl;
}
