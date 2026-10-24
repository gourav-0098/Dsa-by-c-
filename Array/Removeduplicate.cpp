#include <bits/stdc++.h>
using namespace std;

int RemoveDuplicate(int arr[],int size){
     
     int min = -1000;
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
     for (int i = 0; i < size; i++)
     {
        cout<<arr[i]<<endl;
     }
     int output = size - count;
    return output;
}
int main(){
    int arr[10]={-2,-2,1,6,6,6,8,9,11};
    int size = 9;
    cout<<"runnungn progeam ..."<<endl;
    int output = RemoveDuplicate(arr,size);
    cout<<output<<endl;
}