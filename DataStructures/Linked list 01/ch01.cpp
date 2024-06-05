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

Node n1(1);
Node n2(2);


//Connecting nodes by setting address of scnd node to first 

  n1.next= &n2;

cout << n1.data<<" "<<n2.data<<endl;
}


