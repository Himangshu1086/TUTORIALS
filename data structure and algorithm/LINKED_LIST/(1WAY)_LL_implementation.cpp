#include<bits/stdc++.h>
using namespace std;
class Node {

    public :
        int data;
        Node* next;

};

//=====================================================

void pushFront( Node**head , int new_data ){

    
    Node* new_node = new Node();
    new_node ->data = new_data;
    new_node ->next = (*head) ;
    (*head) = new_node;
    
}

//=======================================================

Node* popfront(Node* head){

    if (head == NULL)
        return NULL;
    else
    {
         Node* temp = head;
        (head) = (head ->next) ;
        delete(temp);

        return head;
    }
    

}

//=============================================================

void pushBack(Node** head , int new_data){

    
    Node* new_node = new Node();
    new_node->data = new_data;
    Node* temp = *head ;

    if(*head == NULL)
    {
        *head = new_node;
    }
    else
    {

    while(temp->next!= NULL)
    {
        temp=temp->next;
    }
    temp->next  = new_node;
    temp = new_node;
    }

}

//===========================================================

Node* popBack(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    else
    {
        Node* temp = head;
        Node* tail;
        while(temp->next!=NULL)
        {
            tail =  temp;
            temp = temp->next ;
        }
    if(temp == head)
    {
        head = NULL;
       
    }
    else
    {
        tail->next = NULL;
       
        
    }
    delete(temp);
    return head ;
    }
    

}

//============================================================


int main(){

   
    Node* head_ref =NULL;
    pushFront(&head_ref , 5);
    pushFront(&head_ref , 10);
    head_ref = popfront(head_ref);
    pushBack(&head_ref , 50);
    

    pushBack(&head_ref , 15);

    head_ref = popBack(head_ref);
    


	while(head_ref!=NULL){
	cout<< head_ref->data<<" ";
	head_ref= head_ref->next;
	}
	cout<< endl;


}

