#include<iostream>
using namespace std;


class Node {
   public:

    int data;
   Node *next;


Node (int data ){
    this -> data = data;
    next = NULL;

}



};


#include<iostream>
using namespace std;

//Driver code 

int main (){


    // node 1
    Node n1(10);
    Node n2(20);
    // n1.next = &n2
    n1.next = &n2;
    
    
    cout <<n1.data <<endl;
    cout << n1.next <<endl;

    cout <<n2.data <<endl;
    cout <<n2.next<<endl;






}