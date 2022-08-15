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
    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> temp(n);
    temp = v;
    ll count = 0;
    sort(all(v));
    vector<int> duplicate(v.begin(), v.begin() + k);
    forn(i, k)
    {
        auto it = find(duplicate.begin(), duplicate.end(), temp[i]);
        if (it == duplicate.end())
        {
            count += 1;
        }
    }
    cout << count << endl;
}
return 0;
}