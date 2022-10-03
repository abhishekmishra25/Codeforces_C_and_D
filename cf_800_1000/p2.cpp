#include <bits/stdc++.h>

using namespace std;
class solution
{
public:
    void solve(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j >= 0; j--)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solution ob1;
        ob1.solve(n);
    }

    return 0;
}