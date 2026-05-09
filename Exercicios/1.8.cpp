#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    double sum{0};
    double media{0};
    double somatorium{0};
    double d{0};
    vector<double> v = {2, 4, 8, 16, 30, 60};

    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }

    media = sum/v.size();
    for(int i = 0; i < v.size(); i++){
        somatorium += (v[i] - media) * (v[i] - media);
    }

    d = sqrt(somatorium/v.size());

    cout << "Sigma: " << d << endl;

    return 0;
}