#include <bits\stdc++.h>
#include <iostream>
#include <string>
using namespace std;

// REVERSE STRING USING RECURSION
/*
void revers(string s){

	if(s.length()==0){
		return;
	}

	string ros = s.substr(1);

	revers(ros);
	cout<<s[0]; 
	
} 
int main(){

	revers("vinod");

	return 0;
}*/

//  REPLACE PI WITH 3.14 IN STRING
/*
void replacePi(string s){

	if(s.length()==0){
		return;
	}
	if(s[0]=='p' && s[1]=='i'){
		cout<<"3.14";
		replacePi(s.substr(2));
	}
	else{
		cout<<s[0];
		replacePi(s.substr(1));
	}
}


int main(){

	replacePi("pppippzajhfspiasgpi");

}*/


// TOWER OF HANOI USING RECURSION
/*
void towerOfhanoi(int n,char src,char dest,char helper){
    
    if(n==0){
    	return;
    }
	towerOfhanoi(n-1,src,helper,dest);
	cout<<"Move from "<<src<<" to "<<dest<<endl;
	towerOfhanoi(n-1,helper,dest,src);

}

int main(){

	towerOfhanoi(3,'A','C','B');

}*/


// REMOVE ALL DUPLICATES FROM THE STRING
/*
string removeDup(string s){
	if(s.length()==0){
		return "";
	}

	char ch = s[0];

	string ans = removeDup(s.substr(1));

	if(ch==ans[0]){
		return ans;
	}
	return (ch+ans);
}

int main(){
	cout<<removeDup("aaaaaabbcjhshh");
	return 0;
}*/


// MOVE ALL X TO END USING RECURSION
/*
string moveallX(string s){
	if(s.length()==0){
		return "";
	}

	char ch = s[0];
	string ans = moveallX(s.substr(1));

	if(ch=='x'){
		return (ans+ch);
	}
	return (ch+ans);
}

int main(){

	cout<<moveallX("axdscxjhgaxx");
}*/

// INT SUBSTRING USING RECURSION

void subsseq(string s,string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}

	char th=s[0];
	string ros = s.substr(1);

	subsseq(ros,ans);
	subsseq(ros,ans+th);
}
int main(){
	subsseq("ABC","");
	cout<<endl;
}


// GENERATE SUBSTRING WITH ASCII  NUMBER
/*
void subse2(string s,string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}

	char ch = s[0];
	int code = ch;
	string ros = s.substr(1);

	subse2(ros,ans);
	subse2(ros,ans+ch);
	subse2(ros,ans+ to_string(code));
}

int main(){
	subse2("AB","");

	return 0;

}*/