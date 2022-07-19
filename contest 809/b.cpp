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
        int n;
        cin >> n;
        int *arr = new int[n + 2];
        ins(i, 0, n + 2) arr[i] = 0;
        map<int, vector<int>> ms;
        ins(i, 1, n + 1)
        {
            cin >> arr[i];
            ms[arr[i]].push_back(i);
        }
        for (auto it : ms)
        {
            cout << it.first << " : ";
            ins(i, 0, it.second.size())
            {
                cout << it.second[i] << " ";
            }
            cout << endl;
        }
        int *res = new int[n + 2];
        ins(i, 0, n + 2) res[i] = 0;
        memset(res, 0, sizeof(res));
        for (auto it : ms)
        {
            int sety = 1;
            ins(i, 1, it.second.size())
            {
                if ((it.second[i] - it.second[i - 1] - 1) & 1)
                    continue;
                sety++;
            }
            res[it.first] = sety;
        }
        delete[] arr;
        for (int i = 1; i <= n; i++)
            cout << res[i] << " ";
        cout << endl;
        delete[] res;
    }
    return 0;
}