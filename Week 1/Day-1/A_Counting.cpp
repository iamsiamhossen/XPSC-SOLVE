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
    int count = 0;
    if (a > b)
    {
        cout << "0" << endl;
    }
    else
    {
        for (int i = a; i <= b; i++)
        {
            count++;
        }
        cout << count << endl;
    }

    return 0;
}