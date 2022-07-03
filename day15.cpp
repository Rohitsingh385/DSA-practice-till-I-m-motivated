#include <bits/stdc++.h>

using namespace std;


// ############################################ CHECK IF PALINDROME
/*int main(){
	int n;
	cin>>n;

	char a[n];
	cin>>a;

	bool flag = 1;

	for(int i=0;i<n;i++){

		if(a[i] != a[n-1-i]){
			flag = 0;
			break;
		}
	}

	if(flag==true){
		cout<<"Palindorme";
	}else{
		cout<<"not a Palindorme";
	}
}*/


// ####################################### LARGEST WORD IN A SENTENCE;

/*int main(){

	int n;
	cin>>n;
	cin.ignore();
	char a[n+1];

	cin.getline(a,n);
	cin.ignore();

	int i=0;
	int crr=0;int max=0;
	int st=0,maxst=0;

	while(1){
       if(a[i]== ' ' || a[i] == '\0'){
       	if(crr>max){
       		max = crr;
       		maxst = st;
       	}
       	crr = 0;
       	st = i+1;
       }
       else


		crr++;

		if(a[i]== '\0')
			break;
		i++;
	}
	cout<<max<<" ";

	for(int i=0;i<max;i++){
		cout<<a[i+maxst];
	}
	return 0;
}*/


// ############################## POINTERS

/*int main(){
	int n;
	cin>>n;

	int *aptr = &n;
	cout<<n<<endl;// value of n
	cout<<aptr<<endl; // address of n
	cout<<*aptr<<endl; // value of n
    
    cout<<"upadted value of "<<n<<endl;
	*aptr = 20;

	cout<<*aptr;


	return 0;

}*/