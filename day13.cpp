#include <bits/stdc++.h>
#include<climits>

using namespace std;

// ############################ MAX SUBARRAY
/*
int main(){
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<arr[k]<<" ";
			}cout<<endl;
		}
	}


}*/

// ################# MAXIMUM SUBARRAY BRUTEFORCE

/*int main(){
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int maxSum = INT_MIN;

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum+=arr[k];
			}
			maxSum = max(maxSum,sum);
		}
	}
		cout<<maxSum<<" ";
}
*/

// ########################### MAXIMUM SUBARRAY optimal apporach using KADANE'S ALGO


/*int main(){
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int crrSum =0;
	int maxSUm = INT_MIN;

	for(int i=0;i<n;i++){
		crrSum+=arr[i];
		if(crrSum<0){
			crrSum =0;
		}

		maxSUm = max(maxSUm,crrSum);

	}
	cout<<maxSUm<<" ";


}

*/

// ########################### MAXIMUM CIRCULAR SUBARRAY SUM

/*int kadaane(int arr[],int n){

	int crrSum = 0;
	int mxSum = INT_MIN;

	for(int i=0;i<n;i++){
		crrSum+=arr[i];
		if(crrSum<0){
			crrSum = 0;
		}
        mxSum = max(mxSum,crrSum);

	}
	return mxSum;
}


int main(){
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int wrapsum;
	int nonWrapsum;

	nonWrapsum = kadaane(arr,n);
    
    int totalSum=0;

	for(int i=0;i<n;i++){
		totalSum+=arr[i];
		arr[i] = -arr[i];
	}
	wrapsum = totalSum + kadaane(arr,n);

	cout<<max(wrapsum,nonWrapsum)<<' ';
} 
*/

// ########################### PAIR SUM PROBLEM BRUTEFORCE

/*bool pairSu(int n,int arr[],int key){

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==key){
				cout<<i<<" "<<j<<endl;
				return true;
			}
		}
	}
	return false;
}

int main(){
	int arr[] = {2 ,4 ,7 ,11 ,14 ,16 ,20 ,21};
	int key = 31;

	cout<<pairSu(8,arr,key);


}*/


// ################################# PAIR SUM O(N)
// when array is sorted


bool pairSu(int n, int arr[],int key){

	int low = 0;
	int high = n-1;

	while(low<high){

		if(arr[low]+arr[high]==key){
			cout<<low<<" "<<high<<endl;
			return true;
		}
		else if(arr[low]+arr[high]>key){
			high--;
		}else{
			low++;
		}
	}
	return false;
}

int main(){
	int arr[] = {2 ,4 ,7 ,11 ,14 ,16 ,20 ,21};
	int key = 31;

	cout<<pairSu(8,arr,key);

}

