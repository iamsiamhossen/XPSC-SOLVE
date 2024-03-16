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
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            flag = true;
            cout << i << endl;
            return 0;
        }
    }
    if (flag == false)
    {
        cout << "-1" << endl;
    }

    return 0;
}