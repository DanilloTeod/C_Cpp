#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    vector<int> v = {5, 8, 2, 9, 1, 7, 3, 10, 4, 6};
    int min_value{INT_MAX}; // inicializa com o maior valor possivel 
    int max_value{INT_MIN}; // inicializa com o menor valor possivel

    for(int i = 0; i<v.size(); i++){

        int count_min{0};
        int count_max{0};

        for(int j = 0; j<v.size(); j++){
            if(v[j]<v[i]){
                count_min++;

            } else if (v[j]>v[i]){
                count_max++;
            }
        }

        if(count_min == 0){ // significa que não há nenhum valor menor 
            min_value = v[i];
        }

        if(count_max == 0){ // significa que não há nenhum valor maior
            max_value = v[i];
        }

    }

    cout << "\nMIN_VALUE = " << min_value << "\nMAX_VALUE = " << max_value << endl;

    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;
}