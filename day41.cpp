#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node (int val){
		data = val;
		next = NULL;
	}
};

void InsertAtTail(node* &head,int val){
	node *n = new node(val);
	node* temp = head;
	if(head==NULL){
		head = n;
		return;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;

}

// Reversing using iterator

node* reverse(node* &head){
	node* prevptr = NULL;
	node* crrptr = head;
	node* nextptr;
	while(crrptr!=NULL){
		nextptr=crrptr->next;
		crrptr->next=prevptr;

		prevptr=crrptr;
		crrptr=nextptr;
	}

	return prevptr;
}

// reversing using recurion
node* recursiereverse(node* &head){

	if(head==NULL || head->next==NULL){
		return head;
	}
node * newhead = recursiereverse(head->next);
head->next->next = head;
head->next=NULL;
return newhead;	
}

void display(node* head){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}


int main(){

	node* head = NULL;
	InsertAtTail(head,4);
	InsertAtTail(head,7);
	InsertAtTail(head,10);
	InsertAtTail(head,16);
	display(head);

	node* newhead= recursiereverse(head);
	display(newhead);

	return 0;
}