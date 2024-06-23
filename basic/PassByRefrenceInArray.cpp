#include <iostream>
using namespace std;

void doSOmething(int arr[], int n){
    arr[0] += 100;
    cout << arr[0] <<endl;
}

int main(int argc, char const *argv[])
{
    int n = 5;
    int arr[n];

    for(int i =0; i< 5; i++){
        cin >> arr[0];
    }

    doSOmething(arr, n);
    cout << arr[0] <<endl;

    return 0;
}
