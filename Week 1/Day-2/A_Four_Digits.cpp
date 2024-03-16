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
    int n;
    cin >> n;
    vector<int> v;
    while (n > 0)
    {
        v.push_back(n % 10);
        n = n / 10;
    }
    reverse(v.begin(), v.end());
    if (v.size() == 4)
    {
        for (int val : v)
        {
            cout << val;
        }
    }
    else
    {
        while (v.size() < 4)
        {
            v.insert(v.begin(), 0);
        }
        for (int val : v)
        {
            cout << val;
        }
    }

    return 0;
}