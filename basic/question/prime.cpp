#include<iostream>
using namespace std;

void printPrimes(int n) {
    int count = 0;
    int num = 2;
    while (count < n) {
        bool isPrime = true;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " ";
            count++;
        }
        num++;
    }
}


int main() {
    int n;
    cin >> n;
    printPrimes(n);
    return 0;
}