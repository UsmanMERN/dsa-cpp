// Searching algorithm
// searching algo is designed for check or retrieve an elemt in any DS wheere it is stored 
// It has two types on the base of type of search 
// 1) sequential search ===> Linear search as this programm
// In this any array or list is traversed and every elemnt is checked 
// 2) Interval search example ===> Binary search 
// designed for search in sorted DATA (Array) and more efficient then the linear search it is repeatedly target the center of the search structure and divide it into space of  half  

#include<iostream>
#include<string>

using namespace std;

void linearSearch(int a[],int n){
int temp=-1;
for(int i=0;i<7;i++){
    if(a[i]==n){
        cout<<"The Elemnt is found at index of  "<<i+1<<"  \n";
    temp=0;
    }
}
if(temp==-1){
    cout<<"Could not found Please Enter the correct value \n";
    cout<<"Thanks ! \n";
}
}
int main(){
	cout<<"Enter the at lest 7 va;ues in array \n";
    int arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
// int arr[7]={7,89,9,32,40,6,5};
int num;
cout<<"Enter the number you wanna search \n";
do{
	cout<<"The array is \n";
for(int i=0;i<7;i++){
    cout<<" "<<arr[i]<<"  ";
}
cout<<"\n";
cin>>num;
linearSearch(arr,num);
}
while(num!=0);
    return 0;
}
