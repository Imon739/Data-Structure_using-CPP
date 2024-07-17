#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;
    cin >> n;
    vector<int> a(n);

    for (int i = 0;i<n;i++) {
        cin >> a[i];
    }

    cin >> m;
    vector<int> b(m);

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    cin >> x;

    a.insert(a.begin() + x, b.begin(), b.end());

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

