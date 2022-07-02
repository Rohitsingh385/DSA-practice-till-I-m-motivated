#include <iostream>

using namespace std;

// ################################### TRANSPOSE OF A MATRIX 

int main(){
	int n;
	cin>>n;
    int a[n];
	for(int i=0;i>n;i++){
		cin>>a[i];
	}

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int temp = a[i][j];
		}
	}
	cout<<temp;
}


// ############################################### MULTIPLICATION OF 2 2D ARRAY

/*int main(){
	int n1,n2,n3;

	cin>>n1>>n2>>n3;

	int m1[n1][n2];
	int m2[n2][n3];

	for(int i=0;i<n1;i++){
       for(int j=0;j<n2;j++){
       	cin>>m1[i][j];
       }
	}

	for(int i=0;i<n2;i++){
       for(int j=0;j<n3;j++){
       	cin>>m2[i][j];
       }
	}

	int ans[n1][n3];
	for(int i=0;i<n1;i++){
       for(int j=0;j<n3;j++){
       	ans[i][j] =0;
       }
	}

	for(int i=0;i<n1;i++){
		for(int j=0;j<n3;j++){

			for(int k=0;k<n2;k++){
				ans[i][j] += m1[i][k]*m2[k][j];

			}
		}
	}

	for(int i=0;i<n1;i++){
		for(int j=0;j<n3;j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}
}*/


// ############################ MATRIX SEARCH

/*int main(){


	int n,m;
	cin>>n>>m;
	int target;
	cin>>target;
	int mat[n][m];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
		}
	}
	
	int r=0;
	int c = m-1;

	bool found = false;

	while(r < n and c>=0){

		if(mat[r][c]==target){
           found = true;
		}else if(mat[r][c]> target){
			c--;
		}else{
			r++;
		}
	}

	if(found){
		cout<<"ELEMENT FOUND!";
	}
	else{
		cout<<"ELEMENT NOT  FOUND"; 
	}

	return 0;
}*/