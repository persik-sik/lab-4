#include <vector>
#include <random>
#include <iostream>
#include <algorithm>
using namespace std;

void sort(vector<int>&vec)
{
    int n = vec.size();
    for (int i = 0; i < n-1; ++i){
        for (int j = 0; j <n-1; ++j){
            if (vec[j] < vec[j+1]) swap(vec[j], vec[j+1]);
        }
    }
}

int main() {
    vector<int> v = generate_random_vector<int>(10, -100, 50);
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    sort(v);
    for (int num : v) {
        cout << num << " ";
    }
    return 0;
}
