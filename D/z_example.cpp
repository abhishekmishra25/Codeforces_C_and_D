#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 4, k = 4;
    int res = 1;
    for (int i = 0; i <= k; i++)
    {
        res *= (n - i);
        res /= (i + 1);
        cout << res << " ";
    }
    return 0;
}