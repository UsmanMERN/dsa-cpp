#include<iostream>
using namespace std;

void shellSort(int arr[],int n){
for (int gap = n/2; gap > 0; gap/=2)
{
    for (int j = gap; j < n; j+=1)
    {
        int temp=arr[j];
        int i=0;
        for ( i = j; (i >= gap ) && (arr[i-gap]>temp); i-=gap)
        {
            arr[i]=arr[i-gap];
        }
        arr[i]=temp;
    }
    
}

}



int main(){
int size= 0;
int range=10;
cout<<"Enter the size of array \n";
cin>>size;
int myArr[size];
cout<<"Enter the "<<size<<" intergers in your array in range of 0-999\n";
for (int i = 0; i < size; i++)
{
  cin>>myArr[i];  
}
cout<<endl;
cout<<"array before sorting \n";
for (int j = 0; j < size; j++)
{
  cout<<myArr[j] <<" ";  
}
cout<<endl;
shellSort(myArr,size);//calling shell sort 
cout<<"\n Shell sort \n";
cout<<"array After sorting \n";
for (int j = 0; j < size; j++)
{
  cout<<myArr[j] <<" ";  
}
    return 0;
}