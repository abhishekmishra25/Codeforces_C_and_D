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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v;
        bool flag = true;
        for (ll i = 1; i <= n; i++)
        {
            if (i - l % (i) + l >= l && i - l % (i) + l <= r)
                v.push_back(i + l - 1);
            else
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            print("NO");
        }
        else
        {
            print("YES");
            for (auto x : v)
                cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
