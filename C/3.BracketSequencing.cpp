#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    string BracketSequencing(string s, int n, int k)
    {
        string ans = "";
        int count = 0;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = 0;
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            if (count == k)
                break;
            if (s[i] == '(')
                st.push(i);
            else
            {
                if (st.empty())
                    st.push(i);
                else
                {
                    arr[i] = 1;
                    int k = st.top();
                    arr[k] = 1;
                    st.pop();
                    count += 2;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
                ans += s[i];
        }
        return ans;
    }
};

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    solution ob1;
    cout << ob1.BracketSequencing(s, n, k);
    return 0;
}