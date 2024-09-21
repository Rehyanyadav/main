// write a menu driven program to perform the following operation in a double linked list by using suitable user defined functions for each of the cases
// traversal of the list
// check if list is empty or not
// insert a node at any position
// delete a node at any position
// count the total no of nodes
// search an element in the list
// reversal printing of the list

#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the doubly linked list
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

// Function prototypes
// void traverse(Node *head);
// int isEmpty(Node *head);
// void insertAtPosition(Node **head, int data, int position);
// void deleteAtPosition(Node **head, int position);
// int countNodes(Node *head);
// Node* search(Node *head, int key);
// void reversePrint(Node *head);
// void freeList(Node *head);
// void createList(Node **head);

// Function to traverse and print the doubly linked list
void traverse(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        printf("The list is empty.\n");
        return;
    }
    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to check if the list is empty
int isEmpty(Node *head)
{
    return head == NULL;
}

// Function to insert a node at any position
void insertAtPosition(Node **head, int data, int position)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    Node *temp = *head;
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (position == 1)
    {
        newNode->next = *head;
        if (*head != NULL)
            (*head)->prev = newNode;
        *head = newNode;
        return;
    }

    for (int i = 1; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Position out of range.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

// Function to delete a node at any position
void deleteAtPosition(Node **head, int position)
{
    Node *temp = *head;
    Node *toDelete = NULL;

    if (position == 1)
    {
        *head = temp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return;
    }

    for (int i = 1; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
    {
        printf("Position out of range.\n");
        return;
    }

    toDelete = temp->next;
    temp->next = toDelete->next;
    if (toDelete->next != NULL)
        toDelete->next->prev = temp;
    free(toDelete);
}

// Function to count the total number of nodes
int countNodes(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to search for an element in the list
Node *search(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

// Function to reverse print the list
void reversePrint(Node *head)
{
    if (head == NULL)
        return;

    reversePrint(head->next);
    printf("%d <-> ", head->data);
}

// Function to free the entire doubly linked list
void freeList(Node *head)
{
    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

void createList(Node **head)
{
    int n, data, position;
    printf("Enter the number of nodes to create: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        printf("Enter position to insert node %d: ", i + 1);
        scanf("%d", &position);
        insertAtPosition(head, data, position);
    }
}

int main()
{
    Node *head = NULL;
    int choice, data, position;
    Node *searchResult;
    printf("\nName: Aditi prajapati \nRoll no.: 2330232\n");
    printf("\n");
    createList(&head);

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Traverse the list\n");
        printf("2. Check if list is empty\n");
        printf("3. Insert a node at any position\n");
        printf("4. Delete a node at any position\n");
        printf("5. Count the total number of nodes\n");
        printf("6. Search for an element in the list\n");
        printf("7. Reverse print the list\n");
        printf("8. Exit\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            traverse(head);
            break;
        case 2:
            if (isEmpty(head))
                printf("The list is empty.\n");
            else
                printf("The list is not empty.\n");
            break;
        case 3:
            printf("Enter the data to insert: ");
            scanf("%d", &data);
            printf("Enter the position to insert at: ");
            scanf("%d", &position);
            insertAtPosition(&head, data, position);
            traverse(head);
            break;
        case 4:
            printf("Enter the position to delete from: ");
            scanf("%d", &position);
            deleteAtPosition(&head, position);
            traverse(head);
            break;
        case 5:
            printf("Total number of nodes: %d\n", countNodes(head));
            break;
        case 6:
            printf("Enter the element to search for: ");
            scanf("%d", &data);
            searchResult = search(head, data);
            if (searchResult)
                printf("Element %d found.\n", data);
            else
                printf("Element %d not found.\n", data);
            break;
        case 7:
            reversePrint(head);
            printf("NULL\n");
            break;
        case 8:
            freeList(head);
            printf("Exiting...\n");
            printf("\nName: Shresth Modi \nRoll no.: 2330116");
            exit(0);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
