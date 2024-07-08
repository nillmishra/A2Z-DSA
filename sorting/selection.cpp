#include<bits/stdc++.h>
using namespace std;

int selection_sort(int arr[], int n){ 
    //select minimum element place it in the first place
    int min;
    for(int i = 0; i < n-1; i++){
        min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int a = arr[min];
        arr[min] = arr[i];
        arr[i] = a;
    }


}
int main(int argc, char const *argv[])
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
