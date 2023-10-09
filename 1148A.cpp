/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution
{
public:
    Node *connect(Node *root)
    {
        if (!root)
            return root;
        queue< {TreeNode *,int}> q;
        q.push({root, 0});
        while (!q.empty())
        {
            auto node = q.front().first;
            int level = q.front().second;
            int tot = pow(2, level);
            int cnt = 1;
            while (cnt < tot)
            {
                q.pop();

                if (node->left)
                {
                    q.push({node->left, level + 1});
                    q.push({node->right,level + 1});
                }
                cnt++;
            }
            if (cnt == tot)
                node->next = NULL;
        }
    }
};