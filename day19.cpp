#include <bits\stdc++.h>

using namespace std;

// ############################## BITS MANIPULATION PRATICE

// write a program to check if a given number is power of 2
/*
bool ispowof(int n){
	return  (n && ! (n & n-1));
}


int main(){

cout<<ispowof(14);


}*/


// ########### WRITE A PROGRAM TO COUNT THE NUMBERS OF ONES IN BINARY REPRESENTATION OF A NUMBER
/*
int numberofones(int n){
	int count =0;
	while(n){
		n = (n & (n-1));
		count++;
	}

	return count;
}

int main(){

	cout<<numberofones(19);


}*/

// ###################### WAP TO GENERATE ALL POSSIBLE SUBSETS OF A SET


/*void subsets(int arr[],int n){

	for(int i=0;i<(1<<n);i++){
		for(int j=0;j<n;j++){
			if(i & (1<<j)){
				cout<<arr[j]<<" ";
			}
		}cout<<endl;
	}
}

int main(){

	int arr[4] = {1,2,3,4};
	subsets(arr,4);

}*/