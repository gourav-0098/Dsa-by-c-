#include <bits/stdc++.h>
using namespace std;

// int ArraySize(int arr[]){
//     return sizeof(arr) / sizeof(arr[0]);
// }

int RemoveDuplicate(int arr[],int size){
     
     
     int j=0;
     int count=0;
     for (int i = 1; i < size; i++)
     {  
       if(arr[i]!=arr[j]){
        j++;
        arr[j]=arr[i];
        
       }
       else{
        count++;}
     }
    //  for (int i = 0; i < size; i++)
    //  {
    //     cout<<arr[i]<<endl;
    //  }
     int output = size - count;
    return output;
}

int Intersection(int arr1[],int arr2[],int size1,int size2,int arr[]){

    size1 = RemoveDuplicate(arr1 , size1);
    size2 = RemoveDuplicate(arr2,size2);
    int p=0;
    for(int i = 0; i < size1; i++)
    {
        /* code */
        for (int j = 0; j < size2; j++)
        {
            /* code */
            if(arr1[i] == arr2[j]){
             arr[p] = arr1[i];
             p++;
            }
        }
        
    }

    for (int i = 0; i < p; i++)
    {
        /* code */
        cout<<"->"<<arr[i]<<endl;
    }
    
    return 0;
}

int main(){
    int arr1[20]={1,2,4,5,5,5,5,8};
    int size1 = 8;
    int arr2[20]={2,4,5,6,7,9};
    int size2 = 6;
    int arr[40];
    int output = Intersection(arr1,arr2,size1,size2,arr);
}