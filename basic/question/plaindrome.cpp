#include<iostream>
using namespace std;

bool plaindrome(int n){
    int num = n;
    int sum = 0;
    while(n!= 0){
        int ls = n%10;
        sum = sum*10 + ls;
        n = n/10;
    }
    if(num == sum){
        return true;
    }
    return false;

}

int main(int argc, char const *argv[])
{
    int n = 14531;
    cout << plaindrome(n);
    return 0;
}
