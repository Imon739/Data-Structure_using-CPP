#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    istringstream iss(S);
    string word;

    while (iss >> word) {
        if (word == "Jessica") {
            cout << "YES" << endl;
            return 0; 
        }
    }

    cout << "NO" << endl;
    return 0;
}
