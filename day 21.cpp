#include <iostream>

using namespace std;

// ############### PRIME NUMBER USING SEIVE OF EROTHENESIS
/*

void priveSeive(int n){
	int arr[100] = {0};

	for(int i=2;i<=n;i++){
		if(arr[i]==0){
			for(int j=i*i;j<=n;j+=i){
				arr[j] = 1;
			}
		}
	}

	for(int i=2;i<=n;i++){
		if(arr[i]==0){
			cout<<i<<" ";
		}
	}cout<<endl;
}

int main(){
	int n;
	cin>>n;
	priveSeive(n);

}*/


// ############### PRIME FACTORIZATION USING SEIVE OF EROTHENESIS
/*
void primeSeive(int n){

	int spf[100] = {0};

	for(int i=2;i<=n;i++){
		spf[i] = i;
	}

	for(int i=2;i<=n;i++){
		if(spf[i]==i){
			for(int j=i*i;j<=n;j+=i){
				if(spf[j]==j){
					spf[j] = i;
				}
			}
		}
	}

	while(n!=1){
		cout<<spf[n]<<" ";
		n = n/spf[n];
	}
}


int main(){

int n;
cin>>n;

primeSeive(n);



}*/

//  ######################### INCLUSION ENCUSION 
/*
int divisible(int n,int a,int b){

	int c1 = n/a;
	int c2 = n/b;

	int c3 = n/(a*b);

	return (c1 + c2 -c3);
}

int main(){

	int n,a,b;
	cin>>n>>a>>b;

	cout<<divisible(n,a,b);
}*/


// #################### GCD USING INCLUSION/ ENCULSION

int divisble(int a,int b){

	while(b!=0){
		int rem = a%b;
		a = b;
		b = rem;
	}
	return a;
}


int main(){
    int a,b;
    cin>>a>>b;
	cout<<divisble(a,b);

}