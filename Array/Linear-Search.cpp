#include <bits/stdc++.h>
using namespace std;

// In this program we had a array and we have to find the target one number that is given as target and return the index of the target 

int Search(int target,int arr[]){
    int size=6;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==target){
            return i;
        }
    }   
    return -1;
}

int main(){
    cout<<"what do u want to search";
    int target;
    cin>>target;
    cout<<endl;
    int arr[10]= {1,4,76,6,4,2};
    cout<<"your query is processing "<<endl;
    int output = Search(target , arr);
    cout<<"the element is on  "<< output<<"index"<<endl;

    return 0;
}