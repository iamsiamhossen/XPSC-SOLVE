/**
 * Author: iamsiamhossen
 * Created: 04-06-2024 02:05:13
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define Ok cout << "Ok\n"
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
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define all(x) (x).begin(), (x).end()
// directions
const int fx[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
const int fxx[8][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
#define checkmate return 0;
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n, key;
    cin >> n >> key;
    vector<int> a(n);
    forn(i, n) cin >> a[i];
    vector<pair<int, int>> c;
    forn(i, n)
    {
        c.push_back({a[i], i + 1});
    }
    sort(c.begin(), c.end());
    vector<int> ans;
    forn(i, n)
    {
        int tmp = c[i].first;
        ll l = i + 1, r = n - 1, sum = 0;
        while (l < r)
        {
            sum = tmp + (c[l].first + c[r].first);
            if (sum == key)
            {
                ans.pb(c[i].second);
                ans.pb(c[l].second);
                ans.pb(c[r].second);
                sort(ans.begin(), ans.end());
                for (auto u : ans)
                    cout << u << " ";
                return;
            }
            else if (sum < key)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
}
int main()
{
    fastread();
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    checkmate;
}