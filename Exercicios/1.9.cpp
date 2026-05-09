#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> v{3, -1, 2, -5, 4, -2};

    for(int i=0; i<v.size(); i++){
        if(v[i] < 0){
            int aux = v[i];
            v.erase(v.begin() + i); // remove o elemento na pos i
            v.insert(v.begin(), aux);
            i--; // avalia o elemento na msm posicao
        }
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }    

    cout << endl;
    return 0;
}