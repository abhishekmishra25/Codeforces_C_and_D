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
// void photo(int n, int x, vector<int> &arr)
// {

// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int t = 2 * n;
        vector<int> arr(t, 0);
        ins(i, 0, t) cin >> arr[i];
        sort(all(arr));
        // ins(i, 0, t) cout << arr[i] << " ";
        // cout << endl;
        vector<int> row1(n, 0);
        vector<int> row2(n, 0);
        int i = 0;
        for (i = 0; i < n; i++)
            row1[i] = arr[i];
        for (int j = 0; j < n; j++)
            row2[j] = arr[i++];
        bool flag = false;
        // ins(i, 0, n) cout << row1[i] << " ";
        // cout << endl;
        // ins(i, 0, n) cout << row2[i] << " ";
        // cout << endl;
        for (int k = 0; k < n; k++)
        {
            if (row1[k] + x <= row2[k])
            {
                flag = true;
                continue;
            }
            else
            {
                print("NO");
                flag = false;
                break;
            }
        }
        if (flag)
            print("YES");
    }
    return 0;
}