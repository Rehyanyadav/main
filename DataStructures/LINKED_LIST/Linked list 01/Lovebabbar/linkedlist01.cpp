#include<iostream>
using namespace std;


class Node{

    public:
    int data ;  // store int data 
    Node *next; //  node of linked list which shows next node 


//constructor

Node (int data){  /* 
if new node build constructor calls and 
next will be null 

*/
    this -> data = data; 
    this -> next = NULL; 

}


};

int main (){

   Node*  node1 = new Node(10); //creating node 

   cout <<node1 ->data <<endl; //  shows the data of int data 

   cout <<node1 ->next <<endl;  //shows the addresss of next node 



    return 0;
}