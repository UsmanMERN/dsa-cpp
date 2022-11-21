#include<iostream>
using namespace std;

int main(){

int myArr[5]={34,21,14,32,6};
for (int i = 1; i < 5; i++)
{
    int temp=0,j=0;
    temp=myArr[i];
    j=i-1;
    while (j>=0 && myArr[j]>temp)
    {
        myArr[j+1]=myArr[j];
        j=j-1;
    }
    myArr[j+1]=temp;
}
for (int i = 0; i < 5; i++)
{
    cout<<myArr[i]<<"  -->";
}




    return 0;
}