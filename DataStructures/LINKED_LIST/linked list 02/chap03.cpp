//*inserting Node at Position

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insertAtPosition(node *&head, int data, int pos)
{
    if (pos == 0)
    {
        node *new_node = new node(data);
        new_node->next = head;
        head = new_node;
        return;
    }
    node *temp = head;
    int current_pos = 0;
    while (current_pos!= pos - 1)
    {
        temp = temp->next;
        current_pos++;
        if (temp == NULL)
        {
            cout << "Position out of range" << endl;
            return;
        }
    }
    // temp is pointing to node at pos -1

    node *new_node = new node(data);
    new_node->next = temp->next;
    temp->next = new_node;
}

void insertatTail(node *&head, int data)
{
    node *new_node = new node(data);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    node *temp = head;
    while (temp->next!= NULL)
    {

        temp = temp->next;
    }
    // temp reaches to last node

    temp->next = new_node;
}

void insertAthead(node *&head, int data)
{
    node *new_node = new node(data);
    new_node->next = head;
    head = new_node;
}

void display(node *head)
{
    node *temp = head;
    while (temp!= NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insertAthead(head, 2);
    display(head);
    insertAthead(head, 4);
    display(head);

    insertatTail(head, 5);
    display(head);
    insertAtPosition(head, 3, 1);
    display(head);
    return 0;
}