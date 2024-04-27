/**
 * Author: iamsiamhossen
 * Created: 27-04-2024 21:14:00
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
    vector<int> a(k);
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    ll sum = 0, ans = 0;
    sort(a.begin(), a.end());
    for (int i = k - 1; i >= 0; i--)
    {
        sum += n - a[i];
        if (sum < n)
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
}
int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    checkmate;
}