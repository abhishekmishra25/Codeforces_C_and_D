
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
        int door;
        cin >> door;
        int d1, d2, d3, i = 3;
        bool flag = false;
        cin >> d1 >> d2 >> d3;
        while (i--)
        {

            if (door == 3)
            {
                door = d3;
                flag = true;
            }
            else if (door == 2)
            {
                door = d2;
                flag = true;
            }
            else if (door == 1)
            {
                door = d1;
                flag = true;
            }
            else
            {
                if (door == 0)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}