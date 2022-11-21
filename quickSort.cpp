#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot=arr[e];
    int pIndex=s;
    for (int i = s; i < e; i++)
    {
        if (arr[i]<pivot)
        {
            int temp=arr[i];
            arr[i]=arr[pIndex];
            arr[pIndex]=temp;
            pIndex++;
        }
    }
    int temp=arr[e];
    arr[e]=arr[pIndex];
    arr[pIndex]=temp;
    return pIndex;
}

void quickSort(int arr[],int s,int e){
    if (s<e)
    {
        int p=partition(arr,s,e);
        quickSort(arr,s,(p-1));
        quickSort(arr,(p+1),e);
    }
    
}

int main(){
int size=0;
cout<<"Enter the Size of array \n";
cin>>size;
int myArr[size];
cout<<"Enter the value"<<size <<"in array \n";
for (int i = 0; i < size; i++)
{
    cin>>myArr[i];
}
cout<<endl;
cout<<"Array before sorting "<<endl;
for (int i = 0; i < size; i++)
{
    cout<<myArr[i]<<"  ";
}
cout<<endl;
quickSort(myArr,0,(size-1)); //quick sort function called 

cout<<"Array After sorting "<<endl;
for (int i = 0; i < size; i++)
{
    cout<<myArr[i]<<"  ";
}

    return 0;
}
