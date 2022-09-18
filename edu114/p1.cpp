#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
class solution
{
public:
    vector<int> postOrder(TreeNode *root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;
        TreeNode *curr = root;
        stack<TreeNode *> st;
        while (curr != NULL || !st.empty())
        {
            if (curr != NULL)
            {
                st.push(curr);
                curr = curr->left;
            }
            else
            {
                TreeNode *temp = st.top()->right;
                if (temp == NULL)
                {
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->val);
                    while (st.size() != 0 and temp == st.top()->right)
                    {
                        temp = st.top();
                        st.pop();
                        ans.push_back(temp->val);
                    }
                }
                else
                    curr = temp;
            }
        }
        return ans;
    }
    vector<int> minimun_value_added(TreeNode root)
    {
        vector<int> ans;
        if (!root)
            return {};
        vector ans;
        queue<TreeNode> q;
        q.push(root);
        int k = 0;
        int a, b;
        while (!q.empty())
        {
            int n = q.size();
            int tmp = 0;
            for (int i = 0; i < n; i++)
            {
                auto node = q.front();
                tmp += node->val;
                if (node->left)
                    q.push(node->left) if (node->right) q.push(node->right);
            }
            if (k == 0)
            {
                a = tmp;
                ans.push_back(0);
            }
            else if (k == 1)
            {
                b = tmp - a;
                ans.push_back(0);
            }
            else
            {
                ans.push_back((a + (b * k)) - tmp);
            }
            k++;
        }
        return ans;
    };
    int main()
    {
        // insert n node in the treee
        int n = 5;
        TreeNode *root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->left->right = new TreeNode(6);
        root->left->left = new TreeNode(3);
        root->left->left->left = new TreeNode(4);
        root->left->left->right = new TreeNode(5);
        root->right = new TreeNode(7);
        root->right->left = new TreeNode(8);
        root->right->right = new TreeNode(9);
        solution ob1;
        vector<int> ans = ob1.postOrder(root);
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
        return 0;
    }