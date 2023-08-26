#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>



int main() {
    std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int passwordLength = 13;
    std::string password = "";

    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int i = 0; i < passwordLength; ++i) {
        int randomIndex = std::rand() % characters.length();
        password += characters[randomIndex];
    }

    std::cout << "Your Key is : " << password << std::endl;

    return 0;

}