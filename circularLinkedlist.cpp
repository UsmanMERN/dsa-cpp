#include<iostream>
#include<string>

using namespace std;

class Node{
    public:
     Node* next;
     int key;
     int data;
    //  Node* last;
     Node(){
        key=0;
        data=0;
        next=NULL;

     }
     Node(int k,int d){
        k=key;
        d=data;
        next=NULL;
     }

};

class circularList{
    public:
        Node* head;
    
    circularList(){
        head=NULL;
    }
    circularList(Node* n){
        head=n;
    }
    // 1. Check if Node exist Using Key Values
    Node* nodeExist(int k){
        Node* temp=NULL;
        Node* ptr=head;
        if (ptr==NULL)
        {
        return temp;
        }
        else 
        do{
         if(ptr->key==k){
            temp=ptr;
         }
         ptr=ptr->next;
        }while (ptr!=head);
        return temp;
    }
    // 2. Append Node attach node at end 
    void appenNode(Node* new_NOde){
        if(nodeExist(new_NOde->key)!=NULL)
        {
            cout<<"This Node with same key value already Exist"<<new_NOde->key<<"Append Another Node with Different Value \n";
        }
        else
        {
            if (head==NULL)
            {
                head=new_NOde;
                new_NOde->next=head;
                cout<<"Node Appended at the satrt of the List\n";
            }
            else
            {
                Node* ptr=head;
                while (ptr->next!=head)
                {
                 ptr=ptr->next;
                }
                ptr->next=new_NOde;
                new_NOde->next=head;
                cout<<"Node Appended \n";
                
            }
            
        }
    }
    // 3. Prepend Node ==>Attach Node at Start 
    void prependNode(Node* n){
         if(nodeExist(n->key)!=NULL)
        {
            cout<<"This Node with same key value already Exist"<<n->key<<"Append Another Node with Different Value \n";
        }
        else
        {
          if (head==NULL)
            {
                head=n;
                n->next=head;
                cout<<"Node Appended at the satrt of the List\n";
            }
           else
           {
             Node* ptr=head;
            while (ptr->next!=head)
            {
               ptr=ptr->next;
            }
            ptr->next=n;
            n->next=head;
            head=n;
            cout<<"Node is appended at the start of the List \n";
           }
           
            
        }
    }
    // 4. Insert a Node at a Perticular Place 

    void insertedNode(int k,Node* n){
        Node* ptr=nodeExist(k);
        if(ptr==NULL){
            cout<<"No Node Exist with the same Key Value \n";
        }else
        if(nodeExist(n->key)!=NULL)
        {
            cout<<"This Node with same key value already Exist"<<n->key<<"Append Another Node with Different Value \n";
        }
    else{
      if(ptr->next==head){
         n->next=head;
         head->next=n;
         cout<<"Node inserted at the End \n";
      }
      else{
        n->next=ptr->next;
        ptr->next=n;
        cout<<"node Inserted \n";
      }
    }
    }
    // 5. Delete Node by Key 
    void deleteNode(int k){
      Node* ptr=nodeExist(k);
        if(head==NULL){
            cout<<"There is no Key of the same value is Exist \n";
        }
        else
        if(ptr==head){
         if (ptr->next=head)
         {
            head=NULL;
            cout<<"Head Node is Unlinked Successfully ....List is Empty\n";
         }
         else{
            Node* ptr1=head;
            while (ptr1->next!=head)
            {
               ptr1=ptr1->next;
            }
            ptr1->next=head->next;
            head=head->next;
            cout<<"Head Node is Unlinked Successfully .... OO yeah \n";
         }
        }
            else{
                Node* temp=NULL;
                Node* prevptr=head;
                Node* currentptr=head->next;
                while(currentptr!=NULL){
                    if (currentptr->key==k)
                    {
                    temp=currentptr;
                    currentptr=NULL;
                    }
                    else{
                        prevptr=prevptr->next;
                        currentptr=currentptr->next;
                    }
                }
                if(temp!=NULL){
                    prevptr->next=temp->next;
                    cout<<"Node Linked with the Keys Value : "<<k<<endl;
                }
                else{
                    cout<<"Node Doesn't exist with the key value :"<<k<<"\n";
                }

            }
            
        }
        //6. Update the node 
        void updateNode(int k, int d){
            Node* ptr=nodeExist(k);
            if(ptr!=NULL){
                ptr->data=d;
                cout<<"Node updated Successfully \n";
            }
            else{
                cout<<"Node Does Not Exist with value \n"<<k<<"\n";
            }
        } 

        // 7. Printing 

        void printingList(){
            if(head==NULL){
                cout<<"No Nodes is Singly Linked List \n";
            }
            else{
                cout<<"\n singly Link list Values : \n";
                Node* temp=head;
                do{
                	cout<<"key :"<<temp->key<<"data :"<<temp->data<<"next:"<<temp->next<<"---> \n";
                	temp=temp->next;
				}while(temp!=head);
        }
        }
};


int main(){
circularList c1;
int option;
int key1,k1,data1;

	do{
		cout<<"Select the option number what the operation due you want?   Press 0 for exit"<<endl;
		cout<<"1. appendNode"<<endl;
		cout<<"2. Preppend Node"<<endl;
		cout<<"3. insert After Nodes"<<endl;
		cout<<"4. Delete Node By Key"<<endl;
		cout<<"5. Update Node By Keys"<<endl;
		cout<<"6. Dispaly"<<endl;
		cout<<"7. Clear"<<endl;
		cin>>option;
        Node* n1=new Node(); 
		switch(option){
			case 0:
				break;
			case 1:
			cout<<"Append Node Operation \n Enter the Key and Data For append the Node"<<endl;
			cin>>key1;
			cin>>data1;
			n1->key=key1;
            n1->data=data1;	
            c1.appenNode(n1);
				break;
			case 2:
			cout<<"Prepend Operaton is called \n Enter the Key and Data For append the Node"<<endl;
			cin>>key1;
			cin>>data1;
			n1->key=key1;
            n1->data=data1;	
            c1.prependNode(n1);
				break;
			case 3:
			cout<<"Enter the existing Node key after which you wants to enter the Node \n";
            cin>>k1;
            cout<<"Enter the key & Data First \n";
            cin>>key1;
			cin>>data1;
			n1->key=key1;
            n1->data=data1;	
            c1.insertedNode(k1,n1);
				break;
			case 4:
            cout<<"Delete Node By adding Node key operation -\n Enter the key value to the too be Deleted \n";
            cin>>key1;
            c1.deleteNode(key1);
				break;
			case 5:
			cout<<"Updation operation is called - \n Enter key and new value to be updated"<<endl;
			cin>>key1;
            cin>>data1;
            c1.updateNode(key1,data1);
				break;
			case 6:
            c1.printingList(); 
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
