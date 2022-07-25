#include <iostream>
using namespace std;

class Student{

	string name;
public:

	int age;
	bool gender;

	void setname(string s){


		name = s;
	}

	void getName(){
		cout<<name<<endl;
	}

	Student(){
		cout<<"default constructor"<<endl;
	}

	Student(string s,int a,int g){
		cout<<"parametrized constructor"<<endl;
		name = s;
		age = a;
		gender = g;
	}

	Student( Student &a){
		cout<<"copy constructor"<<endl;
		name = a.name;
		age = a.age;
		gender = a.gender;
	}

     ~Student(){
     	cout<<"destructor called"<<endl;
     }

		void printInfo(){

		cout<<"name : ";
		cout<<name<<endl;
		cout<<"age : ";
		cout<<age<<endl;
		cout<<"gender : ";
		cout<<gender<<endl;

	}

	bool operator == (Student &a){
		if(name==a.name && age==a.age && gender== a.gender){
			return true;
		}
		return false;	
	} 

};

int main(){

	/*Student arr[3];

	for(int i=0;i<3;i++){
		cout<<"Enter name : ";
		cin>>arr[i].name;
		cout<<"Enter age : ";
		cin>>arr[i].age;
		cout<<"Enter gender : ";
		cin>>arr[i].gender;
	}

	for(int i=0;i<3;i++){
		arr[i].printInfo();
	}*/

	Student a("rohit",20,0);

	Student b;
	Student c= a;

	if(c==a){
		cout<<"same"<<endl;
	}else{
		cout<<"not same"<<endl;
	}




}