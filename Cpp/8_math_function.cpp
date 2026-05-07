#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    double x = 3;
    double y = 100;
    double z;
    double m;

    z = std::max(x, y);
    m = std::min(x, y);

    std::cout << "Máx value into "<< x << " and " << y <<" is "<< z << std::endl;
    std::cout << "Min value into "<< x << " and " << y <<" is "<< m << std::endl;

    std::cout << "--------------------------------------"<< std::endl;
    std::cout << "Exponencial e^x, enter the x value: ";
    double x_var;
    std::cin >> x_var;
    std::cout << "e^"<< x_var << "= " << std::fixed<< std::setprecision(2) << std::exp(x_var) << std::endl;
    //std::fixed << std::setprecision(2) use 2 decimal of precision

    std::cout << "--------------------------------------"<< std::endl;
    std::cout << "Pow a^b, enter the a and b value: ";
    double a;
    double b;
    std::cin >> a >> b; // read the 2 values in same line
    std::cout << "Result of "<< a <<"^" << b << "= "<< std::pow(a, b) << std::endl;


    std::cout << "--------------------------------------"<< std::endl;
    double weight {7.7};
    // A sintaxe de chaves proíbe o narrowing conversion (conversão restritiva)
    // O compilador impede a perda de dados, forçando o programador 
    // a lidar explicitamente com a conversão.

    std::cout << "The square root of 81 is : " << std::sqrt(81) << std::endl;
    std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;
    std::cout << "3.654 rounded to : " << std::round(3.654) << std::endl; // rouded 



    return 0;
}
