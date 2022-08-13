#include <iostream>
#include<math.h>
#include <stack>

using namespace std;

// int prefixEvaluation(string s){

// 	stack<int> st;

// 	for (int i=s.length()-1;i>=0;i--){
// 		if(s[i]>='0' && s[i]<='9'){ 

// 			st.push(s[i]-'0');
// 		}
// 		else{
// 			int op1=st.top();
// 			st.pop();
// 			int op2=st.top();
// 			st.pop();

// 			switch(s[i]){
// 				case '+':
// 				st.push(op1+op2);
// 				break;
// 				case '-':
// 				st.push(op1-op2);
// 				break;
// 				case '*':
// 				st.push(op1*op2);
// 				break;
// 				case '/':
// 				st.push(op1/op2);
// 				break;
// 				case '^':
// 				st.push(op1^op2);
// 				break;
// 			}
// 		}
// 	}

// 	return st.top();

// }

// int main(){

// 	cout<<prefixEvaluation("-+7*45+20")<<endl;
// 	return 0;
// }    

    //############ prefix Evaluation ends


// int postfixEvaluation(string s){

// 	stack <int> st;
// 	for(int i=0;i<s.length();i++){
// 		if(s[i]>'0' && s[i]<'9'){
// 			st.push(s[i]-'0');
// 		}

// 		else{
// 			int op2=st.top();
// 			st.pop();
// 			int op1=st.top();
// 			st.pop();

// 			switch(s[i]){

// 				case '+':
// 				st.push(op1+op2);
// 				break;
// 				case '-':
// 				st.push(op1-op2);
// 				break;
// 				case '*':
// 				st.push(op1*op2);
// 				break;
// 				case '/':
// 				st.push(op1/op2);
// 				break;
// 				case '^':
// 				st.push(op1^op2);
// 			}
// 		}
// 	}
// 	return st.top();
// }


// int main(){
// 	cout<<postfixEvaluation("46+2/5*7+");
// 	return 0;
// } 


// ########## posfixEvalutaion end

int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='*' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string stringInfinxTopostfix(string s){
    stack<char> st;
    string res;

    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ){
            res+=i;
        }

        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(st.top())>prec(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}

int main(){
    cout<<stringInfinxTopostfix("(a-b/c)*(a/k-l)");
    return 0;
}