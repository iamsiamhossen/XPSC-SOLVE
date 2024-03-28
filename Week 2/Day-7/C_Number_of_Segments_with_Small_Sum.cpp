/**
 * Author: iamsiamhossen
 * Created: 27-03-2024 22:22:00
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
    int n;
    cin >> n;
    ll s;
    cin >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0;
    int l = 0, r = 0, ans = 0;
    while (r < n)
    {
        sum += a[r];
        if (sum <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > s)
            {
                sum -= a[l];
                l++;
            }
            if (sum <= s)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}