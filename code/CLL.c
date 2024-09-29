// write a menu driven program to perform the following operation in a circular linked list by using suitable user defined functions for each of the cases
// traversal of the list
// check if list is empty or not
// insert a node at any position
// delete a node at any position
// count the total no of nodes
// search an element in the list
// reversal printing of the list

#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the circular linked list
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Function prototypes
// void traverse(Node *head);
// int isEmpty(Node *head);
// void insertAtPosition(Node **head, int data, int position);
// void deleteAtPosition(Node **head, int position);
// int countNodes(Node *head);
// Node *search(Node *head, int key);
// void reversePrint(Node *head);
// void freeList(Node *head);
// void createList(Node **head);

void traverse(Node *head)
{
    if (head == NULL)
    {
        printf("The list is empty.\n");
        return;
    }

    Node *temp = head;
    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("HEAD\n");
}

int isEmpty(Node *head)
{
    return head == NULL;
}

void insertAtPosition(Node **head, int data, int position)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    Node *temp = *head;
    newNode->data = data;

    if (position == 1)
    {
        if (*head == NULL)
        {
            newNode->next = newNode;
            *head = newNode;
        }
        else
        {
            newNode->next = *head;
            Node *last = *head;
            while (last->next != *head)
                last = last->next;
            last->next = newNode;
            *head = newNode;
        }
        return;
    }

    for (int i = 1; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
        if (temp != NULL && temp == *head)
        {
            printf("Position out of range.\n");
            free(newNode);
            return;
        }
    }

    if (temp == NULL)
    {
        printf("Position out of range.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtPosition(Node **head, int position)
{
    Node *temp = *head;
    Node *toDelete = NULL;

    if (position == 1)
    {
        if (*head == (*head)->next)
        {
            free(*head);
            *head = NULL;
            return;
        }

        while (temp->next != *head)
            temp = temp->next;

        toDelete = *head;
        temp->next = (*head)->next;
        *head = (*head)->next;
        free(toDelete);
        return;
    }

    for (int i = 1; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL || temp->next == *head)
        {
            printf("Position out of range.\n");
            return;
        }
    }

    toDelete = temp->next;
    if (toDelete == *head)
        *head = (*head)->next;
    temp->next = toDelete->next;
    free(toDelete);
}

int countNodes(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }

    int count = 0;
    Node *temp = head;
    do
    {
        count++;
        temp = temp->next;
    } while (temp != head);
    return count;
}

Node *search(Node *head, int key)
{
    if (head == NULL)
        return NULL;

    Node *temp = head;
    do
    {
        if (temp->data == key)
            return temp;
        temp = temp->next;
    } while (temp != head);
    return NULL;
}

void reversePrint(Node *head, Node *temp)
{
    if (temp->next == head)
    {
        printf("%d -> ", temp->data);
        return;
    }
    reversePrint(head, temp->next);
    printf("%d -> ", temp->data);
}

void freeList(Node *head)
{
    if (head == NULL)
        return;

    Node *temp = head;
    Node *nextNode;
    do
    {
        nextNode = temp->next;
        free(temp);
        temp = nextNode;
    } while (temp != head);
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
    printf("\nName: Rehyan yadav \nRoll no.: 2330104\n");
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
            reversePrint(head, head);
            printf("HEAD");
            break;
        case 8:
            freeList(head);
            printf("Exiting...\n");
            printf("\nName: Rehyan yadav \nRoll no.: 2330104");
            exit(0);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
