#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int k;
    struct Node *left, *right;
};

Node *newNode(int kk)
{
    Node *temp = new Node;
    temp->k = kk;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// bool findPath(Node *root, vector<int> &path, int k)
// {
//     // base case
//     if (root == NULL)
//         return false;

//     // Store this node in path vector. The node will be removed if
//     // not in path from root to k
//     path.push_back(root->k);

//     // See if the k is same as root's key
//     if (root->k == k)
//         return true;

//     // Check if k is found in left or right sub-tree
//     if ((root->left && findPath(root->left, path, k)) ||
//         (root->right && findPath(root->right, path, k)))
//         return true;

//     // If not present in subtree rooted with root, remove root from
//     // path[] and return false
//     path.pop_back();
//     return false;
// }

bool findPath(Node *root, int number, vector<int> &path)
{
    if (root == NULL)
    {
        return false;
    }
    path.push_back(root->k);

    if (root->k == number)
        return true;

    if ((root->left && findPath(root->left, number, path)) ||
        (root->right && findPath(root->right, number, path)))
        return true;

    path.pop_back();
    return false;
}

int findLCA(Node *root, int num1, int num2)
{
    vector<int> path1, path2;
    if (!findPath(root, num1, path1) || !findPath(root, num2, path2))
    {
        return -1;
    }
    // if (!findPath(root, path1, num1) || !findPath(root, path2, num2))
    //     return -1;
    int i;
    for (i = 0; i < path1.size() && i < path2.size(); i++)
    {
        if (path1[i] != path2[i])
        {
            break;
        }
    }
    return path1[i - 1];
    // return 1;
}

int main()
{

    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    cout << "LCA(4, 5) = " << findLCA(root, 4, 5) << endl;
    cout << "nLCA(4, 6) = " << findLCA(root, 4, 6) << endl;
    cout << "nLCA(3, 4) = " << findLCA(root, 3, 4) << endl;
    cout << "nLCA(2, 4) = " << findLCA(root, 2, 4) << endl;

    return 0;
}