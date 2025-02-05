#include <iostream>
#include <string>

std::string caesarCipherDecrypt(const std::string& cipherText, int shift) {
    std::string plainText = "";
    for (char c : cipherText) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            plainText += (c - base - shift + 26) % 26 + base;
        } else {
            plainText += c;
        }
    }
    return plainText;
}

int main() {
    std::string cipherText = "text here"; // Replace with your cipher text
    for (int i = 1; i <= 25; ++i) {
        std::string plainText = caesarCipherDecrypt(cipherText, i);
        std::cout << "Shift " << i << ": " << plainText << std::endl;
    }
    return 0;
}
