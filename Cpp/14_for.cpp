#include <iostream>
using namespace std;

int main() {
    // break - interrompe completamente o loop
    cout << "break - Para completamente:" << endl;
    for(int i = 1; i <= 10; i++) {
        if(i == 5) {
            cout << "Parou no " << i << endl;
            break;
        }
        cout << i << " ";
    }
    
    return 0;   
}