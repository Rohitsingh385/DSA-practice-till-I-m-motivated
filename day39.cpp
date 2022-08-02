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

void InsertAthead(node* &head,int val){
	node* n = new node(val);
	n->next=head;
	head=n;

}
void InsertAtTail(node* &head,int val){


	node* n = new node(val);
	node* temp = head;
	if(head==NULL){
		head=n;
		return;
	}
	while(temp->next!=NULL){
		temp = temp->next;

	}
	temp->next = n;

};

void display(node* head){

	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;

}
bool search(node* head,int key){
	node* temp = head;
	while(temp!=NULL){
		if(temp->data==key){
			return true;
		}
		temp=temp->next;
	}
	return false;
}

int main(){
	node* head = NULL;
	InsertAtTail(head,2);
	InsertAtTail(head,7);
	InsertAtTail(head,3);
	display(head);
	InsertAtTail(head,9);
	display(head);
	cout<<search(head,9)<<endl;

}