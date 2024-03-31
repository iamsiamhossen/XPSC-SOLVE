/**
 * Author: iamsiamhossen
 * Created: 31-03-2024 21:39:49
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
const int N = 225;
int a[N][N];
int upleft(int i, int j, int n, int m, int mat[N][N])
{
    int sum = 0;
    while (i >= 0 and j >= 0 and i < n and j < m)
    {
        sum += mat[i][j];
        i--;
        j--;
    }
    return sum;
}
int upright(int i, int j, int n, int m, int mat[N][N])
{
    int sum = 0;
    while (i >= 0 and j >= 0 and i < n and j < m)
    {
        sum += mat[i][j];
        i--;
        j++;
    }
    return sum;
}
int downleft(int i, int j, int n, int m, int mat[N][N])
{
    int sum = 0;
    while (i >= 0 and j >= 0 and i < n and j < m)
    {
        sum += mat[i][j];
        i++;
        j--;
    }
    return sum;
}
int downright(int i, int j, int n, int m, int mat[N][N])
{
    int sum = 0;
    while (i >= 0 and j >= 0 and i < n and j < m)
    {
        sum += mat[i][j];
        i++;
        j++;
    }
    return sum;
}
int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int total = a[i][j] + upleft(i - 1, j - 1, n, m, a) + upright(i - 1, j + 1, n, m, a) + downleft(i + 1, j - 1, n, m, a) + downright(i + 1, j + 1, n, m, a);
                ans = max(ans, total);
            }
        }
        cout << ans << endl;
        
    }

    checkmate;
}