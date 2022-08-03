#include<iostream>
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

void InsertAthead(node* &head,int val){

	node* n = new node(val);
	n->next=head;
	head=n;
}

void InsertAttail(node* &head,int val){

	node * n = new node(val);
	node * temp = head;
	if(head==NULL){
		head = n;
		return;
	}
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = n;
}

void display(node* head){

	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;

}

void deleteathead(node* &head){
	node * todelete=head;
	head=head->next;
	delete todelete;
}

void deletnode(node* &head,int val){
	if(head==NULL){
		return;
	}
	if(head->next==NULL){
		deleteathead(head);
		return;
	}
	node *temp =head;
	while(temp->next->data!=val){
		temp=temp->next;
	}
	node* todelete=temp->next;

	temp->next=temp->next->next;

	delete todelete;
}

int main(){


	node* head = NULL;
	InsertAttail(head,5);
	InsertAttail(head,8);
	InsertAttail(head,10);
	InsertAttail(head,16);
	display(head);
	deletnode(head,8);
	display(head);
	deleteathead(head);
	display(head);

}