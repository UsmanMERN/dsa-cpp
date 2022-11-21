#include<iostream>
using namespace std;
// merging the sorted array 
void merge(int arr[],int l,int m,int r){
    int i=l; // starting subarray foe left  subarray 
     int j=m+1; // starting subarray foe right  subarray
    int k=l; //starrting subindex for temporary array 
    int temp[5];

    while (i<=m && j<=r)
    {
        if (arr[i]<=arr[j])// arr[i] is smaller than the arr[j];
        {
            temp[k]=arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=arr[j];// arr[j] is greater than the arr[i];
            j++;
            k++;
        }
    }
    while (i<=m)
    {
        temp[k]=arr[i]; //copying all items from left side of the array  
        i++;
        k++;
    }
    while (j<=r)
    {
        temp[k]=arr[j];//copying all items from left side of the array 
        j++;
        k++;
    }
    for (int s = l; s <=r; s++)
    {
        arr[s]=temp[s];
    }
}


// merge sort  Sorting algoritm 
void mergeSort(int arr[],int l,int r){
if (l<r)
{
    int m=(l+r)/2;
mergeSort(arr,l,m);
mergeSort(arr,m+1,r);
merge(arr,l,m,r);
}

}


int main(){
//int myArr[5]={49,34,32,12,11};
 int myArr[5];
 cout<<"Enter the 5 vlaues in array \n";
 for (int i = 0; i < 5; i++)
 {
     cin>>myArr[i];
 }
 cout<<"Array Bfore Sorting "<<myArr<<"  \n";
for (int i = 0; i < 5; i++)
{
    cout<<myArr[i]<<"  --  ";
}
// merge sort function 
mergeSort(myArr,0,4);
// output after sorting the algorithm 
cout<<"Array after sorting \n";
for (int i = 0; i < 5; i++)
{
    cout<<myArr[i]<<"  --  ";
}
// cout<<"Array After Sorting "<<myArr<<"  \n";

    return 0;
}
