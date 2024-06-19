#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    istringstream iss(S);
    string word;
    bool found = false;

    while (iss >> word) {
        if (word == "Jessica") {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

