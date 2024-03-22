/**
 * Author: iamsiamhossen
 * Created: 22-03-2024 23:21:56
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
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << "+" << endl;
        }
        else
        {
            cout << "-" << endl;
        }
    }

    return 0;
}