#include <bits\stdc++.h>

using namespace std;

// ############## WRTIE A PROEGRAM TO FIND A UNIQUE NUMBER IN AN ARRAY WHERE ALL NUMBERS EXCEPT ONE ARE PRESENT TWICE

/*int xorSum(int arr[],int n){

	int xorsum = 0;
	for(int i=0;i<n;i++){
		xorsum = xorsum^arr[i];
	}
	return xorsum;
}

int main(){
    
    int arr[] = {1,2,3,4,1,2,3};

    cout<<xorSum(arr,7);

}*/


// ###################### WAP TO FIND 2 UNIQUE NUM IN ARRAY WHERE ALL NUMBERS EXCEPT TWO ARE PRESENT TWICE
/*
int setBit(int n,int pos){
	return (n &(1<<pos))!=0;
}
void unique(int arr[],int n){
    
    int xorsum =0;
	for(int i=0;i<n;i++){
		xorsum = xorsum ^ arr[i];
	}

	int temp = xorsum;

	int setbit =0;
	int pos =0;

	while(setbit !=1){

		setbit = xorsum &1;
		pos++;
		xorsum = xorsum >>1;
	}
    int newxor=0;
	for(int i=0;i<n;i++){
		if(setBit(arr[i],pos-1)){
        newxor = newxor ^arr[i];

		}
	}
	cout<<newxor<<endl;
	cout<<(temp^newxor)<<endl;
}

int main(){

	int arr[] = {1,2,3,1,2,3,5,7};
	unique(arr,8);


}*/

// ######################  WAP TO FIND A UNIQUE NUMBER IN AN ARRAY WHERE NUMBES EXCEPT ONE, ARE PRESENT THRICE


// bool getBit(int n,int pos){
// 	return ((n & (1<<pos))!=0);
// }

// int setBit(int n,int pos){
// 	return(n | (1<<pos));
// }
// int unique(int arr[],int n){

// 	int result =0;

// 	for(int i=0;i<64;i++){
//      int sum = 0;
//        for(int j=0;j<n;j++){
//        	if(getBit(arr[j],i)){
//        		sum++;
//        	}
//       }
//        if(sum%3!=0){
//        	result = setBit(result,i);
//        }
// 	}
// 	return result;
// }

// int main(){
//    int arr[] = {1,2,3,4,1,2,3,1,2,3};
// 	cout<<unique(arr,10)<<endl;

// 	return 0;
// }
