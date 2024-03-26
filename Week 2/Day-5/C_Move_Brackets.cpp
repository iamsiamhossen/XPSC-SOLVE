/**
 * Author: iamsiamhossen
 * Created: 26-03-2024 14:17:50
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
        int n;
        cin >> n;
        vector<char> c(n);
        int open = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            if (c[i] == '(')
            {
                open++;
            }
            if (c[i] == ')' and open > 0)
            {
                open--;
            }
        }
        cout << open << endl;
        ;
    }

    return 0;
}