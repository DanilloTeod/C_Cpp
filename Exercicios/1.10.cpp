#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm> 
using namespace std;


int main() {
    vector<int> v{1, 2, 2, 3, 4};
    double mediana{0}, moda{0};
    int cont{0}, frequencia{0};


    sort(v.begin(), v.end()); // ordenar vetor

    if(v.size() % 2 == 0){
        int central{(int)(v.size()/2)};
        mediana = (v.at(central-1) + v.at(central))/2.0;
    } else{
        int central{(int)(v.size()/2)};
        mediana = v.at(central);
    }


    for(int i=0; i<v.size(); i++){
        for(int j=0; j < v.size(); j++){
            if(v[i] == v[j]){
                cont++;
            }
        }
        if(cont>frequencia){
            frequencia = cont;
            moda = v[i];
                
        }
        cont = 0;
    }


    cout << "\nMediana= " << mediana <<" Moda= " << moda << endl;
    return 0;
}