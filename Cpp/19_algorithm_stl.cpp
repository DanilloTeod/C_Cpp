#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


int main() {
    // Exemplo 1: Ordenar números em ordem decrescente
    std::vector<int> vec = {5, 2, 8, 1, 9, 3, 7, 4, 6};

    // Sort the entire vector // organizar 
    std::sort(vec.begin(), vec.end()); // ordem crescente 

    // para cada x in vec 
    for (int x : vec) std::cout << x << " "; 

    std::cout << std::endl;

    // usando a expre. lambda
    // [captura](parametros) -> tipo_retorno { corpo }
    // As partes:
    // [captura]   - O que a lambda pode "ver" de fora
    // (parametros)- Parâmetros (como função normal)
    // -> tipo     - Retorno (opcional, compilador deduz)
    // { corpo }   - O código que executa

    sort(vec.begin(), vec.end(), [](int a, int b) { return a > b; });
    // []: não captura nada de fora; 
    // (int a, int b): recebe dois parametros inteiros
    // { return a > b; }: corpo, retorna true se a>b
    // Lambda = as REGRAS do jogo


    std::cout << std::endl;

    return 0;
}