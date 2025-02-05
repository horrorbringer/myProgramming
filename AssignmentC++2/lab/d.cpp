#include <iostream>
#include <string>

std::string decryptCaesarCipher(const std::string& cipherText, int shift) {
    std::string decryptedText = "";

    for (char c : cipherText) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            decryptedText += (c - base - shift + 26) % 26 + base;
        } else {
            decryptedText += c;
        }
    }

    return decryptedText;
}

int main() {
    std::string cipherText = "Khoor Zruog"; // Example cipher text
    //int shift = 3; // Example shift value
    for(int i = 1; i <= 25; i++ ){

    std::string decryptedText = decryptCaesarCipher(cipherText, i);
    
    std::cout << "Decrypted Text: " << decryptedText << std::endl;
    }
    return 0;
}
