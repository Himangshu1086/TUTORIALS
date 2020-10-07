
// its a simple list list containing three nodes putting manually.

#include<bits/stdc++.h>
using namespace std;

class Node{

	public:
	int data;
	Node *link;
};



Node create_node(){

    Node *n = new Node ;
    n->link=NULL;
    return *n ;

}

Node push_back(int data , Node *head  ){

    Node *node,*temp;
    *node = create_node();
    node-> data = data;
    
    if(head==NULL)
    {
        head = node;
        head = temp;
    }
    else
    {
        temp->link = node;
        temp = node;
    }
    return *temp;
    




}

void print_list(){

    while(node_print!=NULL){
	cout<< node_print->data<<" ";
	node_print = node_print->link;
	}
	cout<< endl;

}

int main()
{
   Node* head;
   head=NULL;
   cout <<push_back(2,head)<<endl;;
  cout<< push_back(4,head)<<endl;;
//   print_list();

	


}
















