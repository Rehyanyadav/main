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
    //*Root
    TreeNode<int> *root = new TreeNode<int>(1);  //* root node
                                                 //*Child nodes
    TreeNode<int> *node2 = new TreeNode<int>(2); // * child node
    TreeNode<int> *node3 = new TreeNode<int>(3); //* child node

    //* now we connect these nodes
    root->children.push_back(node2); // * root node has child node 2
    root->children.push_back(node3); //* root node has child node 3

    printTree(root); //* print the tree
}