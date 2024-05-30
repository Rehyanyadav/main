#include<iostream>
using namespace std;
/*
****************INSERTION OF NODE*************
*/

class Node{

    public:
    int data ;  // store int data 
    Node *next; //  node of linked list which shows next node 


//constructor

Node (int data){ 
    this -> data = data; 
    this -> next = NULL; 

}

void insertAtHead(Node * &head,int d){
    //new node create
    Node* temp =new Node(d);
    temp -> next =head ;
    
}
};

int main (){

   Node*  node1 = new Node(10); //creating node 

   cout <<node1 ->data <<endl; //  shows the data of int data 

   cout <<node1 ->next <<endl;  //shows the addresss of next node 



    return 0;
}