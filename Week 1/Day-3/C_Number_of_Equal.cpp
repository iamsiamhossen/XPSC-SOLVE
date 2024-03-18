/**
 * author: iamsiamhossen
 **/
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
#define ld long double
#define pi pair<ll, ll>
using namespace std;

int main()
{
    fastread();
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
    int i = 0, j = 0;
    ll ans = 0;
    while (i < n and j < m)
    {
        int cnt1 = 0, cnt2 = 0, curr = a[i];
        while (a[i] == curr and i < n)
        {
            cnt1++;
            i++;
        }
        while (curr > b[j])
        {
            j++;
        }

        while (b[j] == curr and j < m)
        {
            cnt2++;
            j++;
        }
        ans += (1ll * cnt1 * cnt2); // For big value Handle
    }
    cout << ans << endl;

    return 0;
}