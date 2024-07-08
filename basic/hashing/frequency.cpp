#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void frequencyCount(vector<int>& arr, int N, int P) {
    unordered_map<int, int> hash;
    
    // Count frequencies of numbers in arr
    for (int num : arr) {
        hash[num]++;
    }
    
    // Update arr to store frequency counts
    for (int i = 0; i < N; i++) {
        arr[i] = hash[i + 1]; // Store frequency count of (i+1)
    }
}

int main() {
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;
    
    vector<int> arr(N);
    cout << "Enter " << N << " integers: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    frequencyCount(arr, N, N);
    
    // Output the modified arr with frequency counts
    cout << "Frequency counts in the array:" << endl;
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
