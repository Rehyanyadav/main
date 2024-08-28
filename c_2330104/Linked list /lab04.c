//* WAP to print mth node from the last of a linked list of n nodes. in c using optimal approach 


/*

To print the m-th node from the end of a linked list in C efficiently, you can use the "two-pointer" technique. This approach ensures that you traverse the list only once, making it optimal in terms of time complexity, O(n).

Two-Pointer Technique
Here's how the two-pointer technique works:

Initialize Two Pointers: Start both pointers at the head of the list.
Advance First Pointer: Move the first pointer m nodes ahead.
Move Both Pointers: Move both pointers together until the first pointer reaches the end of the list.
Print the Result: The second pointer will be at the m-th node from the end.

*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function prototypes
void insertAtEnd(struct Node** head, int data);
void printMthFromEnd(struct Node* head, int m);
int countNodes(struct Node* head);

int main() {
    struct Node* head = NULL;
    int n, data, m;

    // Get user input for the number of elements
    printf("Enter the number of elements to insert into the linked list: ");
    scanf("%d", &n);

    // Insert data into the linked list
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        insertAtEnd(&head, data);
    }

    // Print the list
    printf("Linked List:\n");
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Get the position from the end to print
    printf("Enter the position (m) from the end to print: ");
    scanf("%d", &m);

    // Print the m-th node from the end
    printMthFromEnd(head, m);

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

// Function to print the m-th node from the end
void printMthFromEnd(struct Node* head, int m) {
    struct Node* first = head;
    struct Node* second = head;
    int count = 0;

    // Move the first pointer m nodes ahead
    while (count < m) {
        if (first == NULL) {
            printf("The list has fewer than %d elements.\n", m);
            return;
        }
        first = first->next;
        count++;
    }

    // Move both pointers until the first pointer reaches the end
    while (first != NULL) {
        first = first->next;
        second = second->next;
    }

    printf("The %d-th node from the end is: %d\n", m, second->data);
}

// Function to count the number of nodes (not needed for this approach, but useful for other purposes)
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}
