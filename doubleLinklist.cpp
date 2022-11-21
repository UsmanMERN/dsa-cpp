#include<iostream>
using namespace std;

class Node{
    public:
    int key;
    int data;
    Node* prev;
    Node* next;

    Node(){
        key=0;
        data=0;
        prev=NULL;
        next=NULL;
    }
    Node(int k,int d){
        key=k;
        data=d;
    }
};

class doublyLinkedlist{
    public:
    Node* head;
    doublyLinkedlist(){
        head=NULL;
    }
    doublyLinkedlist(Node* n){
        head=n;
    }

    // 1. Check if the is exist or not 

    Node* checkIfNodeExist(int k){
        Node* temp=NULL;
        Node* ptr=head;

        while (ptr!=NULL)
        {
           if(ptr->key==k){
             temp=ptr;
           }
        ptr=ptr->next;
        }
        return temp;
    }

    // 2. Append a node in list add NOde at the end

    void appendNode(Node* n){ 
        if(checkIfNodeExist(n->key)!=NULL){
            cout<<"Node is already Exist with same key VAlue :"<<n->key<<"Append Node with Different Value \n";
        }
        else{
            if(head==NULL){
                head=n;
                cout<<"Node is apeended at the Head \n";
            }
            else{
                Node* ptr=head;
                while (ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=n;
                n->prev=ptr;
                cout<<"Node is appended \n";
                
            }
        }
    }

    // 3.Prepend a Node in List 
    void prependNode(Node* n){
        if(checkIfNodeExist(n->key)!=NULL){
            cout<<"Node is already Exist with same key VAlue :"<<n->key<<"Append Node with Different Value \n";
        }
        else{
            if(head==NULL){
                head=n;
                cout<<"Node is apeended at the Head \n";
            }
            else{
            head->prev=n;
            n->next=head;
            head=n;
            cout<<"Node is Prepended \n";
            }
        }
    }

    // 4. Insert a Node after a particular Node
    void insertNode(int k,Node* n){
        Node* ptr=checkIfNodeExist(k);
        if(ptr==NULL){
            cout<<"No Node Exist With this Key value \n";
        }else{
            if((n->key)!=k){
                cout<<"Node is already eexist with the same key value : "<<n->key<<"\n";
            }
            else{

                Node* nextNode=ptr->next;
                // Node insert at end
                if(nextNode==NULL){
                    ptr->next=n;
                    nextNode->prev=ptr;
                    cout<<"Node Inserted at the end \n";
                }else{
                    // Node inserted at the Between
                    n->next=nextNode;
                    nextNode->prev=n;
                    n->prev=ptr;
                    ptr->next=n;
                    cout<<"Node is inserted After "<<k<<" this key \n";

                }
            }
        }
    }

    // 5. Deleting a Node from list 

    void delNode(int k){
        Node* ptr=checkIfNodeExist(k);
        if(ptr==NULL){
            cout<<"Node is not exist with the same key value : "<<k<<" try with exact key \n";
        }
        else{
            if(head->key==k){
                head=head->next;
                cout<<"Node is Unlinked From the List \n";
            }
            else{
                Node* ptrNext=ptr->next;
                Node* ptrPrev=ptr->prev;
                if(ptrNext==NULL){
                    ptrPrev->next=NULL;
                    cout<<"Node is eleted at the end \n";
                }
                else{
                    ptrPrev->next=ptrNext;
                    ptrNext->prev=ptrPrev;
                    cout<<"Node is Deleted \n";
                }
            }
        }
    }

    // 6. update Node 
    void updateData(int k,int d){
        Node* ptr=checkIfNodeExist(k);
        if(ptr!=NULL){
            ptr->data=d;
            cout<<"The Data of Node is Successfully Updated : \n";
        }else{
            cout<<"Node is Not Exist with the same value : \n";
        }
    }
    // 7. Printing the List 
    void printingList(){
        if(head==NULL){
            cout<<"The is Doubly link list is not Exist : \n";
        }
        else{
            cout<<"The values Stored in List is :";
            Node* temp=head;
            while(temp!=NULL){
                cout<<"( "<<temp->key<<"  "<<temp->data<<" ) <----->";
                temp=temp->next;
            }
        }
    }
};


int main(){
 doublyLinkedlist d1;
int option;
int key1,k1,data1;

	do{
		cout<<"\n Select the option number what the operation due you want?   Press 0 for exit"<<endl;
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
			cout<<"Append Node Operation \n Enter the Key and data For append the Node"<<endl;
			cin>>key1;
			cin>>data1;
			n1->key=key1;
            n1->data=data1;	
            d1.appendNode(n1);
				break;
			case 2:
			cout<<"Prepend Operaton is called \n Enter the Key and Data For append the Node"<<endl;
			cin>>key1;
			cin>>data1;
			n1->key=key1;
            n1->data=data1;	
            d1.prependNode(n1);
				break;
			case 3:
			cout<<"Enter the existing Node key after which you wants to enter the Node \n";
            cin>>k1;
            cout<<"Enter the key & Data First \n";
            cin>>key1;
			cin>>data1;
			n1->key=key1;
            n1->data=data1;	
            d1.insertNode(k1,n1);
				break;
			case 4:
            cout<<"Delete Node By adding Node key operation -\n Enter the key value to the too be Deleted \n";
            cin>>key1;
            d1.delNode(key1);
				break;
			case 5:
			cout<<"Updation operation is called - \n Enter key and new value to be updated"<<endl;
			cin>>key1;
            cin>>data1;
            d1.updateData(key1,data1);
				break;
			case 6:
            d1.printingList(); 
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
