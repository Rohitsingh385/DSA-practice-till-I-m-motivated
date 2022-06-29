#include <iostream>
#include<climits>

using namespace std;


///// ############################# max till i
/*int main(){
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}


	int mx = INT_MIN;
	for(int i=0;i<n;i++){

		mx = max(mx,arr[i]);

		cout<<mx<<" ";
	}

}*/

// ############################## maximum subarray

int main(){
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    

    int crr = 0 ;

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){

			crr+=arr[j];
			cout<<crr<<" ";
		}
	}
	return 0;
}