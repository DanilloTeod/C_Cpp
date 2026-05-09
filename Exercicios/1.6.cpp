#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v{1,2,3,4,5,6};
    vector<int> par{}, impar{};

    cout << "\nVector initial: ";

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
        if(v[i] % 2 == 0){ // par
            par.push_back(v[i]);
        } else {
            impar.push_back(v[i]);
        }
    }

        
    cout << "\nVector par: ";

    for(int i = 0; i < par.size(); i++){
        cout << par[i] << " ";
    }
    
    cout << "\nVector impar: ";

    for(int i = 0; i < impar.size(); i++){
        cout << impar[i] << " ";
    }

    cout << endl;
    return 0;
}