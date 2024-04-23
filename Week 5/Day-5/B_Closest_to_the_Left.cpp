#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (k--)
    {
        int val;
        cin >> val;
        auto it = upper_bound(v.begin(), v.end(), val);
        cout << it - v.begin() << endl;
    }
    return 0;
}