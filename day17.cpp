#include <iostream>
#include<algorithm>

#include <string>

using namespace std;

// ############################# CAPTIALIZE STRING

/*int main(){
	string n = "kgdjhwgeiyeiuyq";

	for(int i=0;i<n.length();i++){
		if(n[i]>= 'a' && n[i]<='z'){
			n[i] -= 32;
		}
	}

	cout<<n;
}*/

// ############################# LOWERIZE STRING

/*int main(){
	string n = "KJHDSADKGASGDW";

	for(int i=0;i<n.length();i++){
		if(n[i]>='A' && n[i]<= 'Z'){
			n[i] += 32;
		}
	}
	cout<<n;
}*/


// ############################# CAPTIALIZE STRING INBUILT FUNCTION


/*int main(){
	string n = "dkfkjhdfwf"; 

	transform(n.begin(), n.end(),n.begin(), ::toupper );
	cout<<n;
}*/


// ############################# LOWERIZE STRING INBUILT FUNCTION

/*int main(){
	string n = "KJHDAOIEDDM";

	transform(n.begin(),n.end(),n.begin(), ::tolower);
	cout<<n;
}
*/

// ############################# GREATEST NUMBER IN A STRING
/*
int main(){

	string n = "093749874843";

	sort(n.begin(),n.end(), greater<int>());
	cout<<n;
}
*/


// ############################# MAXIUMUM FREQUENCY IN A STRINGuw
/*
int main(){

	string n = "qgdgqjhwkjhkjqhwqqqdgg";

	int freq[26];

	for(int i=0;i<26;i++){
		freq[i]=0;
	}

	for(int i=0;i<n.size();i++){
		freq[n[i]-'a']++;
	}

	char ans = 'a';
	int max = 0;

	for(int i=0;i<26;i++){
		if(freq[i]>max){
			max= freq[i];
			ans = i+'a';
		}
	}

	cout<<max<< " "<<ans<<endl;


}
*/