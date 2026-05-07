#include <iostream>

int main() {

    int students = 25;

    //students+=1
    students++;
    std::cout << students<< "\n";

    //students = students*2
    students*=2;
    std::cout << students<< "\n";

    //students = students/2
    students/=7; // the decimal part is lost, because we are using the type integer
    int remainder = students % 2;
    std::cout << "students/7 = " << students << ", lost part " << remainder << "\n";

    return 0;
}