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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        ins(i, 0, n) cin >> arr[i];
        if (n % 2)
        {
            ll res = 0;
            insk(i, 1, n - 1, 2)
            {
                res += max(max((ll)arr[i - 1], (ll)arr[i + 1]) + 1 - (ll)arr[i], 0LL);
            }

            print(res);
        }

        else
        {

            // vi pref(n / 2), pref2(n / 2);
            int *pre1 = new int[n / 2];
            ins(i, 0, n / 2) pre1[i] = 0;
            ll j = 1;
            insk(i, 1, n - 1, 2)
            {
                int res = max(max((ll)arr[i - 1], (ll)arr[i + 1]) + 1 - (ll)arr[i], 0LL);
                pre1[j] = pre1[j - 1] + res;
                j++;
            }
            // ins(i, 0, n / 2) cout << pre1[i] << " ";
            // cout << endl;
            int *pre2 = new int[n / 2];
            ins(i, 0, n / 2) pre2[i] = 0;
            ll k = 1;
            insk(i, 1, n - 1, 2)
            {
                int res = max(max((ll)arr[i - 1], (ll)arr[i + 1]) + 1 - (ll)arr[i], 0LL);
                pre2[k] = pre2[k - 1] + res;
                k++;
            }
            // ins(i, 0, n / 2) cout << pre2[i] << " ";
            // cout << endl;

            // f(i,0,n/2)cout<<pref[i]<<" ";
            // cout<<endl;
            ll ans;
            ans = LLONG_MAX;

            for (int i = 0; i < n / 2; i++)
            {
                ans = min(ans, (ll)pre1[i] + (ll)pre2[n / 2 - 1] - (ll)pre2[i]);
            }
            delete[] pre1;
            delete[] pre2;

            print(ans);
        }
    }
}