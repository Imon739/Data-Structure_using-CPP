#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <long long> a(n);
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    vector <long long> prefixSum(n);
    prefixSum[0] = a[0];
    for (int i=1;i<n;i++)
    {
        prefixSum[i] = prefixSum[i - 1] + a[i];
    }
    for (int i = n-1;i>=0;i--)
    {
        cout << prefixSum[i] << " ";
    }
    cout << endl;
    return 0;
}
