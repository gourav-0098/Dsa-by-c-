#include <bits/stdc++.h>
using namespace std;

int No_of_Ones(int arr[], int size)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==1){
            flag++;
        }
    }
    return flag;
}

int main()
{
    int arr[20] = {1, 0, 0, 0, 0, 1, 1, 1, 1,0, 0, 0};
    cout << "Program running" << endl;
    int size = 12;
    int output = No_of_Ones(arr, size);
    cout<<"the no of ones are "<<output<<endl;
}