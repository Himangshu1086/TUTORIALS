#include<bits/stdc++.h>
using namespace std;

class Node{

	public:
	int data;
	Node *link;
};

int main()
{
	Node *one=new Node;
	 Node *two = new Node;
	 Node *three = new Node;
	Node *head = new Node;
	head = NULL;
	//Node *temp = new Node;


	one->data = 1;
	two->data = 2;
	three->data = 3;
	head = one;
	//temp = head;
	one->link = two;
	two->link = three;
	three->link=NULL;

	//cout << one->data <<" "<<one->link << " "<< endl;

	while(head!=NULL){
	cout<< head->data<<" ";
	head=head->link;
	}
	cout<< endl;


}
















