#include<iostream>

using namespace std;


int main(){
int myArr[5]={3,23, 432,141,2344};
int round=0;
for (int i = 0; i < 5; i++)
{
    round++;
    bool flag=false;
    for (int j = 0; j <( 5-i+1); j++)
    {
        if(myArr[j]>myArr[j+1])
        {
            flag=true;
            int temp=myArr[j];
        myArr[j]=myArr[j+1];
        myArr[j+1]=temp;
        }
    }
    if(flag==false){
        break;
    }
}
cout<<"NO: of rounds "<<round<<endl;
for (int i = 0; i < 5; i++)
{
    cout<<myArr[i]<<"  -->";
}




    return 0;
}