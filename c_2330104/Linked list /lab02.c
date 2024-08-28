#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function prototypes
void traverse(struct Node* head);
int isEmpty(struct Node* head);
void insertAtBeginning(struct Node** head, int data);
void insertAtEnd(struct Node** head, int data);
void insertAtPosition(struct Node** head, int data, int position);
void deleteAtBeginning(struct Node** head);
void deleteAtEnd(struct Node** head);
void deleteAtPosition(struct Node** head, int position);
void deleteByKey(struct Node** head, int key);
int countNodes(struct Node* head);
int searchElement(struct Node* head, int key);

int main() {
    struct Node* head = NULL;
    int choice, data, position, key;

    do {
        printf("\nMenu:\n");
        printf("1. Traverse the list\n");
        printf("2. Check if the list is empty\n");
        printf("3. Insert a node at the beginning\n");
        printf("4. Insert a node at the end\n");
        printf("5. Insert a node at a specific position\n");
        printf("6. Delete a node at the beginning\n");
        printf("7. Delete a node at the end\n");
        printf("8. Delete a node at a specific position\n");
        printf("9. Delete a node by key\n");
        printf("10. Count the total number of nodes\n");
        printf("11. Search for an element\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                traverse(head);
                break;
            case 2:
                if (isEmpty(head)) {
                    printf("The list is empty.\n");
                } else {
                    printf("The list is not empty.\n");
                }
                break;
            case 3:
                printf("Enter data to insert at beginning: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;
            case 4:
                printf("Enter data to insert at end: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;
            case 5:
                printf("Enter data to insert and position: ");
                scanf("%d %d", &data, &position);
                insertAtPosition(&head, data, position);
                break;
            case 6:
                deleteAtBeginning(&head);
                break;
            case 7:
                deleteAtEnd(&head);
                break;
            case 8:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deleteAtPosition(&head, position);
                break;
            case 9:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                deleteByKey(&head, key);
                break;
            case 10:
                printf("Total number of nodes: %d\n", countNodes(head));
                break;
            case 11:
                printf("Enter element to search: ");
                scanf("%d", &key);
                if (searchElement(head, key)) {
                    printf("Element found.\n");
                } else {
                    printf("Element not found.\n");
                }
                break;
            case 12:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 12);

    return 0;
}

// Function to traverse the list
void traverse(struct Node* head) {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to check if the list is empty
int isEmpty(struct Node* head) {
    return head == NULL;
}

// Function to insert at the beginning
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Function to insert at the end
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

// Function to insert at a specific position
void insertAtPosition(struct Node** head, int data, int position) {
    if (position < 1) {
        printf("Invalid position!\n");
        return;
    }
    if (position == 1) {
        insertAtBeginning(head, data);
        return;
    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    struct Node* temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of range!\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to delete at the beginning
void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *head;
    *head = temp->next;
    free(temp);
}

// Function to delete at the end
void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *head;
    if (temp->next == NULL) {
        free(temp);
        *head = NULL;
        return;
    }
    struct Node* prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
}

// Function to delete at a specific position
void deleteAtPosition(struct Node** head, int position) {
    if (*head == NULL || position < 1) {
        printf("Invalid position or list is empty!\n");
        return;
    }
    struct Node* temp = *head;
    if (position == 1) {
        *head = temp->next;
        free(temp);
        return;
    }
    struct Node* prev = NULL;
    for (int i = 1; i < position && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
}

// Function to delete a node by key
void deleteByKey(struct Node** head, int key) {
    struct Node* temp = *head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Key not found.\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
}

// Function to count the total number of nodes
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to search for an element
int searchElement(struct Node* head, int key) {
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return 1; // Element found
        }
        temp = temp->next;
    }
    return 0; // Element not found
}
