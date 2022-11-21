#include<iostream>
#include<string>

using namespace std;

class stack{
	private:
		int top;
		int arr[5];
		public:
			stack(){
				top=-1;
				for(int i=0;i<5;i++){
					arr[i]=0;
				}
			}
			bool isEmpty(){
			if(top==-1)
				return true;
			else
				return false;
			
			}
			bool isFull(){
				if(top==4){
					return true;
				} 
				else
				return false;
			}
			void push(int val){
				if(isFull()){
					cout<<"The satck is overflowed"<<endl;
				}
				else{
					top++;
					arr[top]=val;
				}
			}
			int pop(){
				if(isEmpty()){
					cout<<"stack underflow"<<endl;
					return 0;
				}
				else{
					int popValue=arr[top];
					arr[top]=0;
					top--;
					return popValue;
				}
			}
			int count(){
				return(top + 1);
			}
			int peek(int pos){
				if(isEmpty()){
					cout<<"Stack is underflow";
					return 0;
				}
				else{
 					return arr[pos];
				}
			}
			void change(int pos,int val){
			arr[pos]=val;
			cout<<"value is chnaged at position "<<pos<<endl;
			}
			void display(){
				cout<<"All Value of stack is "<<endl;
				for(int i=0;i<5;i++){
					cout<<arr[i]<<endl;
				}
			}
			
};



int main(){
//	stack()
	stack s1;
	int option,position,value;
	do{
		cout<<"Select the option number what the operation due you want?   Press 0 for exit"<<endl;
		cout<<"1. push"<<endl;
		cout<<"2. pop"<<endl;
		cout<<"3. isEmpty"<<endl;
		cout<<"4. isFull"<<endl;
		cout<<"5. peeek"<<endl;
		cout<<"6. count"<<endl;
		cout<<"7. change"<<endl;
		cout<<"8. display"<<endl;
		cout<<"9. clear Screen"<<endl;
		cin>>option;
		switch(option){
			case 0:
				break;
			case 1:
				cout<<"Enter the valuer to push in stack"<<endl;
				cin>>value;
				s1.push(value);
				break;
				case 2:
					cout<<"pop function is called"<<s1.pop()<<endl;
					break;
					case 3:
						if(s1.isEmpty()){
							cout<<"Satck is empty"<<endl;
							
						}
						else{
							cout<<"Stack is not empty"<<endl;
						}
						break;
						case 4:
						if(s1.isFull()){
							cout<<"Satck is Full"<<endl;
							
						}
						else{
							cout<<"Stack is not Full"<<endl;
						}
						break;
					case 5:
						cout<<"Enter the positon you want to peek "<<endl;
						cin>>position;
						cout<<"Peek function is called ---value at the position"<<position<<" is "<<s1.peek(position)<<endl;
						break;
						case 6:
							cout<<"cout Funtion is called The Items in the satck are"<<s1.count()<<endl;
							break;
							case 7:
								cout<<"Enter the position you want to change"<<endl;
								cin>>position;
								cout<<"Enter the Item you wants to change"<<endl;
								cin>>value;
								s1.change(position,value);
								break;
							case 8:
								cout<<"The Satck is contains"<<endl;
								s1.display();
								cout<<endl;
									break;
		case 9:
			system("cls");
			break;
			default:
				cout<<"Enter the correct value"<<endl;
		}
	}
	while(option!=0);
	
	
	
	
	return 0;
}
