#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--){
        int n, i;
        cin >> n;

        vector <int> a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(i=1;i<n;i++)
        {
            if(a[i] < a[i-1]){
                break;
            }
        }

        if (i == n){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
