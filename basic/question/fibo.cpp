#include<iostream>
using namespace std;
int fibo(int n){
    if(n<=1){
        return n;
    }
        int first = fibo(n-1);
        int last = fibo(n-2);
    return last + first;  
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}
