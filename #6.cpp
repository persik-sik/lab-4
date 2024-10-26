#include <iostream>
#include <string>
using namespace std;
string replace(const string& str, const string& old, const string& new_string) 
{
    string res;
    int pos = 0;
    int oldlen = old.size();
    while (true) {
        int found = str.find(old, pos);
        if (found == string::npos) {
            res.append(str, pos, str.length() - pos);
            break;
        }
        res.append(str, pos, found - pos);
        res += new_string;
        pos = found + oldlen;
    }
    return res;
}

int main() {
    string newString = replace("Can you can a can as a canner can can a can?", "can", "cAN");
    cout << newString;
    return 0;
}
