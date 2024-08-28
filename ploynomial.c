#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int coef;
    int exp;
    struct Node* next;
} Node;

void insert(Node** poly, int coef, int exp) {
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->coef = coef;
    temp->exp = exp;
    temp->next = NULL;

    if (*poly == NULL || (*poly)->exp < exp) {
        temp->next = *poly;
        *poly = temp;
    } else {
        Node* current = *poly;
        while (current->next != NULL && current->next->exp >= exp) {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
    }
}

void print(Node* poly) {
    if (poly == NULL) {
        printf("0\n");
        return;
    }

    Node* current = poly;
    while (current != NULL) {
        printf("%dx^%d", current->coef, current->exp);
        if (current->next != NULL) {
            printf(" +");
        }
        current = current->next;
    }
    printf("\n");
}

int main() {
    Node* poly1 = NULL;
    insert(&poly1, 2, 5);
    insert(&poly1, -3, 4);
    insert(&poly1, 2, 2);
    insert(&poly1, 9, 1);
    printf("Poly 1: ");
    print(poly1);

    // Node* poly2 = NULL;
    // insert(&poly2, 4, 3);
    // insert(&poly2, 2, 1);
    // printf("Poly 2: ");
    // print(poly2);

    // Node* sum = add(poly1, poly2);
    // printf("Sum: ");
    // print(sum);

    return 0;
}