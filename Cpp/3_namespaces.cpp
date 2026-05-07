#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 112;
}

int main(){
    using namespace second;
    // namespace = provides a solution for preventing name conflicts
    //              in large projects. Each entity needs a unique name.
    //              A namespace allows for identically named entities 
    //              as long as the namespaces are different.

    /*
        Example: we define.
        int x = 0;
        int x = 1;

            that returns a error "redeclaration" because the variable was previously declared
    
    */

    //int x = 2;
    //std::cout << first::x;
    std::cout << x;
    return 0;
}