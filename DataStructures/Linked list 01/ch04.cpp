
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
 Node(int data ){

    this -> data = data;
    next = NULL;

 }
 };





#include<iostream>
using namespace std;

void print(Node *head){
Node  *temp = head;

    while (temp   != NULL){
        cout <<temp -> data <<endl;
        temp = temp  -> next;
z
    } 
}
int main()
{
//statically 

  
Node n1(10);
Node *head =&n1;
Node n2(20);

Node n3 (30);
Node n4 (40);
Node n5(50);
n1.next =&n2;
n2.next =&n3;
n3.next =&n4;
n4.next =&n5;


// creating function which print all the nodes
print(head);

   
    return 0;
}