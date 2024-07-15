//printing the Tree and Taking input 
 

#include <iostream>
#include <vector>
using namespace std;

template <typename T> //* because we use any data type

class TreeNode
{
public:
    T data;                         //* data of anyTree node
    vector<TreeNode<T> *> children; //* vector of children with T datatype
    TreeNode(T data)                //*     constructor
    {
        this->data = data; //* data input
    }
};


//* TAKING INPUT FRO USER 


TreeNode<int> *takeInput(){  
int rootData;
cout<<"enter the Data :"<<endl;
cin>>rootData;
TreeNode<int> *root = new TreeNode<int>(rootData); //* root node

int n ;
cout<<"enter Number of children : "<<rootData<<endl;

cin>>n;
for(int i =0; i<n; i++)
{
    TreeNode<int>*child= takeInput(); 
    root->children.push_back(child);

}

return root;
}




void printTree(TreeNode<int> *root)
{ //* print the tree functions

if (root == NULL)
{
    return;
}    cout << root->data<<":";
    for (int i  =0 ; i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;

    for (int i = 0; i < root->children.size(); i++)
    {

        printTree(root->children[i]);
    }
}
int main()
{
    // //*Root
    // TreeNode<int> *root = new TreeNode<int>(1);  //* root node
    //                                              //*Child nodes
    // TreeNode<int> *node2 = new TreeNode<int>(2); // * child node
    // TreeNode<int> *node3 = new TreeNode<int>(3); //* child node

    // //* now we connect these nodes
    // root->children.push_back(node2); // * root node has child node 2
    // root->children.push_back(node3); //* root node has child node 3



TreeNode<int>*root = takeInput();
    printTree(root); //* print the tree
}