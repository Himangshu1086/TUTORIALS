#include<bits/stdc++.h>
using namespace std;


class Node {
   public :
      int data ;
      Node * next;

};


//==========================pushFront==============================

Node* pushFront(Node* head , int new_data)
{
    Node* new_node = new Node();
   new_node->data = new_data ;
   new_node->next = NULL ;
   
   if(head == NULL)
   {
      head == new_node;
      return head;
     
   }
   else
   {
      new_node->next = head;
      head = new_node ;
      return head;

      

   }
}

//====================printLinkedList=================================

void printLinkedList(Node* head){

   cout <<endl<<endl;
   while(head->next!=NULL){
	cout<< head->data<<" ";
	head= head->next;
	}
	cout<< endl<<endl;

}

//=======================main function=================================

int main(){

   Node* head = new Node();
   head->next =NULL;
head =pushFront(head , 10);
   head=pushFront(head , 20);
   head =pushFront(head , 30);
   head = pushFront(head , 40);
   head = pushFront(head , 50);
   printLinkedList(head);

}