#include <bits/stdc++.h>
using namespace std;

// Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL);

// Aliases
using ll = long long;
using ld = long double;
using ull = unsigned long long;

// Constants
const ld pi = 3.141592653589793238;
const ll INF = LONG_LONG_MAX;
const ll mod = 1e9 + 7;

// TypeDEf
typedef pair<ll, ll> pll;
typedef vector<int> vint;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> umll;
typedef map<ll, ll> mll;

// Macros
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
#define pimp cout << "IMPOSSIBLE\n";
#define vf(v) v.begin(), v.end()
#define vb(v) v.end(), v.begin()

void solve()
{
    int n;
    cin>>n;
    vint v(n);
    for(auto &a: v)
    cin>>a;
    // int mx = 0;
    sort(vf(v));
    cout<<v[n-2] + v[n-1]<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}