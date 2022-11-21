#include<iostream>
using namespace std;


void coutingSort(int input_arr[],int s, int r)
{
int output_array[s];
int count_array[r];
// Initalize the count array from zero
for (int i = 0; i < r; i++)
{
    count_array[i]=0;
}
// take the count of all elemnts in array 
for (int i = 0; i < s; i++)
{
    ++count_array[input_arr[i]];
}
// commulate the all count array to get the postion of the elments 
// to be stored in the output array 
for (int i = 1; i < r; i++)
{
    count_array[i]=count_array[i]+count_array[i-1];
}
// Placing the ipnut array into the output array in their correct place 
// such that the resu;llt is stored in ASC order
for (int i = 0; i < s; i++)
{
    output_array[--count_array[input_arr[i]]]=input_arr[i];
}
for (int i = 0; i < s; i++)
{
    input_arr[i]=output_array[i];
}
}
int main(){

int size= 0;
int range=10;
cout<<"Enter the size of array \n";
cin>>size;
int myArr[size];
cout<<"Enter the "<<size<<" intergers in your array in range of 0-9\n";
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
coutingSort(myArr,size,range);

cout<<"array After sorting \n";
for (int j = 0; j < size; j++)
{
  cout<<myArr[j] <<" ";  
}
  return 0;
}