#include <bits/stdc++.h>
using namespace std;

void SortArray(int arr[], int size){
    sort(arr, arr + size);
}

int FindMissingNo(int arr[],int size){
   
    SortArray(arr, size);
    
    int missingno;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if((arr[i]+1) == arr[i+1]){
            continue;
        }
        else{
            missingno=arr[i]+1;
            break;
        }
    }
    
    return missingno;
}


int main(){
    int arr[10] = {4,6,10,8,7,5  };
    cout<<"program running";
    int size = 6;
    int output= FindMissingNo(arr,size);
    cout<<"the missiong number is "<<output<<endl;
}