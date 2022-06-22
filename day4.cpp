#include <iostream>
using namespace std;


// ################ checking if a number is prime

/*int main(){ 
	int n;
	cin>>n;
	bool flag = true;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			flag = false;
			break;
		}
	}


	if(flag){
		cout<<"no. is prime";
	}else{
		cout<<"not a prime";
	}
}*/


// ############################# Prinitng all the digits of a postive number from right to left


// int main(){


// 		int n;
// 		cin>>n;
// 		int ans;

// 		while(n>0){
// 			int rem = n%10;
// 			cout<<rem;
// 			n/=10;

// 		}
// 		return 0;

// 	}


// ############## checking if a number is armstrong or not

/*int main(){
	int n;
	cin>>n;
	int ans=0;
	int num = n;
	while(n>0){
		int rem = n%10;
		ans = ans + (rem*rem*rem);
		n/=10;
	}
	if(ans == num){
		cout<<"armstrong";
	}else{
		cout<<"not an armstrong";
	}
	return 0;

}*/



// ######### calculating the factorial of a number n

/*int main(){
	int n;
	cin>>n;
	int ans = 1;

	for(int i=1;i<=n;i++){
		ans*=i;

	}
	cout<<ans;

}

*/


// ######################## PRINTING FIRST N TERMS OF FIBNOACCI SERIES WITH STARTING TERMS AS 0,1

/*int main(){
	int n;
	cin>>n;

	int n1 = -1;
	int n2 = 1;
	int c;

	for(int i=0;i<=n;i++){
		c = n1 +n2;
		cout<<c;
		n1 = n2;
		n2 = c;

	}
	return 0;

}
*/

/*// ########################### 
int main(){
	int n;
	cin>>n;
	int rev;

	while(n>0){
		int rem = n%10;
		rev = rev * 10 + rem;
		n/=10;

	}
	cout<<rev;
	return 0;
}*/