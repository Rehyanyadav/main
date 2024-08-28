/*

write a menu drive c program of implementtation of singly linked list where the data part 
of each node is 
1) traverse linked list 
2) insert at beginning/midiile / end 
3) delete from beginning/midiile / end
4) search for an element
5) reverse an element 

*/




#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void traverseLinkedList() {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    struct Node* current = head;
    printf("Linked list: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void insertAtBeginning(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    printf("%d inserted at the beginning.\n", value);
}

void insertAtMiddle(int value, int position) {
    if (position <= 0) {
        printf("Invalid position.\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (head == NULL) {
        if (position == 1) {
            head = newNode;
            newNode->next = NULL;
            printf("%d inserted at position %d.\n", value, position);
        } else {
            printf("Invalid position.\n");
        }
        return;
    }

    struct Node* current = head;
    int count = 1;
    while (count < position - 1 && current->next != NULL) {
        current = current->next;
        count++;
    }

    if (count == position - 1) {
        newNode->next = current->next;
        current->next = newNode;
        printf("%d inserted at position %d.\n", value, position);
    } else {
        printf("Invalid position.\n");
    }
}

void insertAtEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }

    printf("%d inserted at the end.\n", value);
}

void deleteFromBeginning() {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    struct Node* temp = head;
    head = head->next;
    free(temp);
    printf("Deleted from the beginning.\n");
}

void deleteFromMiddle(int position) {
    if (position <= 0) {
        printf("Invalid position.\n");
        return;
    }

    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    struct Node* current = head;
    struct Node* previous = NULL;
    int count = 1;

    while (count < position && current != NULL) {
        previous = current;
        current = current->next;
        count++;
    }

    if (count == position && current != NULL) {
        previous->next = current->next;
        free(current);
        printf("Deleted from position %d.\n", position);
    } else {
        printf("Invalid position.\n");
    }
}

void deleteFromEnd() {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    struct Node* current = head;
    struct Node* previous = NULL;

    while (current->next != NULL) {
        previous = current;
        current = current->next;
    }

    if (previous == NULL) {
        head = NULL;
    } else {
        previous->next = NULL;
    }

    free(current);
    printf("Deleted from the end.\n");
}

void searchElement(int value) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    struct Node* current = head;
    int position = 1;
    while (current != NULL) {
        if (current->data == value) {
            printf("%d found at position %d.\n", value, position);
            return;
        }
        current = current->next;
        position++;
    }

    printf("%d not found in the linked list.\n", value);
}

void reverseLinkedList() {
    struct Node* current = head;
    struct Node* previous = NULL;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    head = previous;
    printf("Linked list reversed.\n");
}

int main() {
    int choice, value, position;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Traverse Linked List\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at Middle\n");
        printf("4. Insert at End\n");
        printf("5. Delete from Beginning\n");
        printf("6. Delete from Middle\n");
        printf("7. Delete from End\n");
        printf("8. Search for an Element\n");
        printf("9. Reverse the Linked List\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                traverseLinkedList();
                break;
            case 2:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertAtBeginning(value);
                break;
            case 3:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                insertAtMiddle(value, position);
                break;
            case 4:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertAtEnd(value);
                break;
            case 5:
                deleteFromBeginning();
                break;
            case 6:
                printf("Enter the position to delete: ");
                scanf("%d", &position);
                deleteFromMiddle(position);
                break;
            case 7:
                deleteFromEnd();
                break;
            case 8:
                printf("Enter the value to search: ");
                scanf("%d", &value);
                searchElement(value);
                break;
            case 9:
                reverseLinkedList();
                break;
            case 10:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}