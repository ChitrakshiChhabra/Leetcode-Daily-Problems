#include <iostream>
#include <vector>
#include<stack>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
    if (inorder.size() == 0 || postorder.size() == 0)
        return nullptr;
    int ip = inorder.size() - 1;
    int pp = postorder.size() - 1;
    stack<TreeNode *> st;
    TreeNode *prev = nullptr;
    TreeNode *root = new TreeNode(postorder[pp]);
    st.push(root);
    pp--;
    while (pp >= 0)
    {
        while (!st.empty() && st.top()->val == inorder[ip])
        {
            prev = st.top();
            st.pop();
            ip--;
        }
        TreeNode *newNode = new TreeNode(postorder[pp]);
        if (prev != nullptr)
        {
            prev->left = newNode;
        }
        else if (!st.empty())
        {
            TreeNode *currTop = st.top();
            currTop->right = newNode;
        }
        st.push(newNode);
        prev = nullptr;
        pp--;
    }
    return root;
}

int main()
{
    return 0;
}