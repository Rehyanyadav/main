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

//* TAKING INPUT efficiently

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
// function

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

//* DRIVER CODE
int main()
{

    // CAlling the function
    Node *head = takeInput_Better();
    print(head);

    //     Node n1(1);
    //     Node *head = &n1;
    //     Node n2(2);
    //     Node n3(3);
    //     Node n4(4);
    //     Node n5(5);

    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;

    // //now creating a function which print the linked list

    // print(head);
}