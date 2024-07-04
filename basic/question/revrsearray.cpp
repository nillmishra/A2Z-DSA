#include <bits/stdc++.h>
using namespace std;

int reverseArray(int arr[], int n, int num){
    int i = 0;
    int j = n-1;
    int count = 1;
    while(i<j && count <= num){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        //swap(i, j);
        i++;
        j--;
        count++;
    }
}

int main(int argc, char const *argv[])
{
    int num;
    cin >> num;

    int arr[] = {2,5,3,83,94,58,3,65,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, n, num);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    
    }
    return 0;
}
