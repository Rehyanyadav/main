//* TAKING INPUT LEVEL WISE 


#include <iostream>
#include <vector>
#include <queue>
using namespace std;
template <typename T>

class TreeNode{
public:
    T data;
    vector<TreeNode<T>*> children;
    TreeNode(T data)
    {
        this->data = data;
    }
};

template <typename T>
TreeNode<T>* takeInputLevelWise()
{
    int rootData;
    cout << "Enter root data: ";
    cin >> rootData;
    TreeNode<T>* root = new TreeNode<T>(rootData);

    queue<TreeNode<T>*> pendingNodes;
    pendingNodes.push(root);

    while (!pendingNodes.empty())
    {
        TreeNode<T>* currentNode = pendingNodes.front();
        pendingNodes.pop();

        int numChildren;
        cout << "Enter number of children for " << currentNode->data << ": ";
        cin >> numChildren;

        for (int i = 0; i < numChildren; i++)
        {
            int childData;
            cout << "Enter child " << i + 1 << " data: ";
            cin >> childData;
            TreeNode<T>* child = new TreeNode<T>(childData);
            currentNode->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

void printTree(TreeNode<int> *root)
{ 
    //* print the tree functions

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
    TreeNode<int>* root = takeInputLevelWise<int>();
 printTree(root);

    return 0;
}