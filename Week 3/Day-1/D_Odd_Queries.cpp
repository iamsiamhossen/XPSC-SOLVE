/**
 * Author: iamsiamhossen
 * Created: 30-03-2024 14:56:06
 **/
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
#define pb push_back
#define ld long double
#define pi pair<ll, ll>
using namespace std;

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> v(n+1,0);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<ll> pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + v[i];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll sum = pref[n];
            sum -= (pref[r] - pref[l - 1]);
            sum += ((r - l + 1ll) * k);
            sum % 2ll == 1ll ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }

    return 0;
}