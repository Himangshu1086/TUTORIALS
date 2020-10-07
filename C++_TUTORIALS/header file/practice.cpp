#include<bits/stdc++.h>
using namespace std;

class Node{
	public :
		int data;
		Node *link;
};
Node create_node(){

	Node* create_node = new Node;
	create_node->link=NULL;
	return *create_node;
}

void push_back(int data , Node *head){

	Node *n , *temp;
	*n = create_node();
	n->data= data;

	if(head == NULL){

		head = n;
		temp = n;
	}
	else
	{
		temp->link = n;
		temp = n;
		
		
	}
}

void print_list(Node *temp,Node *head ){

	temp= head;
	while(temp!=NULL)
	{
	cout << temp->data <<" ";
	temp=temp->link;
	}

}



int main(){

Node *head , *temp;
head=NULL;
temp =NULL;

create_node();
push_back(4 , head);
print_list(temp , head);





}