#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data ;
    struct Node *link ;

};

int main(){
    struct Node *head = NULL;
    head = (struct Node *)malloc(sizeof(struct Node));
    head ->data =45;
    head ->link = NULL;

struct Node *current = (struct Node *)malloc(sizeof(struct Node));
current ->data = 98;
current ->link = NULL;
head ->link = current;
printf("First Node data    is %d\n",head ->data);
printf("Second Node data   is %d\n",head ->link ->data);
printf("Third Node address is %p\n",current ->link);

    return 0;


}