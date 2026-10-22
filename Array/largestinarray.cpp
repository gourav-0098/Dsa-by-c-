#include <bits/stdc++.h>
using namespace std;

int largestno(int arr[],int size){
    int largest=0;
   for (int i = 0 ; i<size ; i++){
    if(arr[i]>largest){
        largest = arr[i];
    }

   }
   return largest;
}

int secondlargestno(int arr[],int size){
    int largest=0;
    int secondlargest=0;
   for (int i = 0 ; i<size ; i++){
    if(arr[i]>largest ){
        secondlargest=largest;
        largest = arr[i];
    }
    else if(arr[i] > secondlargest && arr[i] < largest){
        secondlargest = arr[i];
    }

   }
   if(secondlargest==0){
    return -1;
   }
   return secondlargest;
}


int main(){

    int arr[10]={3,4,27,4,27,6};
    int size = 6;
    cout<<"Running program..."<<endl;
    int largest = secondlargestno(arr,size);
    if(largest == -1){
        cout<<"no output"<<endl;
    }
    cout<<"the 2nd largest no is "<<largest<<endl;
    return 0;

}