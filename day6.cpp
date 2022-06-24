#include <bits/stdc++.h>
using namespace std;

// ################# SUM OF N NATURAL NUMBERS

// using for loop

/*int SumOf(int n){
	int ans = 0;

	for(int i=0;i<=n;i++){
		ans+=i;
	}
	return ans;
}

int main(){
	int n;

	cin>>n;
	cout<<SumOf(n);

}*/

// using formula 
/*
int sumOf(int n){
	int ans = n*(n+1)/2; 
	return ans;
}

int main(){
	int n;
	cin>>n;
	cout<<sumOf(n);
	return 0;
}*/


// ############# pythagorean triplets

/*bool check(int x,int y,int z){
	int a = max(x,max(y,z));

	int b,c;

	if(a==x){
		b=y;
		c=z;
	}else if(a==y){
		b=x;
		c=z;
	}else{
		b=x;
		c=y;
	}
	if(a*a == b*b + c*c){
		return true;
	}else{
		return false;
	}
}

int main(){
	int x,y,z;

	cin>>x>>y>>z;
	if(check(x,y,z)){
		cout<<"Pythagorean Triplet";
	}else{
		cout<<"Not a Pythagorean Triplet";
	}
	return 0;
}*/


// ############## BINARY CONVERSION

// binary to decimal
/*
int BinarytoDecimal(int n){
	int ans =0;
	int temp =1;

	while(n>0){
		int y = n%10;
		ans += temp*y;
		temp*=2;
		n/=10;
	}
	return ans;
}

int main(){
	int n;
	cin>>n;

	cout<<BinarytoDecimal(n);
}
*/


// octal to decimal

// int OctaltoDecimal(int n){
// 	int ans = 0;
// 	int temp = 1;

// 	while(n>0){
// 		int y = n%10;
// 		ans += temp*y;
// 		temp *= 8;
// 		n/=10;
// 	}
// 	return ans;
// }

// int main(){
// 	int n;
// 	cin>>n;

// 	cout<<OctaltoDecimal(n);
// 	return 0;
// }


