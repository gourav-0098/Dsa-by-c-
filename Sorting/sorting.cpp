#include <bits/stdc++.h>
using namespace std;

    void selectionsort(int arr[],int n){
        int temp;
        for(int i = 0 ; i<n ; i++){
          for(int j =  i+1; j<n;j++){
            if (arr[j] < arr[i]){
                temp = arr[j];
                arr[j]= arr[i];
                arr[i] = temp;

            }
               
          }
        }
        
    }

int main(){
    int arr[10]={7,3,6,1,8,4};
    int n = 6;
    selectionsort(arr, n);
    for(int k = 0 ; k< n ; k++){
        cout<<arr[k];
    }
    return 0;
}