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
    void sol(int n, vector<int> &arr)
    {
        ll res = 0;
        int k = 0;
        ins(i, 0, n - 1)
        {
            if (arr[i] != 0)
                k = 1;
            if (k != 0)
            {
                if (arr[i] == 0)
                    res += 1;
                else
                    res += arr[i];
            }
        }
        print(res);
        return;
    }
};
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
        solution ob1;
        ob1.sol(n, arr);
    }
    return 0;
}