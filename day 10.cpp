#include <iostream>
#include <climits>

using namespace std;

// ########################################## SELECTION SORT 	

/*void selectionSort(int n,int arr[]){
 int temp;

  for(int i=0;i<n;i++){
  	for(int j=i+1;j<n;j++){
  		if(arr[j]<arr[i]){
  			temp = arr[j];
  			arr[j] = arr[i];
  			arr[i] = temp;
  		}
  	}
  }
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
}

int main(){

	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	selectionSort(n,arr);


	return 0;
}*/


// ########################################## BUBBLE SORT

/*int main(){
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}


	int counter =1;

	while(counter<n){

		for(int i=0;i<n-counter;i++){
			if(arr[i]>arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}

		}
			counter++;
	}
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}



return 0;
} 	*/



// ########################################## INSERTION SORT

// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}

// 	for(int i=1;i<n;i++){
// 		int crr = arr[i];
// 		int j = i-1;
// 		while(arr[j]>crr && j>=0){
// 			arr[j+1] = arr[j];
// 			j--;
// 		}

// 		arr[j+1] = crr;
// 	}

// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";
// 	}

// 	return 0;
// }
