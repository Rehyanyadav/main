#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function prototypes
void insertAtEnd(struct Node** head, int data);
void printList(struct Node* head);
void printReverse(struct Node* head);

int main() {
    struct Node* head = NULL;
    int n, data;

    // Get user input for the number of elements
    printf("Enter the number of elements to insert into the linked list: ");
    scanf("%d", &n);

    // Insert data into the linked list
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        insertAtEnd(&head, data);
    }

    // Print the list in original order
    printf("Original List:\n");
    printList(head);

    // Print the list in reverse order using recursion
    printf("List in reverse order:\n");
    printReverse(head);

    return 0;
}

// Function to insert a node at the end
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to print the list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Recursive function to print the list in reverse order
void printReverse(struct Node* head) {
    if (head == NULL) {
        return;
    }
    printReverse(head->next);
    printf("%d\n", head->data);
}
