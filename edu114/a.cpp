
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#include "hello.cpp"
using namespace std;
#define ins(i, a, n) for (int i = a; i < n; i++)
#define des(i, a, n) for (int i = n - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define ll long long
#define all(v) v.begin(), v.end()
#define pqueue priority_queue
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;
const ll inf = 1e18;
const int N = 1e5 + 5;
#define print(a) cout << a << endl
template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p)
{
    return os << '(' << p.first << ", " << p.second << ')';
}
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define lli long long int
#define ld long double
#define sza(x) ((int)x.size())
#define fo(i, n) for (int k = i; k < n; k++)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
int solve(int n, int k)
{
    if (n == 1 and k == 1)
        return 0;
    int mid = pow(2, n - 1) / 2;
    if (k <= mid)
        return solve(n - 1, k);
    else
        return !solve(n - 1, k - mid);
}
signed main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    //     int a[n];
    //     int b[n];
    //     ins(i, 0, n) cin >> a[i];
    //     ins(i, 0, n) cin >> b[i];
    //     sort(a, a + n);
    //     sort(b, b + n);
    //     int l = 0, r = n - 1;
    //     while (l <= r)
    //         swap(b[l++], b[r--]);
    //     ins(i, 0, n)
    //     {
    //         a[i] = a[i] ^ b[i];
    //     }
    //     int xo = a[0];
    //     ins(i, 1, n) xo = xo & a[i];
    //     cout << xo << endl;
    // }
    // int n, k;
    // cin >> n >> k;
    // cout << solve(n, k) << endl;
    hello h1;
    return 0;
}