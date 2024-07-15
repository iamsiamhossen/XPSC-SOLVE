/**
 * Author: iamsiamhossen
 * Created: 15-07-2024 23:58:03
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define int long long
#define float double
// HighLoad
#define int long long int
#define pb push_back
#define ld long double
#define pi pair<int, int>
#define map map<int, int>
#define setd set<int, greater<int>>
#define seta set<int>
// next three are handy ways to get ints, it's also force you to use '&' sign
#define GET1(a) scanf("%d", &a)
#define GET2(a, b) scanf("%d%d", &a, &b)
#define GET3(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define GETS(x) scanf("%s", x) // get a char* string
#define INIT1(n) \
    int(n);      \
    scanf("%intd", &(n))
#define INIT2(n, m) \
    int(n), (m);    \
    scanf("%intd%intd", &(n), &(m))
#define INIT3(n, m, k) \
    int(n), (m), (k);  \
    scanf("%intd%intd%intd", &(n), &(m), &(k))
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define Ok cout << "Ok\n"
// Vector
#define vec vector<int>;
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
#define forn (long long i = 0; i < long long(n); i++)
#define aint(x) (x).begin(), (x).end()
// directions
const int fx[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
const int fxx[8][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
#define checkmate return 0;
using namespace __gnu_pbds;
using namespace std;
// template <typename T>
// using pbds = tree<T, nuint_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    
        int n;
    cin >> n;
    deque<int> x, b;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            b.push_front(a[i]);
        else
            x.push_back(a[i]);
    }
    for (auto u : x)
        cout << u << " ";

    for (auto u : b)
        cout << u << " ";
}
int32_t main()
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