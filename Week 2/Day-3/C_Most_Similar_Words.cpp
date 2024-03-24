/**
 * Author: iamsiamhossen
 * Created: 24-03-2024 09:38:29
 **/
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
#define ld long double
#define pi pair<ll, ll>
using namespace std;
int totalCost(string a, string b)
{
    ll c = 0;
    for (int i = 0; i < a.size(); i++)
    {
        c += abs(a[i] - b[i]);
    }
    return c;
}
int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ans = min(ans, totalCost(s[i], s[j]));
            }
        }
        cout << ans << endl;
    }

    return 0;
}