#include<iostream>

using namespace std;

// ############# tiling problem
/*
int tiling(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}

	return tiling(n-1) + tiling(n-2);
}

int main(){

	cout<<tiling(4);
}*/


// ################### friends paring problem
/*
int freindsPAiring(int n){

	if(n==0 || n==1 || n==2){
		return n;
	}

	return freindsPAiring(n-1) + freindsPAiring(n-2)*(n-1);
}

int main(){
	cout<<freindsPAiring(4);
	return 0;
}*/


// ##################### 0-1 knapsac problem

int knapSack(int value[],int wt[],int n,int W){

	if(n==0 || wt==0){
		return 0;
	}
	if(wt[n-1]>W){
		return knapSack(value,wt,n-1,W);
	}

	return max(knapSack(value,wt,n-1,W-wt[n-1])+value[n-1],knapSack(value,wt,n-1,W));
}

int main(){
	int wt[] ={10,20,30};
	int value[]= {100,50,150};
	int W= 50;
	cout<<knapSack(value,wt,3,W)<<endl;
}