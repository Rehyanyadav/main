/*

Write a menu driven program to perform the following operations in a single linked list
by using suitable user defined functions for each case.
a) Traversal of the list.
b) Check if the list is empty.
c) Insert a node at the certain position (at beginning/end/any position).
d) Delete a node at the certain position (at beginning/end/any position).
e) Delete a node for the given key.
f) Count the total number of nodes.
g) Search for an element in the linked list.
Verify & validate each function from main method.


*/



#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the list
void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        *head = newNode;
    }
}

// Function to insert a node at the end of the list
void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to insert a node at a specific position in the list
void insertAtPosition(Node** head, int data, int position) {
    Node* newNode = createNode(data);
    if (position == 0) {
        insertAtBeginning(head, data);
    } else {
        Node* temp = *head;
        for (int i = 0; i < position - 1; i++) {
            if (temp->next == NULL) {
                printf("Position out of range\n");
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// Function to delete a node at the beginning of the list
void deleteAtBeginning(Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
    } else {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

// Function to delete a node at the end of the list
void deleteAtEnd(Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
    } else if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
    } else {
        Node* temp = *head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

// Function to delete a node at a specific position in the list
void deleteAtPosition(Node** head, int position) {
    if (position == 0) {
        deleteAtBeginning(head);
    } else {
        Node* temp = *head;
        for (int i = 0; i < position - 1; i++) {
            if (temp->next == NULL) {
                printf("Position out of range\n");
                return;
            }
            temp = temp->next;
        }
        if (temp->next == NULL) {
            printf("Position out of range\n");
            return;
        }
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        free(nodeToDelete);
    }
}

// Function to delete a node with a given key
void deleteNodeByKey(Node** head, int key) {
    if (*head == NULL) {
        printf("List is empty\n");
    } else if ((*head)->data == key) {
        deleteAtBeginning(head);
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            if (temp->next->data == key) {
                Node* nodeToDelete = temp->next;
                temp->next = temp->next->next;
                free(nodeToDelete);
                return;
            }
            temp = temp->next;
        }
        printf("Key not found in the list\n");
    }
}

// Function to count the total number of nodes in the list
int countNodes(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

// Function to search for an element in the list
int searchNode(Node* head, int key) {
    int position = 0;
    while (head != NULL) {
        if (head->data == key) {
            return position;
        }
        position++;
        head = head->next;
    }
    return -1;
}