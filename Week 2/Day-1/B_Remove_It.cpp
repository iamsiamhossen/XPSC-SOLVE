/**
 * Author: iamsiamhossen
 * Created: 22-03-2024 22:39:02
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
    ll n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        if (val != k)
        {
            cout << val << " ";
        }
    }
    return 0;
}