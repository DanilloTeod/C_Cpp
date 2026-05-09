#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    //vector<vector<int>> matrix = {{1, 2}, {4, 5}, {7, 8}}; // teste, matriz retangular

//   vector<vector<int>> transposed_matrix(matrix[0].size(), vector<int>(matrix.size()));
//                                    ↑                            ↑
//                              NÚMERO DE LINHAS              NÚMERO DE COLUNAS
//                              (quantos vetores)             (tamanho de cada vetor)
    vector<vector<int>> transposed_matrix(matrix[0].size(), vector<int>(matrix.size())); // - linhas = matrix[0].size()   (número de COLUNAS da original)

    

    /*
    vector<vector<int>> : espera dois argumentos

    Primeiro argumento: Número de linhas (um int)
    Segundo argumento: O que cada linha vai conter (um vector<int>)

    */
    cout << "Initial matrix M: "<< endl;
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){ //matrix[0].size() : pega o tamanho da primeira coluna
            //  transposed_matrix[i][j] = matrix[j][i]; // funciona para matriz quadrada
            transposed_matrix[j][i] = matrix[i][j];
            cout << matrix[i][j] << " ";

        }
        cout << endl;
    }


    cout << "\nTransposed matrix M: "<< endl;

    for(int i = 0; i < transposed_matrix.size(); i++){
        for(int j = 0; j < transposed_matrix[0].size(); j++){
            cout << transposed_matrix[i][j] << " ";

        }
        cout << endl;
    }

    return 0;
}