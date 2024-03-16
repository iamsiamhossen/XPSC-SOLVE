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
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << a + (a - 1) << endl;
    }
    else if (a < b)
    {
        cout << b + (b - 1) << endl;
    }
    else if (a == b)
    {
        cout << a + b << endl;
    }

    return 0;
}