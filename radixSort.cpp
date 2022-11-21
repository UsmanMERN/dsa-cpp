#include<iostream>
using namespace std;

int getMax(int arr[],int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i] ;
        }
        
    }
    return max;
}
void countingSort(int arr[],int size,int div){
int output_array[size];
int count_array[10]={0};
// Initalize the count array from zero
for (int i = 0; i < size; i++)
{
    count_array[(arr[i]/div)%10]++;

}
// take the count of all elemnts in array 
for (int i = 0; i < 10; i++)
{
    count_array[i]+=count_array[i-1];
}
// commulate the all count array to get the postion of the elments 
// to be stored in the output array 
for (int i = size-1; i >=0; i--)
{
    output_array[count_array[(arr[i]/div)%10]-1]=arr[i];
    count_array[(arr[i]/div)%10]--;
}
for (int i = 0; i < size; i++)
{
    arr[i]=output_array[i];
}
}



void radixSort(int arr[],int size){
int m=getMax(arr,size);
for (int div = 1;  m/div>0; div*=10)
{
    countingSort(arr,size,div);
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
radixSort(myArr,size);

cout<<"array After sorting \n";
for (int j = 0; j < size; j++)
{
  cout<<myArr[j] <<" ";  
}



    return 0;
}
