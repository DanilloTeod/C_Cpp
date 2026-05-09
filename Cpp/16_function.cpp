#include <iostream>
#include <vector>
#include <sstream>
#include <string>


using namespace std;

void printVector(vector<double> vec){ // funcao sem retorno de valor, entrada (vetor tipo double)
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
   }
   
}

int main () {

    vector<double> v1 {};
    double x, y, z;
    string line;

    cout << "Enter the values of the vector v1 = (x, y, z) : ";

    getline(cin, line); // lê a linha toda e atribui a uma string
    stringstream ss(line); // cria uma stream com a linha

    /*
    std::stringstream ss(linha); cria um objeto que transforma uma string em um fluxo de dados, permitindo:
    Extrair números e palavras de uma string (como se fosse cin)
    Converter strings para números de forma segura
    Parsear linhas completas sem problemas de buffer
    Formatar dados em strings (como se fosse cout)

    */

    cout << "\nContent of stringstream: " << ss.str() << "\nWith Length: " << ss.str().length() << "\n"<< endl; // printando o conteudo do objeto stringstream ss
    ss >> x >> y >> z; // extrai os valores do stream

    v1.push_back(x);
    v1.push_back(y);
    v1.push_back(z);

    printVector(v1);

    cout << endl;
    return 0;
}