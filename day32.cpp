#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
/*
int main(){

	vector<int>v;
	//insert element in vector

	v.push_back(1);
	v.push_back(2);

	// print vectors
	// thorugh size
	cout<<"thorough size"<<endl;

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}

	// through iterators

	cout<<"thorough iterators"<<endl;

	vector<int>::iterator it;

	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<endl;
	}

	cout<<"thorough auto keyword"<<endl;

	for(auto element:v){
		cout<<element<<endl;
	}

//  remove vector from end

	v.pop_back();

	cout<<"swapping v and v2"<<endl;

	vector<int>v2(3,50);
	// 50 50 50

	swap(v,v2);

	for(auto element:v){
		cout<<element<<endl;
	}

	for(auto element:v2){
		cout<<element<<endl;
	}



}*/


// ################### std pair
/*
int main(){

	pair<int,char>p;
	p.first =3;
	p.second = 'f';

	return 0;
}*/


// pair questions

bool myCompar(pair<int,int>p1,pair<int,int>p2){
	return p1.first<p2.first;
}

int main(){

	int arr[]= {10,16,7,14,5,3,12,9};
	vector <pair<int,int>> v;	

	for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){

		v.push_back(make_pair(arr[i],i));

	}
	
	sort(v.begin(),v.end(),myCompar);

	for(int i=0;i<v.size();i++){
		arr[v[i].second]=i;
	}
	for(int i=0;i<v.size();i++){
		cout<<arr[i]<<endl;
	}
}