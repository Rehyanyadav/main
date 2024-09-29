#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this ->data = data;
        next = NULL;
        
    }
    
};





void insertAthead(node* &head , int data){
    node * new_node = new node (data);
    new_node ->next = head;
    head = new_node;

}



void display (node *head){
    node *temp =head;
while(temp != NULL)
{
    cout<<temp ->data <<"-> ";
    temp = temp->next;

}
cout<<"NULL"<<endl;

}


int main(){
    node* head= NULL;
    insertAthead(head, 2);
    display(head);
insertAthead(head, 4);
display(head);

    return 0;
    
    
}