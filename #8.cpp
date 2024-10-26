#include <vector>
#include <string>
#include <iostream>
using namespace std;

string join(const vector<string>& arr, const string& sep) 
{
    string res;
    for (int i = 0; i < arr.size(); ++i) {
        res += arr[i];
        if (i < arr.size() - 1) res += sep;
    }
    return res;
}
int main () {
    vector<string> arr = {"Can", "you", "can", "a", "can", "as", "a", "canner", "can", "can", "a", "can?"};
    string str = join(arr, " ");
    cout << str;
    return 0;
}
