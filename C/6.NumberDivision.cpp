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
class solution
{
public:
    void numDivision(int n)
    {
        ll sum = n * (n + 1) / 2;

        if (sum % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }

        sum /= 2;
        vector<int> ans;
        while (n > 0)
        {
            if (sum - n >= 0)
            {
                // cout << n << " " << sum << endl;
                ans.pb(n);
                sum -= n;
            }
            n--;
        }

        cout << ans.size() << " ";
        for (auto a : ans)
            cout << a << " ";
    }
};
int main()
{
    int n;
    cin >> n;
    solution ob1;
    ob1.numDivision(n);
    return 0;
}