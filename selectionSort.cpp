#include<iostream>
using namespace std;


int main(){
int arr[6]={23,43,12,354,654,21};
// int num;
// cin>>num;

for (int i = 0; i < 5; i++)
{
int min=i;
for (int j = i+1; j < 6; j++)
{
   if(arr[j]<arr[min]){
    min=j;
   }
}
if(min!=i){
   int temp=arr[min];
   arr[min]=arr[i];
   arr[i]=temp;
}
cout<<arr[i]<<" -->";
}




    return 0;
}