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

int ans[300][300];
class solution
{
public:
    void labs(int n)
    {
        int ans[n][n];

        int k = 1, i, j;
        ins(i, 0, n)
        {
            if (i % 2 != 0)
            {
                for (j = n - 1; j >= 0; j--)
                    ans[j][i] = k++;
            }

            else
            {
                for (j = 0; j < n; j++)
                    ans[j][i] = k++;
            }
        }
        ins(i, 0, n)
        {
            ins(j, 0, n)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    solution ob1;
    ob1.labs(n);
    return 0;
}