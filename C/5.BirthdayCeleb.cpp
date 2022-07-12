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
    void height_diff(int n, vector<int> height)
    {
        int *arr = new int[n];
        ins(i, 0, n) arr[i] = 0;
        sort(all(height));
        int i = 0, j = n - 1, k = 0;
        while (i < j)
        {
            arr[i++] = height[k++];
            arr[j--] = height[k++];
        }
        if (i == j)
            arr[i] = height[k];
        ins(i, 0, n) cout << arr[i] << " ";
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> height(n, 0);
    ins(i, 0, n) cin >> height[i];
    solution ob1;
    ob1.height_diff(n, height);
    return 0;
}