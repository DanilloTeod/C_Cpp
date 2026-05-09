#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string hello = "Hello World";
    // cout << hello.length();
    // cout << hello.at(0);
    char vogals[5] = {'a', 'e', 'i', 'o', 'u'}; //array tipo char
    vector<char> vogalsInString;
    int contVogals{0};

    for(int i = 0; i < hello.length(); i++){
        for(int j = 0; j < sizeof(vogals); j++){
            if(tolower(hello.at(i)) == vogals[j]){
                contVogals++;
                vogalsInString.push_back(hello.at(i));
            }
        }
    }

    cout << "\nVogals: " << contVogals << " (";
    for(int i = 0; i < vogalsInString.size(); i++){
        cout << " " << vogalsInString[i];

    }
    cout << " )" << endl;
    return 0;
}