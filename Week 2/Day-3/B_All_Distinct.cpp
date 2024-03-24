/**
 * Author: iamsiamhossen
 * Created: 24-03-2024 21:01:41
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
        vector<int> a(n);
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        int ans = 0;
        int deleteValue = 0;
        for (auto i : freq)
        {
            if (i.second == 1)
            {
                ans = n;
            }
            else if (i.second > 1)
            {
                deleteValue += (i.second - 1);
            }
            else
            {
                deleteValue += i.second;
            }
        }
        ans = n - deleteValue;
        if (deleteValue % 2 != 0)
        {
            ans--;
        }
        cout << ans << endl;
    }

    return 0;
}