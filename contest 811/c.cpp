#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
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
#define all(a) (a).begin(), (a).end()
#define fo(i, n) for (int k = i; k < n; k++)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
// // int vist[2][1e5];
// #define zz long long int
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n = 2;
        cin >> m;
        ll m, i;

        ll a[2][m];
        for (i = 0; i < m; i++)
            cin >> a[0][i];
        for (i = 0; i < m; i++)
            cin >> a[1][i];
        ll t = 0, count = 0, j = 0, temp = a[0][0];
        i = 0;
        if (a[1][0] <= a[0][1])
        {
            while (j < m)
            {
                if (i == 0)
                {
                    if (j % 2 == 0)
                    {
                        while (t < a[1][j])
                            t++;
                        i = 1;
                        t++;
                    }
                    else
                    {
                        while (t < a[0][j + 1])
                            t++;
                        j++;
                        t++;
                    }
                }
                else if (i == 1)
                {
                    if (j % 2 == 0)
                    {
                        while (t < a[1][j + 1])
                            t++;
                        j++;
                        t++;
                    }
                    else
                    {
                        while (t < a[0][j])
                            t++;
                        i = 0;
                        t++;
                    }
                }
            }
        }
        else
        {
            while (j >= 0)
            {
                if (i == 0 && j < n - 1)
                {
                    while (t < a[0][j + 1])
                        t++;
                    j++;
                    t++;
                }
                else if (j == n - 1 && i == 0)
                {

                    while (t < a[1][j])
                        t++;
                    i = 1;
                    t++;
                }
                else if (i == 1 && j >= 0)
                {
                    while (t < a[1][j - 1])
                        t++;
                    j--;
                    t++;
                }
            }
        }

        cout << t - 1 << "\n";
    }
}
int main()
{
    solve();
}
