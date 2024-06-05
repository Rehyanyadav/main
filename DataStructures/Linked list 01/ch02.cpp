#include<iostream>
using namespace std;



class Node {

   public:
   int data;
Node *next;   //this contains address of next node 


 //making constructor if anyone add data to note
 Node (int data){

   this -> data = data;
   next = NULL;


 }


};

int main (){


Node n1(1); //n1 block created with data 1  
//storing the address
 
Node *head = &n1;   // now we  make a head with address of n1 
Node n2(2);    //  new node  create with data 2 and next null



//Connecting nodes by setting address of scnd node to first 
  n1.next= &n2;   //  

  // cout <<n1.data<<"  " << n1.data;
  //now we print the  n1 and n2  with head 

cout <<head -> data;
// this will print the n1 data 


  return 0;


} 


