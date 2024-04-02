/**
 * Author: iamsiamhossen
 * Created: 02-04-2024 10:40:16
 **/
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
#define pb push_back
#define ld long double
#define pi pair<ll, ll>
#define checkmate return 0;
using namespace std;

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> track;
        ll total = 0;
        ll change = 0;
        for (int i = 0; i < n; i++)
        {
            ll l = i;
            ll r = n - i - 1;
            if (s[i] == 'L')
            {
                if (r > l)
                {
                    change++;
                    total += r;
                    track.pb(r - l);
                }
                // Jodi Change kori tokhn e shudu Track rakhte hobe r-l er value
                else
                {
                    total += l;
                }
            }
            else
            {
                if (s[i] == 'R')
                {
                    if (l > r)
                    {
                        change++;
                        total += l;
                        track.pb(l - r);
                    }
                    // Jodi Change kori tokhn e shudu Track rakhte hobe r-l er value
                    else
                    {
                        total += r;
                    }
                }
            }
        }
        vector<ll> ans(n + 1);
        for (int i = change; i <= n; i++)
        {
            ans[i] = total;
        }
        sort(track.rbegin(), track.rend());
        for (int i = change - 1; i >= 1; i--)
        {
            ans[i] = ans[i + 1] - track.back();
            track.pop_back();
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    checkmate;
}