#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
node *buildBSTfromsorted(int arr[], int st, int end)
{
    if (st > end)
    {
        return NULL;
    }
    int mid = st + (end - st) / 2;
    node *curr = new node(arr[mid]);

    curr->left = buildBSTfromsorted(arr, st, mid - 1);
    curr->right = buildBSTfromsorted(arr, mid + 1, end);
    return curr;
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

node *BSTfromsortedvec(vector<int> arr, int st, int end)
{
    if (st > end)
    {
        return NULL;
    }
    int mid = st + (end - st) / 2;
    node *curr = new node(arr[mid]);

    curr->left = BSTfromsortedvec(arr, st, mid - 1);
    curr->right = BSTfromsortedvec(arr, mid + 1, end);
    return curr;
}

void getinorder(node *root, vector<int> &nodes)
{
    if (root == NULL)
    {
        return;
    }
    getinorder(root->left, nodes);
    nodes.push_back(root->data);
    getinorder(root->right, nodes);
}

node *balanceBST(node *root)
{
    // get inorder seq
    vector<int> nodes;
    getinorder(root, nodes);
    return BSTfromsortedvec(nodes, 0, nodes.size() - 1);
}



class info
{
public:
    bool isBST;
    int min;
    int max;
    int sz;

    info(bool isBST, int min, int max, int sz)
    {
        this->isBST = isBST;
        this->min = min;
        this->max = max;
        this->sz = sz;
    }
};

int maxsize = 0; // ✅ initialize

info *largestBST(node *root)
{
    if (root == NULL)
    {
        return new info(true, INT_MAX, INT_MIN, 0); // ✅ fixed
    }
    // OR

    //  if(root == NULL){
    //    return NULL;
    // }
    // if(root->left == NULL && root->right==NULL){
    // return new info(true,root->data,root->data,1);
    // }

    info *leftinfo = largestBST(root->left);
    info *rightinfo = largestBST(root->right);

    int currMin = min(root->data, min(leftinfo->min, rightinfo->min));
    int currMax = max(root->data, max(leftinfo->max, rightinfo->max)); // ✅ fixed
    int currSz = leftinfo->sz + rightinfo->sz + 1;

    if (leftinfo->isBST && rightinfo->isBST &&
        root->data > leftinfo->max &&
        root->data < rightinfo->min)
    {

        maxsize = max(maxsize, currSz);
        return new info(true, currMin, currMax, currSz);
    }

    return new info(false, currMin, currMax, currSz);
}

node* mergeBSTs(node* root1, node* root2){
    vector<int> nodes1;
    vector<int> nodes2;
    vector<int> merged;
    getinorder(root1, nodes1);
    getinorder(root2, nodes2);
    int i = 0, j = 0;
    while(i < nodes1.size() && j < nodes2.size()){
        if(nodes1[i] < nodes2[j]){
            merged.push_back(nodes1[i++]);
        } else {
            merged.push_back(nodes2[j++]);
        }
    }
    while(i < nodes1.size()){
        merged.push_back(nodes1[i++]);
    }
    while(j < nodes2.size()){
        merged.push_back(nodes2[j++]);
    }
    return BSTfromsortedvec(merged, 0, merged.size() - 1);
}

int main()
{

    // int arr[7] ={3,4,5,6,7,8,9};

    // node* root = buildBSTfromsorted(arr,0,6);
    // preorder(root);
    // cout<<endl;

    // node* root = new node(6);
    // root->left = new node(5);
    // root->left->left = new node(4);
    // root->left->left->left = new node(3);
    // root->right = new node(7);
    // root->right->right = new node(8);
    // root->right->right->right = new node(9);
    // root = balanceBST(root);
    // preorder(root);
    // cout<<endl;

    /*node *root = new node(50);
    root->left = new node(30);
    root->left->left = new node(5);
    root->left->right = new node(20);

    root->right = new node(60);
    root->right->left = new node(45);
    root->right->right = new node(70);
    root->right->right->left = new node(65);
    root->right->right->right = new node(80);  // ✅ fixed (you overwrote left before)
    largestBST(root);
    cout << "max size : " << maxsize << endl;*/

    node *root1 = new node(2);
    root1->left = new node(1);
    root1->right = new node(4);

    node *root2 = new node(9);
    root2->left = new node(3);
    root2->right = new node(12);
    node* root = mergeBSTs(root1,root2);
     preorder(root);
     cout<<endl;
    return 0;
}
