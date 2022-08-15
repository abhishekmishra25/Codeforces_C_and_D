// Author Abhishek

#include <bits/stdc++.h>

using namespace std;
class solution
{
public:
    int countSubsetSum(vector<int> &arr, int target)
    {
        int dp[arr.size() + 1][target + 1];
        for (int i = 0; i <= arr.size(); i++)
        {
            dp[i][0] = 1;
        }
        for (int i = 1; i <= target; i++)
            dp[0][i] = 0;
        for (int i = 1; i <= arr.size(); i++)
        {
            for (int j = 1; j <= target; j++)
            {
                if (arr[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] + dp[i - 1][j];
                }
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[arr.size()][target];
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    solution ob1;
    cout << ob1.countSubsetSum(arr, target) << endl;
}