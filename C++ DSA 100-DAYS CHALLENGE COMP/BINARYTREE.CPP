// binary tree
#include <iostream>
#include <vector>
#include <queue>
 #include <map>
 #include <string>

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

static int idx = -1;
node *buildtree(vector<int> nodes)
{
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }
    node *currnode = new node(nodes[idx]);
    currnode->left = buildtree(nodes);
    currnode->right = buildtree(nodes);
    return currnode;
}
// preorder
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
// inorder
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
// post order
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);

    cout << root->data << " ";
}

void levelorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> Q;
    Q.push(root);
    Q.push(NULL);
    while (!Q.empty())
    {
        node *curr = Q.front();
        Q.pop();
        if (curr == NULL)
        {
            cout << endl;
            if (Q.empty())
            {
                break;
            }
            Q.push(NULL);
        }
        else
        {
            cout << curr->data << " ";

            if (curr->left != NULL)
            {
                Q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                Q.push(curr->right);
            }
        }
    }
}
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftht = height(root->left);
    int rightht = height(root->right);

    int currht = max(leftht, rightht) + 1;
    return currht;
}
int count(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftcount = count(root->left);
    int rightcount = count(root->right);

    return leftcount + rightcount + 1;
}
int sum(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftsum = sum(root->left);
    int rightsum = sum(root->right);
    int currsum = leftsum + rightsum + root->data;
    cout << "sum =" << currsum << endl;
    return currsum;
}

// diameter
int diam1(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int currdiam = height(root->left) + height(root->right) + 1;//0(n) 
    int leftdiam = diam1(root->left);
    int rightdiam = diam1(root->right);
    return max(currdiam, max(leftdiam, rightdiam));
}

  pair<int,int> diam2(node* root){
    if(root == NULL){
        return make_pair(0,0);
    }
      pair<int,int> leftinfo =diam2(root->left);//(ld,lh)
     pair<int,int> rightinfo =diam2(root->right);//rd,rd
    int currdiam = leftinfo.second + rightinfo.second + 1;
    int finaldiam = max(currdiam,max(leftinfo.first,rightinfo.first));
    int finalht = max(leftinfo.second,rightinfo.second)+1;
   return make_pair(finaldiam,finalht);
  }

    bool isidentical(node* root1,node* root2){
     if(root1 == NULL && root2 == NULL){
        return true;
    } else if(root1== NULL || root2==NULL){
        return false;
    }
    if (root1-> data != root2-> data){
        return false;
    }
    return isidentical(root1 ->left,root2->left) &&  isidentical(root1->right,root2->right);
}
  bool issubtree(node* root,node* subroot){
    if(root == NULL && subroot == NULL){
        return true;
    } else if( root==NULL || subroot==NULL){
        return false;
    }
    if (root->data == subroot-> data){
        //identical for subtree
         if(isidentical(root,subroot)){
            return true;
         }
    }
    int isleftsubtree = issubtree(root->left,subroot);
    if(!isleftsubtree){
        return issubtree(root->right,subroot);

    }
    return true;
    }
  
    void topview(node* root){
        queue<pair<node*, int>> q;
        map<int,int> m;

        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<node*,int> curr = q.front();
            q.pop();
            node* currnode = curr.first;
            int currhd = curr.second;

            if(m.count(currhd) == 0){
                m[currhd] = currnode->data;
            }
            if(currnode-> left != NULL){
                pair<node*, int> left = make_pair(currnode->left,currhd-1);
                q.push(left);
            }
            if(currnode-> right != NULL){
                pair<node*, int> right = make_pair(currnode->right,currhd+1);
                q.push(right);
            }
        }
        for(auto it : m){
            cout << it.second << " ";
        }
        cout << endl;
    }
     void kthhelper(node* root, int k, int currlevel){
        if(root == NULL){
            return;
        }
        if(currlevel == k){
            cout << root->data << " ";
            return;
        }
        kthhelper(root -> left,k,currlevel +1);//left
        kthhelper(root -> right,k,currlevel +1);//right
    }
    void kthlevel(node* root, int k){//o(n)
        kthhelper(root,k,1);
        cout << endl;
    }
    bool roottonodepath(node* root,int n,vector<int> & path){
        if(root == NULL){
            return false;
        }
        path.push_back(root->data);
        if(root->data == n){
            return true;
        }
        int isleft = roottonodepath(root->left,n,path);
        int isright = roottonodepath(root->right,n,path);
        if(isleft || isright){
            return true;
        }
        path.pop_back();
        return false;
    }

    int LCA(node* root,int n1,int n2){
        vector<int> path1;
        vector<int> path2;

        roottonodepath(root,n1,path1);
        roottonodepath(root,n2,path2);

        int lca =-1;
        for(int i=0,j=0;i<path1.size() && j<path2.size();i++,j++){
            if(path1[i] != path2[j]){
                return lca;
            }
            lca = path1[i];
        }
        return lca;
    }
    node* LCA2(node* root,int n1,int n2){
        if(root == NULL){
            return NULL;
        }
        if(root->data == n1 || root->data == n2){
            return root;
        }
          node* leftLCA =LCA2(root->left,n1,n2);      
         node* rightLCA =LCA2(root->right,n1,n2);

         if(leftLCA != NULL && rightLCA != NULL){
            return root;
         }
         return leftLCA == NULL ? rightLCA : leftLCA;
    } 

    int dist(node* root, int n){
        if(root == NULL){
            return -1;
        }
        if(root ->data == n){
            return 0;
        }
        int leftDist = dist(root->left,n);
        if(leftDist != -1){
            return leftDist + 1;
        }
        int rightDist = dist(root->right,n);
        if(rightDist != -1){
            return rightDist + 1;
        }
        return -1;
    }

    int minDist(node* root, int n1, int n2){
        node* lca = LCA2(root,n1,n2);

        int dist1 =dist(lca,n1);
        int dist2 =dist(lca,n2);

        return dist1 + dist2 ;
    }

    int kthancestor(node* root,int node, int k){
        if(root == NULL){
            return -1;
        }
        if(root->data == node){
            return 0;
        }
        int leftdist = kthancestor(root->left,node,k);
        int rightdist = kthancestor(root->right,node,k);

        if(leftdist == -1 && rightdist == -1){
            return -1;
        }
        int validval = leftdist == -1 ? rightdist : leftdist;
        if(validval + 1 == k){
            cout << "kth ancestor : "<< root->data << endl;
        }
        return validval + 1;

    }

    int transform(node* root){
        if(root == NULL){
            return 0;
        }
        int leftold = transform(root->left);
        int rightold = transform(root->right);
        int currold = root->data;

        root->data = leftold + rightold;

        if(root->left != NULL)
          root->data += root->left->data;
        if(root->right != NULL)
          root->data += root->right->data;
          return currold; 

    }

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    node* root = buildtree(nodes);
    // cout<<" root = "<<root -> data <<endl;

    // preorder(root);
    // cout << endl;

    // inorder(root);
    // cout<<endl;

    // postorder(root);
    // cout<<endl;

    // levelorder(root);

    // cout<<" height : "<< height(root)<<endl;

    /* cout << "count : "<< count(root)<<endl;
     node* root2 = new node(5);
     root -> left = new node(3);
     root2 ->right = new node(4);
       cout << "count2 : "<< count(root2)<<endl;
     cout<<" height : "<< height(root2)<<endl; */

    // cout<<" sum of nodes : "<< sum(root)<<endl;

    //cout<<"diameter ="<<diam1(root)<<endl;

        //cout<<"diameter ="<<diam2(root).first<<endl; 
      
       // node* subroot = new node(2);
      //  subroot->left = new node(4);
       // subroot->right= new node(5);

    // cout << issubtree(root,subroot)<<endl; 
      //topview(root);

      //kthlevel(root,3);  

     // int n1 = 4,n2 = 5;
    // cout<<"lca ="<< LCA(root,n1,n2)<< endl; 

     
      //int n1 = 4,n2 = 5;
     //cout<<"lca2 ="<< LCA2(root,n1,n2)->data << endl; 

      //int n1 = 4,n2 = 6;
     //cout<<"min Dist ="<< minDist(root,n1,n2) << endl;

     //int node = 5,k = 2;
     //kthancestor(root,node,k);

   return 0; 
  }

//map 
 /*#include <iostream>
  #include <map>
 #include <string>

 using namespace std;
  
 int main() {
    map<int,string> m;
      m[101] ="rahul";
      m[101] ="neha";
       m[101] ="rahul";

       for(auto it:m){
        cout<<"double ="<<it.first * 2 << endl;
       }

    return 0;
 }*/