#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* elements;
    int top;
    int maxSize;
} Stack;

void initStack(Stack* stack, int maxSize) {
    stack->elements = (int*)malloc(maxSize * sizeof(int));
    stack->top = -1;
    stack->maxSize = maxSize;
}

void push(Stack* stack, int element) {
    if (stack->top == stack->maxSize - 1) {
        printf("Stack is full. Cannot push %d.\n", element);
        return;
    }
    stack->elements[++stack->top] = element;
}

int pop(Stack* stack) {
    if (stack->top == -1) {
        printf("Stack is empty. Cannot pop.\n");
        return -1;
    }
    return stack->elements[stack->top--];
}

void display(Stack* stack) {
    int i;
    printf("Stack elements: ");
    for (i = 0; i <= stack->top; i++) {
        printf("%d ", stack->elements[i]);
    }
    printf("\n");
}

int isEmpty(Stack* stack) {
    if (stack->top == -1) {
        return 1;
    } else {
        return 0;
    }
}

void freeStack(Stack* stack) {
    free(stack->elements);
}

int main() {
    int maxSize;
    printf("Enter the maximum size of the stack: ");
    scanf("%d", &maxSize);

    Stack stack;
    initStack(&stack, maxSize);

    int choice, element;

    while (1) {
        printf("Stack Menu:\n");
        printf("1. Check if stack is empty\n");
        printf("2. Display content of stack\n");
        printf("3. Push an element into stack\n");
        printf("4. Pop an element from stack\n");
        printf("5. Exit the program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (isEmpty(&stack)) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack is not empty.\n");
                }
                break;
            case 2:
                display(&stack);
                break;
            case 3:
                printf("Enter element to push: ");
                scanf("%d", &element);
                push(&stack, element);
                break;
            case 4:
                element = pop(&stack);
                if (element != -1) {
                    printf("Popped element: %d\n", element);
                }
                break;
            case 5:
                freeStack(&stack);
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
/*

write a menu drive program in c to perfrom operation using stack using array  using struct 
1) check stack is empty or not
2) display content of stack using array 
3) push an element into stack
4) pop an element from stack
5) exit the program 


*/