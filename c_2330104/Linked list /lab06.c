// WAP to reverse the sequence elements in a double linked list.
#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to reverse a double linked list
void reverse(struct Node** head) {
    struct Node* temp = NULL;
    struct Node* current = *head;

    // Swap prev and next pointers for all nodes of the doubly linked list
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    // Check if the list is empty
    if (temp != NULL) {
        *head = temp->prev;
    }
}

// Function to insert a node at the beginning of a double linked list
void push(struct Node** head, int new_data) {
    // Allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // Assign data to new node
    new_node->data = new_data;

    // Make next of new node as head and previous as NULL
    new_node->next = (*head);
    new_node->prev = NULL;

    // Change prev of head node to new node
    if ((*head) != NULL) {
        (*head)->prev = new_node;
    }

    // Move the head to point to the new node
    (*head) = new_node;
}

// Function to print a double linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Driver program
int main() {
    struct Node* head = NULL;

    // Insert elements at the beginning of the list
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    printf("Original list: ");
    printList(head);

    // Reverse the list
    reverse(&head);

    printf("Reversed list: ");
    printList(head);

    return 0;
}