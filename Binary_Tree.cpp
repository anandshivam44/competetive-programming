#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }
struct Node // Tree
{
    int data;
    Node *left, *right;
};

Node *newNode(int data) // add a new node to existing node
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}

int height(struct Node *node) //recursive approach
{
    if (node == NULL)
        return 0;
    return 1 + max(height(node->left), height(node->right));
}

int diameter(struct Node *tree) //recursive approach
{
    if (tree == NULL)
        return 0;
    int lheight = height(tree->left);
    int rheight = height(tree->right);
    int ldiameter = diameter(tree->left);
    int rdiameter = diameter(tree->right);
    return max(lheight + rheight + 1, max(ldiameter, rdiameter));
}


unsigned int getLeafCount(struct Node *node)//recursive approach
{
    if (node == NULL)
        return 0;
    if (node->left == NULL && node->right == NULL)
        return 1;
    else
        return getLeafCount(node->left) +getLeafCount(node->right);
}

Node *insertLevelOrder(int arr[], Node *root,int i, int n)//recursive approach
{
    if (i < n)
    {
        if (arr[i] != -1)//ignore dummy values
        {
            Node *temp = newNode(arr[i]);
            root = temp;
            root->left = insertLevelOrder(arr,root->left, 2 * i + 1, n);

            root->right = insertLevelOrder(arr,root->right, 2 * i + 2, n);
        }
    }
    return root;
}

void solve()
{
    int h;
    cin>>h;
    int no=pow(2,h)-1;

    int arr[no];
    for (int i = 0; i < no; i++)
    {
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *root = insertLevelOrder(arr, root, 0, n); //arrange the integers systematically and create a Binary Tree

    int c = getLeafCount(root);//get circumference which is also equal to the no of leaf count
    int d = diameter(root);//get diameter
    double answer = (double)c / d;// apply pi=c/d
    printf("%.4f", answer);// print answer correct to 4 decimal places
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    solve();
    
    return 0;
}
