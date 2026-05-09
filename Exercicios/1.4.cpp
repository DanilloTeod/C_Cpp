#include <iostream>
#include <vector>
#include <climits>

using namespace std;


int main() {
    vector<double> v1{1, 2, 3};
    vector<double> v2{4, 5, 6};
    double product{0};

    for(int i = 0; i < v1.size(); i++){
        product += v1[i]* v2[i];
    }
    cout << "Product v1*v2 = " << product << endl;
    return 0;
}