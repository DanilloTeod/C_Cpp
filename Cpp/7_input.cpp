#include <iostream>

using namespace std;

int main() {

    string name;
    int age;

    cout << "What's your age? ";
    cin >> age; 
    
    cout << "What's your full name? ";
    getline(cin >> ws, name); // pick the \n on the buffer, so we use >> ws



    cout << "Hello " << name << ", you are "<< age <<" years old.\n";


    return 0;
}