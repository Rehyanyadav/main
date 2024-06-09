// to make linked list we need  a class which contain data and address of next Node

class Node {
    int data;
    Node *next;
/*
Now making constructor of class becoz if we make object we need to pass
the data

*/
    Node (int data){ // Node Contains a Int type of data
     this -> data = data; //this data  will stored in data
        next = NULL; //next will be NULL
        
    }
    
};


//Now we will print our LINKED LIST WITH INPUT DATA
  int main (){
      
      //we create Node and Connect to each other 
      Node.n1(10); // here Node Create  with name n1 and with data 10 
      // here Next address is NULL STORED 
      // now creating Second Node 
      Node.n2(20);
      //Now Connecting both the Nodes
      n1.next = &n2; // the address of n2 Stored in n1.next 
      cout <<n1.data;
      
      
  }

