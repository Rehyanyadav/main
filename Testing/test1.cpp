#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    
Node(int data){
    this ->data = data;
      next = NULL;

}
};


//printing the linked list 

void print(Node*head)
{
 Node *temp = head;
 
    //  cout<<head ->data;  //this will print only single node 
    while (head != NULL){
        cout<<head ->data<<endl;
head = head ->next;

    }
}



#include<iostream>
using namespace std;

int main (){
    
    Node n1(100);
    Node *head = &n1;
    Node n2(200);
    Node n3(300);
    Node n4(400);
    Node n5(500);

n1.next = &n2;
n2.next = &n3;
n3.next = &n4;
n4.next = &n5;

          print(head);
}