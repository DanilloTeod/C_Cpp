#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5};
    int initial{0};
    int final{v.size()-1};
    
    cout << "\nVector initial: ";

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    while(final > initial){
        swap(v[initial], v[final]); // troca dois valores de um vetor 

        initial++;
        final--;
    }


    cout << "\nVector final: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    cout << endl; 
    return 0;
}

