#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    long long i = 0, j = 0;
    while (j < b.size())
    {
        while (i < a.size() and a[i] < b[j])
        {
            i++;
        }
        cout << i << " ";
        j++;
    }
    return 0;
}
