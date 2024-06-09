#include <iostream>
using namespace std;


class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {

        this->data = data;
        next = NULL;
    }
};



Node *takeInput_Better()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {

           tail->next = newNode;
           tail =tail->next;
           //or
           // tail = newNode ;

        }

        cin >> data;
    }
    return head;
}




//* THREE CASES HERE !!


Node *insertNode(Node *head, int i, int data)
{
    Node *newNode = new Node(data);
    int count = 0;

    Node *temp = head;
    if (i == 0)   // *CASE 2
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    while (temp != NULL && count < i - 1) //*CASE 3

    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;
        temp->next = newNode;
        newNode->next = a;
    }


        return head; //*Returns the new head pointer after insertion 

}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;

    }
}


int main()
{

    // CAlling the function
    Node *head = takeInput_Better();
    print(head);


//*Entering the data and checking it 
int i, data ;
cin>>i>>data;
insertNode (head , i ,data);
print(head);


}
