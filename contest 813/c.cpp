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
#define fo(i, n) for (int k = i; k < n; k++)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solv(int n, int m, vector<string> v)
{
    int n, m;
    cin >> n >> m;
    int val(0);
    int cnt1(0), cnt2(0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '0')
            {
                cnt1++;
                for (int k = 0; k < 8; k++)
                {
                    int nx = i + dx[k];
                    int ny = j + dy[k];

                    if (nx < n && nx >= 0 && ny >= 0 && ny < m && v[nx][ny] == '0')
                        cnt2++;
                }
            }
            else
                val++;
        }
    }

    if (cnt2)
        cout << val << endl;
    else if (cnt1)
        cout << val - 1 << endl;
    else
        cout << val - 2 << endl;
}
signed main()
{
    int t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        ins(i, 0, n)
        {
            cin >> v[i];
        }
        solv(n, m, v);
    }
}