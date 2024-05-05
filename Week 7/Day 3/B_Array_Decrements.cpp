/**
 * Author: iamsiamhossen
 * Created: 05-05-2024 16:25:02
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
#define forn(i, n) for (ll i = 0; i < int(n); i++)
// directions
const int fx[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
const int fxx[8][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
#define checkmate return 0;
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    forn(i, n)
    {
        cin >> a[i];
    }
    forn(i, n)
    {
        cin >> b[i];
    }
    ll mdif = 1e9;
    bool ok = true;
    forn(i, n)
    {
        if (a[i] < b[i])
        {
            NO;
            return;
        }
        ll dif = a[i] - b[i];
        if (b[i] > 0)
        {
            mdif = min(mdif, dif);
        }
        else if (dif > mdif)
        {
            ok = false;
            break;
        }
    }
    // if (!ok)
    // {
    //     NO;
    //     return;
    // }
    forn(i, n)
    {
        if (a[i] - b[i] > mdif)
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        YES;
    }
    else
    {
        NO;
    }
}
int main()
{
    fastread();
    ll tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    checkmate;
}