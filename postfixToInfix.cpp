#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

bool isOperator(char c){
    if (c=='+'||c=='-'||c=='/'||c=='*'||c=='^')
    {
        return true;
    }
    else
    {
        
        return false;
    }
}
bool isOperand(char c){
    if ((c >='a' && c <= 'z') || c >= 'A' && c <= 'Z')
    {
       return true;
    }
    else
    {
        return false;
    }
    
}
string postfixToInfix(string postfix){
stack <string> s;
for (int i = 0; i < postfix.length(); i++)
{
    if (isOperand(postfix[i]))
    {
        string op(1,postfix[i]);
        s.push(op);
    }
    else
    {
       if (isOperator(postfix[i]))
       {
         string op1=s.top();
        s.pop();
        string op2=s.top();
        s.pop();
        string exp="("+op2+" "+postfix[i]+ " "+op1 +")";
        s.push(exp);
       }
       
    }   
}
return s.top();
}

int main(){
string postfix,infix;
cout<<"Enter the POSTFIX Expression\n";
cin>>postfix;
infix=postfixToInfix(postfix);
cout<<"\nINFIX Expression \n"<<infix;


    return 0;
}

