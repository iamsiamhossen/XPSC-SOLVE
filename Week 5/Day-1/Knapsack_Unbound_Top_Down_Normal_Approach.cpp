/**
 * Author: iamsiamhossen
 * Created: 05-04-2024 21:04:29
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

int unbound_knapsack(int n, int s, vector<int> &v, vector<int> &w)
{
    // Base case
    if (n == 0 || s == 0)
    {
        return 0;
    }
    if (w[n - 1] <= s)
    {
        int niyedekhbo = v[n - 1] + unbound_knapsack(n, s-w[n - 1], v, w);
        int nanile = unbound_knapsack(n - 1, s, v, w);
        return max(niyedekhbo, nanile);
    }
    else
    {
        return unbound_knapsack(n - 1, s, v, w);
    }
}
int main()
{
    fastread();
    int n, s;
    cin >> n >> s;
    vector<int> a(n), w(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    int ans = unbound_knapsack(n, s, a, w);
    cout << ans<<endl;
    checkmate;
}