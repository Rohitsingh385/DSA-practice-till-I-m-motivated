#include<iostream>

using namespace std;

// ############## LONGEST ARITHEMATIC SUBARRAY	

/*int main(){
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int pd = arr[1] - arr[0];
	int ans =2;
	int crr = 2;
	int j=2;

	while(j<n){

		if(pd==arr[j]-arr[j-1]){
			crr++;
		}else{
			pd = arr[j] - arr[j-1];
			crr = 2;
		}
		ans = max(ans,crr);

		j++;
	}
	cout<<ans<<" ";
}*/


// ###################### RECORD BREAKER

int main(){
	int n;
	cin>>n;

	int arr[n+1];
	arr[n] = -1;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	if(n==1){
		cout<<"1"<<endl;
		return 0;
	}

	int ans = 0;
	int mx = -1;

	for(int i=0;i<n;i++){
		if(arr[i]>mx && arr[i]>arr[i+1]){
			ans++;
		}

			mx = max(mx,arr[i]);

	}
	cout<<ans<<" ";


}