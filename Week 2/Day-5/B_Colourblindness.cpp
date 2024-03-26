/**
 * Author: iamsiamhossen
 * Created: 26-03-2024 13:51:50
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[2][n];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                if (s[i][j] == 'G')
                {
                    s[i][j] = 'B';
                }
            }
        }
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (s[0][j] != s[1][j])
            {
                flag = true;
            }
        }

        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}