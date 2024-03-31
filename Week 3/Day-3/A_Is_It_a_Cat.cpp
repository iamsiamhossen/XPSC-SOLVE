/**
 * Author: iamsiamhossen
 * Created: 30-03-2024 12:06:20
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
        string tmp = "";
        string ch = "meow";
        for (int i = 0; i < n; i++)
        {
            if (tmp.empty() or tmp.back() != s[i])
            {
                tmp+=s[i];
            }
        }
        if (tmp == ch)
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