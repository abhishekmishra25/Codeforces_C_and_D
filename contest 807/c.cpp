#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
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
// void solve

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, q;
        cin >> n >> c >> q;
        string s;
        cin >> s;
        // vector<int> l(c, 0);
        // vector<int> r(c, 0);
        vector<int> qu(q, 0);
        pair<ll, ll> lr[c];
        ins(i, 0, c)
        {
            ll l, r;
            cin >> l >> r;
            lr[i] = mp(l, r);
        }
        // ins(i, 0, c)
        // {
        //     cout << lr[i].first << " " << lr[i].second << endl;
        // }
        ins(i, 0, q) cin >> qu[i];

        ins(i, 0, c)
        {
            string temp = "";
            for (int j = lr[i].first - 1; j < lr[i].second; j++)
                temp += s[j];
            s += temp;
            temp = "";
            // cout << s << " ";
        }
        ins(i, 0, q) print(s[qu[i] - 1]);
    }
    return 0;
}