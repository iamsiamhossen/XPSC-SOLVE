/**
 * Author: iamsiamhossen
 * Created: 27-03-2024 12:23:34
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> m;
        for (char c : s)
        {
            m[c]++;
        }
        int odd = 0;
        for (auto i : m)
        {
            if (i.second % 2 != 0)
            {
                odd++;
            }
        }
        if (k >= odd - 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}