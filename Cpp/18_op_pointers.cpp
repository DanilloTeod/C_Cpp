#include <iostream>
using namespace std;

int main() {

    int x = 42;
    int* ptr = &x;  // & = "endereço de"
    
    cout << ptr << endl;  // Endereço (ex: 0x7fff)
    cout << *ptr << endl; // 42 (conteúdo)
    
    *ptr = 100;     // muda x através do ponteiro
    cout << x << endl; // 100
    
    // Ponteiro nulo (aponta para nada)
    int* ptr_nulo = nullptr;  // C++ moderno
    int* ptr_nulo2 = NULL;    // C style (evite)
    int* ptr_nulo3 = 0;       // Também funciona
    
    return 0;
}