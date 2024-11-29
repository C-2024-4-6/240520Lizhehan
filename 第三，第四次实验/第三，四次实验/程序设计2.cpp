#include <iostream>
#include <cstring>
#include <cmath>

int parseHex(const char* const hexString) {
    int decimalValue = 0;
    int length = strlen(hexString);
    for (int i = 0; i < length; ++i) {
        char c = hexString[i];
        int digit = 0;
        if (c >= '0' && c <= '9') {
            digit = c - '0'; 
        }
        else if (c >= 'A' && c <= 'F') {
            digit = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f') {
            digit = c - 'a' + 10;
        }
        decimalValue = decimalValue * 16 + digit;
    }

    return decimalValue;
}
int main() {
    const char* hexString = "A5";
    int decimal = parseHex(hexString);
    std::cout <<hexString<< "µÄÖµ " << hexString << " ÊÇ: " << decimal << std::endl;
    return 0;
}