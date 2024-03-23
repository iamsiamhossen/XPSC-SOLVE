/**
 * Author: iamsiamhossen
 * Created: 23-03-2024 20:32:03
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int c;
            string s;
            cin >> c >> s;

            for (int j = 0; j < c; j++)
            {
                if (s[j] == 'U')
                {
                    if (v[i] == 0)
                    {
                        v[i] = 9;
                    }
                    else
                    {
                        v[i]--;
                    }
                }
                else if (s[j] == 'D')
                {
                    if (v[i] == 9)
                    {
                        v[i] = 0;
                    }
                    else
                    {
                        v[i]++;
                    }
                }
            }
        }
        for (int val : v)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}