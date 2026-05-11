/*
1. CÓPIA = Levar a casa inteira (pesado, demorado)
2. REFERÊNCIA = Dar o endereço da casa (rápido, 2kg de documento)
3. PONTEIRO = Dar o endereço + poder mudar de casa

C++ permite trabalhar com os DADOS ou com os ENDEREÇOS!
*/




#include <iostream>

/*

Referência é um apelido (alias) para uma variável já existente.
ex:

*/
using namespace std;
int main() {
    cout << "------------------------- REF1 -------------------------" << endl;
    int x = 10;
    int& ref1 = x;     //  Referência deve ser inicializada
    cout << "int x = " <<x <<  "\nint& ref1 = x" << "\nref1 = 20\n" << endl;
    ref1 = 20;         //  Muda x

    cout << "x = " << x  << "\nref1 = " << ref1 <<endl;
    cout << "&x = " << &x  << "\n&ref1 = " << &ref1 <<endl;


    cout << "------------------------- REF2 -------------------------" << endl;
    int original = 100;
    int& ref2 = original;
    // São a MESMA coisa!
    cout << &original << endl;  // Endereço: 0x7fff5fbff //apontam para o mesmo endereço de memoria, são a mesma coisa
    cout << &ref2 << endl;       // Endereço: 0x7fff5fbff (MESMO!)


    /*
    Ponteiro é uma variável que guarda ENDEREÇOS de memória.

    */
    cout << "########### POINTERS ###########"<< endl;

    int idade = 25;
    int* ptr = &idade;  // ptr guarda o ENDEREÇO de idade
    
    cout << "Valor de idade: " << idade << endl;        // 25
    cout << "Endereço de idade: " << &idade << endl;    // 0x7fff...
    cout << "Valor guardado em ptr: " << ptr << endl;    // 0x7fff...(mesmo)
    cout << "Conteúdo apontado por ptr: " << *ptr << endl; // 25

    *ptr = 30;  // Modifica o valor APONTADO
    cout << "\n*ptr = 30;  // Modifica o valor APONTADO\n" << endl;
    cout << "idade: " << idade << endl;  // 30

    return 0;
}