
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
int main()
{
//statically 

  
Node n1(1);
Node *head =&n1;
Node n2(20000);
  n1.next =&n2;
  //printing the head of node 
  
cout<<head->data;


   
    return 0;
}