#include <iostream>
#include <math.h>

using namespace std;

// ################# Write a program to add 2 numbers using functions.

/*int add(int a,int b){
	return a+b;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<add(a,b);

}*/

// Write a program to print a given number using functions.

/*void no(int n){
	cout<<n;
	return;
}

int main(){
	int n;
	cin>>n;
	no(n);
	return 0;
}*/

// ############### PRINT ALL PRIME NUMBERS BETWEEN  GIVEN NUMBERS

/*int isprime(int num){
        
        for(int i=2;i<=sqrt(num);i++){
        	if(num%i==0){
        		return false;
        	}
        }

        return true;

}


int main(){
	int upper,lower;
	cin>>upper>>lower;

	for(int i=upper;i<=lower;i++){
		if(isprime(i)){
			cout<<i<<endl;
		}
	}
	return 0;

}*/


// ############ FIBONACCI SEQUENCE


/*void fibo(int n){
	int n1=-1;
	int n2 =1;

	for(int i=0;i<=n;i++){
		int temp = n1+n2;
		cout<<temp<<endl;
		n1 = n2;
		n2 = temp;
	}
	return;
}

int main(){
	int n;
	cin>>n;

	fibo(n);
	return 0;
}*/


// ################ FACTORIAL OF A NO. N;


/*int fact(int n){
	int ans =1;
	for(int i=1;i<=n;i++){
		ans*=i;
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	cout<<fact(n);
	return 0;
}*/


// ##################### NCr

/*
int fact(int n){
	int factorial = 1;

	for(int i=2;i<=n;i++){
		factorial*=i;
	}
	return factorial;
}
int main(){
	int n,r;
	cin>>n>>r;

	int ans = fact(n)/(fact(r)*fact(n-r));
	cout<<ans;

	return 0;
}*/


// ########################## PASCAL TRIANGLE

/*int fact(int n){
	int ans =1;
	for(int i=2;i<=n;i++){
		ans *=i;
	}
	return ans;
}

int main(){
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
		}cout<<endl;
	}
	return 0;
}*/