/**
 * Author: iamsiamhossen
 * Created: 31-05-2024 20:48:19
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
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define Ok cout << "Ok\n"
// Vector
#define vi vector<int>
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
using namespace std;
// vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
void solve()
{
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    int n;
    cin >> n;
    vi b(n);
    forn(i, n) cin >> b[i];
    vi c(n);
    forn(i, n) c[i] = -1;
    int cur = 1;
    for (auto u : a)
    {
        bool ok = false;
        forn(i, n)
        {
            if (c[i] != -1)
                continue;
            if (b[i] % u)
            {
                continue;
            }
            ok = true;
            c[i] = cur;
        }
        if (ok)
        {
            cur++;
        }
    }
    cout << (cur - 1) << endl;
    forn(i, n) cout << c[i] << " ";
    cout << endl;
}
int main()
{
    fastread();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    checkmate;
}