/*
author: Abhishek Mishra
don't copy my fuckin solution
*/
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
class solution
{
public:
    vector<int> doRep(const vector<int> &arr, int n)
    {
        vector<int> rep(n, 0);
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                rep[i] = rep[i - 1] + (arr[i - 1] - arr[i]);
            }
            else
            {
                rep[i] = rep[i - 1];
            }
        }
        return rep;
    }
    vector<int> doper(const vector<int> &arr, int n)
    {
        vector<int> popt(n, 0);
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                popt[i] = popt[i + 1] + (arr[i + 1] - arr[i]);
            }
            else
            {
                popt[i] = popt[i + 1];
            }
        }
        return popt;
    }
};
int main()
{

    ll n, m;
    cin >> n >> m;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.pb(x);
    }
    solution ob1;
    vector<int> pre = ob1.doRep(arr, n);
    vector<int> post = ob2.doper(arr, n);

    while (m--)
    {
        ll a, b;
        cin >> a >> b;
        if (a > b)
        {
            ll ans = post[b - 1] - post[a - 1];
            cout << ans;
        }
        else
        {
            ll ans = pre[b - 1] - pre[a - 1];
            cout << ans;
        }
        cout << endl;
    }

    return 0;
}