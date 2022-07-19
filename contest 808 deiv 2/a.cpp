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
// void DiffOperator(vector<int> &arr, int n)
// {
//     int n = scanner.nextInt();
//     int[] arr = new int[n];
//     booldoable = true;
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = scanner.nextInt();
//         if (arr[i] % arr[0] != 0)
//         {
//             doable = false;
//         }
//     }
//     System.out.println(doable ? "YES" : "NO");
// }
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        bool doable = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            // arr[i] = scanner.nextInt();
        }
        ins(i, 0, n)
        {
            if (arr[i] % arr[0] != 0)
            {
                doable = false;
            }
        }
        if (doable)
            print("YES");
        else
            print("NO");
    }
    return 0;
}