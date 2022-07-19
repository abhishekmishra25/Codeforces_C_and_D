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
        int n, m;
        cin >> n >> m;
        int *arr = new int[n];
        ins(i, 0, n) cin >> arr[i];
        string ans = "";
        ins(i, 0, m) ans += "B";
        ins(i, 0, n)
        {
            arr[i] = arr[i] - 1;
            if (arr[i] <= m - 1 - arr[i])
            {
                if (ans[arr[i]] == 'B')
                {
                    ans[arr[i]] = 'A';
                }
                else
                {
                    ans[m - 1 - arr[i]] = 'A';
                }
            }
            else
            {
                if (ans[m - 1 - arr[i]] == 'B')
                {
                    ans[m - 1 - arr[i]] = 'A';
                }
                else
                {
                    ans[arr[i]] = 'A';
                }
            }
        }
        print(ans);
    }
    return 0;
}