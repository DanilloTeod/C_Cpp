#include <iostream>


int main(){

    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha; // true / false

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;

    // AND: Evaluates (avalia) to true when all operands are true and a single false will 
    // drag(arrastar) the entire expression to evaluating false.
	std::cout << std::endl;
    std::cout << "a && b : " << (a && b) << std::endl; // false
    std::cout << "a && c : " << (a && c ) << std::endl; // true
    std::cout << "a && b && c :" << (a && b && c) << std::endl; // false


    //OR: Evaluates to true when at least(ao menos) one operand true.

	std::cout << std::endl;
	std::cout << "Basic OR operations" <<std::endl;
	std::cout << "a || b: " << (a||b) << std::endl;
    std::cout << " a || c : " << (a || c ) << std::endl;
    std::cout << " a ||b || c :" << (a || b || c) << std::endl;

	//NOT : Negates whateve (Nega qualquer) operand you put it with
	std::cout << std::endl;
	std::cout << "Basic NOT operations" << std::endl;
    std::cout << "!a : " << !a << std::endl;
	std::cout << "!b : " << !b << std::endl;
	std::cout << "!c : " << !c << std::endl;

    //Combinations of all these operators
	std::cout << std::endl;
	std::cout << "Combining logical operators" << std::endl;
	// !(a &&b) || c
	std::cout << "!(a &&b) || c : " << (!(a &&b) || c) << std::endl; // true

    
    return 0;
}