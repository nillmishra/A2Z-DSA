#include<iostream>
using namespace std;

bool primecheck(int n){
    if(n == 1){
        return true;
    }
    for(int i = 2; i < n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << primecheck(n);
    return 0;
}

