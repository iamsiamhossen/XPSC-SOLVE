/**
 * Author: iamsiamhossen
 * Created: 22-03-2024 23:16:23
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
    string a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}