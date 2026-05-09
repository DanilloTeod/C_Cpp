#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    vector<int> v{};
    string lineInput;
    int a, b, c, d, e;
    int sum{0};


    cout << "Enter the 5 values of vector: " << endl;
    getline(cin, lineInput);

    stringstream ss(lineInput);
    ss >> a >> b >> c >> d >> e;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    v.push_back(e);

    cout << "\nVector = ";  
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;
    
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    
    cout << "\nSum of the vector's elements = "<< sum << endl;
    return 0;
}

