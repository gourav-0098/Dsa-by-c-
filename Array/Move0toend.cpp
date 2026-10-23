#include <bits/stdc++.h>
using namespace std;

void Move0toend(int arr[], int size) {
    int j = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[10] = {0, 0, 1, 3, 0, -2};
    Move0toend(arr, 6);
}