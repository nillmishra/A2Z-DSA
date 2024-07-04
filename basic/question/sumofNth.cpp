#include<iostream>
using namespace std;    

int sumofNth(int n){
    if(n == 0){
        return 0;
    }
    return n + sumofNth(n-1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << sumofNth(n);
    return 0;
}