#include <iostream>
#include <vector>

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
node *insert(node *root, int val)
{ // 0(logn)
    if (root == NULL)
    {
        root = new node(val);
        return root;
    }
    if (val < root->data)
    { // left subtree
        root->left = insert(root->left, val);
    }
    else
    { // right subtree
        root->right = insert(root->right, val);
    }
    return root;
}

node *buildBST(int arr[], int n)
{
    node *root = NULL;

    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }
    return root;
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

bool search(node *root, int key)
{ // o(height);avg => o(logn)
    if (root == NULL)
    {
        return false;
    }
    if (root->data == key)
    {
        return true;
    }
    if (root->data > key)
    { // found
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key); // right subtree
    }
}

node *getinordersuccessor(node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root; // IS
}

node *delnode(node *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (val < root->data)
    { // left subtree
        root->left = delnode(root->left, val);
    }
    else if (val > root->data)
    { // right subtree
        root->right = delnode(root->right, val);
    }
    else
    {
        // root == val
        // case1:0 children
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // case2: 1 child
        if (root->left == NULL || root->right == NULL)
        {
            return root->left == NULL ? root->right : root->left;
        }

        // case3:
        node *IS = getinordersuccessor(root->right);
        root->data = IS->data;
        root->right = delnode(root->right, IS->data); // case1,case2
        return root;
    }
    return root;
}

  void printinrange(node* root,int start, int end){
    if(root == NULL){
        return;
    }
    if(start <= root->data && root->data <= end){
        cout << root->data << " ";
        printinrange(root->left,start,end);
        printinrange( root->right,start,end);

    } else if(root->data< start){
        printinrange(root->right,start,end);
    }else { // case-3
        printinrange(root->left,start,end);

    }
  } 

  void printpath(vector<int> path){
    cout <<" path :";
    for(int i=0;i<path.size();i++){
        cout << path[i]<<" ";
    }
    cout << endl;
  }
  void pathhelper(node* root,vector<int> &path){
    if(root == NULL){
        return;
    }
    path.push_back(root-> data);

    if(root->left == NULL && root->right == NULL) {//leaf
       printpath(path);

        path.pop_back();
        return;

    }
    pathhelper(root->left, path);
    pathhelper(root->right,path);

    path.pop_back();
  }

  void roottoleafpath(node* root){
    vector<int> path;
    pathhelper(root,path);
  } 

  bool validatehelper(node* root,node* min,node* max){
    if(root == NULL){
        return true;
    }
    if(min != NULL && root->data < min->data){
        return false;
    }
    if(max != NULL && root->data > max->data){
        return false;
    }
    return validatehelper(root->left,min,root) && validatehelper(root->right,root,max);
  }
  bool validateBST(node* root){
    return validatehelper(root,NULL,NULL);
  }
  
int main()
{
    // int arr[6]= {5,1,3,4,2,7};
    int arr2[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};

    // node* root = buildBST(arr2, 9);
    // inorder(root);
    // cout << endl;

    // node* root = buildBST(arr2, 9);
    // cout<<search(root,11);

   // node *root = buildBST(arr2, 9);
    //inorder(root);
  //  cout << endl;

   // delnode(root, 4);
   // inorder(root);
   // cout << endl;

   // node* root = buildBST(arr2, 9);
     //  printinrange(root,5,12);
      // cout << endl;

       // node* root = buildBST(arr2, 9);
       // roottoleafpath(root);

       node* root = buildBST(arr2, 9);
        root->data= 15;//invalidate 
       cout << validateBST(root)<<endl;//1-validate or 0-invalidate  

    return 0;
}