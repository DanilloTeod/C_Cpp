#include <iostream>
#include <random>

int main() {
    // Inicializa o gerador aleatório
    std::random_device rd;
    std::mt19937 gen(rd());
    
    // Gera números inteiros entre 0 e 100
    std::uniform_int_distribution<> dis(0, 100);
    
    int random_number = dis(gen); 
    std::cout << random_number << std::endl;

    return 0;
}