/**
 * Author: iamsiamhossen
 * Created: 30-04-2024 12:40:16
 **/
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
// HighLoad
#define ll long long int
#define pb push_back
#define ld long double
#define pi pair<ll, ll>
#define map map<int, int>
#define setd set<int, greater<int>>
#define seta set<int>
// next three are handy ways to get ints, it's also force you to use '&' sign
#define GET1(a) scanf("%d", &a)
#define GET2(a, b) scanf("%d%d", &a, &b)
#define GET3(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define GETS(x) scanf("%s", x) // get a char* string
#define INIT1(n) \
    LL(n);       \
    scanf("%lld", &(n))
#define INIT2(n, m) \
    LL(n), (m);     \
    scanf("%lld%lld", &(n), &(m))
#define INIT3(n, m, k) \
    LL(n), (m), (k);   \
    scanf("%lld%lld%lld", &(n), &(m), &(k))
// Vector
#define vec vector<ll>;
#define vvi vector<vi>;
// Vector Pair
#define vectorpair vector<ii>;
#define vvii vector<vii>;
// MOD
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define INF 1001001001
// for map, pair
#define mp make_pair
#define fi first
#define se second
// directions
const int fx[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
const int fxx[8][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
#define checkmate return 0;
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    // Query Part
    auto ok = [&](long long mid)
    {
        long long count = 0;
        for (int i = n / 2; i < n; i++)
        {
            count += (a[i] < mid ? (mid - a[i]) : 0);
        }
        return count <= k;
    };

    ll l = 1, r = 2e9, mid, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
}
int main()
{
    fastread();
    // int tc = 1;
    // cin >> tc;
    // for (int t = 1; t <= tc; t++)
    // {
    //     // cout << "Case " << t << ": ";
    //     solve();
    // }
    solve();
    checkmate;
}