#include<iostream>

using namespace std;

void swapArray(int i, int arr[], int n){
    if(i>= n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    swapArray(i+1, arr, n);
}

int main() {
    int arr[] = {6, 4, 8, 2, 9, 4, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Before swap
    cout << "Array before swap: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Swap elements
    swapArray(0, arr, n);

    // After swap
    cout << "Array after swap: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


// #include <iostream>
// using namespace std;

// // Function to reverse the elements of an array
// void swapArray(int arr[], int n) {
//     for (int i = 0; i < n / 2; ++i) {
//         swap(arr[i], arr[n - i - 1]);
//     }
// }

// int main(int argc, char const *argv[]) {
//     int arr[] = {6, 4, 8, 2, 9, 4, 7, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Before swap
//     cout << "Array before swap: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Swap elements
//     swapArray(arr, n);

//     // After swap
//     cout << "Array after swap: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
