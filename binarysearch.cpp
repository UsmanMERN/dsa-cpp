// Binary Search 
//      the idae of binary search is to use the information that the array is sorted and is reduce the 
// time complexity to O(log n)
#include<iostream>
using namespace std;

int BinarySeach(int arr[],int LB,int UB,int x){
    // Here the index is compare if we find our elemnt then the loop is break
while (LB<=UB)
{
    // Finding the Mid using formla
    int mid=LB+(UB-LB)/2;
    // If the value at the mid equal to the value e inputed then it return the index of that value
    if(arr[mid]==x){
        return mid;
    }
    // if the value is greater then the mid value then it changes the lower Bond means
    //  the starting index From zero to the Mid and add + 1 in it value 
    else if(arr[mid]<x){
        LB=mid+1;
    }else{
        // Oppsite to the upper step
        UB=mid-1;
    
    }
}
return -1;
}

int main(){
int myArr[9];
int num,output;
cout<<"Enter the 10 Numbers in array in sorted Form \n";
for(int i=0;i<10;i++){
    cin>>myArr[i];
}
cout<<"\n";
cout<<"Search From this array Thanks!\n";
for(int i=0;i<10;i++){
    cout<<myArr[i]<<"  ||   ";
}
cout<<"\n";
cout<<"Enter the Number \n";
cin>>num;

output=BinarySeach(myArr,0,9,num);
if(output==-1){
    cout<<"Nothing is Found Chavly nai Maar Correct value input kr \n";
}else{
cout<<"value is found at the Position of : "<<output+1<<"  \n";
}




    return 0;
}
