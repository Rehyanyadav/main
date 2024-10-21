//* write a  menu driven program in c to implement a linear queue and do the following operations 1 . enqueue 2  dequeue 3 display 4 exit using array
#include <stdio.h>
#include <stdlib.h>
#define MAX 50// This line defines a preprocessor macro named MAX with a value of 50. 
               // Whenever the identifier MAX appears in the code, it will be replaced by the value 50 during preprocessing.


// Declare an array 'queue' of size MAX to store the elements of the queue
int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue is full!\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        queue[++rear] = value;
        printf("Inserted %d\n", value);
    }
}

void dequeue() {
    // Check if the queue is empty
    if (front == -1 || front > rear) {
        // If the queue is empty, print a message
        printf("Queue is empty!\n");
    } else {
        // If the queue is not empty, remove the front element
        printf("Deleted %d\n", queue[front++]);
        
        // Check if the queue has become empty after the removal
        if (front > rear) {
            // Reset the queue indices when it becomes empty
            front = rear = -1;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements are:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;
    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
