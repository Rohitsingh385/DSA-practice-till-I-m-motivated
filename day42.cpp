#include <iostream>

using namespace std;
class node{
public:
	int data;
	node* next;

	node(int val){
		data = val;
		next = NULL;
	}
};


void insertAtTail(node* &head,int val){
	node* n = new node(val);
	node* temp = head;
	if(head==NULL){
		head = n;
		return;
	}
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next=n;
}

void display(node* head){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}
node* reversek(node* &head,int k){
	node* prevptr = NULL;
	node* crrptr = head;
	node* nextptr;
	int count =0;

	while(crrptr!=NULL && count<k){
		nextptr = crrptr->next;
		crrptr->next=prevptr;
		prevptr=crrptr;
		crrptr = nextptr;
		count++;
	}

	if(nextptr!=NULL){

	head->next = reversek(nextptr,k);
}
return prevptr;
}

int main(){

	node* head = NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);	
	insertAtTail(head,3);
	insertAtTail(head,4);
	insertAtTail(head,5);
	insertAtTail(head,6);
	display(head);
	int k=2;
	node* newhead=reversek(head,k);
	display(newhead);

	return 0;
}