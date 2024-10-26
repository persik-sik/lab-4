#include <vector>
#include <random>
#include <iostream>
using namespace std;

float mean(const vector<int>&vec)
{
    float s = 0;
    for (int i = 0; i < vec.size(); ++i) {
        s += vec[i];
    }
    return (s/ vec.size());
}

int main() {
    vector<int> v = generate_random_vector<int>(10, -100, 50);
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    cout << mean(v);
    return 0;
}
