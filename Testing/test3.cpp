
//* TAKING INPUT
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

//Taking Input NODE 

Node * takeInput(){
     int data; // data
     cin >> data; //taking input 
     Node *head = NULL;  //head will NULL

     while (data!= -1){  // this loop run until the users enter -1
  Node *newNode = new Node(data); // new node created with data
  
        if(head ==NULL){  // if head pointer will NULL
            head =newNode;   //

        }
        else {

Node *temp =head;
 while (temp -> next != NULL){
     temp = temp -> next;
 }
temp -> next = newNode;
 
        }

        cin >> data;
        
     }
     return head ;
      
}


//printing the Node 
void print(Node*head)
{
 Node *temp = head;
 
    //  cout<<head ->data;  //this will print only single node 
    while (head != NULL){
        cout<<head ->data<<endl;
head = head ->next;

    }
}

int main ()
{

    print(takeInput());
}