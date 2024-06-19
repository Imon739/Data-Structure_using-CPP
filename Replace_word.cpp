#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S, X;
        cin >> S >> X;

        size_t found = S.find(X);
        while (found != string::npos) {
            S.replace(found, X.length(), "#");
            found = S.find(X);
        }

        cout << S << endl;
    }

    return 0;
}
