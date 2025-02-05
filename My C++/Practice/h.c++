#include <iostream>
#include <string>
#include <cctype>   // For std::toupper

int main() {
    std::string str;
    std::cout<<"Enter string: ";
    std::cin>>str;
    
    // Convert each character to uppercase
    for (char &c : str) {
        c = std::toupper(c);
    }
    
    std::cout << "Uppercase string: " << str << std::endl;
    
    return 0;
}
