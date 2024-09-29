/*
WAP in c create a double linked list of n nodes and display the linked list by using suitable
user defined functions for create and display operations.


*/



#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to create a double linked list
struct Node* createLinkedList(int n) {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* newNode = NULL;
    int data;

    // Create the first node
    if (n >= 1) {
        head = (struct Node*)malloc(sizeof(struct Node));
        if (head == NULL) {
            printf("Memory allocation failed!");
            exit(1);
        }
        printf("Enter data for node 1: ");
        scanf("%d", &data);
        head->data = data;
        head->prev = NULL;
        head->next = NULL;
        temp = head;
    }

    // Create the rest of the nodes
    for (int i = 2; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            printf("Memory allocation failed!");
            exit(1);
        }
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);
        newNode->data = data;
        newNode->prev = temp;
        newNode->next = NULL;
        temp->next = newNode;
        temp = temp->next;
    }

    return head;
}

// Function to display the double linked list
void displayLinkedList(struct Node* head) {
    struct Node* temp = head;
    int count = 1;

    if (head == NULL) {
        printf("Linked list is empty!");
        return;
    }

    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }
}

int main() {
    int n;
    struct Node* head = NULL;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    head = createLinkedList(n);

    displayLinkedList(head);

    return 0;
}