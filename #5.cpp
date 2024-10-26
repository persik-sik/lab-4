#include <vector>
#include <random>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool remove_first_negative_element(vector<int>& vec, int& removed_element) {
    removed_element = 0;
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] < 0) {
            removed_element = vec[i];
            vec.erase(vec.begin() + i);
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> v = generate_random_vector<int>(10, -100, 50);
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    
    int removed_element;
    remove_first_negative_element(v, removed_element);
    for (int num : v) {
        cout << num << " ";
    }
    return 0;
}
