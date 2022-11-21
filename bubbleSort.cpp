#include<iostream>

using namespace std;


int main(){
int myArr[5]={3,23, 432,141,2344};
int round=0;
for (int i = 0; i < 5; i++)
{
    round++;
    for (int j = 0; j <( 5-i+1); j++)
    {
        if(myArr[j]>myArr[j+1])
        {
            int temp=myArr[j];
        myArr[j]=myArr[j+1];
        myArr[j+1]=temp;
        }
    }
    
}
cout<<"No: of Rounds "<<round<<endl;
for (int i = 0; i < 5; i++)
{
    cout<<myArr[i]<<"  -->";
}




    return 0;
}