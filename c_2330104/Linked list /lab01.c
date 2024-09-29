#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning
void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        *head = newNode;
    }
}

// Function to insert a node at the end
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

// Function to delete a node with the given data
void deleteNode(Node** head, int data) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    if ((*head)->data == data) {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    Node* temp = *head;
    while (temp->next != NULL) {
        if (temp->next->data == data) {
            Node* nodeToDelete = temp->next;
            temp->next = temp->next->next;
            free(nodeToDelete);
            return;
        }
        temp = temp->next;
    }

    printf("Node not found\n");
}

// Function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    // Insert nodes at the beginning
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);

    // Insert nodes at the end
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    // Delete a node
    deleteNode(&head, 20);

    // Print the linked list after deletion
    printf("Linked List after deletion: ");
    printList(head);

    return 0;
}