/**
 * Author: iamsiamhossen
 * Created: 22-03-2024 22:14:40
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

    int k, s;
    cin >> k >> s;
    ll count = 0;
    for (int a = 0; a <= k; a++)
    {
        for (int b = 0; b <= k; b++)
        {
            int c = s - a - b;
            if (c >= 0 and c <= k)
            {
                // cout << c << " ";
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}