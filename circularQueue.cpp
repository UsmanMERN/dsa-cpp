#include<iostream>
#include<string>
using namespace std;

class CircularQueue{
	private:
		int arr[5];
		int front;
		int rare;
        int itemCount=0;
	
	public:
	CircularQueue(){
		front=-1;
		rare=-1;
		for(int i=0;i<5;i++){
			arr[i]=0;
		}
	}
		bool isEmpty(){
			if(front==-1 && rare==-1)
			return true;
			else
			return false;
		}
		bool isFull(){
			if((rare+1)%5==front)
			return true;
			else
			return false;
		}
		void enQueue(int val){
			if(isFull()){
				cout<<"Queue is Full"<<endl;
				return;
			}else if(isEmpty()){
				rare=0;
				front=0;
			arr[rare]=val;
            itemCount++;
			}
			else{
				rare=(rare+1)%5;
				arr[rare]=val;
			itemCount++;
            }
		}
		int Dequeue(){
			int x;
			if(isEmpty()){
				cout<<"Queue is Already Empty "<<endl;
			return 0;
			}
			else if(front==rare){
				x=arr[front];
				arr[front]=0;
				rare=-1;
				front=-1;
                itemCount--;
				return x;
			}
			else{
				x=arr[front];
				arr[front]=0;
				front=(front+1)%5;
                itemCount--;
				return x;
			}
		}
	
		int count(){
			return(itemCount);
		}
		void display(){
			cout<<"All values in the queue ----"<<endl;
			for(int i=0;i<5;i++){
				cout<<arr[i]<<endl<<" " ;
			}
		}
};


int main(){
	CircularQueue q1;
int option,value;	
		do{
		cout<<"Select the option number what the operation due you want?   Press 0 for exit"<<endl;
		cout<<"1. Enqueue"<<endl;
		cout<<"2. Dequeue"<<endl;
		cout<<"3. isFull"<<endl;
		cout<<"4. isEmpty"<<endl;
		cout<<"5. count"<<endl;
		cout<<"6. Dispaly"<<endl;
		cout<<"7. Clear"<<endl;
		cin>>option;
		switch(option){
			case 0:
				break;
			case 1:
			cout<<"Enqueque operation \n Enter the Vlue ypu want to add in Queueu"<<endl;
			cin>>value;
			q1.enQueue(value);	
				break;
			case 2:
			cout<<"Deequeue Operation is called \n Value is dequeueed "<<endl;
			q1.Dequeue();
				break;
			case 3:
			if(q1.isEmpty()){
				cout<<"Queue is Empty"<<endl;
			}else{
				cout<<"queue is not Empty";
			}

				break;
			case 4:
			if(q1.isFull()){
				cout<<"Queue is Full"<<endl;
			}
			else{
				cout<<"Queue is not full"<<endl;
			}

				break;
			case 5:
			cout<<"The number of  Items in the is "<<q1.count()<<endl;
				break;
			case 6:
			cout<<"Displaying the DAta stored in  queue "<<endl;
			q1.display();
					break;
			case 7:
			system("cls");
			break;
			default:
				cout<<"Enter the correct value"<<endl;
		}
	}
	while(option!=0);
	
	
	




	return 0;
}
