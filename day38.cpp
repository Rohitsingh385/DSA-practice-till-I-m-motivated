#include <bits/stdc++.h>
using namespace std;

//function overloading
/*
class nums{
   public:
   	void fun(){
   		cout<<"function with no argument..\n";
   	}

   	void fun(int x){
   		cout<<"function with int argument..\n";
   	}

   	void fun(double y){
   		cout<<"function with double argument..\n";
   	}
};

int main(){

	nums obj;
	obj.fun();
	obj.fun(4);
	obj.fun(4.7);

	return 0;

}*/

// operator overloading

/*
class Complex{
private:
	int real,imag;
public:
	Complex(int r,int i){
		real = r;
		imag = i;
	}

	Complex operator + (Complex const &obj){
		Complex res;
		res.imag = imag + obj.imag;
		res.real = real + obj.real;
		return res;
	}

	void display(){
		cout<<real<<" +i"<<imag<<endl;
	}
}

int main(){
	Complex c1(12,7), c2(6,7);
	Complex c3 = c1 + c2;
	c3.display();
	return 0;
}*/


// runtime polymorphism

class base{
	public:
		virtual void print(){
			cout<<"this is base class print function\n";
		}

		void display(){
			cout<<"this is base class display function\n";
		}
};

class derived: public base
{
	public:
		void print(){
			cout<<"this is derived class print function\n";
		}

		void display(){
		cout<<"this is base derived display function\n";
		}		
};

int main(){

	base *baseptr;
	derived d;
	baseptr = &d;
	baseptr -> print();
	baseptr -> display();
	return 0;
}