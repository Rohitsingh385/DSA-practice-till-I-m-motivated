#include<iostream>
using namespace std;

// ************************** SUM TILL N NATURAL NO. *****************

// ####################### BRUTE FORCE APPROACH  

//  ORDER OF N SOLUTIION


// int sumTillN(int n){

//     int ans = 0;
//     for(int counter=1;counter<=n;counter++){
//         ans+=counter;
//     }

//     return ans;
// }

// int main(){

//     cout<<sumTillN(5);



// return 0;
// }


// ##################### FORMULA APPROACH 

//   ORDER OF LOG 1 APPROACH 

// int sumTilln(int n){

//     return (n*(n+1)/2);
// }


// int main(){

//     cout<<sumTilln(5);

//     return 0;
// }



// ************************** MULTIPLICATION TABLE *****************

// ############ NOMAL APPROACH

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<11;i++){
//         cout<<n<<" * "<< i <<" = "<<n*i<<endl;
//     }
//     return 0;
// }


// ##################### RECURSIVE APROACH

// COMPLEXITY LOG OF 1

// void tablUsingRec(int n,int i){
//     if(i>10){
//         return;
//     }

//     cout<<n<<" * "<<i<<" = "<<n*i<<endl;

//     return tablUsingRec(n,i+1);
// }

// int main(){
    
//     int n;
//     cin>>n;

//     tablUsingRec(n,1);

//     return 0;
// }



