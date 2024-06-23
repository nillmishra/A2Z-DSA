#include<iostream>
using namespace std;

int reverse(int n){
    int sum = 0;
    int lastdigit;

    while(n > 0){
        lastdigit= n%10;
        sum = sum* 10 +  lastdigit;
        n = n/10;
    }
    return sum;
    
}

int main(){
    int n = 6537;
    int sol = reverse(n);
    cout << sol;
    return 0;
}