#include <bits/stdc++.h>
using namespace std;



// ############################ POINTERS

// POINTERS CONCEPT

/*int main(){

	int n=10;

	int *aptr=&n;

	cout<<n<<endl;
	cout<<*aptr<<endl;
	cout<<aptr<<endl;

	cout<<"assining new pointer value to "<<n<<endl;

	*aptr = 20;
	cout<<*aptr;
}
*/

// ############### POINTERS AND ARRAY

/*int main(){
	int arr[] = {10,20,30};

	int *arrptr = arr;
	for(int i=0;i<3;i++){
		cout<<*arrptr<<endl;
		arrptr++;
	}
}*/


// #########################        SWAP 2 NUMBERS USING POINTERS


/*void swap(int *a,int *b){

	int temp = *a;
	*a = *b;
	*b = temp;

}

int main(){
    

    int a = 10;
    int b = 20;

    int *aptr=&a;
    int *bptr=&b;

    swap(aptr,bptr);

    cout<<a<<" "<<b<<endl;

	return 0;
}*/



//  ######################### DECLARING A 2D DYNAMICALLY ARRAY
/*
// how to create dynamcially 2d array
// input/output
// memory release

int main(){
	int row;
	cin>>row;
	int col;
	cin>>col;

	// creation 
	int **arr = new int*[row];
	for(int i=0;i<row;i++){
		arr[i] = new int[row];
	}

	// taking input

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
	  }
	}


	// PRINTING OUTPUT

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
	  }cout<<endl;
	}

	// memory release
    for(int i=0;i<row;i++){
		delete [] arr [i];
	}

   delete [] arr;	


	return 0;
}*/