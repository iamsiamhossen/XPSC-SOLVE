/**
 * Author: iamsiamhossen
 * Created: 01-04-2024 14:08:48
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
        vector<string> a(n);
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            string y = a[i];
            string x = "";
            for (int j = 0; j < y.size(); j++)
            {   
                x = y.substr(0, j + 1);
                string z = y.substr(j + 1);
                if (mp[x] and mp[z])
                {
                    ans[i]++;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }

    checkmate;
}