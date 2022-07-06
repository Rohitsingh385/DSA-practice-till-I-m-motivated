#include <iostream>

using namespace std;


// ################################################ BAISCS OPERATIONS BITS

// ##################################### GET BIT
/*
int getBit(int n,int pos){

	return ((n & (1<<pos))!=0);
}
int main(){


cout<<getBit(5,2);


}*/


// ##################################### SET BIT

/*int setBit(int n,int pos){

	return (n| (1<<pos));
}

int main(){

	 cout<<setBit(5,1);

}*/

// #####################################  CLEAR BIT
/*
int clearBit(int n,int pos){


	int mask = ~(1<<pos);

	return (n & mask);

}

int main(){
	cout<<clearBit(5,2);
}*/



// #####################################  UPDATE BIT


/*int updateBIt(int n,int pos,int value){

	int mask = ~(1<<pos);

	n = (n&mask);

	return (n | (value<<pos));

}
int main(){

	cout<<updateBIt(5,1,1);

}*/