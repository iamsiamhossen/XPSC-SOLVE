/**
 * Author: iamsiamhossen
 * Created: 26-03-2024 15:51:29
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
        int val;
        map<int, int> freq;
        int max_freq = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            freq[val]++;
            max_freq = max(max_freq, freq[val]);
        }
        if (max_freq == n)
        {
            cout << "0" << endl;
        }
        else
        {
            int res = 0;
            while (max_freq < n)
            {
                int remaining_value = n - max_freq;
                // after cloning
                int val_add = max_freq;
                res++;
                // after swapping
                res += min(val_add, remaining_value);
                max_freq += min(val_add, remaining_value);
            }
            cout << res << endl;
        }
    }

    return 0;
}