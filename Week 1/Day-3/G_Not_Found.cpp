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

    string s;
    cin >> s;
    map<char, int> mp;

    for (char c : s)
    {
        mp[c]++;
    }
    bool flag = false;
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (mp[i] == 0)
        {
            flag = true;
            cout << i << endl;
            return 0;
        }
    }
    if (flag == false)
    {
        cout << "None" << endl;
    }

    return 0;
}