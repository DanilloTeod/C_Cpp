#include <iostream>

int main() {

    /*
    Type conversion = conversion a value of one data type to another
                        implicit = automatic
                        explicit = precede value with new data tipe (int)
    
    */

    // implicit
    int x = 3.14;
    std::cout << x <<"\n"; // return 3, implicit conversion

    double y = (int) 3.14; 
    std::cout << y <<"\n"; // return 3, explicit conversion


    char b = 100;
    std::cout << b <<"\n"; // converts to ASCII TABLE 100 = d character
    std::cout << (char)100 <<"\n";

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
    std::cout << score << "%\n"; // Returns 0, we're divide int/int that ignore the decimal part 


    return 0;
}