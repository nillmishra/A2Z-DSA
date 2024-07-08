#include<iostream>
using namespace std;

bool duplicate(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 4, 5, 3, 1, 4, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << duplicate(arr, n);
    return 0;
}
