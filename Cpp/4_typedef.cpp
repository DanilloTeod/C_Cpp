#include <iostream>
#include <vector>


typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text;

using number_t = int; // most popular 

int main(){
    /*
    typedef = reserved keyword used to create an additional name (alias) for another type.
                New identifier for an existing type
                helps with readabilityy and reduces typos
    */
    pairlist_t pairlist;

    text firstName = "Teodoro";
    std::cout << firstName << "\n";

    number_t num = 123;
    std::cout << num << "\n";

    return 0;
}