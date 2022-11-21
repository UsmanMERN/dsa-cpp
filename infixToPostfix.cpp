#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isOperator(char c){
if (c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
{
    return true;
}
else
{
return false;
}
}
int precedence(char c){
    if (c=='^')
    {
        return 3;
    }
    else if (c=='*'||c=='/')
    {
        return 2;
    }
    else if (c=='-'||c=='+')
    {
        return 1;
    }
    else
    {
        return -1;
    }   
}
string infixToPostfix(stack<char> s,string infix)
{
    string postfix;
    for (int i = 0; i < infix.length(); i++)
    {
        if ((infix[i] >= 'a' && infix[i] <= 'z')||(infix[i] >= 'A' && infix[i] <= 'Z'))
        {
            postfix+=infix[i];
        }
        else if (infix[i]=='(')
        {
            s.push(infix[i]);
        }
        else if (infix[i]==')')
        {
            while ((s.top()!=')') && (!s.empty()))
            {
                char temp=s.top();
                postfix+=temp;
                s.pop();
            }
            if(s.top()='('){
            	s.pop();
			}
            
        }
        else if (isOperator(infix[i]))
        {
            if (s.empty())
            {
                s.push(infix[i]);
            }
            else
            {
                if (precedence(infix[i]) > s.top())
                {
                    s.push(infix[i]);
                }
                else if (precedence(infix[i]) == precedence(s.top()) && (infix[i]=='^'))
                {
                    s.push(infix[i]);
                }
                else
                {
                    while (!s.empty() && precedence(infix[i]) <= precedence(s.top()))
                    {
                        char temp=s.top();
                        postfix+=temp;
                        s.pop();
                    }
                    s.push(infix[i]);
                }
                           
            }
            
        }
    }
    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}


int main(){
string infix_Exp,postfix_exp;
cout<<"Enter the INFIX expression \n";
cin>>infix_Exp;
cout<<"INFIX expression \n";
cout<<infix_Exp;
cout<<endl;
stack <char> stack;
postfix_exp=infixToPostfix(stack,infix_Exp);
cout<<"\nconverted POSTFIX Expression\n"<<postfix_exp;



    return 0;
}
