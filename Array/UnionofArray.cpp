#include <bits/stdc++.h>
using namespace std;

void SortArray(int arr[], int size){
    sort(arr, arr + size);
}
int UnionOfArray(int arr1[] , int arr2[] , int size1 , int size2,int arr[]){
//    SortArray(arr1,size1);
//    SortArray(arr2,size2);
   arr=arr1;
   for (int i = size1,j=0; i < size1+size2;j++, i++)
   {
    /* code */
     arr[i] = arr2[j];
   }
   
   int size= size1+size2;
   SortArray(arr,size);
   int count=0;
   int j=0;
   for (int i = 1; i <size ; i++)
   {
    /* code */
    if(arr[i]!=arr[j]){
        j++;
        arr[j]=arr[i];
        
    }
    else{
        count++;
    }
   }
   size = size - count;
   for (int i = 0; i < size; i++)
   {
    /* code */
    cout<<"->"<<arr[i]<<endl;
   }
   
   return size;
   
   
   
}

int main(){
    int arr1[20]={1,2,4,7};
    int size1 = 4;
    int size2 = 5;
    int arr2[20]={3,4,6,7,8};
    int arr[20];
    cout<<"program running"<<endl;
    int output = UnionOfArray(arr1,arr2,size1,size2,arr);
}