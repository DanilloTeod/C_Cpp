#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string sentence = "Socorram me subi no onibus em Marrocos";
    int LEN = sentence.length();
    bool is_palindrome = true;
    
    // Remover espaços e converter para lowercase
    string clean = "";
    for(char c : sentence) {
        if(!isspace(c)) {
            clean += tolower(c);
        }
    }
    
    LEN = clean.length();
    for(int i = 0; i < LEN/2; i++) {
        if(clean[i] != clean[LEN-1-i]) {
            is_palindrome = false;
            break;
        }
    }
    
    cout << sentence << (is_palindrome ? " É palíndromo." : " Não é palíndromo.") << endl;
    
    return 0;
}