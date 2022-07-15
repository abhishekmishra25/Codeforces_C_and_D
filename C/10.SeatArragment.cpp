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
    void seatArrangement(const vector<vector<char>> &arr, int n, int m, int k)
    {
        int maxSum = 0, currSum = 0;
        ins(i, 0, n)
        {
            if (m - k >= 0)
            {
                ins(j, 0, m - k)
                {
                    bool flag = true;
                    ins(p, j, j + k)
                    {
                        if (arr[i][p] == '.')
                            true;
                        else
                            break;
                    }
                    currSum++;
                }
            }
        }
    }
};
int main()
{
    int n, m, s;
    cin >> n >> m >> s;
    vector<vector<char>> arr(n, vector<char>(m, 0));
    ins(i, 0, n)
    {
        ins(j, 0, m) cin >> arr[i][j];
    }
    solution ob1;
    ob1.seatArrangement(arr, n, m, s);
    return 0;
}