/**
 * author: iamsiamhossen
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
    int a, b, t;
    cin >> a >> b >> t;
    int ans = 0, pass = a;
    while (pass <= t + 0.5)
    {
        ans += b;
        pass += a;
    }
    cout << ans << endl;

    return 0;
}