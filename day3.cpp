#include <iostream>

using namespace std;


// ************************** PATTERNS PROBLEM ***********

// ######################### Pyramid pattern for Numbers
/*int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}for(int j=1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}

}*/


// ########################  Pyramid Pattern for Numbers - 2
/*
int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}cout<<endl;
	}
}*/

// ############################### Print Sold Butterfly Pattern


/*int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}for(int j=1;j<=2*n-2*i;j++){
			cout<<" ";
		}for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}

	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}for(int j=1;j<=2*n-2*i;j++){
			cout<<" ";
		}for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}*/

// ####################### Print Hollow Butterfly Pattern


/*
int main(){
	int n;
	cin>>n;

for(int i=1;i<=n;i++){
	for(int j=1;j<=i;j++){
		if(i==1 || j==n || j==i || j==1){
			cout<<"*";
		}else{
			cout<<" ";
		}
	}for(int j=1;j<=2*n-2*i;j++){
		cout<<" ";
	}for(int j=1;j<=i;j++){
		if(i==1 || j==n || j==i || j==1){
			cout<<"*";
		}else{
			cout<<" ";
		}

	}cout<<endl;
}

for(int i=n;i>=1;i--){
	for(int j=1;j<=i;j++){
		if(i==1 || j==n || j==i || j==1){
			cout<<"*";
		}else{
			cout<<" ";
		}
	}for(int j=1;j<=2*n-2*i;j++){
		cout<<" ";
	}for(int j=1;j<=i;j++){
		if(i==1 || j==n || j==i || j==1){
			cout<<"*";
		}else{
			cout<<" ";
		}
	}cout<<endl;
}*/


// #########################   PACAL TRIANGLE
/*

int main(){

	int n;
	cin>>n;
	int coe =1;

	for(int i=0;i<n;i++){
		for(int j=0;j<=n-i;j++){
			cout<<" ";
		}for(int j=0;j<=i;j++){
			if(j==0 || i==0){
				coe =1;
			}else{
				coe = coe * (i-j+1)/j;
			}
			cout<<coe<<" ";
		}cout<<endl;
	}


}
*/
