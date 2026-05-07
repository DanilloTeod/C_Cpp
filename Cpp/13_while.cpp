#include <iostream>
using namespace std;

int main() {
    // Exemplo 1: Soma de números até atingir limite
    int soma = 0;
    int numero = 1;
    int final = 50;

    // int (32 bits)	~2.1 bilhões
    //  unsigned long long	~18.4 quintilhões
    unsigned long long f1 = 1; // usar apenas int gera overflow
    unsigned long long f2 = 1;
    unsigned long long fn; 

    while(numero != final) {
        fn = f1+f2;
        cout << f1 << " ";

        f1 = f2;
        f2 = fn;
        numero++;
    }


    return 0;
}