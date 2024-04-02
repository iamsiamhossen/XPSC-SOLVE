/**
 * Author: iamsiamhossen
 * Created: 02-04-2024 00:43:09
 **/
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
#define pb push_back
#define ld long double
#define pi pair<ll, ll>
#define checkmate return 0;
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
        map<int, int> freq;
        int a[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
                if (j == n - 2)
                {
                    freq[a[i][j]]++;
                }
            }
        }
        int maxcount = INT_MIN;
        int maximumvalue = 0;
        vector<int> ans;
        for (auto i : freq)
        {
            if (i.second > maxcount)
            {
                maxcount = i.second;
                maximumvalue = i.first;
            }
        }
        int countrow;
        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            for (int j = 0; j < n - 1; j++)
            {
                if (a[i][j] == maximumvalue)
                {
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                countrow = i;
            }
        }
        int i = countrow;
        for (int j = 0; j < n - 1; j++)
        {
            ans.push_back(a[i][j]);
        }
        ans.push_back(maximumvalue);
        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    checkmate;
}