#include <iostream>
using namespace std;

// #define n 20

// class queue{

// 	int* arr;
// 	int front;
// 	int back;
// public:
// 	queue(){
// 		arr=new int[n];
// 		front=-1;
// 		back=-1;
// 	}

// 	void push(int x){

// 		if(back==n-1){
// 			cout<<"queue overflow"<<endl;
// 			return;
// 		}
// 		back++;
// 		arr[back]=x;

// 		if(front==-1){
// 			front++;
// 		}

// 	}

// 	void pop(){

// 		if(front==-1 || front>back){
// 			cout<<"no elements in queue"<<endl;
// 			return;
// 		}
// 		front++;
// 	}

// 	int peek(){
// 		if(front==-1 || front>back){
// 			cout<<"no elements in queue"<<endl;
// 			return -1;
// 		}
// 		return arr[front];

// 	}

// 	bool empty(){
// 		if(front==-1 || front>back){
// 			cout<<"no elements in queue"<<endl;
// 			return true;
// 		}
// 		return false;
// 	}

// };

// int main(){

// 	queue q;

// 	q.push(1);
// 	q.push(2);
// 	q.push(3);
// 	q.push(4);


// 	cout<<q.peek()<<endl;
// 	q.pop();

// 	cout<<q.peek()<<endl;
// 	q.pop();

// 	cout<<q.peek()<<endl;
// 	q.pop();

	
//     cout<<q.peek()<<endl;
// 	q.pop();	

// 	cout<<q.empty()<<endl;

// 	return 0;
// }


class node{
public:
	int data;
	node* next=NULL;

	node(int val){
		data=val;
		next=NULL;
	}
};

class queue{
	node* front;
	node* back;

public:
	queue(){
		front=NULL;
		back=NULL;
	}

	void push(int x){
		node* n=new node(x);

		if(front==NULL){
			back=n;
			front=n;
			return;
		}
		back->next=n;
		back=n;
	}

	void pop(){
		if(front==NULL){
			cout<<"queue underflow"<<endl;
			return;
		}
		node* todelete=front;
		front=front->next;

		delete todelete;

	}

	int peek(){
		if(front==NULL){
			cout<<"no element in queue"<<endl;
			return -1;
		}
		return front->data;
	}
	bool empty(){
		if(front==NULL){
			return true;
		}
		return false;
	}
};

int main(){

	queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();

	cout<<q.empty()<<endl;
	return 0;  
}