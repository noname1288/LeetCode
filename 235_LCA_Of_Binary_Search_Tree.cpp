#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *buildTree(const vector<optional<int>> &arr)
{
    if (arr.empty() || !arr[0].has_value())
        return nullptr;

    TreeNode *root = new TreeNode(arr[0].value());
    queue<TreeNode *> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < arr.size())
    {
        TreeNode *node = q.front();
        q.pop();

        if (i < arr.size() && arr[i].has_value())
        {
            node->left = new TreeNode(arr[i].value());
            q.push(node->left);
        }
        i++;

        if (i < arr.size() && arr[i].has_value())
        {
            node->right = new TreeNode(arr[i].value());
            q.push(node->right);
        }
        i++;
    }

    return root;
}

int main()
{

    return 0;
}