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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        ins(i, 0, n) cin >> a[i];
        vector<int> b(n - 1, 0);
        while (n > 1)
        {
            ins(j, 0, n - 1)
            {
                b[j] = a[j + 1] - a[j];
            }
            sort(b.begin(), b.end());
            ins(i, 0, n - 1)
            {
                a[i] = b[i];
            }
            n--;
        }
        print(a[0]);
    }
    return 0;
}