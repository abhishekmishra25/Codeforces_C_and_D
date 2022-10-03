// https://codeforces.com/problemset/problem/1733/A

#include <bits/stdc++.h>

using namespace std;
class solution
{
public:
    int solve(int n, int arr[], int k)
    {
        if (n < k)
            return -1;
        for (int i = 0; i < n; i++)
        {
            swap(arr[i], arr[i % k]);
        }
        int res = 0;
        for (int i = 0; i < k; i++)
            res += arr[i];
        int curr_sum = res;
        for (int i = k; i < n; i++)
        {
            curr_sum += arr[i] - arr[i - k];
            res = max(res, curr_sum);
        }
        return res;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solution ob1;
        int ans = ob1.solve(n, arr, k);
        cout << ans << endl;
    }
    return 0;
}