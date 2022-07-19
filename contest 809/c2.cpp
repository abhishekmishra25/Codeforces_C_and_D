#include <bits/stdc++.h>
using namespace std;
#define ins(i, a, n) for (int i = a; i < n; i++)
#define insk(i, a, n, k) for (int i = a; i < n; i += k)
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
void dbg_out()
{
    cerr << endl;
}
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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n, 0);
        ins(i, 0, n)
        {
            cin >> arr[i];
        }
        dbg(arr);
        ll ans = 0;
        if (n % 2 == 1)
        {
            for (int i = 1; i < n; i += 2)
            {
                ans += (max(arr[i - 1], arr[i + 1]) - arr[i] < 0) ? 0 : max(arr[i - 1], arr[i + 1]) - arr[i] + 1;
                dbg(ans);
            }
        }
        else
        {
            long long res1 = 0;
            for (int i = 1; i < n - 1; i += 2)
            {
                res1 += (max(arr[i - 1], arr[i + 1]) - arr[i] < 0) ? 0 : max(arr[i - 1], arr[i + 1]) - arr[i] + 1;
                dbg(res1);
            }

            long long res2 = 0;
            for (int i = 2; i < n - 1; i += 2)
            {
                res2 += (max(arr[i - 1], arr[i + 1]) - arr[i] < 0) ? 0 : max(arr[i - 1], arr[i + 1]) - arr[i] + 1;
                dbg(res2);
            }

            long long res3 = LLONG_MAX;
            if (n == 6)
            {
                res3 = 0;
                for (int i = 1; i < n - 1; i += 3)
                {
                    res3 += (max(arr[i - 1], arr[i + 1]) - arr[i] < 0) ? 0 : max(arr[i - 1], arr[i + 1]) - arr[i] + 1;
                    dbg(res3);
                }
            }

            ans = min({res1, res2, res3});
        }
        cout << ans << endl;
    }
    return 0;
}