#include <bits/stdc++.h>
using namespace std;

int Leftrotate(int arr[], int size , int leftrotation){
      int a[10];
      for (int i = 0; i <leftrotation; i++)
      {
         a[i] = arr[i];

      }
      for (int i = 0; i < leftrotation; i++)
      {
       for (int j = 0; j <size; j++)
       {
         arr[j] = arr[j+1];
       }
       
      }
     
      for (int j=0,i = size - leftrotation; i < size ;j++, i++)
      {   
        arr[i]= a[j];
        cout<<a[j]<<endl;
      }
      

      for (int i = 0; i < size; i++)
      {
       cout<<"-> "<<arr[i]<<endl;
      }
      
      
      return 0;
      
}

int main(){

    int arr[10]={3,5,7,4,2};
    int size = 5;
    cout<<"program running";
    int leftrotation = 2;
    
    int output = Leftrotate(arr , size, leftrotation);
    return 0 ;
}