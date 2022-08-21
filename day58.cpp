#include <iostream>
using namespace std;

struct node{
	int data;
	node* left = NULL;
	node* right = NULL;

	node(int val){
		data = val;
		left=NULL;
		right =NULL;
	} 
};
int calcheight(node* root){
	if(root==NULL){
		return 0;
	}


	return max(calcheight(root->left),calcheight(root->right))+1;
}

// int maxDiameter(node* root){

// 	if(root==NULL){
// 		return 0;
// 	}

// 	int lheight = calcheight(root->left);
// 	int rheiht = calcheight(root->right);

// 	int currDiameter = lheight+rheiht+1;

// 	int ldiameter = maxDiameter(root->left);
// 	int rdiameter = maxDiameter(root->right);

// 	return max(currDiameter,max(ldiameter,rdiameter));


// }

int maxDiameter(node* root,int* height){
	if(root==NULL){
		*height =0;
		return 0;
	}
	int lh=0,rh=0;
	int ldiameter = maxDiameter(root->left,&lh);
	int rdiameter = maxDiameter(root->right,&rh);

	int currDiameter = lh+rh+1;
	*height = max(lh,rh)+1;

	return max(currDiameter,max(ldiameter,rdiameter));

}


int main(){

	node* root = new node(1);
	root->left= new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->right=new node(6);
	root->right->left=new node(7);

	//print height of tree
	// cout<<calcheight(root);
	//print diameter of tree 0(n2)

	// cout<<maxDiameter(root);
	//print diameter of tree 0(n2)
	int height =0;
	cout<<maxDiameter(root,&height);


	return 0;
}