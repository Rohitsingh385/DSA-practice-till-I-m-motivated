#include <iostream>

using namespace std;

// ************************PATTERNS PROBLEM ********************

// #################### SOLID REACTANGLE

// int main(){

// 	int row,col;
// 	cin>>row>>col;

// 	for(int i = 0;i<row;i++){
// 		for(int j=0;j<col;j++){
// 			cout<<"*"<<" ";
// 		}
// 		cout<<endl;
// 	}
// 	return 0
// }

// ###################### HOLLOW RECTANGLE

/*int main(){

	int row,col;
	cin>>row>>col;

	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			if(i==1 || i==row || j==1|| j==col ){
				cout<<"*";
			}else{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}

	return 0;
}
*/


// ######################### Half Pyramid Pattern using Stars

/*int main(){
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

*/


// ############################# Inverted Half Pyramid Pattern using Stars

/*
int main(){
	int n;
	cin>>n;

	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
*/


// #######################  Print Half Pyramid after 180 degree rotation

/*int main(){
	int n;
	cin>>n;

	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			if(j<=n-i){
				cout<<" ";
			}else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}


*/

// ############################  Print Half Pyramid using numbers

/*int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}cout<<endl;
	}
}*/


// ########################### Print Inverted Half Pyramid using numbers

/*
int main(){
	int n;
	cin>>n;

	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<j;
		}cout<<endl;
	}
	return 0;
}
*/

// ########################### Print Half Pyramid using numbers - 2

// int main(){
// 	int n;
// 	cin>>n;

// 	for(int j=1;j<=n;j++){
// 		for(int i=1;i<=j;i++){
// 			cout<<j;
// 		}cout<<endl;
// 	}
// 	return 0;
// }


// ####################### Print Inverted Half Pyramid using numbers - 2

          // APPROACH 1 
/*int main(){
	int n;
	cin>>n;


	for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
         	if(j<= n-i+1){
         		cout<<i;
         	}else{
         		cout<<" ";
         	}
         }cout<<endl;
	}
}*/

          // APPROACH 2

/*int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<i<<" ";
		}cout<<endl;
	}

}*/


// ############### Print Floyd's Triangle

/*int main(){
	int n;
	cin>>n;

	int counter = 0;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			counter++;
			cout<<counter<<" ";
		}
		cout<<endl;
	}
}*/


// ############## Print 0-1 pattern


/*int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if((i+j)%2==0){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
			cout<<endl;
	}

	return 0;
}*/


// ########################## Print Diamond using Stars : Given n, print diamond with 2*n rows.

/*
int main(){
	int n;
	cin>>n;

	for(int i=0;i<=n;i++){
		for(int j=0;j<=n-i;j++){
			cout<<" ";
		}for(int j=1;j<=2*i-1;j++){
			cout<<"*";
		}

		cout<<endl;
	}

	for(int i=n;i>=1;i--){
		for(int j=0;j<=n-i;j++){
			cout<<" ";
		}for(int j=1;j<=2*i-1;j++){
			cout<<"*";
		}

		cout<<endl;
	}

}

*/

// ###################### Print Hollow Diamond using Stars


/*int main(){
	int n;
	cin>>n;

	for(int i=0;i<=n;i++){
		for(int j=0;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=0;j<=2*i-1;j++){
			if(j==1 || j==2*i-1 ){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}cout<<endl;
	}

	for(int i=n;i>=1;i--){
		for(int j=0;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=0;j<=2*i-1;j++){
			if(j==1 || j==2*i-1 ){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}cout<<endl;
	}
}*/

// ######################### Print Hollow Diamond Inscribed in a Rectangle

int main(){

	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=0;j<=n-i;j++){
			cout<<"*";
		}for(int j=2;j<=2*i-1;j++){
			cout<<" ";
		}for(int j=0;j<=n-i;j++){
			cout<<"*";
		}

		cout<<endl;
	}

	for(int i=n;i>=1;i--){
		for(int j=0;j<=n-i;j++){
			cout<<"*";
		}for(int j=2;j<=2*i-1;j++){
			cout<<" ";
		}for(int j=0;j<=n-i;j++){
			cout<<"*";
		}

		cout<<endl;
	}
}


// ############### Print Solid Rhombus
/*
int main(){
	int n;
	cin>>n;

	for(int i=0;i<=n;i++){
		for(int j=0;j<=n-i;j++){
			cout<<" ";
		}for(int j=0;j<=n;j++){
			cout<<"*";
		}

		cout<<endl;
	}
}*/


// ########################## Print Hollow Rhombus
/*
int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}for(int j=1;j<=n;j++){
			if(i==1 || i==n || j==1 || j==n){
				cout<<"*";

			}else{
				cout<<" ";
			}
		}cout<<endl;
	}
}*/

