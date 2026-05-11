#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (){
    string sentence = "C++ Language Programming";
    string inverted;
    int L{(int)sentence.length()};

    for(L; 0<L; L--){
        inverted += sentence.at(L-1);
    }

    cout << inverted << endl;

    return 0;
}