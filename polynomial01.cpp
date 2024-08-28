#include <iostream>

using namespace std;

struct Node {
    int coef;
    int exp;
    Node* next;
};

void insert(Node**& poly, int coef, int exp) {
    Node* temp = new Node;
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
        cout << "0" << endl;
        return;
    }

    Node* current = poly;
    while (current != NULL) {
        if (current->coef > 0) {
            cout << "+";
        }
        cout << current->coef << "x^" << current->exp;
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* poly = NULL;
    Node** temp = &poly;
    insert(temp, 2, 5);
    insert(temp, -3, 4);
    insert(temp, 2, 2);
    insert(temp, 9, 0);
    cout << "Polynomial: ";
    print(poly);

    return 0;
}