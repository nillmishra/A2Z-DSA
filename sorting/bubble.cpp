#include<bits/stdc++.h>
using namespace std;

int bubble_sort(int arr[], int n){ 
    //compare with its adjcent element
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n - i -1; j++){
            if(arr[j] > arr[j+1]){
            int a = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = a;
            }
        }

    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
