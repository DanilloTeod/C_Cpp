#include <iostream>
#include <string>

int main () {
    std::string s = "Hello, C++!";

    std::cout << s.length() << std::endl;
    std::cout << s[0] << std::endl;
    std::cout << s.at(7) << std::endl;   // C
    std::cout << s.empty() << std::endl; // verify if the string is empty

    s += "test";
    std::cout << s << std::endl;

    




    return 0;
}