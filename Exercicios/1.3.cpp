#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    vector<double> v{7.5, 8.0, 6.5, 9.0};
    double sum{0};
    double media;

    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }

    media = sum/v.size();
    cout << "Media = " << media << endl;

    return 0;
}