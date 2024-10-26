#include <vector>
#include <random>
#include <iostream>
#include <algorithm>
using namespace std;

int argmax(const vector<int>&vec)
{
    int m = -200;
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] > m) m = vec[i];
    }
    auto q = find(vec.begin(), vec.end(), m);
    return (q - vec.begin());
}

int main() {
    vector<int> v = generate_random_vector<int>(10, -100, 50);
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    cout << argmax(v);
    return 0;
}
