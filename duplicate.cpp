#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector <int> A(N);
    for(int i=0;i<N;i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    /*int flag = 0;
    for (int i=0;i<N;i++)
    {
        if(A[i] == A[i - 1]){
            flag++;
        }
    }
    if(flag == 0){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
    return 0;*/

    for (int i = 1; i < N; ++i) {
        if (A[i] == A[i - 1]) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
