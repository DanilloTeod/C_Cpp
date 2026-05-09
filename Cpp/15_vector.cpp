#include <iostream>
#include <vector>


int main(){

    // std::vector<int> v1(5, 10);   // Parenteses: 5 elementos, cada um = 10
    // for(int i = 0; i < 5; i++){
    //     std::cout << v1[i] << "";
    // }

    std::vector<double> v2 {5, 10}; // Chaves: 2 elementos [5, 10]

    for(int i = 0; i < std::size(v2); i++){
        std::cout << v2[i] << " ";
    }
    std::cout << "\nSize of vector v2: " << std::size(v2) << std::endl;
    std::cout << std::endl;

    v2.push_back(15.9);     // Adiciona no final [5, 10, 15.9]
    for(int i = 0; i < std::size(v2); i++){
        std::cout << v2[i] << " ";
    }
    std::cout << "\nSize of vector v2: " << std::size(v2) << std::endl;

    std::cout << "\nUsing v2.pop_backv2.pop_back()" << std::endl;
    v2.pop_back(); // remove o final
    for(int i = 0; i < std::size(v2); i++){
        std::cout << v2[i] << " ";
    }

    std::cout << "\nUsing v2.insert(v2.begin()+1, 99)" << std::endl;
    v2.insert(v2.begin()+1, 99);  // [5, 10, 99]
    for(int i = 0; i < std::size(v2); i++){
        std::cout << v2[i] << " ";
    }

    std::cout << "\nUsing v2.clear()" << std::endl;
    v2.clear();
    for(int i = 0; i < std::size(v2); i++){
        std::cout << v2[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}