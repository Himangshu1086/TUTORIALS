
// IMPLIMENTATION  OF  STACK USING LINKED LIST ;

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


//==========================POPFRONT=================================

Node* popFront(Node* head)
{
    if(head->next == NULL)
    {   
        cout << "Stack is Empty";
        return head;
    }
    else
    {
    Node* temp;
    temp = head;
    head = head->next;
    delete(temp);
    return head;
    }


}


//===================isEmpty===========================================


bool is_Empty(Node* head){

    if(head->next == NULL)
    {
        cout << "Stack is Empty" <<endl;
        return true;
    }
    else
    {
        
        cout << "Stack is not Empty" << endl;
        return  false;
        
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
   
   /* another way ::      Node* head;
                          head->next = NULL;      
    */
  


   head =pushFront(head , 10);
   head=pushFront(head , 20);
   head =pushFront(head , 30);
   head = pushFront(head , 40);
   head = pushFront(head , 50);
   head = popFront(head);
   is_Empty(head);

   for(int i=0; i<5;i++)
   {    int x;
       cout << "Enter the Number to be inserted in the stack ";
       cin >> x;
       head =pushFront(head , x);
   }
   cout << "Want to pop Number ? Y OR N"<<endl;
   char y;
   cin >> y;
   if(y =='Y')
        head = popFront(head);
   printLinkedList(head);

}